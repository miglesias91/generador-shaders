#include <Publicador/Fragmento.h>

using namespace GeneradorShader::Publicador;

// stl
#include <unordered_map>
#include <iostream>
#include <algorithm>

// UtilsLib
#include <UtilsLib/Include/StringUtilsFunctions.h>

// ========== LIFECYCLE ========== //

Fragmento::Fragmento() : definicion(NULL), path(""), codigo_completo(""), bloque_de_codigo("")
{
	this->definicion = new FragmentoDefinicion();
}

Fragmento::Fragmento(FragmentoDefinicion* definicion) : definicion(definicion), path(""), codigo_completo(""), bloque_de_codigo("")
{

}

Fragmento::~Fragmento()
{
}

// ========== OPERADORES ========== //

// ========== MÉTODOS ========== //

void Fragmento::agregarParametro(FragmentoParametro* nuevo_parametro)
{
	if (0 == nuevo_parametro->getReferencia().compare("in"))
	{
		this->definicion->agregarSemanticaIn(nuevo_parametro);
	}

	if (0 == nuevo_parametro->getReferencia().compare("out"))
	{
		this->definicion->agregarSemanticaOut(nuevo_parametro);
	}

	if (0 == nuevo_parametro->getReferencia().compare("inout"))
	{
		this->definicion->agregarSemanticaInout(nuevo_parametro);
	}
}

void Fragmento::agregarCBuffer(CBufferShader* nuevo_cbuffer)
{
	if (existeCBufferConMismoNombre(nuevo_cbuffer))
	{// si ya existe la misma variable, no la agrego.
		return;
	}

	if (existeVariableConMismoNombre(nuevo_cbuffer) || existeStructConMismoNombre(nuevo_cbuffer))
	{// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
		std::cout << "Ya existe otra sentencia con el nombre \"" + nuevo_cbuffer->getNombre() + "\".\n";
		throw - 1;
	}

	this->cbuffers.push_back(nuevo_cbuffer);
}

void Fragmento::agregarStruct(StructShader* nuevo_struct)
{
	if (existeStructConMismoNombre(nuevo_struct))
	{// si ya existe la misma variable, no la agrego.
		return;
	}

	if (existeVariableConMismoNombre(nuevo_struct) || existeCBufferConMismoNombre(nuevo_struct))
	{// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
		std::cout << "Ya existe otra sentencia con el nombre \"" + nuevo_struct->getNombre() + "\".\n";
		throw - 1;
	}

	this->structs.push_back(nuevo_struct);
}

void Fragmento::agregarVariableDeclarada(VariableShader* nueva_variable_declarada)
{
	if (existeVariableConMismoNombre(nueva_variable_declarada))
	{// si ya existe la misma variable, no la agrego.
		return;
	}

	if (existeStructConMismoNombre(nueva_variable_declarada) || existeCBufferConMismoNombre(nueva_variable_declarada))
	{// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
		std::cout << "Ya existe otra sentencia con el nombre \"" + nueva_variable_declarada->getNombre() + "\".\n";
		throw - 1;
	}

	this->variables_declaradas.push_back(nueva_variable_declarada);
}

void Fragmento::agregarVariableTextura2D(VariableShader * nueva_variable_textura_2d)
{
	if (existeVariableConMismoNombre(nueva_variable_textura_2d))
	{// si ya existe la misma variable, no la agrego.
		return;
	}

	if (existeStructConMismoNombre(nueva_variable_textura_2d) || existeCBufferConMismoNombre(nueva_variable_textura_2d))
	{// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
		std::cout << "Ya existe otra sentencia con el nombre \"" + nueva_variable_textura_2d->getNombre() + "\".\n";
		throw - 1;
	}

	this->variables_textura_2d.push_back(nueva_variable_textura_2d);
}

void Fragmento::agregarVariableTextura2DArray(VariableShader * nueva_variable_textura_2d_array)
{
    if (existeVariableConMismoNombre(nueva_variable_textura_2d_array))
    {// si ya existe la misma variable, no la agrego.
        return;
    }

    if (existeStructConMismoNombre(nueva_variable_textura_2d_array) || existeCBufferConMismoNombre(nueva_variable_textura_2d_array))
    {// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
        std::cout << "Ya existe otra sentencia con el nombre \"" + nueva_variable_textura_2d_array->getNombre() + "\".\n";
        throw - 1;
    }

    this->variables_textura_2d_array.push_back(nueva_variable_textura_2d_array);
}

void Fragmento::agregarVariableTextura3D(VariableShader * nueva_variable_textura_3d)
{
    if (existeVariableConMismoNombre(nueva_variable_textura_3d))
    {// si ya existe la misma variable, no la agrego.
        return;
    }

    if (existeStructConMismoNombre(nueva_variable_textura_3d) || existeCBufferConMismoNombre(nueva_variable_textura_3d))
    {// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
        std::cout << "Ya existe otra sentencia con el nombre \"" + nueva_variable_textura_3d->getNombre() + "\".\n";
        throw - 1;
    }

    this->variables_textura_3d.push_back(nueva_variable_textura_3d);
}

void Fragmento::agregarVariableSampler(VariableShader * nueva_variable_sampler)
{
	if (existeVariableConMismoNombre(nueva_variable_sampler))
	{// si ya existe la misma variable, no la agrego.
		return;
	}

	if (existeStructConMismoNombre(nueva_variable_sampler) || existeCBufferConMismoNombre(nueva_variable_sampler))
	{// si ya existe el mismo nombre para otro struct o cbuffer, entonces tiro error e informo.
		std::cout << "Ya existe otra sentencia con el nombre \"" + nueva_variable_sampler->getNombre() + "\".\n";
		throw - 1;
	}

	this->variables_sampler.push_back(nueva_variable_sampler);
}

void Fragmento::transformarVariablesDeclaradasACBuffer()
{
	std::vector<VariableShader*> variables_declaradas = this->getVariablesDeclaradas();

    struct info_cbuffer
    {
        CBufferShader* buffer = NULL;
        unsigned int tamanio = 0;
        unsigned int offset_packoffset = 0;
    };

    std::unordered_map<std::string, info_cbuffer> cbuffers;

	for (std::vector<VariableShader*>::iterator it = variables_declaradas.begin(); it != variables_declaradas.end(); it++)
	{
		VariableShader* variable = *it;

        IDeclaracion::PacketOffset* packoffset = NULL;

        std::vector<std::string> datos_semanticas = Utils::StringUtilsFunctions::split(variable->getSematica(), '_');

        if (datos_semanticas.size() <= 1)
        {
            std::string mensaje = "La variable '" + variable->getSematica() + "' no tiene indicada NOMBRE DEL CBUFFER al que pertenece (<NOMBRE_CBUFFER>_<NOMBRE_SEMANTICA>).";
            throw new std::exception(mensaje.c_str());
        }
        std::string nombre_tipo_cbuffer = datos_semanticas[0];

        info_cbuffer * cbuffer = &cbuffers[nombre_tipo_cbuffer];
        if (NULL == cbuffer->buffer)
        {
            cbuffer->buffer = new CBufferShader();
        }

        packoffset = new IDeclaracion::PacketOffset(cbuffer->offset_packoffset, "");
        cbuffer->offset_packoffset += variable->getTamanioMemoriaRedondeadoAMultiploDe16() / 16;
        cbuffer->tamanio += variable->getTamanioMemoria();
        cbuffer->buffer->agregarVariable(*it);

		variable->setPacketOffset(packoffset);
		variable->eliminarRegister();
	}

	unsigned int numero_register = 0;
	if (false == this->getCBuffers().empty())
	{
		CBufferShader* ultimo_cbuffer = *(this->getCBuffers().end() - 1);
		numero_register = ultimo_cbuffer->getRegister()->numero + 1;
	}

    for (auto & cbuffer : cbuffers)
    {
        IDeclaracion::Register* register_cbuffer = new IDeclaracion::Register(numero_register, "b");

        CBufferShader* buffer = cbuffer.second.buffer;
        std::string nombre_cbuffer_minuscula = cbuffer.first;

        std::transform(cbuffer.first.begin(), cbuffer.first.end(), nombre_cbuffer_minuscula.begin(), ::tolower);

        buffer->setTipo("cbuffer");
        buffer->setNombre("cbuffer_" + nombre_cbuffer_minuscula);
        buffer->setSematica("CBUFFER_" + cbuffer.first);
        buffer->setTamanioMemoria(cbuffer.second.tamanio);
        buffer->setRegister(register_cbuffer);
        buffer->clase(cbuffer.first);
        this->agregarCBuffer(buffer);
    }
}

// ========== GETTERS ========== //

FragmentoDefinicion* Fragmento::getDefinicion()
{
	return this->definicion;
}

std::string Fragmento::getPath()
{
	return this->path;
}

std::string Fragmento::getCodigoCompleto()
{
	return this->codigo_completo;
}

std::string Fragmento::getTipoRetorno()
{
	return this->definicion->getTipoRetorno();
}

std::string Fragmento::getSemanticaTipoRetorno()
{
	return this->definicion->getSemanticaTipoRetorno();
}

std::string Fragmento::getNombreFuncion()
{
	return this->definicion->getNombre();
}

std::string Fragmento::getBloqueDeCodigo()
{
	return this->bloque_de_codigo;
}

std::string Fragmento::getDefinicionDeFuncion()
{
	return this->definicion_funcion;
}

std::vector<CBufferShader*> Fragmento::getCBuffers()
{
	return this->cbuffers;
}

std::vector<StructShader*> Fragmento::getStructs()
{
	return this->structs;
}

std::vector<VariableShader*> Fragmento::getVariablesDeclaradas()
{
	return this->variables_declaradas;
}

std::vector<VariableShader*> Fragmento::getVariablesTexturas2D()
{
	return this->variables_textura_2d;
}

std::vector<VariableShader*> Fragmento::getVariablesTexturas2DArray()
{
    return this->variables_textura_2d_array;
}

std::vector<VariableShader*> Fragmento::getVariablesTexturas3D()
{
    return this->variables_textura_3d;
}

std::vector<VariableShader*> Fragmento::getVariablesSamplers()
{
	return this->variables_sampler;
}

// ========== SETTERS ========== //

void Fragmento::setDefinicion(FragmentoDefinicion* definicion)
{
	this->definicion = definicion;
}

void Fragmento::setPath(std::string path)
{
	this->path = path;
}

void Fragmento::setCodigoCompleto(std::string codigo_completo)
{
	this->codigo_completo = codigo_completo;
}

void Fragmento::setTipoRetorno(std::string tipo_retorno)
{
	this->definicion->setTipoRetorno(tipo_retorno);
}

void Fragmento::setSemanticaTipoRetorno(std::string tipo_retorno)
{
	this->definicion->setSemanticaTipoRetorno(tipo_retorno);
}

void Fragmento::setNombreFuncion(std::string nombre_funcion)
{
	this->definicion->setNombre(nombre_funcion);
}

void Fragmento::setBloqueDeCodigo(std::string bloque_de_codigo)
{
	this->bloque_de_codigo = bloque_de_codigo;
}

void Fragmento::setDefinicionDeFuncion(std::string definicion_funcion)
{
	this->definicion_funcion = definicion_funcion;
}

// ========== INQUIRY ========== //

// ========== MÉTODOS INTERNOS ========== //

bool Fragmento::existeVariableConMismoNombre(IDeclaracion* nueva_variable)
{
	for (std::vector<VariableShader*>::iterator it = this->variables_declaradas.begin(); it != this->variables_declaradas.end(); it++)
	{
		std::string nombre_a_evaluar = (*it)->getNombre();
		if (0 == nueva_variable->getNombre().compare(nombre_a_evaluar))
		{
			return true;
		}
	}

	for (std::vector<VariableShader*>::iterator it = this->variables_textura_2d.begin(); it != this->variables_textura_2d.end(); it++)
	{
		std::string nombre_a_evaluar = (*it)->getNombre();
		if (0 == nueva_variable->getNombre().compare(nombre_a_evaluar))
		{
			return true;
		}
	}

    for (std::vector<VariableShader*>::iterator it = this->variables_textura_2d_array.begin(); it != this->variables_textura_2d_array.end(); it++)
    {
        std::string nombre_a_evaluar = (*it)->getNombre();
        if (0 == nueva_variable->getNombre().compare(nombre_a_evaluar))
        {
            return true;
        }
    }

    for (std::vector<VariableShader*>::iterator it = this->variables_textura_3d.begin(); it != this->variables_textura_3d.end(); it++)
    {
        std::string nombre_a_evaluar = (*it)->getNombre();
        if (0 == nueva_variable->getNombre().compare(nombre_a_evaluar))
        {
            return true;
        }
    }

	for (std::vector<VariableShader*>::iterator it = this->variables_sampler.begin(); it != this->variables_sampler.end(); it++)
	{
		std::string nombre_a_evaluar = (*it)->getNombre();
		if (0 == nueva_variable->getNombre().compare(nombre_a_evaluar))
		{
			return true;
		}
	}

	return false;
}

bool Fragmento::existeStructConMismoNombre(IDeclaracion* nueva_struct)
{
	for (std::vector<StructShader*>::iterator it = this->structs.begin(); it != this->structs.end(); it++)
	{
		std::string nombre_a_evaluar = (*it)->getNombre();
		if (0 == nueva_struct->getNombre().compare(nombre_a_evaluar))
		{
			return true;
		}
	}
	return false;
}

bool Fragmento::existeCBufferConMismoNombre(IDeclaracion* nueva_cbuffer)
{
	for (std::vector<CBufferShader*>::iterator it = this->cbuffers.begin(); it != this->cbuffers.end(); it++)
	{
		std::string nombre_a_evaluar = (*it)->getNombre();
		if (0 == nueva_cbuffer->getNombre().compare(nombre_a_evaluar))
		{
			return true;
		}
	}
	return false;
}
