// parser/listener/visitor header section

// Generated from HLSL_Parser.g4 by ANTLR 4.7

#ifndef GENERADORSHADER_PARSER_HLSLPARSERVISITOR_H_
#define GENERADORSHADER_PARSER_HLSLPARSERVISITOR_H_

// visitor preinclude section

#include <Parser/HLSL_Parser.h>

// visitor postinclude section

// This class defines an abstract visitor for a parse tree
// produced by HLSL_Parser.
 
namespace GeneradorShader
{
namespace Parser
{

class  HLSL_ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:
	/* visitor public declarations/members section */

	/**
	* Visit parse trees produced by HLSL_Parser.
	*/
	virtual antlrcpp::Any visitMain(HLSL_Parser::MainContext *context) = 0;

	virtual antlrcpp::Any visitDeclaraciones(HLSL_Parser::DeclaracionesContext *context) = 0;

	virtual antlrcpp::Any visitStructDefinicion(HLSL_Parser::StructDefinicionContext *context) = 0;

	virtual antlrcpp::Any visitConstantBuffer(HLSL_Parser::ConstantBufferContext *context) = 0;

	virtual antlrcpp::Any visitFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext *context) = 0;

	virtual antlrcpp::Any visitTipoFuncion(HLSL_Parser::TipoFuncionContext *context) = 0;

	virtual antlrcpp::Any visitNombreFuncion(HLSL_Parser::NombreFuncionContext *context) = 0;

	virtual antlrcpp::Any visitSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext *context) = 0;
	
	virtual antlrcpp::Any visitBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *context) = 0;

	virtual antlrcpp::Any visitFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext *context) = 0;

	virtual antlrcpp::Any visitInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext *context) = 0;

	virtual antlrcpp::Any visitClaseDefinicion(HLSL_Parser::ClaseDefinicionContext *context) = 0;

	virtual antlrcpp::Any visitVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext *context) = 0;

	virtual antlrcpp::Any visitAtributo(HLSL_Parser::AtributoContext *context) = 0;

	virtual antlrcpp::Any visitAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext *context) = 0;

	virtual antlrcpp::Any visitAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext *context) = 0;

	virtual antlrcpp::Any visitNombre(HLSL_Parser::NombreContext *context) = 0;

	virtual antlrcpp::Any visitBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext *context) = 0;

	virtual antlrcpp::Any visitListaClaseBase(HLSL_Parser::ListaClaseBaseContext *context) = 0;

	virtual antlrcpp::Any visitDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext *context) = 0;

	virtual antlrcpp::Any visitSemantica(HLSL_Parser::SemanticaContext *context) = 0;

	virtual antlrcpp::Any visitParametros(HLSL_Parser::ParametrosContext *context) = 0;

	virtual antlrcpp::Any visitParametro(HLSL_Parser::ParametroContext *context) = 0;

	virtual antlrcpp::Any visitStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext *context) = 0;

	virtual antlrcpp::Any visitTipoParametro(HLSL_Parser::TipoParametroContext *context) = 0;

	virtual antlrcpp::Any visitNombreParametro(HLSL_Parser::NombreParametroContext *context) = 0;

	virtual antlrcpp::Any visitSemanticaParametro(HLSL_Parser::SemanticaParametroContext *context) = 0;

	virtual antlrcpp::Any visitRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext *context) = 0;

	virtual antlrcpp::Any visitStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context *context) = 0;

	virtual antlrcpp::Any visitSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext *context) = 0;

	virtual antlrcpp::Any visitArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext *context) = 0;

	virtual antlrcpp::Any visitExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext *context) = 0;

	virtual antlrcpp::Any visitArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext *context) = 0;

	virtual antlrcpp::Any visitSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext *context) = 0;

	virtual antlrcpp::Any visitVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext *context) = 0;

	virtual antlrcpp::Any visitVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext *context) = 0;

	virtual antlrcpp::Any visitVariableDeclarador(HLSL_Parser::VariableDeclaradorContext *context) = 0;

	virtual antlrcpp::Any visitArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext *context) = 0;

	virtual antlrcpp::Any visitPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext *context) = 0;

	virtual antlrcpp::Any visitStorageFlags(HLSL_Parser::StorageFlagsContext *context) = 0;

	virtual antlrcpp::Any visitStorageFlag(HLSL_Parser::StorageFlagContext *context) = 0;

	virtual antlrcpp::Any visitReferencia(HLSL_Parser::ReferenciaContext *context) = 0;

	virtual antlrcpp::Any visitTipo(HLSL_Parser::TipoContext *context) = 0;

	virtual antlrcpp::Any visitTipoEscalar(HLSL_Parser::TipoEscalarContext *context) = 0;

	virtual antlrcpp::Any visitTipoTextura(HLSL_Parser::TipoTexturaContext *context) = 0;

	virtual antlrcpp::Any visitTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext *context) = 0;

	virtual antlrcpp::Any visitTipoVector(HLSL_Parser::TipoVectorContext *context) = 0;

	virtual antlrcpp::Any visitTipoMatriz(HLSL_Parser::TipoMatrizContext *context) = 0;

	virtual antlrcpp::Any visitTipoSample(HLSL_Parser::TipoSampleContext *context) = 0;

	virtual antlrcpp::Any visitTipoVoid(HLSL_Parser::TipoVoidContext *context) = 0;

	virtual antlrcpp::Any visitLiteral(HLSL_Parser::LiteralContext *context) = 0;

	virtual antlrcpp::Any visitTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext *context) = 0;


private:
	/* visitor private declarations/members section */
};
};
};

#endif // GENERADORSHADER_PARSER_HLSLPARSERLISTENER_H_