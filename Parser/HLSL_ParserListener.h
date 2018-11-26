// parser/listener/visitor header section

// Generated from HLSL_Parser.g4 by ANTLR 4.7

#ifndef GENERADORSHADER_PARSER_HLSLPARSERLISTENER_H_
#define GENERADORSHADER_PARSER_HLSLPARSERLISTENER_H_

// listener preinclude section

#include <Parser/HLSL_Parser.h>

// listener postinclude section

namespace GeneradorShader
{
namespace Parser
{
	
	//	This interface defines an abstract listener for a parse tree produced by HLSL_Parser.

	class  HLSL_ParserListener : public antlr4::tree::ParseTreeListener {

	public:
		/* listener public declarations/members section */

		virtual void enterMain(HLSL_Parser::MainContext *ctx) = 0;
		virtual void exitMain(HLSL_Parser::MainContext *ctx) = 0;

		virtual void enterDeclaraciones(HLSL_Parser::DeclaracionesContext *ctx) = 0;
		virtual void exitDeclaraciones(HLSL_Parser::DeclaracionesContext *ctx) = 0;

		virtual void enterStructDefinicion(HLSL_Parser::StructDefinicionContext *ctx) = 0;
		virtual void exitStructDefinicion(HLSL_Parser::StructDefinicionContext *ctx) = 0;

		virtual void enterConstantBuffer(HLSL_Parser::ConstantBufferContext *ctx) = 0;
		virtual void exitConstantBuffer(HLSL_Parser::ConstantBufferContext *ctx) = 0;

		virtual void enterFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext *ctx) = 0;
		virtual void exitFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext *ctx) = 0;

		virtual void enterTipoFuncion(HLSL_Parser::TipoFuncionContext *ctx) = 0;
		virtual void exitTipoFuncion(HLSL_Parser::TipoFuncionContext *ctx) = 0;

		virtual void enterNombreFuncion(HLSL_Parser::NombreFuncionContext *ctx) = 0;
		virtual void exitNombreFuncion(HLSL_Parser::NombreFuncionContext *ctx) = 0;

		virtual void enterSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext *ctx) = 0;
		virtual void exitSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext *ctx) = 0;

		virtual void enterBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *ctx) = 0;
		virtual void exitBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *ctx) = 0;

		virtual void enterFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext *ctx) = 0;
		virtual void exitFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext *ctx) = 0;

		virtual void enterInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext *ctx) = 0;
		virtual void exitInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext *ctx) = 0;

		virtual void enterClaseDefinicion(HLSL_Parser::ClaseDefinicionContext *ctx) = 0;
		virtual void exitClaseDefinicion(HLSL_Parser::ClaseDefinicionContext *ctx) = 0;

		virtual void enterVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext *ctx) = 0;
		virtual void exitVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext *ctx) = 0;

		virtual void enterAtributo(HLSL_Parser::AtributoContext *ctx) = 0;
		virtual void exitAtributo(HLSL_Parser::AtributoContext *ctx) = 0;

		virtual void enterAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext *ctx) = 0;
		virtual void exitAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext *ctx) = 0;

		virtual void enterAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext *ctx) = 0;
		virtual void exitAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext *ctx) = 0;

		virtual void enterNombre(HLSL_Parser::NombreContext *ctx) = 0;
		virtual void exitNombre(HLSL_Parser::NombreContext *ctx) = 0;

		virtual void enterBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext *ctx) = 0;
		virtual void exitBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext *ctx) = 0;

		virtual void enterListaClaseBase(HLSL_Parser::ListaClaseBaseContext *ctx) = 0;
		virtual void exitListaClaseBase(HLSL_Parser::ListaClaseBaseContext *ctx) = 0;

		virtual void enterDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext *ctx) = 0;
		virtual void exitDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext *ctx) = 0;

		virtual void enterSemantica(HLSL_Parser::SemanticaContext *ctx) = 0;
		virtual void exitSemantica(HLSL_Parser::SemanticaContext *ctx) = 0;

		virtual void enterParametros(HLSL_Parser::ParametrosContext *ctx) = 0;
		virtual void exitParametros(HLSL_Parser::ParametrosContext *ctx) = 0;

		virtual void enterParametro(HLSL_Parser::ParametroContext *ctx) = 0;
		virtual void exitParametro(HLSL_Parser::ParametroContext *ctx) = 0;

		virtual void enterStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext *ctx) = 0;
		virtual void exitStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext *ctx) = 0;

		virtual void enterTipoParametro(HLSL_Parser::TipoParametroContext *ctx) = 0;
		virtual void exitTipoParametro(HLSL_Parser::TipoParametroContext *ctx) = 0;

		virtual void enterNombreParametro(HLSL_Parser::NombreParametroContext *ctx) = 0;
		virtual void exitNombreParametro(HLSL_Parser::NombreParametroContext *ctx) = 0;

		virtual void enterSemanticaParametro(HLSL_Parser::SemanticaParametroContext *ctx) = 0;
		virtual void exitSemanticaParametro(HLSL_Parser::SemanticaParametroContext *ctx) = 0;

		virtual void enterRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext *ctx) = 0;
		virtual void exitRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext *ctx) = 0;

		virtual void enterStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context *ctx) = 0;
		virtual void exitStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context *ctx) = 0;

		virtual void enterSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext *ctx) = 0;
		virtual void exitSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext *ctx) = 0;

		virtual void enterArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext *ctx) = 0;
		virtual void exitArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext *ctx) = 0;

		virtual void enterExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext *ctx) = 0;
		virtual void exitExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext *ctx) = 0;

		virtual void enterArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext *ctx) = 0;
		virtual void exitArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext *ctx) = 0;

		virtual void enterSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext *ctx) = 0;
		virtual void exitSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext *ctx) = 0;

		virtual void enterVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext *ctx) = 0;
		virtual void exitVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext *ctx) = 0;

		virtual void enterVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext *ctx) = 0;
		virtual void exitVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext *ctx) = 0;

		virtual void enterVariableDeclarador(HLSL_Parser::VariableDeclaradorContext *ctx) = 0;
		virtual void exitVariableDeclarador(HLSL_Parser::VariableDeclaradorContext *ctx) = 0;

		virtual void enterArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext *ctx) = 0;
		virtual void exitArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext *ctx) = 0;

		virtual void enterPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext *ctx) = 0;
		virtual void exitPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext *ctx) = 0;

		virtual void enterStorageFlags(HLSL_Parser::StorageFlagsContext *ctx) = 0;
		virtual void exitStorageFlags(HLSL_Parser::StorageFlagsContext *ctx) = 0;

		virtual void enterStorageFlag(HLSL_Parser::StorageFlagContext *ctx) = 0;
		virtual void exitStorageFlag(HLSL_Parser::StorageFlagContext *ctx) = 0;

		virtual void enterReferencia(HLSL_Parser::ReferenciaContext *ctx) = 0;
		virtual void exitReferencia(HLSL_Parser::ReferenciaContext *ctx) = 0;

		virtual void enterTipo(HLSL_Parser::TipoContext *ctx) = 0;
		virtual void exitTipo(HLSL_Parser::TipoContext *ctx) = 0;

		virtual void enterTipoEscalar(HLSL_Parser::TipoEscalarContext *ctx) = 0;
		virtual void exitTipoEscalar(HLSL_Parser::TipoEscalarContext *ctx) = 0;

		virtual void enterTipoTextura(HLSL_Parser::TipoTexturaContext *ctx) = 0;
		virtual void exitTipoTextura(HLSL_Parser::TipoTexturaContext *ctx) = 0;

		virtual void enterTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext *ctx) = 0;
		virtual void exitTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext *ctx) = 0;

		virtual void enterTipoVector(HLSL_Parser::TipoVectorContext *ctx) = 0;
		virtual void exitTipoVector(HLSL_Parser::TipoVectorContext *ctx) = 0;

		virtual void enterTipoMatriz(HLSL_Parser::TipoMatrizContext *ctx) = 0;
		virtual void exitTipoMatriz(HLSL_Parser::TipoMatrizContext *ctx) = 0;

		virtual void enterTipoSample(HLSL_Parser::TipoSampleContext *ctx) = 0;
		virtual void exitTipoSample(HLSL_Parser::TipoSampleContext *ctx) = 0;

		virtual void enterTipoVoid(HLSL_Parser::TipoVoidContext *ctx) = 0;
		virtual void exitTipoVoid(HLSL_Parser::TipoVoidContext *ctx) = 0;

		virtual void enterLiteral(HLSL_Parser::LiteralContext *ctx) = 0;
		virtual void exitLiteral(HLSL_Parser::LiteralContext *ctx) = 0;

		virtual void enterTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext *ctx) = 0;
		virtual void exitTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext *ctx) = 0;


	private:
		/* listener private declarations/members section */
	};
};
};


#endif // GENERADORSHADER_PARSER_HLSLPARSERLISTENER_H_
