// Generated from HLSL_Parser.g4 by ANTLR 4.7

#include <Parser/HLSL_ConstructorVisitador.h>

using namespace GeneradorShader::Parser;

// UtilsLib
#include <UtilsLib/Include/StringUtilsFunctions.h>

HLSL_ConstructorVisitador::HLSL_ConstructorVisitador() :
    fragmento(NULL), parametro_a_completar(NULL), variable_a_completar(NULL), cbuffer_a_completar(NULL), cbuffer_general(NULL), struct_a_completar(NULL), tamanio_array_bindeado(1)
{
}

HLSL_ConstructorVisitador::HLSL_ConstructorVisitador(GeneradorShader::Publicador::Fragmento* fragmento_a_completar) :
	fragmento(fragmento_a_completar), parametro_a_completar(NULL), variable_a_completar(NULL), cbuffer_a_completar(NULL), cbuffer_general(NULL), struct_a_completar(NULL), tamanio_array_bindeado(1)
{
}

HLSL_ConstructorVisitador::~HLSL_ConstructorVisitador()
{
}

// metodos del visitador

antlrcpp::Any HLSL_ConstructorVisitador::visitMain(HLSL_Parser::MainContext *ctx)
{
	std::string full_text = this->getFullText(*ctx);
	std::cout << "MainContext" << ":\n" << full_text << std::endl;

	this->fragmento->setCodigoCompleto(full_text);

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitDeclaraciones(HLSL_Parser::DeclaracionesContext *ctx)
{
	std::cout << "DeclaracionesContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitStructDefinicion(HLSL_Parser::StructDefinicionContext *ctx)
{
	std::string full_text_struct = this->getFullText(*ctx);
	std::cout << "StructDefinicionContext:\n" << full_text_struct << std::endl;

	antlrcpp::Any retorno = visitChildren(ctx);

	this->struct_a_completar = new GeneradorShader::Publicador::StructShader();
	this->struct_a_completar->setTextoDeclaracion(full_text_struct);
	this->struct_a_completar->setTipo("struct");
	this->struct_a_completar->setNombre(this->nombre_bindeado);

    std::vector<Publicador::VariableShader*> variables_struct = this->reconocerVariablesDeCBuffer(this->bloque_de_codigo_bindeado);

    unsigned int tamanio_memoria_struct = 0;
    for (std::vector<Publicador::VariableShader*>::iterator it = variables_struct.begin(); it != variables_struct.end(); it++)
    {
        this->struct_a_completar->agregarVariable(*it);
        tamanio_memoria_struct += (*it)->getTamanioMemoria();
    }
    this->struct_a_completar->setTamanioMemoria(tamanio_memoria_struct);

    this->tipos_definidos_por_usuario.insert(std::make_pair(this->nombre_bindeado, this->struct_a_completar));

	this->fragmento->agregarStruct(struct_a_completar);

	// no sigo parseando el struct porque no me sirve de nada saberlo, solo me sirve la linea de codigo que lo declara.
	// antlrcpp::Any retorno_vacio;
	return retorno;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitConstantBuffer(HLSL_Parser::ConstantBufferContext *ctx)
{
	std::string full_text_cbuffer = this->getFullText(*ctx);
	std::cout << "ConstantBufferContext:\n" << full_text_cbuffer << std::endl;

	antlrcpp::Any retorno = visitChildren(ctx);
	
	this->cbuffer_a_completar = new GeneradorShader::Publicador::CBufferShader();
	this->cbuffer_a_completar->setTextoDeclaracion(full_text_cbuffer);
	this->cbuffer_a_completar->setNombre(this->nombre_bindeado);
	this->cbuffer_a_completar->setTipo("cbuffer");
	this->cbuffer_a_completar->setRegister(this->reconocerRegister(this->register_bindeado));
	this->recortarStringSemantica(this->semantica_bindeada);
	this->cbuffer_a_completar->setSematica(this->semantica_bindeada);

	std::vector<Publicador::VariableShader*> variables_cbuffer = this->reconocerVariablesDeCBuffer(this->bloque_de_codigo_bindeado);

	unsigned int tamanio_memoria_cbuffer = 0;
	for (std::vector<Publicador::VariableShader*>::iterator it = variables_cbuffer.begin(); it != variables_cbuffer.end(); it++)
	{
		this->cbuffer_a_completar->agregarVariable(*it);
		tamanio_memoria_cbuffer += (*it)->getTamanioMemoria();
	}
	this->cbuffer_a_completar->setTamanioMemoria(tamanio_memoria_cbuffer);

	this->fragmento->agregarCBuffer(cbuffer_a_completar);

	// no sigo parseando cbuffer porque no me sirve de nada saberlo, solo me sirve la linea de codigo que lo declara.
	// antlrcpp::Any retorno_vacio;
	return retorno;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext *ctx)
{
	std::string full_text_variable_declarada = this->getFullText(*ctx);
	std::cout << "VariableDeclaracionSentenciaContext:\n" << full_text_variable_declarada << std::endl;

	this->variable_a_completar = new GeneradorShader::Publicador::VariableShader();
	
	antlrcpp::Any retorno = visitChildren(ctx);

	this->variable_a_completar->setTextoDeclaracion(full_text_variable_declarada);
	this->variable_a_completar->setNombre(this->nombre_bindeado);
    this->variable_a_completar->setTamanioArray(this->tamanio_array_bindeado);
	this->variable_a_completar->setReferencia(this->storage_flag_bindeada);
	this->variable_a_completar->setTipo(this->tipo_bindeado);
	this->variable_a_completar->setPacketOffset(this->reconocerPacketOffset(this->packetoffset_bindeado));
	this->variable_a_completar->setRegister(this->reconocerRegister(this->register_bindeado));
	this->recortarStringSemantica(this->semantica_bindeada);
	this->variable_a_completar->setSematica(this->semantica_bindeada);
	this->variable_a_completar->setTamanioMemoria(this->reconocerTamanioTipoVariable(this->tipo_bindeado) * this->tamanio_array_bindeado);

	// this->fragmento->agregarVariableDeclarada(variable_a_completar);

    // reseteo el tamanio de array bindeado.
    this->tamanio_array_bindeado = 1;

	// no sigo parseando la declaracion de variable porque no me sirve de nada saberla, solo me sirve la linea de codigo que la declara.
	// antlrcpp::Any retorno_vacio;
	return retorno;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext *ctx)
{
	std::string full_text = this->getFullText(*ctx);
	std::cout << "visitFuncionDefinicion" << ":\n" << full_text << std::endl;

	this->fragmento->setDefinicionDeFuncion(full_text);

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoFuncion(HLSL_Parser::TipoFuncionContext *ctx)
{
	std::string full_text_tipo_funcion = this->getFullText(*ctx);
	std::cout << "TipoFuncionContext:\n" << full_text_tipo_funcion << std::endl;

	this->fragmento->setTipoRetorno(full_text_tipo_funcion);
	// no sigo recorriendo los hijos porque ya obtuve el tipo de retorno de la funcion.
	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitNombreFuncion(HLSL_Parser::NombreFuncionContext *ctx)
{
	std::string full_text_nombre_funcion = this->getFullText(*ctx);
	std::cout << "NombreFuncionContext:\n" << full_text_nombre_funcion << std::endl;

	this->fragmento->setNombreFuncion(full_text_nombre_funcion);
	// no sigo recorriendo los hijos porque ya obtuve el nombre de la funcion.
	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext *ctx)
{
	std::string full_text_semantica_funcion = this->getFullText(*ctx);
	std::cout << "SemanticaFuncionContext:\n" << full_text_semantica_funcion << std::endl;

	this->recortarStringSemantica(full_text_semantica_funcion);

	this->fragmento->setSemanticaTipoRetorno(full_text_semantica_funcion);
	// no sigo recorriendo los hijos porque ya obtuve la semantica de retorno de la funcion.
	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *ctx)
{
	std::string full_text_bloque_codigo_funcion = this->getFullText(*ctx);
	std::cout << "BloqueDeCodigoFuncionContext:\n" << full_text_bloque_codigo_funcion << std::endl;

	this->fragmento->setBloqueDeCodigo(full_text_bloque_codigo_funcion);
	// no sigo recorriendo los hijos porque ya obtuve el bloque de codigo de la funcion.
	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext *ctx)
{
	std::cout << "FuncionDeclaracionContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext *ctx)
{
	std::cout << "InterfazDefinicionContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitClaseDefinicion(HLSL_Parser::ClaseDefinicionContext *ctx)
{
	std::cout << "ClaseDefinicionContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitListaClaseBase(HLSL_Parser::ListaClaseBaseContext *ctx)
{
	std::cout << "ListaClaseBaseContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext *ctx)
{
	std::cout << "DeclaracionMiembroClaseContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitSemantica(HLSL_Parser::SemanticaContext *ctx)
{
	this->semantica_bindeada = getFullText(*ctx);
	std::cout << "SemanticaContext:\n" << this->semantica_bindeada << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext *ctx)
{
	this->bloque_de_codigo_bindeado = getFullText(*ctx);
	std::cout << "BloqueDeCodigoContext:\n" << this->bloque_de_codigo_bindeado << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext *ctx)
{
	std::cout << "AtributosArgumentosContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext *ctx)
{
	std::cout << "AtributosListaArgumentosContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitAtributo(HLSL_Parser::AtributoContext *ctx)
{
	std::cout << "AtributoContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitNombre(HLSL_Parser::NombreContext *ctx)
{
	this->nombre_bindeado = getFullText(*ctx);
	std::cout << "NombreContext:\n" << nombre_bindeado << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitParametros(HLSL_Parser::ParametrosContext *ctx)
{
	std::cout << "ParametrosContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitParametro(HLSL_Parser::ParametroContext *ctx)
{
	std::cout << "ParametroContext:\n" << getFullText(*ctx) << std::endl;
	this->parametro_a_completar = new GeneradorShader::Publicador::FragmentoParametro();

	antlrcpp::Any retorno = visitChildren(ctx);
	
	// despues de visitar a los hijos, el parametro quedo completo. entonces se lo agrego al fragmento.
	this->fragmento->agregarParametro(this->parametro_a_completar);

	return retorno;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext *ctx)
{
	std::string full_text_storage_parametro = this->getFullText(*ctx);
	std::cout << "StorageFlagParametroContext:\n" << full_text_storage_parametro << std::endl;

	this->parametro_a_completar->setReferencia(full_text_storage_parametro);

	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoParametro(HLSL_Parser::TipoParametroContext *ctx)
{
	std::string full_text_tipo_parametro = this->getFullText(*ctx);
	std::cout << "TipoParametroContext:\n" << full_text_tipo_parametro << std::endl;

	this->parametro_a_completar->setTipo(full_text_tipo_parametro);

	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitNombreParametro(HLSL_Parser::NombreParametroContext *ctx)
{
	std::string full_text_nombre_parametro = this->getFullText(*ctx);
	std::cout << "NombreParametroContext:\n" << full_text_nombre_parametro << std::endl;

	this->parametro_a_completar->setNombre(full_text_nombre_parametro);

	antlrcpp::Any retorno;
	return retorno;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitSemanticaParametro(HLSL_Parser::SemanticaParametroContext *ctx)
{
	std::string full_text_semantica_parametro = this->getFullText(*ctx);
	std::cout << "SemanticaParametroContext:\n" << full_text_semantica_parametro << std::endl;

	this->recortarStringSemantica(full_text_semantica_parametro);

	this->parametro_a_completar->setSemanticaUsuario(full_text_semantica_parametro);

	antlrcpp::Any retorno_vacio;
	return retorno_vacio;
}

antlrcpp::Any HLSL_ConstructorVisitador::visitRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext *ctx)
{
	this->register_bindeado = getFullText(*ctx);
	std::cout << "RegistrarAlocacionContext:\n" << this->register_bindeado << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context *ctx)
{
	std::cout << "StandardVariableInitializer_Context:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext *ctx)
{
	std::cout << "SamplerStateInitializerContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext *ctx)
{
	std::cout << "ArrayVariableInitializerContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext *ctx)
{
	std::cout << "ExpressionVariableInitializerContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext *ctx)
{
	std::cout << "ArrayElementosInicializadoresContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext *ctx)
{
	std::cout << "SamplerStatePropertyContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext *ctx)
{
	std::cout << "VariableDeclaracionContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext *ctx)
{
	std::cout << "VariableDeclaradoresContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitVariableDeclarador(HLSL_Parser::VariableDeclaradorContext *ctx)
{
	std::cout << "VariableDeclaradorContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext *ctx)
{
    std::cout << "ArrayRankingEspecificadorContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext *ctx)
{
	this->packetoffset_bindeado = getFullText(*ctx);
	std::cout << "PackOffsetNodoContext:\n" << this->packetoffset_bindeado << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitStorageFlags(HLSL_Parser::StorageFlagsContext *ctx)
{
	this->storage_flag_bindeada = getFullText(*ctx);
	std::cout << "StorageFlagsContext:\n" << this->storage_flag_bindeada << std::endl;
	
	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitStorageFlag(HLSL_Parser::StorageFlagContext *ctx)
{
	std::cout << "StorageFlagContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitReferencia(HLSL_Parser::ReferenciaContext *ctx)
{
	std::cout << "ReferenciaContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipo(HLSL_Parser::TipoContext *ctx)
{
	this->tipo_bindeado = getFullText(*ctx);
	std::cout << "TipoContext:\n" << this->tipo_bindeado << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoEscalar(HLSL_Parser::TipoEscalarContext *ctx)
{
	std::cout << "TipoEscalarContext:\n" << getFullText(*ctx) << std::endl;
	
	this->fragmento->agregarVariableDeclarada(this->variable_a_completar);

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoTextura(HLSL_Parser::TipoTexturaContext *ctx)
{
	std::cout << "TipoTexturaContext:\n" << getFullText(*ctx) << std::endl;

    if (this->contiene(this->tipo_bindeado, "2D"))
    {
        if (this->contiene(this->tipo_bindeado, "Array"))
        {
            this->fragmento->agregarVariableTextura2DArray(this->variable_a_completar);
        }
        else
        {
            this->fragmento->agregarVariableTextura2D(this->variable_a_completar);
        }
    }
    else
    {
        this->fragmento->agregarVariableTextura3D(this->variable_a_completar);
    }

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext *ctx)
{
	std::cout << "TipoTexturaMSContext:\n" << getFullText(*ctx) << std::endl;

    if (this->contiene(this->tipo_bindeado, "Array"))
    {
        this->fragmento->agregarVariableTextura2DArray(this->variable_a_completar);
    }
    else
    {
        this->fragmento->agregarVariableTextura2D(this->variable_a_completar);
    }

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoVector(HLSL_Parser::TipoVectorContext *ctx)
{
	std::cout << "TipoVectorContext:\n" << getFullText(*ctx) << std::endl;
	
	this->fragmento->agregarVariableDeclarada(this->variable_a_completar);
	
	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoMatriz(HLSL_Parser::TipoMatrizContext *ctx)
{
	std::cout << "TipoMatrizContext:\n" << getFullText(*ctx) << std::endl; 
	
	this->fragmento->agregarVariableDeclarada(this->variable_a_completar);

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoSample(HLSL_Parser::TipoSampleContext *ctx)
{
	std::cout << "TipoSampleContext:\n" << getFullText(*ctx) << std::endl;

	this->fragmento->agregarVariableSampler(this->variable_a_completar);

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoVoid(HLSL_Parser::TipoVoidContext *ctx)
{
	std::cout << "TipoVoidContext:\n" << getFullText(*ctx) << std::endl;
	
	this->fragmento->agregarVariableDeclarada(this->variable_a_completar);

	return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitLiteral(HLSL_Parser::LiteralContext *ctx)
{
    this->tamanio_array_bindeado = std::stoi(getFullText(*ctx));
	std::cout << "LiteralContext:\n" << getFullText(*ctx) << std::endl; return visitChildren(ctx);
}

antlrcpp::Any HLSL_ConstructorVisitador::visitTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext *ctx)
{
	std::cout << "TipoDefinidoPorUsuarioContext:\n" << getFullText(*ctx) << std::endl;
    
    this->fragmento->agregarVariableDeclarada(this->variable_a_completar);

    return visitChildren(ctx);
}

// METODOS INTERNOS

std::string HLSL_ConstructorVisitador::getFullText(antlr4::ParserRuleContext context)
{
	if (context.start == NULL || context.stop == NULL || context.start->getStartIndex() < 0 || context.stop->getStopIndex() < 0)
	{
		return context.getText(); // Fallback
	}

	antlr4::misc::Interval intervalo(context.start->getStartIndex(), context.stop->getStopIndex());
	return context.start->getInputStream()->getText(intervalo);
}

GeneradorShader::Publicador::Fragmento* HLSL_ConstructorVisitador::getFragmento()
{
	return this->fragmento;
}

GeneradorShader::Publicador::IDeclaracion::Register* HLSL_ConstructorVisitador::reconocerRegister(std::string string_register)
{
	if (string_register.empty())
	{
		return NULL;
	}

	Publicador::IDeclaracion::Register* registracion = new Publicador::IDeclaracion::Register();

	// parseo el tipo
	unsigned int pos_parentesis_abierto = string_register.find("(");
	std::string tipo = string_register.substr(pos_parentesis_abierto + 1, 1);

	// parseo el numero
	unsigned int pos_parentesis_cerrado = string_register.find(")");

	unsigned int cantidad_de_numeros = pos_parentesis_cerrado - (pos_parentesis_abierto + 2);
	std::string string_numero = string_register.substr(pos_parentesis_abierto + 2, cantidad_de_numeros);

	// parseo el subcomponentes
	unsigned int pos_corchete_abierto = string_register.find("[");
	unsigned int pos_corchete_cerrado = string_register.find("]");

	if (std::string::npos != pos_corchete_abierto)
	{
		std::string string_subcomponente = string_register.substr(pos_corchete_abierto + 1, (pos_corchete_abierto - pos_corchete_cerrado) - 1);
		registracion->subcomponente = std::stoi(string_subcomponente);
	}

	registracion->numero = std::stoi(string_numero);
	registracion->tipo = tipo;

	return registracion;
}

GeneradorShader::Publicador::IDeclaracion::PacketOffset* HLSL_ConstructorVisitador::reconocerPacketOffset(std::string string_packetoffset)
{
	if (string_packetoffset.empty())
	{
		return NULL;
	}

	Publicador::IDeclaracion::PacketOffset* packet_offset = new Publicador::IDeclaracion::PacketOffset();

	unsigned int pos_comienzo_numero = string_packetoffset.find("(") + 2;

	unsigned int pos_final_numero = string_packetoffset.find(")");

	unsigned int posicion_punto = string_packetoffset.find(".");

	unsigned int numero = 0;
	if (std::string::npos != posicion_punto)
	{
		unsigned int posicion_comienzo_subcomponente = posicion_punto + 1;
		unsigned int posicion_final_subcomponente = pos_final_numero;

		pos_final_numero = posicion_punto;

		packet_offset->componente = string_packetoffset.substr(posicion_comienzo_subcomponente, (posicion_final_subcomponente - posicion_comienzo_subcomponente));
	}

	std::string string_numero = string_packetoffset.substr(pos_comienzo_numero, (pos_final_numero - pos_comienzo_numero));
	packet_offset->numero = std::stoi(string_numero);

	return packet_offset;
}

std::vector<GeneradorShader::Publicador::VariableShader*> HLSL_ConstructorVisitador::reconocerVariablesDeCBuffer(std::string string_bloque_de_codigo)
{
	// elimino los "{" y "}" que estan ubicados en el 1er y ultimo lugar respectivamente
	string_bloque_de_codigo.erase(string_bloque_de_codigo.begin());
	string_bloque_de_codigo.erase(string_bloque_de_codigo.end() - 1);

	// reemplazo los saltos de lineas y los tabs.
	std::replace(string_bloque_de_codigo.begin(), string_bloque_de_codigo.end(), '\n', ' ');
	std::replace(string_bloque_de_codigo.begin(), string_bloque_de_codigo.end(), '\t', ' ');

	std::vector<std::string> string_variables = this->separarString(string_bloque_de_codigo, ';');
	std::vector<GeneradorShader::Publicador::VariableShader*> variables;

	GeneradorShader::Publicador::VariableShader* variable;
	for (std::vector<std::string>::iterator it = string_variables.begin(); it != string_variables.end(); it++)
	{
		std::string string_variable = this->trim(*it);

		if (string_variable.empty())
		{
			continue;
		}

		variable = new GeneradorShader::Publicador::VariableShader();

		std::vector<std::string> secciones_variable = this->separarString(string_variable, ':');

		// la 1er seccion es "<tipo> <nombre>[<index>]". las separo y analizo el "tipo".
		std::vector<std::string> campos = this->separarString(secciones_variable[0], ' ');
		std::string tipo = campos[0];
		std::string nombre_y_array = campos[1];

        std::string nombre = nombre_y_array;
        unsigned int tamanio_array = 1;
        // si tiene un "[", entonces es un array.
        if (std::string::npos != nombre_y_array.find('['))
        {
            // elimino el ultimo "]": ahora me queda "<nombre>[<index>".
            nombre_y_array.erase(nombre_y_array.end() - 1);
            std::vector<std::string> secciones_nombre_y_array = this->separarString(nombre_y_array, '[');
            nombre = secciones_nombre_y_array[0];
            tamanio_array = std::stoi(secciones_nombre_y_array[1]);
        }

		variable->setTextoDeclaracion(string_variable);
		variable->setTipo(tipo);
		variable->setNombre(nombre);
        variable->setTamanioArray(tamanio_array);

		unsigned int tamanio_memoria_tipo = this->reconocerTamanioTipoVariable(tipo);
		variable->setTamanioMemoria(tamanio_memoria_tipo * tamanio_array);

		for (std::vector<std::string>::iterator it = secciones_variable.begin() + 1; it != secciones_variable.end(); it++)
		{// itero desde la 2da seccion hasta ultima para ver que es cada seccion. Evito la 1era xq se q es el tipo y nombre de variable.
			std::string seccion_variable = this->trim(*it);

			// si tiene packetoffset, lo parseo el packetoffset
			unsigned int posicion_pakcetoffset = seccion_variable.find("packoffset");
			if (std::string::npos != posicion_pakcetoffset)
			{
				// seteo 22 para el subtring xq como maximo la parte del packetoffset tiene 22 caracteres
				GeneradorShader::Publicador::IDeclaracion::PacketOffset* packetoffset = this->reconocerPacketOffset(seccion_variable);
				variable->setPacketOffset(packetoffset);
				continue;
			}

			unsigned int posicion_register = seccion_variable.find("register");
			if (std::string::npos != posicion_register)
			{
				// seteo 22 para el subtring xq como maximo la parte del packetoffset tiene 22 caracteres
				GeneradorShader::Publicador::IDeclaracion::Register* registracion = this->reconocerRegister(seccion_variable);
				variable->setRegister(registracion);
				continue;
			}

			// si no es ni "packetoffset" ni "register", entonces tiene q ser semantica
			variable->setSematica(seccion_variable);
		}

		variables.push_back(variable);
	}

	return variables;
}

unsigned int HLSL_ConstructorVisitador::reconocerTamanioTipoVariable(std::string tipo)
{
    if (this->esTipoDefinidoPorUsuario(tipo))
    {
        return this->calcularTamanioTipoDefinidoPorUsuario(tipo);
    }

	if (this->esMatriz(tipo))
	{
		return this->calcularTamanioTipoMatriz(tipo);
	}

	if (this->esVector(tipo))
	{
		return this->calcularTamanioTipoVector(tipo);
	}

	// si no es matriz ni vector, entonces es escalar.
	return this->calcularTamanioTipoEscalar(tipo);
}

bool HLSL_ConstructorVisitador::esTipoDefinidoPorUsuario(std::string tipo)
{
    std::unordered_map<std::string, GeneradorShader::Publicador::StructShader*>::iterator it = this->tipos_definidos_por_usuario.find(tipo);

    if (it != this->tipos_definidos_por_usuario.end())
    {
        return true;
    }
    return false;
}

bool HLSL_ConstructorVisitador::esMatriz(std::string tipo)
{
	if (std::string::npos != tipo.find("matrix"))
	{
		return true;
	}

	char anteultimo_caracter = *(tipo.end() - 2);

	if (anteultimo_caracter == 'x')
	{// si la anteultima letra es una 'x', entonces el tipo es de la forma: float4x4, int3x3, etc etc.
		return true;
	}

	return false;
}

bool HLSL_ConstructorVisitador::esVector(std::string tipo)
{
	if (std::string::npos != tipo.find("vector"))
	{
		return true;
	}

	char ultimo_caracter = *(tipo.end() - 1);

	if (ultimo_caracter == '1' || ultimo_caracter == '2' || ultimo_caracter == '3' || ultimo_caracter == '4')
	{// si la ultima letra es un numero entre 1 y 4, entonces el tipo es de la forma: float2, int4, etc etc.
		return true;
	}

	return false;
}

bool HLSL_ConstructorVisitador::esEscalar(std::string tipo)
{
	if (false == this->esMatriz(tipo) && false == this->esVector(tipo))
	{
		return true;
	}
	return false;
}

unsigned int HLSL_ConstructorVisitador::calcularTamanioTipoDefinidoPorUsuario(std::string tipo_definido_por_usuario)
{
    std::unordered_map<std::string, GeneradorShader::Publicador::StructShader*>::iterator it = this->tipos_definidos_por_usuario.find(tipo_definido_por_usuario);

    return it->second->getTamanioMemoria();
}

unsigned int HLSL_ConstructorVisitador::calcularTamanioTipoMatriz(std::string matriz)
{
	unsigned int index_columna = 0;
	unsigned int index_fila = 0;

	std::string tipo = "";
	unsigned int tamanio_tipo = 0; // en bytes.

	if (0 == matriz.compare("matrix"))
	{// si solo es de tipo 'matrix', entonces por default es una matriz de tipo 'float4x4'.
		return 64;
	}

	if (std::string::npos != tipo.find("matrix"))
	{// si contiene la palabra "matrix", entonces es de la forma "matrix<float,4,4>". la posicion de los indicies siempre sera la misma: ".end() - 2" y ".end() - 4".

	 // como obtengo un char, le resto '0': esto me devuelve la distancia del caracter del index al '0', que es lo mismo que su valor numerico.
		index_columna = *(matriz.end() - 4) - '0';
		index_fila = *(matriz.end() - 2) - '0';
		tipo.insert(tipo.begin(), matriz.begin() + 7, matriz.end() - 5);
	}
	else
	{// si no contiene la palabra "matrix", entonces es de la forma "float4x4". la posicion de los indicies siempre sera la misma: ".end() - 3" y ".end() - 1".
		index_columna = *(matriz.end() - 3) - '0';
		index_fila = *(matriz.end() - 1) - '0';
		tipo.insert(tipo.begin(), matriz.begin(), matriz.end() - 3);
	}

	tamanio_tipo = this->tamanioTipo(tipo);

	return tamanio_tipo * index_columna * index_fila;
}

unsigned int HLSL_ConstructorVisitador::calcularTamanioTipoVector(std::string vector)
{
	unsigned int index = 0;

	std::string tipo = "";
	unsigned int tamanio_tipo = 0; // en bytes.

	if (0 == vector.compare("vector"))
	{// si solo es de tipo 'matrix', entonces por default es una matriz de tipo 'float4'.
		return 16;
	}

	if (std::string::npos != tipo.find("vector"))
	{// si contiene la palabra "vector", entonces es de la forma "vector<float,4>". la posicion del indicie siempre sera la misma: ".end() - 2".

	 // como obtengo un char, le resto '0': esto me devuelve la distancia del caracter del index al '0', que es lo mismo que su valor numerico.
		index = *(vector.end() - 2) - '0';
		tipo.insert(tipo.begin(), vector.begin() + 7, vector.end() - 3);
	}
	else
	{// si no contiene la palabra "vector", entonces es de la forma "float4". la posicion del indicie siempre sera la misma: ".end() - 1".
		index = *(vector.end() - 1) - '0';
		tipo.insert(tipo.begin(), vector.begin(), vector.end() - 1);
	}

	tamanio_tipo = this->tamanioTipo(tipo);

	return tamanio_tipo * index;
}

unsigned int HLSL_ConstructorVisitador::calcularTamanioTipoEscalar(std::string escalar)
{
	return this->tamanioTipo(escalar);
}

unsigned int HLSL_ConstructorVisitador::tamanioTipo(std::string tipo)
{
	unsigned int tamanio_tipo = 0;
	if ( 0 == tipo.compare("int") || 0 == tipo.compare("uint") || 0 == tipo.compare("dword") || 0 == tipo.compare("float"))
	{
		tamanio_tipo = 4; // 4 bytes;
	}

	if (0 == tipo.compare("half"))
	{
		tamanio_tipo = 2;
	}

	if (0 == tipo.compare("double"))
	{
		tamanio_tipo = 8;
	}

	if (0 == tipo.compare("bool"))
	{
		tamanio_tipo = 1;
	}

	return tamanio_tipo;
}

std::vector<std::string> HLSL_ConstructorVisitador::separarString(std::string string_bloque_de_codigo, char separador)
{
	std::stringstream ss;
	ss.str(string_bloque_de_codigo);

	std::string item;
	std::vector<std::string> tokens;
	while (getline(ss, item, separador))
	{
		tokens.push_back(item);
	}
	return tokens;
}

std::string HLSL_ConstructorVisitador::trim(std::string seccion_variable)
{
	size_t first = seccion_variable.find_first_not_of(' ');
	if (first == std::string::npos)
		return "";
	size_t last = seccion_variable.find_last_not_of(' ');
	return seccion_variable.substr(first, (last - first + 1));
}

bool HLSL_ConstructorVisitador::contiene(std::string a_evaluar, std::string a_encontrar)
{
    std::size_t encontrado = a_evaluar.find(a_encontrar);
    if (encontrado != std::string::npos)
    {
        return true;
    }
    return false;
}



void HLSL_ConstructorVisitador::recortarStringSemantica(std::string & semantica_con_los_dos_puntos)
{
	semantica_con_los_dos_puntos.erase(0, 2);
}

