// parser/listener/visitor header section

// Generated from HLSL_Parser.g4 by ANTLR 4.7

#ifndef GENERADORSHADER_PARSER_HLSLPARSERBASELISTENER_H_
#define GENERADORSHADER_PARSER_HLSLPARSERBASELISTENER_H_

// base listener preinclude section

#include <Parser/HLSL_ParserListener.h>

// base listener postinclude section


// This class provides an empty implementation of HLSL_ParserListener,
// which can be extended to create a listener which only needs to handle a subset
// of the available methods.
 
namespace GeneradorShader
{
namespace Parser
{

class  HLSL_ParserBaseListener : public HLSL_ParserListener {
public:
	/* base listener public declarations/members section */

	virtual void enterMain(HLSL_Parser::MainContext * /*ctx*/) override { }
	virtual void exitMain(HLSL_Parser::MainContext * /*ctx*/) override { }

	virtual void enterDeclaraciones(HLSL_Parser::DeclaracionesContext * /*ctx*/) override { }
	virtual void exitDeclaraciones(HLSL_Parser::DeclaracionesContext * /*ctx*/) override { }

	virtual void enterStructDefinicion(HLSL_Parser::StructDefinicionContext * /*ctx*/) override { }
	virtual void exitStructDefinicion(HLSL_Parser::StructDefinicionContext * /*ctx*/) override { }

	virtual void enterConstantBuffer(HLSL_Parser::ConstantBufferContext * /*ctx*/) override { }
	virtual void exitConstantBuffer(HLSL_Parser::ConstantBufferContext * /*ctx*/) override { }

	virtual void enterFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext * /*ctx*/) override { }
	virtual void exitFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext * /*ctx*/) override { }

	virtual void enterTipoFuncion(HLSL_Parser::TipoFuncionContext * /*ctx*/) override { }
	virtual void exitTipoFuncion(HLSL_Parser::TipoFuncionContext * /*ctx*/) override { }

	virtual void enterNombreFuncion(HLSL_Parser::NombreFuncionContext * /*ctx*/) override { }
	virtual void exitNombreFuncion(HLSL_Parser::NombreFuncionContext * /*ctx*/) override { }

	virtual void enterSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext * /*ctx*/) override { }
	virtual void exitSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext * /*ctx*/) override { }

	virtual void enterBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *ctx) override { };
	virtual void exitBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *ctx) override { };

	virtual void enterFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext * /*ctx*/) override { }
	virtual void exitFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext * /*ctx*/) override { }

	virtual void enterInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext * /*ctx*/) override { }
	virtual void exitInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext * /*ctx*/) override { }

	virtual void enterClaseDefinicion(HLSL_Parser::ClaseDefinicionContext * /*ctx*/) override { }
	virtual void exitClaseDefinicion(HLSL_Parser::ClaseDefinicionContext * /*ctx*/) override { }

	virtual void enterVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext * /*ctx*/) override { }
	virtual void exitVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext * /*ctx*/) override { }

	virtual void enterAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext * /*ctx*/) override { }
	virtual void exitAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext * /*ctx*/) override { }

	virtual void enterAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext * /*ctx*/) override { }
	virtual void exitAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext * /*ctx*/) override { }

	virtual void enterAtributo(HLSL_Parser::AtributoContext * /*ctx*/) override { }
	virtual void exitAtributo(HLSL_Parser::AtributoContext * /*ctx*/) override { }

	virtual void enterNombre(HLSL_Parser::NombreContext * /*ctx*/) override { }
	virtual void exitNombre(HLSL_Parser::NombreContext * /*ctx*/) override { }

	virtual void enterBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext * /*ctx*/) override { }
	virtual void exitBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext * /*ctx*/) override { }

	virtual void enterListaClaseBase(HLSL_Parser::ListaClaseBaseContext * /*ctx*/) override { }
	virtual void exitListaClaseBase(HLSL_Parser::ListaClaseBaseContext * /*ctx*/) override { }

	virtual void enterDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext * /*ctx*/) override { }
	virtual void exitDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext * /*ctx*/) override { }

	virtual void enterSemantica(HLSL_Parser::SemanticaContext * /*ctx*/) override { }
	virtual void exitSemantica(HLSL_Parser::SemanticaContext * /*ctx*/) override { }

	virtual void enterParametros(HLSL_Parser::ParametrosContext * /*ctx*/) override { }
	virtual void exitParametros(HLSL_Parser::ParametrosContext * /*ctx*/) override { }

	virtual void enterParametro(HLSL_Parser::ParametroContext * /*ctx*/) override { }
	virtual void exitParametro(HLSL_Parser::ParametroContext * /*ctx*/) override { }

	virtual void enterStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext * /*ctx*/) override { }
	virtual void exitStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext * /*ctx*/) override { }

	virtual void enterTipoParametro(HLSL_Parser::TipoParametroContext * /*ctx*/) override { }
	virtual void exitTipoParametro(HLSL_Parser::TipoParametroContext * /*ctx*/) override { }

	virtual void enterNombreParametro(HLSL_Parser::NombreParametroContext * /*ctx*/) override { }
	virtual void exitNombreParametro(HLSL_Parser::NombreParametroContext * /*ctx*/) override { }

	virtual void enterSemanticaParametro(HLSL_Parser::SemanticaParametroContext * /*ctx*/) override { }
	virtual void exitSemanticaParametro(HLSL_Parser::SemanticaParametroContext * /*ctx*/) override { }

	virtual void enterRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext * /*ctx*/) override { }
	virtual void exitRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext * /*ctx*/) override { }

	virtual void enterStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context * /*ctx*/) override { }
	virtual void exitStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context * /*ctx*/) override { }

	virtual void enterSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext * /*ctx*/) override { }
	virtual void exitSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext * /*ctx*/) override { }

	virtual void enterArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext * /*ctx*/) override { }
	virtual void exitArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext * /*ctx*/) override { }

	virtual void enterExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext * /*ctx*/) override { }
	virtual void exitExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext * /*ctx*/) override { }

	virtual void enterArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext * /*ctx*/) override { }
	virtual void exitArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext * /*ctx*/) override { }

	virtual void enterSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext * /*ctx*/) override { }
	virtual void exitSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext * /*ctx*/) override { }

	virtual void enterVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext * /*ctx*/) override { }
	virtual void exitVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext * /*ctx*/) override { }

	virtual void enterVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext * /*ctx*/) override { }
	virtual void exitVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext * /*ctx*/) override { }

	virtual void enterVariableDeclarador(HLSL_Parser::VariableDeclaradorContext * /*ctx*/) override { }
	virtual void exitVariableDeclarador(HLSL_Parser::VariableDeclaradorContext * /*ctx*/) override { }

	virtual void enterArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext * /*ctx*/) override { }
	virtual void exitArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext * /*ctx*/) override { }

	virtual void enterPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext * /*ctx*/) override { }
	virtual void exitPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext * /*ctx*/) override { }

	virtual void enterStorageFlags(HLSL_Parser::StorageFlagsContext * /*ctx*/) override { }
	virtual void exitStorageFlags(HLSL_Parser::StorageFlagsContext * /*ctx*/) override { }

	virtual void enterStorageFlag(HLSL_Parser::StorageFlagContext * /*ctx*/) override { }
	virtual void exitStorageFlag(HLSL_Parser::StorageFlagContext * /*ctx*/) override { }

	virtual void enterReferencia(HLSL_Parser::ReferenciaContext * /*ctx*/) override { }
	virtual void exitReferencia(HLSL_Parser::ReferenciaContext * /*ctx*/) override { }

	virtual void enterTipo(HLSL_Parser::TipoContext * /*ctx*/) override { }
	virtual void exitTipo(HLSL_Parser::TipoContext * /*ctx*/) override { }

	virtual void enterTipoEscalar(HLSL_Parser::TipoEscalarContext * /*ctx*/) override { }
	virtual void exitTipoEscalar(HLSL_Parser::TipoEscalarContext * /*ctx*/) override { }

	virtual void enterTipoTextura(HLSL_Parser::TipoTexturaContext * /*ctx*/) override { }
	virtual void exitTipoTextura(HLSL_Parser::TipoTexturaContext * /*ctx*/) override { }

	virtual void enterTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext * /*ctx*/) override { }
	virtual void exitTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext * /*ctx*/) override { }

	virtual void enterTipoVector(HLSL_Parser::TipoVectorContext * /*ctx*/) override { }
	virtual void exitTipoVector(HLSL_Parser::TipoVectorContext * /*ctx*/) override { }

	virtual void enterTipoMatriz(HLSL_Parser::TipoMatrizContext * /*ctx*/) override { }
	virtual void exitTipoMatriz(HLSL_Parser::TipoMatrizContext * /*ctx*/) override { }

	virtual void enterTipoSample(HLSL_Parser::TipoSampleContext * /*ctx*/) override { }
	virtual void exitTipoSample(HLSL_Parser::TipoSampleContext * /*ctx*/) override { }

	virtual void enterTipoVoid(HLSL_Parser::TipoVoidContext * /*ctx*/) override { }
	virtual void exitTipoVoid(HLSL_Parser::TipoVoidContext * /*ctx*/) override { }

	virtual void enterLiteral(HLSL_Parser::LiteralContext * /*ctx*/) override { }
	virtual void exitLiteral(HLSL_Parser::LiteralContext * /*ctx*/) override { }

	virtual void enterTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext * /*ctx*/) override { }
	virtual void exitTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext * /*ctx*/) override { }


	virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
	virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
	virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

private:
	/* base listener private declarations/members section */
};
};
};

#endif // GENERADORSHADER_PARSER_HLSLPARSERBASELISTENER_H_
