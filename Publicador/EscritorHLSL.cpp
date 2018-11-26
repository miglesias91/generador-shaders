#include <Publicador/EscritorHLSL.h>

// stl
#include <algorithm>
#include <iostream>

// Astyle
#include <astyle_main.h>

// utils
#include <UtilsLib/Include/StringUtilsFunctions.h>

using namespace GeneradorShader::Publicador;

void  STDCALL ASErrorHandler(int errorNumber, const char* errorMessage);
char* STDCALL ASMemoryAlloc(unsigned long memoryNeeded);

std::vector<std::string> EscritorHLSL::variables_declaradas_en_codigo_main;

std::string EscritorHLSL::salto_de_linea = "\n";

std::string EscritorHLSL::doble_salto_de_linea = "\n\n";

std::string EscritorHLSL::separacion_encabezado = "==========";

std::string EscritorHLSL::prefijo_input = "input_";

std::string EscritorHLSL::nombre_input = "input";

unsigned int EscritorHLSL::index_c = 0;
unsigned int EscritorHLSL::index_b = 0;
unsigned int EscritorHLSL::index_t = 0;
unsigned int EscritorHLSL::index_s = 0;

// ========== LIFECYCLE ========== //

EscritorHLSL::EscritorHLSL()
{
}

EscritorHLSL::~EscritorHLSL()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

std::string EscritorHLSL::escribirShaderHLSLComoSecuenciaDeFragmentos(Shader * shader)
{
	reiniciarContadoresRegister();

	std::string codigo_shader = "";

	std::string firma_shader = escribirDefinicionComoFirmaDeFuncion(shader->getFragmento()->getDefinicion());

	std::string codigo_main_shader = escribirCodigoPrincipal(shader);

	std::string codigo_fragmentos = escribirCodigoSecuenciaDeFragmentos(shader);

	codigo_shader +=
		codigo_fragmentos + doble_salto_de_linea +
		firma_shader + salto_de_linea +
		"{" + salto_de_linea +
		codigo_main_shader +
		"}" + salto_de_linea;

	// formateo el string para que quede lindo.
	std::string codigo_shader_formateado = AStyleMain(codigo_shader.c_str(), "", ASErrorHandler, ASMemoryAlloc);

	return codigo_shader_formateado;
}

std::string EscritorHLSL::escribirShaderHLSLOrdenadoPorSecciones(Shader * shader)
{
	reiniciarContadoresRegister();

	std::string codigo_shader = "";

	// std::string codigo_variables_declaradas = escribirCodigoVariablesDeclaradas(shader);

	std::string codigo_variables_texturas = escribirCodigoVariablesTexturas(shader);

	std::string codigo_variables_samplers = escribirCodigoVariablesSamplers(shader);

	std::string codigo_structs_declarados = escribirCodigoStructsDeclarados(shader);

	std::string codigo_cbuffers_declarados = escribirCodigoCBuffersDeclarados(shader);

	std::string codigo_fragmentos_declarados = escribirCodigoFragmentosDeclarados(shader);

	std::string codigo_fragmentos_declarados_formateados = AStyleMain(codigo_fragmentos_declarados.c_str(), "-A1 --pad-method-colon=all --align-method-colon", ASErrorHandler, ASMemoryAlloc);

	std::string input_shader = escribirInputStructDeDefincion(shader->getFragmento()->getDefinicion());

	std::string firma_shader = escribirDefinicionComoFirmaDeFuncion(shader->getFragmento()->getDefinicion());

	std::string codigo_main_shader = escribirCodigoPrincipal(shader);

	std::string funcion_shader = 
		firma_shader + salto_de_linea +
		"{" + salto_de_linea +
		codigo_main_shader +
		"}" + salto_de_linea;

	std::string funcion_shader_formateado = AStyleMain(funcion_shader.c_str(), "-A1 --pad-method-colon=all --align-method-colon", ASErrorHandler, ASMemoryAlloc);

	codigo_shader +=
		// escribirEncabezado("VARIABLES GLOBALES") + doble_salto_de_linea +
		// codigo_variables_declaradas + salto_de_linea +
		escribirEncabezado("TEXTURAS") + doble_salto_de_linea +
		codigo_variables_texturas + 
		escribirEncabezado("SAMPLERS") + doble_salto_de_linea +
		codigo_variables_samplers + 
		escribirEncabezado("STRUCTS") + doble_salto_de_linea +
		codigo_structs_declarados + 
		escribirEncabezado("CBUFFERS") + doble_salto_de_linea +
		codigo_cbuffers_declarados + 
		escribirEncabezado("FRAGMENTOS") + doble_salto_de_linea +
		codigo_fragmentos_declarados_formateados +
		escribirEncabezado("INPUT") + doble_salto_de_linea +
		input_shader + doble_salto_de_linea +
		escribirEncabezado("SHADER") + doble_salto_de_linea +
		funcion_shader_formateado;
	
	// formateo el string para que quede lindo.
	// std::string codigo_shader_formateado = AStyleMain(codigo_shader.c_str(), "-A1 --pad-method-colon=all --align-method-colon", ASErrorHandler, ASMemoryAlloc);

	return codigo_shader;
}

std::string EscritorHLSL::escribirCodigoPrincipal(Shader * shader)
{
	std::vector<GeneradorShader::Publicador::Fragmento*> fragmentos = shader->getFragmentosComponentes();

	std::string codigo_main_shader = "";
	for (std::vector<GeneradorShader::Publicador::Fragmento*>::iterator fragmen_it = fragmentos.begin(); fragmen_it != fragmentos.end(); fragmen_it++)
	{
		GeneradorShader::Publicador::Fragmento* fragmento_componente = *fragmen_it;

		bool fragmento_devuelve_parametro_out = devuelveUnoDeLosParametrosOut(fragmento_componente, shader->getFragmento()->getDefinicion()->getSemanticasOut());

		codigo_main_shader += escribirDefinicionComoLlamadaAFuncion(fragmento_componente->getDefinicion(), fragmento_devuelve_parametro_out, shader->getFragmento()->getDefinicion()->getSemanticasIn());
	}
	return codigo_main_shader;
}

std::string EscritorHLSL::escribirCodigoSecuenciaDeFragmentos(Shader * shader)
{
	std::vector<GeneradorShader::Publicador::Fragmento*> fragmentos = shader->getFragmentosComponentes();

	std::string codigo_fragmentos = "";
	for (std::vector<GeneradorShader::Publicador::Fragmento*>::iterator fragmen_it = fragmentos.begin(); fragmen_it != fragmentos.end(); fragmen_it++)
	{
		GeneradorShader::Publicador::Fragmento* fragmento_componente = *fragmen_it;
		codigo_fragmentos += fragmento_componente->getCodigoCompleto() + doble_salto_de_linea;
	}
	return codigo_fragmentos;
}

std::string EscritorHLSL::escribirDefinicionComoLlamadaAFuncion(FragmentoDefinicion* definicion, bool devuelve_parametro_out_del_shader, std::vector<FragmentoParametro*> parametros_input_shader)
{
	std::string salida = "";

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> parametros_in = definicion->getSemanticasIn();
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> parametros_out = definicion->getSemanticasOut();
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> parametros_inout = definicion->getSemanticasInout();

	parametros_in.insert(parametros_in.end(), parametros_inout.begin(), parametros_inout.end());
	parametros_out.insert(parametros_out.end(), parametros_inout.begin(), parametros_inout.end());

	// 1ero- escribo las variables que la funcion va a setear (parametros out).
	std::string string_parametros_out = "";
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator param_it = parametros_out.begin(); param_it != parametros_out.end(); param_it++)
	{
		GeneradorShader::Publicador::FragmentoParametro* parametro = (*param_it);

		// si el paramatero es el mismo que el que se devuelve por retorno, entonces lo salteo.
		// Sino, me quedaria repetido (osea, me lo devolviera por retorno y tambien lo modificaria por paramtero).
		if (0 == parametro->getSemanticaUsuario().compare(definicion->getSemanticaTipoRetorno()))
		{
			continue;
		}

		std::string tipo_variable = parametro->getTipo();
		std::string nombre_variable = parametro->getSemanticaUsuario();

		// si la variable ya fue declarada, entonces la salteo.
		// esto sirve para los parametros inout mas que nada, porque GENERALMENTE no entran vacios, sino q entran con un valor seteado en otro lado.
		if (variableYaFueDeclarada(nombre_variable))
		{
			continue;
		}

		salida += tipo_variable + " " + nombre_variable + ";" + salto_de_linea; // TODO: ver de reemplazar una llamada al sistema que me tire el salto de linea valido.

		string_parametros_out += ", " + parametro->getSemanticaUsuario();

		variables_declaradas_en_codigo_main.push_back(nombre_variable);
	}

	// 2do- si devuelve un valor, escribo la variable de retorno.
	if (0 != definicion->getTipoRetorno().compare("void"))
	{
		std::string semantica_retorno = definicion->getSemanticaTipoRetorno();
		std::string tipo_retorno = definicion->getTipoRetorno();

		if (false == devuelve_parametro_out_del_shader)
		{
			salida += tipo_retorno + " ";
		}

		salida += semantica_retorno + " = ";
	}

	// si hasta aca la variable de salida esta vacia, quiere decir que no devuelve ningun valor ni tampoco modifica ningun valor, osea que la llamada a la funcion no tiene sentido.
	// se lanza una excepcion.
	if (salida.empty())
	{
		throw -1; // TODO: lanzar una excepcion más copada.
	}

	// 3ero- escribo la llamada a la funcion
	std::string nombre_funcion = definicion->getNombre();

	salida += nombre_funcion + "(";

	if (parametros_in.size() > 0)
	{
		if (parametroIncluidoEnVector((*parametros_in.begin()), parametros_input_shader))
		{
			salida += nombre_input + ".";
		}
		salida += (*parametros_in.begin())->getSemanticaUsuario();
		
		for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator it = (parametros_in.begin()) + 1; it != parametros_in.end(); it++)
		{
			salida += ", ";

			GeneradorShader::Publicador::FragmentoParametro* param = (*it);
			if (parametroIncluidoEnVector(param, parametros_input_shader))
			{
				salida += nombre_input + ".";
			}
			salida += param->getSemanticaUsuario();
		}
	}

	salida += string_parametros_out + ");" + salto_de_linea;

	return salida;
}

std::string EscritorHLSL::escribirDefinicionComoFirmaDeFuncion(FragmentoDefinicion* definicion)
{
	std::string firma = definicion->getTipoRetorno();
	firma += " " + definicion->getNombre() + "(";

	std::vector<FragmentoParametro*> parametros_inout = definicion->getSemanticasInout();
	std::vector<FragmentoParametro*> parametros_out = definicion->getSemanticasOut();

	// escribo primero el input
	firma += prefijo_input + definicion->getEtiquetaInput() + " " + nombre_input;

	// concateno los paramteros asi los escribo todos de una pasada.
	parametros_inout.insert(parametros_inout.end(), parametros_out.begin(), parametros_out.end());

	if (parametros_inout.size() > 0)
	{
		for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator it = parametros_inout.begin(); it != parametros_inout.end(); it++)
		{
			GeneradorShader::Publicador::FragmentoParametro* param = (*it);
			firma += ", " + escribirParametroDeFirmaDeFuncion(param);
		}
	}

	firma += ")";

	if (false == definicion->getSemanticaTipoRetorno().empty())
	{
		firma += " : " + definicion->getSemanticaTipoRetorno();
	}

	return firma;
}

std::string EscritorHLSL::escribirInputStructDeDefincion(FragmentoDefinicion * definicion)
{
	std::string input =
		"struct " + prefijo_input + definicion->getEtiquetaInput() + salto_de_linea +
		"{" + salto_de_linea;

	std::vector<FragmentoParametro*> parametros_in = definicion->getSemanticasIn();

	for (std::vector<FragmentoParametro*>::iterator it = parametros_in.begin(); it != parametros_in.end(); it++)
	{
		std::string string_parametro = "\t" + (*it)->getTipo() + " " + (*it)->getSemanticaUsuario();

		if (false == (*it)->getSemanticaSistema().empty())
		{
			string_parametro += " : " + (*it)->getSemanticaSistema();
		}

		input += string_parametro + ";" + salto_de_linea;
	}

	input += "};";

	return input;
}

std::string EscritorHLSL::escribirParametroDeFirmaDeFuncion(GeneradorShader::Publicador::FragmentoParametro* parametro)
{
	std::string string_parametro = parametro->getReferencia() + " " + parametro->getTipo() + " " + parametro->getSemanticaUsuario();

	if (false == parametro->getSemanticaSistema().empty())
	{
		string_parametro += " : " + parametro->getSemanticaSistema();
	}

	return string_parametro;
}

std::string EscritorHLSL::escribirCodigoVariablesDeclaradas(Shader * shader)
{
	std::string string_variables_declaradas = "";

	std::vector<VariableShader*> variables_declaradas = shader->getFragmento()->getVariablesDeclaradas();

	unsigned int offset = 0;
	for (std::vector<VariableShader*>::iterator it = variables_declaradas.begin(); it != variables_declaradas.end(); it++)
	{
		(*it)->getRegister()->numero = offset;
		string_variables_declaradas += (*it)->escribir() + salto_de_linea;
		offset += (*it)->getTamanioMemoriaRedondeadoAMultiploDe16() / 16;
	}

	return string_variables_declaradas;
}

std::string EscritorHLSL::escribirCodigoVariablesDeclaradasComoCBuffer(Shader * shader)
{
	std::string string_cbuffer = "";

	std::vector<VariableShader*> variables_declaradas = shader->getFragmento()->getVariablesDeclaradas();

	CBufferShader cbuffer_general;
	cbuffer_general.setNombre("cbuffer_general");
	cbuffer_general.setSematica("CBUFFER_GENERAL");

	unsigned int offset = 0;
	for (std::vector<VariableShader*>::iterator it = variables_declaradas.begin(); it != variables_declaradas.end(); it++)
	{
		VariableShader* variable_aux = new VariableShader();
		variable_aux->setTipo((*it)->getTipo());
		variable_aux->setNombre((*it)->getNombre());
		variable_aux->setSematica((*it)->getSematica());
		variable_aux->setTamanioMemoria((*it)->getTamanioMemoria());
		variable_aux->setTextoDeclaracion((*it)->getTextoDeclaracion());

		IDeclaracion::PacketOffset* packoffset = new IDeclaracion::PacketOffset(offset);
		variable_aux->setPacketOffset(packoffset);

		cbuffer_general.agregarVariable(variable_aux);

		offset += (*it)->getTamanioMemoriaRedondeadoAMultiploDe16() / 16;
	}

	return cbuffer_general.escribir() + doble_salto_de_linea;
}

std::string EscritorHLSL::escribirCodigoVariablesTexturas(Shader * shader)
{
	std::string string_variables_declaradas = "";

    std::vector<VariableShader*> variables_texturas_2d = shader->getFragmento()->getVariablesTexturas2D();
    std::vector<VariableShader*> variables_texturas_2d_array = shader->getFragmento()->getVariablesTexturas2DArray();
    std::vector<VariableShader*> variables_texturas_3d = shader->getFragmento()->getVariablesTexturas3D();

    std::vector<VariableShader*> variables_texturas;
    variables_texturas.insert(variables_texturas.end(), variables_texturas_2d.begin(), variables_texturas_2d.end());
    variables_texturas.insert(variables_texturas.end(), variables_texturas_2d_array.begin(), variables_texturas_2d_array.end());
    variables_texturas.insert(variables_texturas.end(), variables_texturas_3d.begin(), variables_texturas_3d.end());

	unsigned int offset = 0;
	for (std::vector<VariableShader*>::iterator it = variables_texturas.begin(); it != variables_texturas.end(); it++)
	{
        IDeclaracion::Register* registracion = new IDeclaracion::Register(offset, "t");

        (*it)->setRegister(registracion);

		string_variables_declaradas += (*it)->escribir() + doble_salto_de_linea;
		offset += (*it)->getTamanioMemoriaRedondeadoAMultiploDe16() / 16;
	}

	return string_variables_declaradas;
}

std::string EscritorHLSL::escribirCodigoVariablesSamplers(Shader * shader)
{
	std::string string_variables_declaradas = "";

	std::vector<VariableShader*> variables_samplers = shader->getFragmento()->getVariablesSamplers();

	unsigned int offset = 0;
	for (std::vector<VariableShader*>::iterator it = variables_samplers.begin(); it != variables_samplers.end(); it++)
	{
        IDeclaracion::Register* registracion = new IDeclaracion::Register(offset, "s");
        (*it)->setRegister(registracion);

		string_variables_declaradas += (*it)->escribir() + doble_salto_de_linea;
		offset += (*it)->getTamanioMemoriaRedondeadoAMultiploDe16() / 16;
	}

	return string_variables_declaradas;
}

std::string EscritorHLSL::escribirCodigoStructsDeclarados(Shader * shader)
{
	std::string string_structs_declarados = "";

	std::vector<StructShader*> structs_declarados = shader->getFragmento()->getStructs();

	for (std::vector<StructShader*>::iterator it = structs_declarados.begin(); it != structs_declarados.end(); it++)
	{
		string_structs_declarados += (*it)->escribir() + doble_salto_de_linea;
	}

	return string_structs_declarados;
}

std::string EscritorHLSL::escribirCodigoCBuffersDeclarados(Shader * shader)
{
	std::string string_cbuffers_declarados = "";

	std::vector<CBufferShader*> cbuffers_declarados = shader->getFragmento()->getCBuffers();

	unsigned int offset_register = 0;
	for (std::vector<CBufferShader*>::iterator it = cbuffers_declarados.begin(); it != cbuffers_declarados.end(); it++)
	{
		(*it)->getRegister()->numero = offset_register;
		string_cbuffers_declarados += (*it)->escribir() + doble_salto_de_linea;
		offset_register++;
	}

	return string_cbuffers_declarados;
}

std::string EscritorHLSL::escribirCodigoFragmentosDeclarados(Shader * shader)
{
	std::string string_fragmentos_declarados = "";

	std::vector<Fragmento*> fragmentos_declarados = shader->getFragmentosComponentes();

	for (std::vector<Fragmento*>::iterator it = fragmentos_declarados.begin(); it != fragmentos_declarados.end(); it++)
	{
		string_fragmentos_declarados += (*it)->getDefinicionDeFuncion() + doble_salto_de_linea;
	}

	return string_fragmentos_declarados;
}

std::string EscritorHLSL::escribirEncabezado(std::string nombre_seccion)
{
	return "// " + separacion_encabezado + " " + nombre_seccion + " " + separacion_encabezado + " //";
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

bool EscritorHLSL::variableYaFueDeclarada(std::string nombre_variable)
{
	std::vector<std::string>::iterator it_a_buscar = std::find(variables_declaradas_en_codigo_main.begin(), variables_declaradas_en_codigo_main.end(), nombre_variable);

	if (variables_declaradas_en_codigo_main.end() != it_a_buscar)
	{// si encontró, entonces devuelvo true.
		return true;
	}
	return false;
}

bool EscritorHLSL::devuelveUnoDeLosParametrosOut(Fragmento* fragmento, std::vector<FragmentoParametro*> parametros_out_shader)
{
	std::string semantica_retorno_fragmento = fragmento->getSemanticaTipoRetorno();

	for (std::vector<FragmentoParametro*>::iterator param_it = parametros_out_shader.begin(); param_it != parametros_out_shader.end(); param_it++)
	{
		FragmentoParametro* parametro_out = *param_it;

		if (0 == parametro_out->getSemanticaUsuario().compare(semantica_retorno_fragmento))
		{// si coincide con alguna de las semanticas de retorno del shader, entonces el fragmento devuelve uno de los parametros out.
			return true;
		}
	}
	// si llego hasta aca, entonces no devuelve ningun parametro out del shader.
	return false;
}

bool EscritorHLSL::parametroIncluidoEnVector(FragmentoParametro * parametro, std::vector<FragmentoParametro*> parametros)
{
	std::string semantica_parametro = parametro->getSemanticaUsuario();

	for (std::vector<FragmentoParametro*>::iterator param_it = parametros.begin(); param_it != parametros.end(); param_it++)
	{
		FragmentoParametro* parametro_out = *param_it;

		if (0 == parametro_out->getSemanticaUsuario().compare(semantica_parametro))
		{// si coincide con alguna de las semanticas de retorno del shader, entonces el fragmento devuelve uno de los parametros out.
			return true;
		}
	}
	// si llego hasta aca, entonces no devuelve ningun parametro out del shader.
	return false;
}

// ========== INTERNAL METHODS ========== //

void EscritorHLSL::reiniciarContadoresRegister()
{
	index_c = 0;
	index_b = 0;
	index_t = 0;
	index_s = 0;
}

unsigned int EscritorHLSL::calcularOffsetBuffer(std::string tipo_variable)
{
	unsigned int incremento_de_offset = 1; // por default le incremento 1.
	if (0 == tipo_variable.compare("matrix"))
	{
		incremento_de_offset = 4;
	}
	return incremento_de_offset;
}

std::string EscritorHLSL::escribirVariableConIndexDeRegister(std::string declaracion_variable)
{
	// el tipo del register siempre va a estar a 4 posiciones antes de ".end()".
	char tipo_de_register = *(declaracion_variable.end() - 4);

	unsigned int index_modificado = 0;
	switch (tipo_de_register)
	{

	case 'c':
	{
		index_modificado = index_c;
		index_c += calcularOffsetBuffer(declaracion_variable.substr(0, declaracion_variable.find(" ")));
		break;
	}
	case 'b': index_modificado = index_b++; break;
	case 't': index_modificado = index_t++; break;
	case 's': index_modificado = index_s++; break;

	default:
		break;
	}

	std::string string_index_modificado = std::to_string(index_modificado);

	// el index original siempre va a estar a 3 posiciones antes del ".end()".
	declaracion_variable.erase(declaracion_variable.end() - 3);

	// desde donde borre, agrego en nuevo index.
	declaracion_variable.insert(declaracion_variable.end() - 2, string_index_modificado.begin(), string_index_modificado.end());

	return declaracion_variable;
}

std::string EscritorHLSL::getSemanticaUsuarioDiferenteASemanticaSistema(FragmentoParametro* parametro)
{
	std::string nombre = parametro->getSemanticaUsuario();

	if (parametro->semanticaUsuarioIgualASemanticaSistema())
	{
		std::transform(nombre.begin(), nombre.end(), nombre.begin(), ::tolower);
	}

	return nombre;
}

std::vector<std::string> EscritorHLSL::split(const std::string &s, char delim)
{
	std::stringstream ss;
	ss.str(s);

	std::string item;
	std::vector<std::string> tokens;
	while (getline(ss, item, delim))
	{
		tokens.push_back(item);
	}
	return tokens;
}

// Error handler for the Artistic Style formatter.
void  STDCALL ASErrorHandler(int errorNumber, const char* errorMessage)
{
	std::cout << "astyle error " << errorNumber << "\n"
		<< errorMessage << std::endl;
}

// Allocate memory for the Artistic Style formatter.
char* STDCALL ASMemoryAlloc(unsigned long memoryNeeded)
{   // error condition is checked after return from AStyleMain
	char* buffer = new (std::nothrow) char[memoryNeeded];
	return buffer;
}
