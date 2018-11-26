/* parser/listener/visitor header section */

// Generated from HLSL_Parser.g4 by ANTLR 4.7

/* parser precinclude section */

#include <Parser/HLSL_ParserListener.h>
#include <Parser/HLSL_ParserVisitor.h>

#include <Parser/HLSL_Parser.h>


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

using namespace antlrcpp;
using namespace antlr4;
using namespace GeneradorShader::Parser;

HLSL_Parser::HLSL_Parser(TokenStream *input) : Parser(input) {
	_interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HLSL_Parser::~HLSL_Parser() {
	delete _interpreter;
}

std::string HLSL_Parser::getGrammarFileName() const {
	return "HLSL_Parser.g4";
}

const std::vector<std::string>& HLSL_Parser::getRuleNames() const {
	return _ruleNames;
}

dfa::Vocabulary& HLSL_Parser::getVocabulary() const {
	return _vocabulary;
}

/* parser definitions section */

//----------------- MainContext ------------------------------------------------------------------

HLSL_Parser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::MainContext::EOF() {
	return getToken(HLSL_Parser::EOF, 0);
}

std::vector<HLSL_Parser::DeclaracionesContext *> HLSL_Parser::MainContext::declaraciones() {
	return getRuleContexts<HLSL_Parser::DeclaracionesContext>();
}

HLSL_Parser::DeclaracionesContext* HLSL_Parser::MainContext::declaraciones(size_t i) {
	return getRuleContext<HLSL_Parser::DeclaracionesContext>(i);
}


size_t HLSL_Parser::MainContext::getRuleIndex() const {
	return HLSL_Parser::RuleMain;
}

void HLSL_Parser::MainContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterMain(this);
}

void HLSL_Parser::MainContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitMain(this);
}


antlrcpp::Any HLSL_Parser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitMain(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::MainContext* HLSL_Parser::main() {
	MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
	enterRule(_localctx, 0, HLSL_Parser::RuleMain);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(103);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while ((((_la & ~0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << HLSL_Parser::Bool)
				| (1ULL << HLSL_Parser::Bool1)
				| (1ULL << HLSL_Parser::Bool2)
				| (1ULL << HLSL_Parser::Bool3)
				| (1ULL << HLSL_Parser::Bool4)
				| (1ULL << HLSL_Parser::Bool1x1)
				| (1ULL << HLSL_Parser::Bool1x2)
				| (1ULL << HLSL_Parser::Bool1x3)
				| (1ULL << HLSL_Parser::Bool1x4)
				| (1ULL << HLSL_Parser::Bool2x1)
				| (1ULL << HLSL_Parser::Bool2x2)
				| (1ULL << HLSL_Parser::Bool2x3)
				| (1ULL << HLSL_Parser::Bool2x4)
				| (1ULL << HLSL_Parser::Bool3x1)
				| (1ULL << HLSL_Parser::Bool3x2)
				| (1ULL << HLSL_Parser::Bool3x3)
				| (1ULL << HLSL_Parser::Bool3x4)
				| (1ULL << HLSL_Parser::Bool4x1)
				| (1ULL << HLSL_Parser::Bool4x2)
				| (1ULL << HLSL_Parser::Bool4x3)
				| (1ULL << HLSL_Parser::Bool4x4)
				| (1ULL << HLSL_Parser::Double)
				| (1ULL << HLSL_Parser::Double1)
				| (1ULL << HLSL_Parser::Double2)
				| (1ULL << HLSL_Parser::Double3)
				| (1ULL << HLSL_Parser::Double4)
				| (1ULL << HLSL_Parser::Double1x1)
				| (1ULL << HLSL_Parser::Double1x2)
				| (1ULL << HLSL_Parser::Double1x3)
				| (1ULL << HLSL_Parser::Double1x4)
				| (1ULL << HLSL_Parser::Double2x1)
				| (1ULL << HLSL_Parser::Double2x2)
				| (1ULL << HLSL_Parser::Double2x3)
				| (1ULL << HLSL_Parser::Double2x4)
				| (1ULL << HLSL_Parser::Double3x1)
				| (1ULL << HLSL_Parser::Double3x2)
				| (1ULL << HLSL_Parser::Double3x3)
				| (1ULL << HLSL_Parser::Double3x4)
				| (1ULL << HLSL_Parser::Double4x1)
				| (1ULL << HLSL_Parser::Double4x2)
				| (1ULL << HLSL_Parser::Double4x3)
				| (1ULL << HLSL_Parser::Double4x4)
				| (1ULL << HLSL_Parser::Float)
				| (1ULL << HLSL_Parser::Float1)
				| (1ULL << HLSL_Parser::Float2)
				| (1ULL << HLSL_Parser::Float3)
				| (1ULL << HLSL_Parser::Float4)
				| (1ULL << HLSL_Parser::Float1x1)
				| (1ULL << HLSL_Parser::Float1x2)
				| (1ULL << HLSL_Parser::Float1x3)
				| (1ULL << HLSL_Parser::Float1x4)
				| (1ULL << HLSL_Parser::Float2x1)
				| (1ULL << HLSL_Parser::Float2x2)
				| (1ULL << HLSL_Parser::Float2x3)
				| (1ULL << HLSL_Parser::Float2x4)
				| (1ULL << HLSL_Parser::Float3x1)
				| (1ULL << HLSL_Parser::Float3x2)
				| (1ULL << HLSL_Parser::Float3x3)
				| (1ULL << HLSL_Parser::Float3x4)
				| (1ULL << HLSL_Parser::Float4x1)
				| (1ULL << HLSL_Parser::Float4x2))) != 0) || ((((_la - 64) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (HLSL_Parser::Float4x3 - 64))
					| (1ULL << (HLSL_Parser::Float4x4 - 64))
					| (1ULL << (HLSL_Parser::Half - 64))
					| (1ULL << (HLSL_Parser::Half1 - 64))
					| (1ULL << (HLSL_Parser::Half2 - 64))
					| (1ULL << (HLSL_Parser::Half3 - 64))
					| (1ULL << (HLSL_Parser::Half4 - 64))
					| (1ULL << (HLSL_Parser::Half1x1 - 64))
					| (1ULL << (HLSL_Parser::Half1x2 - 64))
					| (1ULL << (HLSL_Parser::Half1x3 - 64))
					| (1ULL << (HLSL_Parser::Half1x4 - 64))
					| (1ULL << (HLSL_Parser::Half2x1 - 64))
					| (1ULL << (HLSL_Parser::Half2x2 - 64))
					| (1ULL << (HLSL_Parser::Half2x3 - 64))
					| (1ULL << (HLSL_Parser::Half2x4 - 64))
					| (1ULL << (HLSL_Parser::Half3x1 - 64))
					| (1ULL << (HLSL_Parser::Half3x2 - 64))
					| (1ULL << (HLSL_Parser::Half3x3 - 64))
					| (1ULL << (HLSL_Parser::Half3x4 - 64))
					| (1ULL << (HLSL_Parser::Half4x1 - 64))
					| (1ULL << (HLSL_Parser::Half4x2 - 64))
					| (1ULL << (HLSL_Parser::Half4x3 - 64))
					| (1ULL << (HLSL_Parser::Half4x4 - 64))
					| (1ULL << (HLSL_Parser::Int - 64))
					| (1ULL << (HLSL_Parser::Int1 - 64))
					| (1ULL << (HLSL_Parser::Int2 - 64))
					| (1ULL << (HLSL_Parser::Int3 - 64))
					| (1ULL << (HLSL_Parser::Int4 - 64))
					| (1ULL << (HLSL_Parser::Int1x1 - 64))
					| (1ULL << (HLSL_Parser::Int1x2 - 64))
					| (1ULL << (HLSL_Parser::Int1x3 - 64))
					| (1ULL << (HLSL_Parser::Int1x4 - 64))
					| (1ULL << (HLSL_Parser::Int2x1 - 64))
					| (1ULL << (HLSL_Parser::Int2x2 - 64))
					| (1ULL << (HLSL_Parser::Int2x3 - 64))
					| (1ULL << (HLSL_Parser::Int2x4 - 64))
					| (1ULL << (HLSL_Parser::Int3x1 - 64))
					| (1ULL << (HLSL_Parser::Int3x2 - 64))
					| (1ULL << (HLSL_Parser::Int3x3 - 64))
					| (1ULL << (HLSL_Parser::Int3x4 - 64))
					| (1ULL << (HLSL_Parser::Int4x1 - 64))
					| (1ULL << (HLSL_Parser::Int4x2 - 64))
					| (1ULL << (HLSL_Parser::Int4x3 - 64))
					| (1ULL << (HLSL_Parser::Int4x4 - 64))
					| (1ULL << (HLSL_Parser::Texture1D - 64))
					| (1ULL << (HLSL_Parser::Texture1DArray - 64))
					| (1ULL << (HLSL_Parser::Texture2D - 64))
					| (1ULL << (HLSL_Parser::Texture2DArray - 64))
					| (1ULL << (HLSL_Parser::Texture2DMS - 64))
					| (1ULL << (HLSL_Parser::Texture2DMSArray - 64))
					| (1ULL << (HLSL_Parser::Texture3D - 64))
					| (1ULL << (HLSL_Parser::TextureCube - 64))
					| (1ULL << (HLSL_Parser::TextureCubeArray - 64))
					| (1ULL << (HLSL_Parser::Triangle - 64))
					| (1ULL << (HLSL_Parser::Uint - 64))
					| (1ULL << (HLSL_Parser::Uint1 - 64))
					| (1ULL << (HLSL_Parser::Uint2 - 64))
					| (1ULL << (HLSL_Parser::Uint3 - 64))
					| (1ULL << (HLSL_Parser::Uint4 - 64))
					| (1ULL << (HLSL_Parser::Uint1x1 - 64))
					| (1ULL << (HLSL_Parser::Uint1x2 - 64))
					| (1ULL << (HLSL_Parser::Uint1x3 - 64))
					| (1ULL << (HLSL_Parser::Uint1x4 - 64)))) != 0) || ((((_la - 128) & ~0x3fULL) == 0) &&
					((1ULL << (_la - 128)) & ((1ULL << (HLSL_Parser::Uint2x1 - 128))
						| (1ULL << (HLSL_Parser::Uint2x2 - 128))
						| (1ULL << (HLSL_Parser::Uint2x3 - 128))
						| (1ULL << (HLSL_Parser::Uint2x4 - 128))
						| (1ULL << (HLSL_Parser::Uint3x1 - 128))
						| (1ULL << (HLSL_Parser::Uint3x2 - 128))
						| (1ULL << (HLSL_Parser::Uint3x3 - 128))
						| (1ULL << (HLSL_Parser::Uint3x4 - 128))
						| (1ULL << (HLSL_Parser::Uint4x1 - 128))
						| (1ULL << (HLSL_Parser::Uint4x2 - 128))
						| (1ULL << (HLSL_Parser::Uint4x3 - 128))
						| (1ULL << (HLSL_Parser::Uint4x4 - 128))
						| (1ULL << (HLSL_Parser::Vector - 128))
						| (1ULL << (HLSL_Parser::CBuffer - 128))
						| (1ULL << (HLSL_Parser::Centroid - 128))
						| (1ULL << (HLSL_Parser::Class - 128))
						| (1ULL << (HLSL_Parser::ColumnMajor - 128))
						| (1ULL << (HLSL_Parser::Const - 128))
						| (1ULL << (HLSL_Parser::Extern - 128))
						| (1ULL << (HLSL_Parser::Groupshared - 128))
						| (1ULL << (HLSL_Parser::In - 128))
						| (1ULL << (HLSL_Parser::Inout - 128))
						| (1ULL << (HLSL_Parser::Interface - 128))
						| (1ULL << (HLSL_Parser::Line_ - 128))
						| (1ULL << (HLSL_Parser::LineAdj - 128))
						| (1ULL << (HLSL_Parser::Linear - 128))
						| (1ULL << (HLSL_Parser::Matrix - 128))
						| (1ULL << (HLSL_Parser::Nointerpolation - 128))
						| (1ULL << (HLSL_Parser::Noperspective - 128))
						| (1ULL << (HLSL_Parser::Out - 128))
						| (1ULL << (HLSL_Parser::Point - 128))
						| (1ULL << (HLSL_Parser::Precise - 128))
						| (1ULL << (HLSL_Parser::RowMajor - 128))
						| (1ULL << (HLSL_Parser::Sample - 128))
						| (1ULL << (HLSL_Parser::Sampler - 128))
						| (1ULL << (HLSL_Parser::SamplerComparisonState - 128))
						| (1ULL << (HLSL_Parser::SamplerState - 128))
						| (1ULL << (HLSL_Parser::Shared - 128))
						| (1ULL << (HLSL_Parser::Static - 128))
						| (1ULL << (HLSL_Parser::Struct - 128)))) != 0) || ((((_la - 192) & ~0x3fULL) == 0) &&
						((1ULL << (_la - 192)) & ((1ULL << (HLSL_Parser::TriangleAdj - 192))
							| (1ULL << (HLSL_Parser::Uniform - 192))
							| (1ULL << (HLSL_Parser::Volatile - 192))
							| (1ULL << (HLSL_Parser::Void - 192))
							| (1ULL << (HLSL_Parser::ID - 192))
							| (1ULL << (HLSL_Parser::CorcheteAbierto - 192)))) != 0)) {
			setState(100);
			declaraciones();
			setState(105);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
		setState(106);
		match(HLSL_Parser::EOF);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- DeclaracionesContext ------------------------------------------------------------------

HLSL_Parser::DeclaracionesContext::DeclaracionesContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::StructDefinicionContext* HLSL_Parser::DeclaracionesContext::structDefinicion() {
	return getRuleContext<HLSL_Parser::StructDefinicionContext>(0);
}

HLSL_Parser::FuncionDefinicionContext* HLSL_Parser::DeclaracionesContext::funcionDefinicion() {
	return getRuleContext<HLSL_Parser::FuncionDefinicionContext>(0);
}

HLSL_Parser::ClaseDefinicionContext* HLSL_Parser::DeclaracionesContext::claseDefinicion() {
	return getRuleContext<HLSL_Parser::ClaseDefinicionContext>(0);
}

HLSL_Parser::ConstantBufferContext* HLSL_Parser::DeclaracionesContext::constantBuffer() {
	return getRuleContext<HLSL_Parser::ConstantBufferContext>(0);
}

HLSL_Parser::VariableDeclaracionSentenciaContext* HLSL_Parser::DeclaracionesContext::variableDeclaracionSentencia() {
	return getRuleContext<HLSL_Parser::VariableDeclaracionSentenciaContext>(0);
}

HLSL_Parser::InterfazDefinicionContext* HLSL_Parser::DeclaracionesContext::interfazDefinicion() {
	return getRuleContext<HLSL_Parser::InterfazDefinicionContext>(0);
}

HLSL_Parser::FuncionDeclaracionContext* HLSL_Parser::DeclaracionesContext::funcionDeclaracion() {
	return getRuleContext<HLSL_Parser::FuncionDeclaracionContext>(0);
}


size_t HLSL_Parser::DeclaracionesContext::getRuleIndex() const {
	return HLSL_Parser::RuleDeclaraciones;
}

void HLSL_Parser::DeclaracionesContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterDeclaraciones(this);
}

void HLSL_Parser::DeclaracionesContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitDeclaraciones(this);
}


antlrcpp::Any HLSL_Parser::DeclaracionesContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitDeclaraciones(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::DeclaracionesContext* HLSL_Parser::declaraciones() {
	DeclaracionesContext *_localctx = _tracker.createInstance<DeclaracionesContext>(_ctx, getState());
	enterRule(_localctx, 2, HLSL_Parser::RuleDeclaraciones);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		setState(115);
		_errHandler->sync(this);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
		case 1: {
			enterOuterAlt(_localctx, 1);
			setState(108);
			structDefinicion();
			break;
		}

		case 2: {
			enterOuterAlt(_localctx, 2);
			setState(109);
			funcionDefinicion();
			break;
		}

		case 3: {
			enterOuterAlt(_localctx, 3);
			setState(110);
			claseDefinicion();
			break;
		}

		case 4: {
			enterOuterAlt(_localctx, 4);
			setState(111);
			constantBuffer();
			break;
		}

		case 5: {
			enterOuterAlt(_localctx, 5);
			setState(112);
			variableDeclaracionSentencia();
			break;
		}

		case 6: {
			enterOuterAlt(_localctx, 6);
			setState(113);
			interfazDefinicion();
			break;
		}

		case 7: {
			enterOuterAlt(_localctx, 7);
			setState(114);
			funcionDeclaracion();
			break;
		}

		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- StructDefinicionContext ------------------------------------------------------------------

HLSL_Parser::StructDefinicionContext::StructDefinicionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::NombreContext* HLSL_Parser::StructDefinicionContext::nombre() {
	return getRuleContext<HLSL_Parser::NombreContext>(0);
}

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::StructDefinicionContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}

tree::TerminalNode* HLSL_Parser::StructDefinicionContext::Struct() {
	return getToken(HLSL_Parser::Struct, 0);
}

tree::TerminalNode* HLSL_Parser::StructDefinicionContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}


size_t HLSL_Parser::StructDefinicionContext::getRuleIndex() const {
	return HLSL_Parser::RuleStructDefinicion;
}

void HLSL_Parser::StructDefinicionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterStructDefinicion(this);
}

void HLSL_Parser::StructDefinicionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitStructDefinicion(this);
}


antlrcpp::Any HLSL_Parser::StructDefinicionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitStructDefinicion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::StructDefinicionContext* HLSL_Parser::structDefinicion() {
	StructDefinicionContext *_localctx = _tracker.createInstance<StructDefinicionContext>(_ctx, getState());
	enterRule(_localctx, 4, HLSL_Parser::RuleStructDefinicion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(117);
		dynamic_cast<StructDefinicionContext *>(_localctx)->StructKeyword = match(HLSL_Parser::Struct);
		setState(118);
		nombre();
		setState(119);
		bloqueDeCodigo();
		setState(120);
		dynamic_cast<StructDefinicionContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ConstantBufferContext ------------------------------------------------------------------

HLSL_Parser::ConstantBufferContext::ConstantBufferContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::NombreContext* HLSL_Parser::ConstantBufferContext::nombre() {
	return getRuleContext<HLSL_Parser::NombreContext>(0);
}

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::ConstantBufferContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}

tree::TerminalNode* HLSL_Parser::ConstantBufferContext::CBuffer() {
	return getToken(HLSL_Parser::CBuffer, 0);
}

HLSL_Parser::RegistrarAlocacionContext* HLSL_Parser::ConstantBufferContext::registrarAlocacion() {
	return getRuleContext<HLSL_Parser::RegistrarAlocacionContext>(0);
}

HLSL_Parser::SemanticaContext* HLSL_Parser::ConstantBufferContext::semantica() {
	return getRuleContext<HLSL_Parser::SemanticaContext>(0);
}

tree::TerminalNode* HLSL_Parser::ConstantBufferContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}


size_t HLSL_Parser::ConstantBufferContext::getRuleIndex() const {
	return HLSL_Parser::RuleConstantBuffer;
}

void HLSL_Parser::ConstantBufferContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterConstantBuffer(this);
}

void HLSL_Parser::ConstantBufferContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitConstantBuffer(this);
}


antlrcpp::Any HLSL_Parser::ConstantBufferContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitConstantBuffer(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ConstantBufferContext* HLSL_Parser::constantBuffer() {
	ConstantBufferContext *_localctx = _tracker.createInstance<ConstantBufferContext>(_ctx, getState());
	enterRule(_localctx, 6, HLSL_Parser::RuleConstantBuffer);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(122);
		dynamic_cast<ConstantBufferContext *>(_localctx)->CBufferKeyword = match(HLSL_Parser::CBuffer);
		setState(123);
		nombre();
		setState(125);
		_errHandler->sync(this);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
		case 1: {
			setState(124);
			registrarAlocacion();
			break;
		}

		}
		setState(128);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::DosPuntos) {
			setState(127);
			semantica();
		}
		setState(130);
		bloqueDeCodigo();
		setState(132);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::PuntoYComa) {
			setState(131);
			dynamic_cast<ConstantBufferContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- FuncionDefinicionContext ------------------------------------------------------------------

HLSL_Parser::FuncionDefinicionContext::FuncionDefinicionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoFuncionContext* HLSL_Parser::FuncionDefinicionContext::tipoFuncion() {
	return getRuleContext<HLSL_Parser::TipoFuncionContext>(0);
}

HLSL_Parser::NombreFuncionContext* HLSL_Parser::FuncionDefinicionContext::nombreFuncion() {
	return getRuleContext<HLSL_Parser::NombreFuncionContext>(0);
}

HLSL_Parser::BloqueDeCodigoFuncionContext* HLSL_Parser::FuncionDefinicionContext::bloqueDeCodigoFuncion() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoFuncionContext>(0);
}

tree::TerminalNode* HLSL_Parser::FuncionDefinicionContext::ParentesisAbierto() {
	return getToken(HLSL_Parser::ParentesisAbierto, 0);
}

tree::TerminalNode* HLSL_Parser::FuncionDefinicionContext::ParentesisCerrado() {
	return getToken(HLSL_Parser::ParentesisCerrado, 0);
}

std::vector<HLSL_Parser::AtributoContext *> HLSL_Parser::FuncionDefinicionContext::atributo() {
	return getRuleContexts<HLSL_Parser::AtributoContext>();
}

HLSL_Parser::AtributoContext* HLSL_Parser::FuncionDefinicionContext::atributo(size_t i) {
	return getRuleContext<HLSL_Parser::AtributoContext>(i);
}

HLSL_Parser::ParametrosContext* HLSL_Parser::FuncionDefinicionContext::parametros() {
	return getRuleContext<HLSL_Parser::ParametrosContext>(0);
}

HLSL_Parser::SemanticaFuncionContext* HLSL_Parser::FuncionDefinicionContext::semanticaFuncion() {
	return getRuleContext<HLSL_Parser::SemanticaFuncionContext>(0);
}

tree::TerminalNode* HLSL_Parser::FuncionDefinicionContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}

tree::TerminalNode* HLSL_Parser::FuncionDefinicionContext::DobleDosPuntos() {
	return getToken(HLSL_Parser::DobleDosPuntos, 0);
}

tree::TerminalNode* HLSL_Parser::FuncionDefinicionContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}


size_t HLSL_Parser::FuncionDefinicionContext::getRuleIndex() const {
	return HLSL_Parser::RuleFuncionDefinicion;
}

void HLSL_Parser::FuncionDefinicionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterFuncionDefinicion(this);
}

void HLSL_Parser::FuncionDefinicionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitFuncionDefinicion(this);
}


antlrcpp::Any HLSL_Parser::FuncionDefinicionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitFuncionDefinicion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::FuncionDefinicionContext* HLSL_Parser::funcionDefinicion() {
	FuncionDefinicionContext *_localctx = _tracker.createInstance<FuncionDefinicionContext>(_ctx, getState());
	enterRule(_localctx, 8, HLSL_Parser::RuleFuncionDefinicion);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(137);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == HLSL_Parser::CorcheteAbierto) {
			setState(134);
			atributo();
			setState(139);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
		setState(140);
		tipoFuncion();
		setState(143);
		_errHandler->sync(this);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
		case 1: {
			setState(141);
			dynamic_cast<FuncionDefinicionContext *>(_localctx)->NombreClase = match(HLSL_Parser::ID);
			setState(142);
			dynamic_cast<FuncionDefinicionContext *>(_localctx)->DobleDosPuntosToken = match(HLSL_Parser::DobleDosPuntos);
			break;
		}

		}
		setState(145);
		nombreFuncion();
		setState(146);
		dynamic_cast<FuncionDefinicionContext *>(_localctx)->ParentesisAbiertoToken = match(HLSL_Parser::ParentesisAbierto);
		setState(148);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if ((((_la & ~0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << HLSL_Parser::Bool)
				| (1ULL << HLSL_Parser::Bool1)
				| (1ULL << HLSL_Parser::Bool2)
				| (1ULL << HLSL_Parser::Bool3)
				| (1ULL << HLSL_Parser::Bool4)
				| (1ULL << HLSL_Parser::Bool1x1)
				| (1ULL << HLSL_Parser::Bool1x2)
				| (1ULL << HLSL_Parser::Bool1x3)
				| (1ULL << HLSL_Parser::Bool1x4)
				| (1ULL << HLSL_Parser::Bool2x1)
				| (1ULL << HLSL_Parser::Bool2x2)
				| (1ULL << HLSL_Parser::Bool2x3)
				| (1ULL << HLSL_Parser::Bool2x4)
				| (1ULL << HLSL_Parser::Bool3x1)
				| (1ULL << HLSL_Parser::Bool3x2)
				| (1ULL << HLSL_Parser::Bool3x3)
				| (1ULL << HLSL_Parser::Bool3x4)
				| (1ULL << HLSL_Parser::Bool4x1)
				| (1ULL << HLSL_Parser::Bool4x2)
				| (1ULL << HLSL_Parser::Bool4x3)
				| (1ULL << HLSL_Parser::Bool4x4)
				| (1ULL << HLSL_Parser::Double)
				| (1ULL << HLSL_Parser::Double1)
				| (1ULL << HLSL_Parser::Double2)
				| (1ULL << HLSL_Parser::Double3)
				| (1ULL << HLSL_Parser::Double4)
				| (1ULL << HLSL_Parser::Double1x1)
				| (1ULL << HLSL_Parser::Double1x2)
				| (1ULL << HLSL_Parser::Double1x3)
				| (1ULL << HLSL_Parser::Double1x4)
				| (1ULL << HLSL_Parser::Double2x1)
				| (1ULL << HLSL_Parser::Double2x2)
				| (1ULL << HLSL_Parser::Double2x3)
				| (1ULL << HLSL_Parser::Double2x4)
				| (1ULL << HLSL_Parser::Double3x1)
				| (1ULL << HLSL_Parser::Double3x2)
				| (1ULL << HLSL_Parser::Double3x3)
				| (1ULL << HLSL_Parser::Double3x4)
				| (1ULL << HLSL_Parser::Double4x1)
				| (1ULL << HLSL_Parser::Double4x2)
				| (1ULL << HLSL_Parser::Double4x3)
				| (1ULL << HLSL_Parser::Double4x4)
				| (1ULL << HLSL_Parser::Float)
				| (1ULL << HLSL_Parser::Float1)
				| (1ULL << HLSL_Parser::Float2)
				| (1ULL << HLSL_Parser::Float3)
				| (1ULL << HLSL_Parser::Float4)
				| (1ULL << HLSL_Parser::Float1x1)
				| (1ULL << HLSL_Parser::Float1x2)
				| (1ULL << HLSL_Parser::Float1x3)
				| (1ULL << HLSL_Parser::Float1x4)
				| (1ULL << HLSL_Parser::Float2x1)
				| (1ULL << HLSL_Parser::Float2x2)
				| (1ULL << HLSL_Parser::Float2x3)
				| (1ULL << HLSL_Parser::Float2x4)
				| (1ULL << HLSL_Parser::Float3x1)
				| (1ULL << HLSL_Parser::Float3x2)
				| (1ULL << HLSL_Parser::Float3x3)
				| (1ULL << HLSL_Parser::Float3x4)
				| (1ULL << HLSL_Parser::Float4x1)
				| (1ULL << HLSL_Parser::Float4x2))) != 0) || ((((_la - 64) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (HLSL_Parser::Float4x3 - 64))
					| (1ULL << (HLSL_Parser::Float4x4 - 64))
					| (1ULL << (HLSL_Parser::Half - 64))
					| (1ULL << (HLSL_Parser::Half1 - 64))
					| (1ULL << (HLSL_Parser::Half2 - 64))
					| (1ULL << (HLSL_Parser::Half3 - 64))
					| (1ULL << (HLSL_Parser::Half4 - 64))
					| (1ULL << (HLSL_Parser::Half1x1 - 64))
					| (1ULL << (HLSL_Parser::Half1x2 - 64))
					| (1ULL << (HLSL_Parser::Half1x3 - 64))
					| (1ULL << (HLSL_Parser::Half1x4 - 64))
					| (1ULL << (HLSL_Parser::Half2x1 - 64))
					| (1ULL << (HLSL_Parser::Half2x2 - 64))
					| (1ULL << (HLSL_Parser::Half2x3 - 64))
					| (1ULL << (HLSL_Parser::Half2x4 - 64))
					| (1ULL << (HLSL_Parser::Half3x1 - 64))
					| (1ULL << (HLSL_Parser::Half3x2 - 64))
					| (1ULL << (HLSL_Parser::Half3x3 - 64))
					| (1ULL << (HLSL_Parser::Half3x4 - 64))
					| (1ULL << (HLSL_Parser::Half4x1 - 64))
					| (1ULL << (HLSL_Parser::Half4x2 - 64))
					| (1ULL << (HLSL_Parser::Half4x3 - 64))
					| (1ULL << (HLSL_Parser::Half4x4 - 64))
					| (1ULL << (HLSL_Parser::Int - 64))
					| (1ULL << (HLSL_Parser::Int1 - 64))
					| (1ULL << (HLSL_Parser::Int2 - 64))
					| (1ULL << (HLSL_Parser::Int3 - 64))
					| (1ULL << (HLSL_Parser::Int4 - 64))
					| (1ULL << (HLSL_Parser::Int1x1 - 64))
					| (1ULL << (HLSL_Parser::Int1x2 - 64))
					| (1ULL << (HLSL_Parser::Int1x3 - 64))
					| (1ULL << (HLSL_Parser::Int1x4 - 64))
					| (1ULL << (HLSL_Parser::Int2x1 - 64))
					| (1ULL << (HLSL_Parser::Int2x2 - 64))
					| (1ULL << (HLSL_Parser::Int2x3 - 64))
					| (1ULL << (HLSL_Parser::Int2x4 - 64))
					| (1ULL << (HLSL_Parser::Int3x1 - 64))
					| (1ULL << (HLSL_Parser::Int3x2 - 64))
					| (1ULL << (HLSL_Parser::Int3x3 - 64))
					| (1ULL << (HLSL_Parser::Int3x4 - 64))
					| (1ULL << (HLSL_Parser::Int4x1 - 64))
					| (1ULL << (HLSL_Parser::Int4x2 - 64))
					| (1ULL << (HLSL_Parser::Int4x3 - 64))
					| (1ULL << (HLSL_Parser::Int4x4 - 64))
					| (1ULL << (HLSL_Parser::Texture1D - 64))
					| (1ULL << (HLSL_Parser::Texture1DArray - 64))
					| (1ULL << (HLSL_Parser::Texture2D - 64))
					| (1ULL << (HLSL_Parser::Texture2DArray - 64))
					| (1ULL << (HLSL_Parser::Texture2DMS - 64))
					| (1ULL << (HLSL_Parser::Texture2DMSArray - 64))
					| (1ULL << (HLSL_Parser::Texture3D - 64))
					| (1ULL << (HLSL_Parser::TextureCube - 64))
					| (1ULL << (HLSL_Parser::TextureCubeArray - 64))
					| (1ULL << (HLSL_Parser::Triangle - 64))
					| (1ULL << (HLSL_Parser::Uint - 64))
					| (1ULL << (HLSL_Parser::Uint1 - 64))
					| (1ULL << (HLSL_Parser::Uint2 - 64))
					| (1ULL << (HLSL_Parser::Uint3 - 64))
					| (1ULL << (HLSL_Parser::Uint4 - 64))
					| (1ULL << (HLSL_Parser::Uint1x1 - 64))
					| (1ULL << (HLSL_Parser::Uint1x2 - 64))
					| (1ULL << (HLSL_Parser::Uint1x3 - 64))
					| (1ULL << (HLSL_Parser::Uint1x4 - 64)))) != 0) || ((((_la - 128) & ~0x3fULL) == 0) &&
					((1ULL << (_la - 128)) & ((1ULL << (HLSL_Parser::Uint2x1 - 128))
						| (1ULL << (HLSL_Parser::Uint2x2 - 128))
						| (1ULL << (HLSL_Parser::Uint2x3 - 128))
						| (1ULL << (HLSL_Parser::Uint2x4 - 128))
						| (1ULL << (HLSL_Parser::Uint3x1 - 128))
						| (1ULL << (HLSL_Parser::Uint3x2 - 128))
						| (1ULL << (HLSL_Parser::Uint3x3 - 128))
						| (1ULL << (HLSL_Parser::Uint3x4 - 128))
						| (1ULL << (HLSL_Parser::Uint4x1 - 128))
						| (1ULL << (HLSL_Parser::Uint4x2 - 128))
						| (1ULL << (HLSL_Parser::Uint4x3 - 128))
						| (1ULL << (HLSL_Parser::Uint4x4 - 128))
						| (1ULL << (HLSL_Parser::Vector - 128))
						| (1ULL << (HLSL_Parser::Centroid - 128))
						| (1ULL << (HLSL_Parser::ColumnMajor - 128))
						| (1ULL << (HLSL_Parser::Const - 128))
						| (1ULL << (HLSL_Parser::Extern - 128))
						| (1ULL << (HLSL_Parser::Groupshared - 128))
						| (1ULL << (HLSL_Parser::In - 128))
						| (1ULL << (HLSL_Parser::Inout - 128))
						| (1ULL << (HLSL_Parser::Line_ - 128))
						| (1ULL << (HLSL_Parser::LineAdj - 128))
						| (1ULL << (HLSL_Parser::Linear - 128))
						| (1ULL << (HLSL_Parser::Matrix - 128))
						| (1ULL << (HLSL_Parser::Nointerpolation - 128))
						| (1ULL << (HLSL_Parser::Noperspective - 128))
						| (1ULL << (HLSL_Parser::Out - 128))
						| (1ULL << (HLSL_Parser::Point - 128))
						| (1ULL << (HLSL_Parser::Precise - 128))
						| (1ULL << (HLSL_Parser::RowMajor - 128))
						| (1ULL << (HLSL_Parser::Sample - 128))
						| (1ULL << (HLSL_Parser::Sampler - 128))
						| (1ULL << (HLSL_Parser::SamplerComparisonState - 128))
						| (1ULL << (HLSL_Parser::SamplerState - 128))
						| (1ULL << (HLSL_Parser::Shared - 128))
						| (1ULL << (HLSL_Parser::Static - 128)))) != 0) || ((((_la - 192) & ~0x3fULL) == 0) &&
						((1ULL << (_la - 192)) & ((1ULL << (HLSL_Parser::TriangleAdj - 192))
							| (1ULL << (HLSL_Parser::Uniform - 192))
							| (1ULL << (HLSL_Parser::Volatile - 192))
							| (1ULL << (HLSL_Parser::Void - 192))
							| (1ULL << (HLSL_Parser::ID - 192)))) != 0)) {
			setState(147);
			parametros();
		}
		setState(150);
		dynamic_cast<FuncionDefinicionContext *>(_localctx)->ParentesisCerradoToken = match(HLSL_Parser::ParentesisCerrado);
		setState(152);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::DosPuntos) {
			setState(151);
			semanticaFuncion();
		}
		setState(154);
		bloqueDeCodigoFuncion();
		setState(156);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::PuntoYComa) {
			setState(155);
			dynamic_cast<FuncionDefinicionContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoFuncionContext ------------------------------------------------------------------

HLSL_Parser::TipoFuncionContext::TipoFuncionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoContext* HLSL_Parser::TipoFuncionContext::tipo() {
	return getRuleContext<HLSL_Parser::TipoContext>(0);
}


size_t HLSL_Parser::TipoFuncionContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoFuncion;
}

void HLSL_Parser::TipoFuncionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoFuncion(this);
}

void HLSL_Parser::TipoFuncionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoFuncion(this);
}


antlrcpp::Any HLSL_Parser::TipoFuncionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoFuncion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoFuncionContext* HLSL_Parser::tipoFuncion() {
	TipoFuncionContext *_localctx = _tracker.createInstance<TipoFuncionContext>(_ctx, getState());
	enterRule(_localctx, 10, HLSL_Parser::RuleTipoFuncion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(158);
		tipo();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- NombreFuncionContext ------------------------------------------------------------------

HLSL_Parser::NombreFuncionContext::NombreFuncionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::NombreFuncionContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}


size_t HLSL_Parser::NombreFuncionContext::getRuleIndex() const {
	return HLSL_Parser::RuleNombreFuncion;
}

void HLSL_Parser::NombreFuncionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNombreFuncion(this);
}

void HLSL_Parser::NombreFuncionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNombreFuncion(this);
}


antlrcpp::Any HLSL_Parser::NombreFuncionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitNombreFuncion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::NombreFuncionContext* HLSL_Parser::nombreFuncion() {
	NombreFuncionContext *_localctx = _tracker.createInstance<NombreFuncionContext>(_ctx, getState());
	enterRule(_localctx, 12, HLSL_Parser::RuleNombreFuncion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(160);
		match(HLSL_Parser::ID);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- SemanticaFuncionContext ------------------------------------------------------------------

HLSL_Parser::SemanticaFuncionContext::SemanticaFuncionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::SemanticaContext* HLSL_Parser::SemanticaFuncionContext::semantica() {
	return getRuleContext<HLSL_Parser::SemanticaContext>(0);
}


size_t HLSL_Parser::SemanticaFuncionContext::getRuleIndex() const {
	return HLSL_Parser::RuleSemanticaFuncion;
}

void HLSL_Parser::SemanticaFuncionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterSemanticaFuncion(this);
}

void HLSL_Parser::SemanticaFuncionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitSemanticaFuncion(this);
}


antlrcpp::Any HLSL_Parser::SemanticaFuncionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitSemanticaFuncion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::SemanticaFuncionContext* HLSL_Parser::semanticaFuncion() {
	SemanticaFuncionContext *_localctx = _tracker.createInstance<SemanticaFuncionContext>(_ctx, getState());
	enterRule(_localctx, 14, HLSL_Parser::RuleSemanticaFuncion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(162);
		semantica();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- BloqueDeCodigoFuncionContext ------------------------------------------------------------------

HLSL_Parser::BloqueDeCodigoFuncionContext::BloqueDeCodigoFuncionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::BloqueDeCodigoFuncionContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}


size_t HLSL_Parser::BloqueDeCodigoFuncionContext::getRuleIndex() const {
	return HLSL_Parser::RuleBloqueDeCodigoFuncion;
}

void HLSL_Parser::BloqueDeCodigoFuncionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterBloqueDeCodigoFuncion(this);
}

void HLSL_Parser::BloqueDeCodigoFuncionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitBloqueDeCodigoFuncion(this);
}


antlrcpp::Any HLSL_Parser::BloqueDeCodigoFuncionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitBloqueDeCodigoFuncion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::BloqueDeCodigoFuncionContext* HLSL_Parser::bloqueDeCodigoFuncion() {
	BloqueDeCodigoFuncionContext *_localctx = _tracker.createInstance<BloqueDeCodigoFuncionContext>(_ctx, getState());
	enterRule(_localctx, 16, HLSL_Parser::RuleBloqueDeCodigoFuncion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(164);
		bloqueDeCodigo();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- FuncionDeclaracionContext ------------------------------------------------------------------

HLSL_Parser::FuncionDeclaracionContext::FuncionDeclaracionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoContext* HLSL_Parser::FuncionDeclaracionContext::tipo() {
	return getRuleContext<HLSL_Parser::TipoContext>(0);
}

HLSL_Parser::NombreContext* HLSL_Parser::FuncionDeclaracionContext::nombre() {
	return getRuleContext<HLSL_Parser::NombreContext>(0);
}

tree::TerminalNode* HLSL_Parser::FuncionDeclaracionContext::ParentesisAbierto() {
	return getToken(HLSL_Parser::ParentesisAbierto, 0);
}

tree::TerminalNode* HLSL_Parser::FuncionDeclaracionContext::ParentesisCerrado() {
	return getToken(HLSL_Parser::ParentesisCerrado, 0);
}

tree::TerminalNode* HLSL_Parser::FuncionDeclaracionContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}

std::vector<HLSL_Parser::AtributoContext *> HLSL_Parser::FuncionDeclaracionContext::atributo() {
	return getRuleContexts<HLSL_Parser::AtributoContext>();
}

HLSL_Parser::AtributoContext* HLSL_Parser::FuncionDeclaracionContext::atributo(size_t i) {
	return getRuleContext<HLSL_Parser::AtributoContext>(i);
}

HLSL_Parser::ParametrosContext* HLSL_Parser::FuncionDeclaracionContext::parametros() {
	return getRuleContext<HLSL_Parser::ParametrosContext>(0);
}

HLSL_Parser::SemanticaContext* HLSL_Parser::FuncionDeclaracionContext::semantica() {
	return getRuleContext<HLSL_Parser::SemanticaContext>(0);
}


size_t HLSL_Parser::FuncionDeclaracionContext::getRuleIndex() const {
	return HLSL_Parser::RuleFuncionDeclaracion;
}

void HLSL_Parser::FuncionDeclaracionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterFuncionDeclaracion(this);
}

void HLSL_Parser::FuncionDeclaracionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitFuncionDeclaracion(this);
}


antlrcpp::Any HLSL_Parser::FuncionDeclaracionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitFuncionDeclaracion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::FuncionDeclaracionContext* HLSL_Parser::funcionDeclaracion() {
	FuncionDeclaracionContext *_localctx = _tracker.createInstance<FuncionDeclaracionContext>(_ctx, getState());
	enterRule(_localctx, 18, HLSL_Parser::RuleFuncionDeclaracion);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(169);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == HLSL_Parser::CorcheteAbierto) {
			setState(166);
			atributo();
			setState(171);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
		setState(172);
		tipo();
		setState(173);
		nombre();
		setState(174);
		dynamic_cast<FuncionDeclaracionContext *>(_localctx)->ParentesisAbiertoToken = match(HLSL_Parser::ParentesisAbierto);
		setState(176);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if ((((_la & ~0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << HLSL_Parser::Bool)
				| (1ULL << HLSL_Parser::Bool1)
				| (1ULL << HLSL_Parser::Bool2)
				| (1ULL << HLSL_Parser::Bool3)
				| (1ULL << HLSL_Parser::Bool4)
				| (1ULL << HLSL_Parser::Bool1x1)
				| (1ULL << HLSL_Parser::Bool1x2)
				| (1ULL << HLSL_Parser::Bool1x3)
				| (1ULL << HLSL_Parser::Bool1x4)
				| (1ULL << HLSL_Parser::Bool2x1)
				| (1ULL << HLSL_Parser::Bool2x2)
				| (1ULL << HLSL_Parser::Bool2x3)
				| (1ULL << HLSL_Parser::Bool2x4)
				| (1ULL << HLSL_Parser::Bool3x1)
				| (1ULL << HLSL_Parser::Bool3x2)
				| (1ULL << HLSL_Parser::Bool3x3)
				| (1ULL << HLSL_Parser::Bool3x4)
				| (1ULL << HLSL_Parser::Bool4x1)
				| (1ULL << HLSL_Parser::Bool4x2)
				| (1ULL << HLSL_Parser::Bool4x3)
				| (1ULL << HLSL_Parser::Bool4x4)
				| (1ULL << HLSL_Parser::Double)
				| (1ULL << HLSL_Parser::Double1)
				| (1ULL << HLSL_Parser::Double2)
				| (1ULL << HLSL_Parser::Double3)
				| (1ULL << HLSL_Parser::Double4)
				| (1ULL << HLSL_Parser::Double1x1)
				| (1ULL << HLSL_Parser::Double1x2)
				| (1ULL << HLSL_Parser::Double1x3)
				| (1ULL << HLSL_Parser::Double1x4)
				| (1ULL << HLSL_Parser::Double2x1)
				| (1ULL << HLSL_Parser::Double2x2)
				| (1ULL << HLSL_Parser::Double2x3)
				| (1ULL << HLSL_Parser::Double2x4)
				| (1ULL << HLSL_Parser::Double3x1)
				| (1ULL << HLSL_Parser::Double3x2)
				| (1ULL << HLSL_Parser::Double3x3)
				| (1ULL << HLSL_Parser::Double3x4)
				| (1ULL << HLSL_Parser::Double4x1)
				| (1ULL << HLSL_Parser::Double4x2)
				| (1ULL << HLSL_Parser::Double4x3)
				| (1ULL << HLSL_Parser::Double4x4)
				| (1ULL << HLSL_Parser::Float)
				| (1ULL << HLSL_Parser::Float1)
				| (1ULL << HLSL_Parser::Float2)
				| (1ULL << HLSL_Parser::Float3)
				| (1ULL << HLSL_Parser::Float4)
				| (1ULL << HLSL_Parser::Float1x1)
				| (1ULL << HLSL_Parser::Float1x2)
				| (1ULL << HLSL_Parser::Float1x3)
				| (1ULL << HLSL_Parser::Float1x4)
				| (1ULL << HLSL_Parser::Float2x1)
				| (1ULL << HLSL_Parser::Float2x2)
				| (1ULL << HLSL_Parser::Float2x3)
				| (1ULL << HLSL_Parser::Float2x4)
				| (1ULL << HLSL_Parser::Float3x1)
				| (1ULL << HLSL_Parser::Float3x2)
				| (1ULL << HLSL_Parser::Float3x3)
				| (1ULL << HLSL_Parser::Float3x4)
				| (1ULL << HLSL_Parser::Float4x1)
				| (1ULL << HLSL_Parser::Float4x2))) != 0) || ((((_la - 64) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (HLSL_Parser::Float4x3 - 64))
					| (1ULL << (HLSL_Parser::Float4x4 - 64))
					| (1ULL << (HLSL_Parser::Half - 64))
					| (1ULL << (HLSL_Parser::Half1 - 64))
					| (1ULL << (HLSL_Parser::Half2 - 64))
					| (1ULL << (HLSL_Parser::Half3 - 64))
					| (1ULL << (HLSL_Parser::Half4 - 64))
					| (1ULL << (HLSL_Parser::Half1x1 - 64))
					| (1ULL << (HLSL_Parser::Half1x2 - 64))
					| (1ULL << (HLSL_Parser::Half1x3 - 64))
					| (1ULL << (HLSL_Parser::Half1x4 - 64))
					| (1ULL << (HLSL_Parser::Half2x1 - 64))
					| (1ULL << (HLSL_Parser::Half2x2 - 64))
					| (1ULL << (HLSL_Parser::Half2x3 - 64))
					| (1ULL << (HLSL_Parser::Half2x4 - 64))
					| (1ULL << (HLSL_Parser::Half3x1 - 64))
					| (1ULL << (HLSL_Parser::Half3x2 - 64))
					| (1ULL << (HLSL_Parser::Half3x3 - 64))
					| (1ULL << (HLSL_Parser::Half3x4 - 64))
					| (1ULL << (HLSL_Parser::Half4x1 - 64))
					| (1ULL << (HLSL_Parser::Half4x2 - 64))
					| (1ULL << (HLSL_Parser::Half4x3 - 64))
					| (1ULL << (HLSL_Parser::Half4x4 - 64))
					| (1ULL << (HLSL_Parser::Int - 64))
					| (1ULL << (HLSL_Parser::Int1 - 64))
					| (1ULL << (HLSL_Parser::Int2 - 64))
					| (1ULL << (HLSL_Parser::Int3 - 64))
					| (1ULL << (HLSL_Parser::Int4 - 64))
					| (1ULL << (HLSL_Parser::Int1x1 - 64))
					| (1ULL << (HLSL_Parser::Int1x2 - 64))
					| (1ULL << (HLSL_Parser::Int1x3 - 64))
					| (1ULL << (HLSL_Parser::Int1x4 - 64))
					| (1ULL << (HLSL_Parser::Int2x1 - 64))
					| (1ULL << (HLSL_Parser::Int2x2 - 64))
					| (1ULL << (HLSL_Parser::Int2x3 - 64))
					| (1ULL << (HLSL_Parser::Int2x4 - 64))
					| (1ULL << (HLSL_Parser::Int3x1 - 64))
					| (1ULL << (HLSL_Parser::Int3x2 - 64))
					| (1ULL << (HLSL_Parser::Int3x3 - 64))
					| (1ULL << (HLSL_Parser::Int3x4 - 64))
					| (1ULL << (HLSL_Parser::Int4x1 - 64))
					| (1ULL << (HLSL_Parser::Int4x2 - 64))
					| (1ULL << (HLSL_Parser::Int4x3 - 64))
					| (1ULL << (HLSL_Parser::Int4x4 - 64))
					| (1ULL << (HLSL_Parser::Texture1D - 64))
					| (1ULL << (HLSL_Parser::Texture1DArray - 64))
					| (1ULL << (HLSL_Parser::Texture2D - 64))
					| (1ULL << (HLSL_Parser::Texture2DArray - 64))
					| (1ULL << (HLSL_Parser::Texture2DMS - 64))
					| (1ULL << (HLSL_Parser::Texture2DMSArray - 64))
					| (1ULL << (HLSL_Parser::Texture3D - 64))
					| (1ULL << (HLSL_Parser::TextureCube - 64))
					| (1ULL << (HLSL_Parser::TextureCubeArray - 64))
					| (1ULL << (HLSL_Parser::Triangle - 64))
					| (1ULL << (HLSL_Parser::Uint - 64))
					| (1ULL << (HLSL_Parser::Uint1 - 64))
					| (1ULL << (HLSL_Parser::Uint2 - 64))
					| (1ULL << (HLSL_Parser::Uint3 - 64))
					| (1ULL << (HLSL_Parser::Uint4 - 64))
					| (1ULL << (HLSL_Parser::Uint1x1 - 64))
					| (1ULL << (HLSL_Parser::Uint1x2 - 64))
					| (1ULL << (HLSL_Parser::Uint1x3 - 64))
					| (1ULL << (HLSL_Parser::Uint1x4 - 64)))) != 0) || ((((_la - 128) & ~0x3fULL) == 0) &&
					((1ULL << (_la - 128)) & ((1ULL << (HLSL_Parser::Uint2x1 - 128))
						| (1ULL << (HLSL_Parser::Uint2x2 - 128))
						| (1ULL << (HLSL_Parser::Uint2x3 - 128))
						| (1ULL << (HLSL_Parser::Uint2x4 - 128))
						| (1ULL << (HLSL_Parser::Uint3x1 - 128))
						| (1ULL << (HLSL_Parser::Uint3x2 - 128))
						| (1ULL << (HLSL_Parser::Uint3x3 - 128))
						| (1ULL << (HLSL_Parser::Uint3x4 - 128))
						| (1ULL << (HLSL_Parser::Uint4x1 - 128))
						| (1ULL << (HLSL_Parser::Uint4x2 - 128))
						| (1ULL << (HLSL_Parser::Uint4x3 - 128))
						| (1ULL << (HLSL_Parser::Uint4x4 - 128))
						| (1ULL << (HLSL_Parser::Vector - 128))
						| (1ULL << (HLSL_Parser::Centroid - 128))
						| (1ULL << (HLSL_Parser::ColumnMajor - 128))
						| (1ULL << (HLSL_Parser::Const - 128))
						| (1ULL << (HLSL_Parser::Extern - 128))
						| (1ULL << (HLSL_Parser::Groupshared - 128))
						| (1ULL << (HLSL_Parser::In - 128))
						| (1ULL << (HLSL_Parser::Inout - 128))
						| (1ULL << (HLSL_Parser::Line_ - 128))
						| (1ULL << (HLSL_Parser::LineAdj - 128))
						| (1ULL << (HLSL_Parser::Linear - 128))
						| (1ULL << (HLSL_Parser::Matrix - 128))
						| (1ULL << (HLSL_Parser::Nointerpolation - 128))
						| (1ULL << (HLSL_Parser::Noperspective - 128))
						| (1ULL << (HLSL_Parser::Out - 128))
						| (1ULL << (HLSL_Parser::Point - 128))
						| (1ULL << (HLSL_Parser::Precise - 128))
						| (1ULL << (HLSL_Parser::RowMajor - 128))
						| (1ULL << (HLSL_Parser::Sample - 128))
						| (1ULL << (HLSL_Parser::Sampler - 128))
						| (1ULL << (HLSL_Parser::SamplerComparisonState - 128))
						| (1ULL << (HLSL_Parser::SamplerState - 128))
						| (1ULL << (HLSL_Parser::Shared - 128))
						| (1ULL << (HLSL_Parser::Static - 128)))) != 0) || ((((_la - 192) & ~0x3fULL) == 0) &&
						((1ULL << (_la - 192)) & ((1ULL << (HLSL_Parser::TriangleAdj - 192))
							| (1ULL << (HLSL_Parser::Uniform - 192))
							| (1ULL << (HLSL_Parser::Volatile - 192))
							| (1ULL << (HLSL_Parser::Void - 192))
							| (1ULL << (HLSL_Parser::ID - 192)))) != 0)) {
			setState(175);
			parametros();
		}
		setState(178);
		dynamic_cast<FuncionDeclaracionContext *>(_localctx)->ParentesisCerradoToken = match(HLSL_Parser::ParentesisCerrado);
		setState(180);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::DosPuntos) {
			setState(179);
			semantica();
		}
		setState(182);
		dynamic_cast<FuncionDeclaracionContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- InterfazDefinicionContext ------------------------------------------------------------------

HLSL_Parser::InterfazDefinicionContext::InterfazDefinicionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::NombreContext* HLSL_Parser::InterfazDefinicionContext::nombre() {
	return getRuleContext<HLSL_Parser::NombreContext>(0);
}

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::InterfazDefinicionContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}

tree::TerminalNode* HLSL_Parser::InterfazDefinicionContext::Interface() {
	return getToken(HLSL_Parser::Interface, 0);
}

tree::TerminalNode* HLSL_Parser::InterfazDefinicionContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}


size_t HLSL_Parser::InterfazDefinicionContext::getRuleIndex() const {
	return HLSL_Parser::RuleInterfazDefinicion;
}

void HLSL_Parser::InterfazDefinicionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterInterfazDefinicion(this);
}

void HLSL_Parser::InterfazDefinicionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitInterfazDefinicion(this);
}


antlrcpp::Any HLSL_Parser::InterfazDefinicionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitInterfazDefinicion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::InterfazDefinicionContext* HLSL_Parser::interfazDefinicion() {
	InterfazDefinicionContext *_localctx = _tracker.createInstance<InterfazDefinicionContext>(_ctx, getState());
	enterRule(_localctx, 20, HLSL_Parser::RuleInterfazDefinicion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(184);
		dynamic_cast<InterfazDefinicionContext *>(_localctx)->InterfaceKeyword = match(HLSL_Parser::Interface);
		setState(185);
		nombre();
		setState(186);
		bloqueDeCodigo();
		setState(187);
		dynamic_cast<InterfazDefinicionContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ClaseDefinicionContext ------------------------------------------------------------------

HLSL_Parser::ClaseDefinicionContext::ClaseDefinicionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::NombreContext* HLSL_Parser::ClaseDefinicionContext::nombre() {
	return getRuleContext<HLSL_Parser::NombreContext>(0);
}

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::ClaseDefinicionContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}

tree::TerminalNode* HLSL_Parser::ClaseDefinicionContext::Class() {
	return getToken(HLSL_Parser::Class, 0);
}

tree::TerminalNode* HLSL_Parser::ClaseDefinicionContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}

HLSL_Parser::ListaClaseBaseContext* HLSL_Parser::ClaseDefinicionContext::listaClaseBase() {
	return getRuleContext<HLSL_Parser::ListaClaseBaseContext>(0);
}


size_t HLSL_Parser::ClaseDefinicionContext::getRuleIndex() const {
	return HLSL_Parser::RuleClaseDefinicion;
}

void HLSL_Parser::ClaseDefinicionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterClaseDefinicion(this);
}

void HLSL_Parser::ClaseDefinicionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitClaseDefinicion(this);
}


antlrcpp::Any HLSL_Parser::ClaseDefinicionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitClaseDefinicion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ClaseDefinicionContext* HLSL_Parser::claseDefinicion() {
	ClaseDefinicionContext *_localctx = _tracker.createInstance<ClaseDefinicionContext>(_ctx, getState());
	enterRule(_localctx, 22, HLSL_Parser::RuleClaseDefinicion);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(189);
		dynamic_cast<ClaseDefinicionContext *>(_localctx)->ClassKeyword = match(HLSL_Parser::Class);
		setState(190);
		nombre();
		setState(192);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::DosPuntos) {
			setState(191);
			dynamic_cast<ClaseDefinicionContext *>(_localctx)->ListaClaseBaseOpt = listaClaseBase();
		}
		setState(194);
		bloqueDeCodigo();
		setState(195);
		dynamic_cast<ClaseDefinicionContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- VariableDeclaracionSentenciaContext ------------------------------------------------------------------

HLSL_Parser::VariableDeclaracionSentenciaContext::VariableDeclaracionSentenciaContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::VariableDeclaracionContext* HLSL_Parser::VariableDeclaracionSentenciaContext::variableDeclaracion() {
	return getRuleContext<HLSL_Parser::VariableDeclaracionContext>(0);
}

tree::TerminalNode* HLSL_Parser::VariableDeclaracionSentenciaContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}


size_t HLSL_Parser::VariableDeclaracionSentenciaContext::getRuleIndex() const {
	return HLSL_Parser::RuleVariableDeclaracionSentencia;
}

void HLSL_Parser::VariableDeclaracionSentenciaContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterVariableDeclaracionSentencia(this);
}

void HLSL_Parser::VariableDeclaracionSentenciaContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitVariableDeclaracionSentencia(this);
}


antlrcpp::Any HLSL_Parser::VariableDeclaracionSentenciaContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitVariableDeclaracionSentencia(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::VariableDeclaracionSentenciaContext* HLSL_Parser::variableDeclaracionSentencia() {
	VariableDeclaracionSentenciaContext *_localctx = _tracker.createInstance<VariableDeclaracionSentenciaContext>(_ctx, getState());
	enterRule(_localctx, 24, HLSL_Parser::RuleVariableDeclaracionSentencia);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(197);
		variableDeclaracion();
		setState(198);
		dynamic_cast<VariableDeclaracionSentenciaContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- AtributoContext ------------------------------------------------------------------

HLSL_Parser::AtributoContext::AtributoContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::AtributoContext::CorcheteAbierto() {
	return getToken(HLSL_Parser::CorcheteAbierto, 0);
}

tree::TerminalNode* HLSL_Parser::AtributoContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}

tree::TerminalNode* HLSL_Parser::AtributoContext::CorcheteCerrado() {
	return getToken(HLSL_Parser::CorcheteCerrado, 0);
}

HLSL_Parser::AtributosListaArgumentosContext* HLSL_Parser::AtributoContext::atributosListaArgumentos() {
	return getRuleContext<HLSL_Parser::AtributosListaArgumentosContext>(0);
}


size_t HLSL_Parser::AtributoContext::getRuleIndex() const {
	return HLSL_Parser::RuleAtributo;
}

void HLSL_Parser::AtributoContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterAtributo(this);
}

void HLSL_Parser::AtributoContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitAtributo(this);
}


antlrcpp::Any HLSL_Parser::AtributoContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitAtributo(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::AtributoContext* HLSL_Parser::atributo() {
	AtributoContext *_localctx = _tracker.createInstance<AtributoContext>(_ctx, getState());
	enterRule(_localctx, 26, HLSL_Parser::RuleAtributo);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(200);
		dynamic_cast<AtributoContext *>(_localctx)->CorcheteAbiertoToken = match(HLSL_Parser::CorcheteAbierto);
		setState(201);
		dynamic_cast<AtributoContext *>(_localctx)->Nombre = match(HLSL_Parser::ID);
		setState(203);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::ParentesisAbierto) {
			setState(202);
			atributosListaArgumentos();
		}
		setState(205);
		dynamic_cast<AtributoContext *>(_localctx)->CorcheteCerradoToken = match(HLSL_Parser::CorcheteCerrado);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- AtributosListaArgumentosContext ------------------------------------------------------------------

HLSL_Parser::AtributosListaArgumentosContext::AtributosListaArgumentosContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::AtributosArgumentosContext* HLSL_Parser::AtributosListaArgumentosContext::atributosArgumentos() {
	return getRuleContext<HLSL_Parser::AtributosArgumentosContext>(0);
}

tree::TerminalNode* HLSL_Parser::AtributosListaArgumentosContext::ParentesisAbierto() {
	return getToken(HLSL_Parser::ParentesisAbierto, 0);
}

tree::TerminalNode* HLSL_Parser::AtributosListaArgumentosContext::ParentesisCerrado() {
	return getToken(HLSL_Parser::ParentesisCerrado, 0);
}


size_t HLSL_Parser::AtributosListaArgumentosContext::getRuleIndex() const {
	return HLSL_Parser::RuleAtributosListaArgumentos;
}

void HLSL_Parser::AtributosListaArgumentosContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterAtributosListaArgumentos(this);
}

void HLSL_Parser::AtributosListaArgumentosContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitAtributosListaArgumentos(this);
}


antlrcpp::Any HLSL_Parser::AtributosListaArgumentosContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitAtributosListaArgumentos(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::AtributosListaArgumentosContext* HLSL_Parser::atributosListaArgumentos() {
	AtributosListaArgumentosContext *_localctx = _tracker.createInstance<AtributosListaArgumentosContext>(_ctx, getState());
	enterRule(_localctx, 28, HLSL_Parser::RuleAtributosListaArgumentos);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(207);
		dynamic_cast<AtributosListaArgumentosContext *>(_localctx)->ParentesisAbiertoToken = match(HLSL_Parser::ParentesisAbierto);
		setState(208);
		atributosArgumentos();
		setState(209);
		dynamic_cast<AtributosListaArgumentosContext *>(_localctx)->ParentesisCerradoToken = match(HLSL_Parser::ParentesisCerrado);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- AtributosArgumentosContext ------------------------------------------------------------------

HLSL_Parser::AtributosArgumentosContext::AtributosArgumentosContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<HLSL_Parser::LiteralContext *> HLSL_Parser::AtributosArgumentosContext::literal() {
	return getRuleContexts<HLSL_Parser::LiteralContext>();
}

HLSL_Parser::LiteralContext* HLSL_Parser::AtributosArgumentosContext::literal(size_t i) {
	return getRuleContext<HLSL_Parser::LiteralContext>(i);
}

std::vector<tree::TerminalNode *> HLSL_Parser::AtributosArgumentosContext::Coma() {
	return getTokens(HLSL_Parser::Coma);
}

tree::TerminalNode* HLSL_Parser::AtributosArgumentosContext::Coma(size_t i) {
	return getToken(HLSL_Parser::Coma, i);
}


size_t HLSL_Parser::AtributosArgumentosContext::getRuleIndex() const {
	return HLSL_Parser::RuleAtributosArgumentos;
}

void HLSL_Parser::AtributosArgumentosContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterAtributosArgumentos(this);
}

void HLSL_Parser::AtributosArgumentosContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitAtributosArgumentos(this);
}


antlrcpp::Any HLSL_Parser::AtributosArgumentosContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitAtributosArgumentos(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::AtributosArgumentosContext* HLSL_Parser::atributosArgumentos() {
	AtributosArgumentosContext *_localctx = _tracker.createInstance<AtributosArgumentosContext>(_ctx, getState());
	enterRule(_localctx, 30, HLSL_Parser::RuleAtributosArgumentos);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(211);
		literal();
		setState(216);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == HLSL_Parser::Coma) {
			setState(212);
			match(HLSL_Parser::Coma);
			setState(213);
			literal();
			setState(218);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- NombreContext ------------------------------------------------------------------

HLSL_Parser::NombreContext::NombreContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::NombreContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}


size_t HLSL_Parser::NombreContext::getRuleIndex() const {
	return HLSL_Parser::RuleNombre;
}

void HLSL_Parser::NombreContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNombre(this);
}

void HLSL_Parser::NombreContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNombre(this);
}


antlrcpp::Any HLSL_Parser::NombreContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitNombre(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::NombreContext* HLSL_Parser::nombre() {
	NombreContext *_localctx = _tracker.createInstance<NombreContext>(_ctx, getState());
	enterRule(_localctx, 32, HLSL_Parser::RuleNombre);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(219);
		match(HLSL_Parser::ID);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ListaClaseBaseContext ------------------------------------------------------------------

HLSL_Parser::ListaClaseBaseContext::ListaClaseBaseContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::ListaClaseBaseContext::DosPuntos() {
	return getToken(HLSL_Parser::DosPuntos, 0);
}

tree::TerminalNode* HLSL_Parser::ListaClaseBaseContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}


size_t HLSL_Parser::ListaClaseBaseContext::getRuleIndex() const {
	return HLSL_Parser::RuleListaClaseBase;
}

void HLSL_Parser::ListaClaseBaseContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterListaClaseBase(this);
}

void HLSL_Parser::ListaClaseBaseContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitListaClaseBase(this);
}


antlrcpp::Any HLSL_Parser::ListaClaseBaseContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitListaClaseBase(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ListaClaseBaseContext* HLSL_Parser::listaClaseBase() {
	ListaClaseBaseContext *_localctx = _tracker.createInstance<ListaClaseBaseContext>(_ctx, getState());
	enterRule(_localctx, 34, HLSL_Parser::RuleListaClaseBase);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(221);
		dynamic_cast<ListaClaseBaseContext *>(_localctx)->DosPuntosToken = match(HLSL_Parser::DosPuntos);
		setState(222);
		dynamic_cast<ListaClaseBaseContext *>(_localctx)->TipoBase = match(HLSL_Parser::ID);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- DeclaracionMiembroClaseContext ------------------------------------------------------------------

HLSL_Parser::DeclaracionMiembroClaseContext::DeclaracionMiembroClaseContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::VariableDeclaracionSentenciaContext* HLSL_Parser::DeclaracionMiembroClaseContext::variableDeclaracionSentencia() {
	return getRuleContext<HLSL_Parser::VariableDeclaracionSentenciaContext>(0);
}

HLSL_Parser::FuncionDefinicionContext* HLSL_Parser::DeclaracionMiembroClaseContext::funcionDefinicion() {
	return getRuleContext<HLSL_Parser::FuncionDefinicionContext>(0);
}

HLSL_Parser::FuncionDeclaracionContext* HLSL_Parser::DeclaracionMiembroClaseContext::funcionDeclaracion() {
	return getRuleContext<HLSL_Parser::FuncionDeclaracionContext>(0);
}


size_t HLSL_Parser::DeclaracionMiembroClaseContext::getRuleIndex() const {
	return HLSL_Parser::RuleDeclaracionMiembroClase;
}

void HLSL_Parser::DeclaracionMiembroClaseContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterDeclaracionMiembroClase(this);
}

void HLSL_Parser::DeclaracionMiembroClaseContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitDeclaracionMiembroClase(this);
}


antlrcpp::Any HLSL_Parser::DeclaracionMiembroClaseContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitDeclaracionMiembroClase(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::DeclaracionMiembroClaseContext* HLSL_Parser::declaracionMiembroClase() {
	DeclaracionMiembroClaseContext *_localctx = _tracker.createInstance<DeclaracionMiembroClaseContext>(_ctx, getState());
	enterRule(_localctx, 36, HLSL_Parser::RuleDeclaracionMiembroClase);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		setState(227);
		_errHandler->sync(this);
		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
		case 1: {
			enterOuterAlt(_localctx, 1);
			setState(224);
			variableDeclaracionSentencia();
			break;
		}

		case 2: {
			enterOuterAlt(_localctx, 2);
			setState(225);
			funcionDefinicion();
			break;
		}

		case 3: {
			enterOuterAlt(_localctx, 3);
			setState(226);
			funcionDeclaracion();
			break;
		}

		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- SemanticaContext ------------------------------------------------------------------

HLSL_Parser::SemanticaContext::SemanticaContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::SemanticaContext::DosPuntos() {
	return getToken(HLSL_Parser::DosPuntos, 0);
}

tree::TerminalNode* HLSL_Parser::SemanticaContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}


size_t HLSL_Parser::SemanticaContext::getRuleIndex() const {
	return HLSL_Parser::RuleSemantica;
}

void HLSL_Parser::SemanticaContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterSemantica(this);
}

void HLSL_Parser::SemanticaContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitSemantica(this);
}


antlrcpp::Any HLSL_Parser::SemanticaContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitSemantica(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::SemanticaContext* HLSL_Parser::semantica() {
	SemanticaContext *_localctx = _tracker.createInstance<SemanticaContext>(_ctx, getState());
	enterRule(_localctx, 38, HLSL_Parser::RuleSemantica);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(229);
		dynamic_cast<SemanticaContext *>(_localctx)->DosPuntosToken = match(HLSL_Parser::DosPuntos);
		setState(230);
		dynamic_cast<SemanticaContext *>(_localctx)->Nombre = match(HLSL_Parser::ID);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ParametrosContext ------------------------------------------------------------------

HLSL_Parser::ParametrosContext::ParametrosContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<HLSL_Parser::ParametroContext *> HLSL_Parser::ParametrosContext::parametro() {
	return getRuleContexts<HLSL_Parser::ParametroContext>();
}

HLSL_Parser::ParametroContext* HLSL_Parser::ParametrosContext::parametro(size_t i) {
	return getRuleContext<HLSL_Parser::ParametroContext>(i);
}

std::vector<tree::TerminalNode *> HLSL_Parser::ParametrosContext::Coma() {
	return getTokens(HLSL_Parser::Coma);
}

tree::TerminalNode* HLSL_Parser::ParametrosContext::Coma(size_t i) {
	return getToken(HLSL_Parser::Coma, i);
}


size_t HLSL_Parser::ParametrosContext::getRuleIndex() const {
	return HLSL_Parser::RuleParametros;
}

void HLSL_Parser::ParametrosContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterParametros(this);
}

void HLSL_Parser::ParametrosContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitParametros(this);
}


antlrcpp::Any HLSL_Parser::ParametrosContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitParametros(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ParametrosContext* HLSL_Parser::parametros() {
	ParametrosContext *_localctx = _tracker.createInstance<ParametrosContext>(_ctx, getState());
	enterRule(_localctx, 40, HLSL_Parser::RuleParametros);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(232);
		parametro();
		setState(237);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == HLSL_Parser::Coma) {
			setState(233);
			match(HLSL_Parser::Coma);
			setState(234);
			parametro();
			setState(239);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ParametroContext ------------------------------------------------------------------

HLSL_Parser::ParametroContext::ParametroContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoParametroContext* HLSL_Parser::ParametroContext::tipoParametro() {
	return getRuleContext<HLSL_Parser::TipoParametroContext>(0);
}

HLSL_Parser::NombreParametroContext* HLSL_Parser::ParametroContext::nombreParametro() {
	return getRuleContext<HLSL_Parser::NombreParametroContext>(0);
}

std::vector<HLSL_Parser::StorageFlagParametroContext *> HLSL_Parser::ParametroContext::storageFlagParametro() {
	return getRuleContexts<HLSL_Parser::StorageFlagParametroContext>();
}

HLSL_Parser::StorageFlagParametroContext* HLSL_Parser::ParametroContext::storageFlagParametro(size_t i) {
	return getRuleContext<HLSL_Parser::StorageFlagParametroContext>(i);
}

HLSL_Parser::SemanticaParametroContext* HLSL_Parser::ParametroContext::semanticaParametro() {
	return getRuleContext<HLSL_Parser::SemanticaParametroContext>(0);
}


size_t HLSL_Parser::ParametroContext::getRuleIndex() const {
	return HLSL_Parser::RuleParametro;
}

void HLSL_Parser::ParametroContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterParametro(this);
}

void HLSL_Parser::ParametroContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitParametro(this);
}


antlrcpp::Any HLSL_Parser::ParametroContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitParametro(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ParametroContext* HLSL_Parser::parametro() {
	ParametroContext *_localctx = _tracker.createInstance<ParametroContext>(_ctx, getState());
	enterRule(_localctx, 42, HLSL_Parser::RuleParametro);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		size_t alt;
		enterOuterAlt(_localctx, 1);
		setState(243);
		_errHandler->sync(this);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
			if (alt == 1) {
				setState(240);
				storageFlagParametro();
			}
			setState(245);
			_errHandler->sync(this);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
		}
		setState(246);
		tipoParametro();
		setState(247);
		nombreParametro();
		setState(249);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::DosPuntos) {
			setState(248);
			semanticaParametro();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- StorageFlagParametroContext ------------------------------------------------------------------

HLSL_Parser::StorageFlagParametroContext::StorageFlagParametroContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::StorageFlagContext* HLSL_Parser::StorageFlagParametroContext::storageFlag() {
	return getRuleContext<HLSL_Parser::StorageFlagContext>(0);
}


size_t HLSL_Parser::StorageFlagParametroContext::getRuleIndex() const {
	return HLSL_Parser::RuleStorageFlagParametro;
}

void HLSL_Parser::StorageFlagParametroContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterStorageFlagParametro(this);
}

void HLSL_Parser::StorageFlagParametroContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitStorageFlagParametro(this);
}


antlrcpp::Any HLSL_Parser::StorageFlagParametroContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitStorageFlagParametro(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::StorageFlagParametroContext* HLSL_Parser::storageFlagParametro() {
	StorageFlagParametroContext *_localctx = _tracker.createInstance<StorageFlagParametroContext>(_ctx, getState());
	enterRule(_localctx, 44, HLSL_Parser::RuleStorageFlagParametro);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(251);
		storageFlag();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoParametroContext ------------------------------------------------------------------

HLSL_Parser::TipoParametroContext::TipoParametroContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoContext* HLSL_Parser::TipoParametroContext::tipo() {
	return getRuleContext<HLSL_Parser::TipoContext>(0);
}


size_t HLSL_Parser::TipoParametroContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoParametro;
}

void HLSL_Parser::TipoParametroContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoParametro(this);
}

void HLSL_Parser::TipoParametroContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoParametro(this);
}


antlrcpp::Any HLSL_Parser::TipoParametroContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoParametro(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoParametroContext* HLSL_Parser::tipoParametro() {
	TipoParametroContext *_localctx = _tracker.createInstance<TipoParametroContext>(_ctx, getState());
	enterRule(_localctx, 46, HLSL_Parser::RuleTipoParametro);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(253);
		tipo();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- NombreParametroContext ------------------------------------------------------------------

HLSL_Parser::NombreParametroContext::NombreParametroContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::NombreParametroContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}


size_t HLSL_Parser::NombreParametroContext::getRuleIndex() const {
	return HLSL_Parser::RuleNombreParametro;
}

void HLSL_Parser::NombreParametroContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNombreParametro(this);
}

void HLSL_Parser::NombreParametroContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNombreParametro(this);
}


antlrcpp::Any HLSL_Parser::NombreParametroContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitNombreParametro(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::NombreParametroContext* HLSL_Parser::nombreParametro() {
	NombreParametroContext *_localctx = _tracker.createInstance<NombreParametroContext>(_ctx, getState());
	enterRule(_localctx, 48, HLSL_Parser::RuleNombreParametro);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(255);
		match(HLSL_Parser::ID);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- SemanticaParametroContext ------------------------------------------------------------------

HLSL_Parser::SemanticaParametroContext::SemanticaParametroContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::SemanticaContext* HLSL_Parser::SemanticaParametroContext::semantica() {
	return getRuleContext<HLSL_Parser::SemanticaContext>(0);
}


size_t HLSL_Parser::SemanticaParametroContext::getRuleIndex() const {
	return HLSL_Parser::RuleSemanticaParametro;
}

void HLSL_Parser::SemanticaParametroContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterSemanticaParametro(this);
}

void HLSL_Parser::SemanticaParametroContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitSemanticaParametro(this);
}


antlrcpp::Any HLSL_Parser::SemanticaParametroContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitSemanticaParametro(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::SemanticaParametroContext* HLSL_Parser::semanticaParametro() {
	SemanticaParametroContext *_localctx = _tracker.createInstance<SemanticaParametroContext>(_ctx, getState());
	enterRule(_localctx, 50, HLSL_Parser::RuleSemanticaParametro);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(257);
		semantica();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- RegistrarAlocacionContext ------------------------------------------------------------------

HLSL_Parser::RegistrarAlocacionContext::RegistrarAlocacionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::RegistrarAlocacionContext::DosPuntos() {
	return getToken(HLSL_Parser::DosPuntos, 0);
}

tree::TerminalNode* HLSL_Parser::RegistrarAlocacionContext::Register() {
	return getToken(HLSL_Parser::Register, 0);
}

tree::TerminalNode* HLSL_Parser::RegistrarAlocacionContext::ParentesisAbierto() {
	return getToken(HLSL_Parser::ParentesisAbierto, 0);
}

tree::TerminalNode* HLSL_Parser::RegistrarAlocacionContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}

tree::TerminalNode* HLSL_Parser::RegistrarAlocacionContext::ParentesisCerrado() {
	return getToken(HLSL_Parser::ParentesisCerrado, 0);
}


size_t HLSL_Parser::RegistrarAlocacionContext::getRuleIndex() const {
	return HLSL_Parser::RuleRegistrarAlocacion;
}

void HLSL_Parser::RegistrarAlocacionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterRegistrarAlocacion(this);
}

void HLSL_Parser::RegistrarAlocacionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitRegistrarAlocacion(this);
}


antlrcpp::Any HLSL_Parser::RegistrarAlocacionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitRegistrarAlocacion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::RegistrarAlocacionContext* HLSL_Parser::registrarAlocacion() {
	RegistrarAlocacionContext *_localctx = _tracker.createInstance<RegistrarAlocacionContext>(_ctx, getState());
	enterRule(_localctx, 52, HLSL_Parser::RuleRegistrarAlocacion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(259);
		dynamic_cast<RegistrarAlocacionContext *>(_localctx)->RegistrarDosPuntos = match(HLSL_Parser::DosPuntos);
		setState(260);
		dynamic_cast<RegistrarAlocacionContext *>(_localctx)->RegistrarKeyword = match(HLSL_Parser::Register);
		setState(261);
		dynamic_cast<RegistrarAlocacionContext *>(_localctx)->ParentesisAbiertoToken = match(HLSL_Parser::ParentesisAbierto);
		setState(262);
		dynamic_cast<RegistrarAlocacionContext *>(_localctx)->DireccionMemoria = match(HLSL_Parser::ID);
		setState(263);
		dynamic_cast<RegistrarAlocacionContext *>(_localctx)->ParentesisCerradoToken = match(HLSL_Parser::ParentesisCerrado);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- VariableInicializadorContext ------------------------------------------------------------------

HLSL_Parser::VariableInicializadorContext::VariableInicializadorContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}


size_t HLSL_Parser::VariableInicializadorContext::getRuleIndex() const {
	return HLSL_Parser::RuleVariableInicializador;
}

void HLSL_Parser::VariableInicializadorContext::copyFrom(VariableInicializadorContext *ctx) {
	ParserRuleContext::copyFrom(ctx);
}

//----------------- StandardVariableInitializer_Context ------------------------------------------------------------------

HLSL_Parser::EstandardVariableInicializadorContext* HLSL_Parser::StandardVariableInitializer_Context::estandardVariableInicializador() {
	return getRuleContext<HLSL_Parser::EstandardVariableInicializadorContext>(0);
}

tree::TerminalNode* HLSL_Parser::StandardVariableInitializer_Context::Asignar() {
	return getToken(HLSL_Parser::Asignar, 0);
}

HLSL_Parser::StandardVariableInitializer_Context::StandardVariableInitializer_Context(VariableInicializadorContext *ctx) { copyFrom(ctx); }

void HLSL_Parser::StandardVariableInitializer_Context::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterStandardVariableInitializer_(this);
}
void HLSL_Parser::StandardVariableInitializer_Context::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitStandardVariableInitializer_(this);
}

antlrcpp::Any HLSL_Parser::StandardVariableInitializer_Context::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitStandardVariableInitializer_(this);
	else
		return visitor->visitChildren(this);
}
//----------------- SamplerStateInitializerContext ------------------------------------------------------------------

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::SamplerStateInitializerContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}

HLSL_Parser::SamplerStateInitializerContext::SamplerStateInitializerContext(VariableInicializadorContext *ctx) { copyFrom(ctx); }

void HLSL_Parser::SamplerStateInitializerContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterSamplerStateInitializer(this);
}
void HLSL_Parser::SamplerStateInitializerContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitSamplerStateInitializer(this);
}

antlrcpp::Any HLSL_Parser::SamplerStateInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitSamplerStateInitializer(this);
	else
		return visitor->visitChildren(this);
}
HLSL_Parser::VariableInicializadorContext* HLSL_Parser::variableInicializador() {
	VariableInicializadorContext *_localctx = _tracker.createInstance<VariableInicializadorContext>(_ctx, getState());
	enterRule(_localctx, 54, HLSL_Parser::RuleVariableInicializador);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		setState(268);
		_errHandler->sync(this);
		switch (_input->LA(1)) {
		case HLSL_Parser::Asignar: {
			_localctx = dynamic_cast<VariableInicializadorContext *>(_tracker.createInstance<HLSL_Parser::StandardVariableInitializer_Context>(_localctx));
			enterOuterAlt(_localctx, 1);
			setState(265);
			dynamic_cast<StandardVariableInitializer_Context *>(_localctx)->AsignacionToken = match(HLSL_Parser::Asignar);
			setState(266);
			estandardVariableInicializador();
			break;
		}

		case HLSL_Parser::Script: {
			_localctx = dynamic_cast<VariableInicializadorContext *>(_tracker.createInstance<HLSL_Parser::SamplerStateInitializerContext>(_localctx));
			enterOuterAlt(_localctx, 2);
			setState(267);
			bloqueDeCodigo();
			break;
		}

		default:
			throw NoViableAltException(this);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- EstandardVariableInicializadorContext ------------------------------------------------------------------

HLSL_Parser::EstandardVariableInicializadorContext::EstandardVariableInicializadorContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}


size_t HLSL_Parser::EstandardVariableInicializadorContext::getRuleIndex() const {
	return HLSL_Parser::RuleEstandardVariableInicializador;
}

void HLSL_Parser::EstandardVariableInicializadorContext::copyFrom(EstandardVariableInicializadorContext *ctx) {
	ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionVariableInitializerContext ------------------------------------------------------------------

HLSL_Parser::LiteralContext* HLSL_Parser::ExpressionVariableInitializerContext::literal() {
	return getRuleContext<HLSL_Parser::LiteralContext>(0);
}

HLSL_Parser::ExpressionVariableInitializerContext::ExpressionVariableInitializerContext(EstandardVariableInicializadorContext *ctx) { copyFrom(ctx); }

void HLSL_Parser::ExpressionVariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterExpressionVariableInitializer(this);
}
void HLSL_Parser::ExpressionVariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitExpressionVariableInitializer(this);
}

antlrcpp::Any HLSL_Parser::ExpressionVariableInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitExpressionVariableInitializer(this);
	else
		return visitor->visitChildren(this);
}
//----------------- ArrayVariableInitializerContext ------------------------------------------------------------------

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::ArrayVariableInitializerContext::bloqueDeCodigo() {
	return getRuleContext<HLSL_Parser::BloqueDeCodigoContext>(0);
}

HLSL_Parser::ArrayVariableInitializerContext::ArrayVariableInitializerContext(EstandardVariableInicializadorContext *ctx) { copyFrom(ctx); }

void HLSL_Parser::ArrayVariableInitializerContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterArrayVariableInitializer(this);
}
void HLSL_Parser::ArrayVariableInitializerContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitArrayVariableInitializer(this);
}

antlrcpp::Any HLSL_Parser::ArrayVariableInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitArrayVariableInitializer(this);
	else
		return visitor->visitChildren(this);
}
HLSL_Parser::EstandardVariableInicializadorContext* HLSL_Parser::estandardVariableInicializador() {
	EstandardVariableInicializadorContext *_localctx = _tracker.createInstance<EstandardVariableInicializadorContext>(_ctx, getState());
	enterRule(_localctx, 56, HLSL_Parser::RuleEstandardVariableInicializador);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		setState(272);
		_errHandler->sync(this);
		switch (_input->LA(1)) {
		case HLSL_Parser::Script: {
			_localctx = dynamic_cast<EstandardVariableInicializadorContext *>(_tracker.createInstance<HLSL_Parser::ArrayVariableInitializerContext>(_localctx));
			enterOuterAlt(_localctx, 1);
			setState(270);
			bloqueDeCodigo();
			break;
		}

		case HLSL_Parser::False:
		case HLSL_Parser::True:
		case HLSL_Parser::IntegerLiteral:
		case HLSL_Parser::FloatLiteral:
		case HLSL_Parser::StringLiteral: {
			_localctx = dynamic_cast<EstandardVariableInicializadorContext *>(_tracker.createInstance<HLSL_Parser::ExpressionVariableInitializerContext>(_localctx));
			enterOuterAlt(_localctx, 2);
			setState(271);
			dynamic_cast<ExpressionVariableInitializerContext *>(_localctx)->Expr = literal();
			break;
		}

		default:
			throw NoViableAltException(this);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ArrayElementosInicializadoresContext ------------------------------------------------------------------

HLSL_Parser::ArrayElementosInicializadoresContext::ArrayElementosInicializadoresContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<HLSL_Parser::EstandardVariableInicializadorContext *> HLSL_Parser::ArrayElementosInicializadoresContext::estandardVariableInicializador() {
	return getRuleContexts<HLSL_Parser::EstandardVariableInicializadorContext>();
}

HLSL_Parser::EstandardVariableInicializadorContext* HLSL_Parser::ArrayElementosInicializadoresContext::estandardVariableInicializador(size_t i) {
	return getRuleContext<HLSL_Parser::EstandardVariableInicializadorContext>(i);
}

std::vector<tree::TerminalNode *> HLSL_Parser::ArrayElementosInicializadoresContext::Coma() {
	return getTokens(HLSL_Parser::Coma);
}

tree::TerminalNode* HLSL_Parser::ArrayElementosInicializadoresContext::Coma(size_t i) {
	return getToken(HLSL_Parser::Coma, i);
}


size_t HLSL_Parser::ArrayElementosInicializadoresContext::getRuleIndex() const {
	return HLSL_Parser::RuleArrayElementosInicializadores;
}

void HLSL_Parser::ArrayElementosInicializadoresContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterArrayElementosInicializadores(this);
}

void HLSL_Parser::ArrayElementosInicializadoresContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitArrayElementosInicializadores(this);
}


antlrcpp::Any HLSL_Parser::ArrayElementosInicializadoresContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitArrayElementosInicializadores(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ArrayElementosInicializadoresContext* HLSL_Parser::arrayElementosInicializadores() {
	ArrayElementosInicializadoresContext *_localctx = _tracker.createInstance<ArrayElementosInicializadoresContext>(_ctx, getState());
	enterRule(_localctx, 58, HLSL_Parser::RuleArrayElementosInicializadores);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		size_t alt;
		enterOuterAlt(_localctx, 1);
		setState(274);
		estandardVariableInicializador();
		setState(279);
		_errHandler->sync(this);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
			if (alt == 1) {
				setState(275);
				match(HLSL_Parser::Coma);
				setState(276);
				estandardVariableInicializador();
			}
			setState(281);
			_errHandler->sync(this);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
		}
		setState(283);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::Coma) {
			setState(282);
			match(HLSL_Parser::Coma);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- SamplerStatePropertyContext ------------------------------------------------------------------

HLSL_Parser::SamplerStatePropertyContext::SamplerStatePropertyContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::SamplerStatePropertyContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}

tree::TerminalNode* HLSL_Parser::SamplerStatePropertyContext::Asignar() {
	return getToken(HLSL_Parser::Asignar, 0);
}

HLSL_Parser::LiteralContext* HLSL_Parser::SamplerStatePropertyContext::literal() {
	return getRuleContext<HLSL_Parser::LiteralContext>(0);
}

tree::TerminalNode* HLSL_Parser::SamplerStatePropertyContext::PuntoYComa() {
	return getToken(HLSL_Parser::PuntoYComa, 0);
}


size_t HLSL_Parser::SamplerStatePropertyContext::getRuleIndex() const {
	return HLSL_Parser::RuleSamplerStateProperty;
}

void HLSL_Parser::SamplerStatePropertyContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterSamplerStateProperty(this);
}

void HLSL_Parser::SamplerStatePropertyContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitSamplerStateProperty(this);
}


antlrcpp::Any HLSL_Parser::SamplerStatePropertyContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitSamplerStateProperty(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::SamplerStatePropertyContext* HLSL_Parser::samplerStateProperty() {
	SamplerStatePropertyContext *_localctx = _tracker.createInstance<SamplerStatePropertyContext>(_ctx, getState());
	enterRule(_localctx, 60, HLSL_Parser::RuleSamplerStateProperty);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(285);
		dynamic_cast<SamplerStatePropertyContext *>(_localctx)->Nombre = match(HLSL_Parser::ID);
		setState(286);
		dynamic_cast<SamplerStatePropertyContext *>(_localctx)->AsignacionToken = match(HLSL_Parser::Asignar);
		setState(287);
		dynamic_cast<SamplerStatePropertyContext *>(_localctx)->Expr = literal();
		setState(288);
		dynamic_cast<SamplerStatePropertyContext *>(_localctx)->PuntoYComaToken = match(HLSL_Parser::PuntoYComa);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- VariableDeclaracionContext ------------------------------------------------------------------

HLSL_Parser::VariableDeclaracionContext::VariableDeclaracionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoContext* HLSL_Parser::VariableDeclaracionContext::tipo() {
	return getRuleContext<HLSL_Parser::TipoContext>(0);
}

HLSL_Parser::VariableDeclaradoresContext* HLSL_Parser::VariableDeclaracionContext::variableDeclaradores() {
	return getRuleContext<HLSL_Parser::VariableDeclaradoresContext>(0);
}

std::vector<HLSL_Parser::StorageFlagContext *> HLSL_Parser::VariableDeclaracionContext::storageFlag() {
	return getRuleContexts<HLSL_Parser::StorageFlagContext>();
}

HLSL_Parser::StorageFlagContext* HLSL_Parser::VariableDeclaracionContext::storageFlag(size_t i) {
	return getRuleContext<HLSL_Parser::StorageFlagContext>(i);
}


size_t HLSL_Parser::VariableDeclaracionContext::getRuleIndex() const {
	return HLSL_Parser::RuleVariableDeclaracion;
}

void HLSL_Parser::VariableDeclaracionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterVariableDeclaracion(this);
}

void HLSL_Parser::VariableDeclaracionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitVariableDeclaracion(this);
}


antlrcpp::Any HLSL_Parser::VariableDeclaracionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitVariableDeclaracion(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::VariableDeclaracionContext* HLSL_Parser::variableDeclaracion() {
	VariableDeclaracionContext *_localctx = _tracker.createInstance<VariableDeclaracionContext>(_ctx, getState());
	enterRule(_localctx, 62, HLSL_Parser::RuleVariableDeclaracion);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		size_t alt;
		enterOuterAlt(_localctx, 1);
		setState(293);
		_errHandler->sync(this);
		alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
		while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
			if (alt == 1) {
				setState(290);
				storageFlag();
			}
			setState(295);
			_errHandler->sync(this);
			alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
		}
		setState(296);
		tipo();
		setState(297);
		variableDeclaradores();

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- VariableDeclaradoresContext ------------------------------------------------------------------

HLSL_Parser::VariableDeclaradoresContext::VariableDeclaradoresContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<HLSL_Parser::VariableDeclaradorContext *> HLSL_Parser::VariableDeclaradoresContext::variableDeclarador() {
	return getRuleContexts<HLSL_Parser::VariableDeclaradorContext>();
}

HLSL_Parser::VariableDeclaradorContext* HLSL_Parser::VariableDeclaradoresContext::variableDeclarador(size_t i) {
	return getRuleContext<HLSL_Parser::VariableDeclaradorContext>(i);
}

std::vector<tree::TerminalNode *> HLSL_Parser::VariableDeclaradoresContext::Coma() {
	return getTokens(HLSL_Parser::Coma);
}

tree::TerminalNode* HLSL_Parser::VariableDeclaradoresContext::Coma(size_t i) {
	return getToken(HLSL_Parser::Coma, i);
}


size_t HLSL_Parser::VariableDeclaradoresContext::getRuleIndex() const {
	return HLSL_Parser::RuleVariableDeclaradores;
}

void HLSL_Parser::VariableDeclaradoresContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterVariableDeclaradores(this);
}

void HLSL_Parser::VariableDeclaradoresContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitVariableDeclaradores(this);
}


antlrcpp::Any HLSL_Parser::VariableDeclaradoresContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitVariableDeclaradores(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::VariableDeclaradoresContext* HLSL_Parser::variableDeclaradores() {
	VariableDeclaradoresContext *_localctx = _tracker.createInstance<VariableDeclaradoresContext>(_ctx, getState());
	enterRule(_localctx, 64, HLSL_Parser::RuleVariableDeclaradores);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(299);
		variableDeclarador();
		setState(304);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == HLSL_Parser::Coma) {
			setState(300);
			match(HLSL_Parser::Coma);
			setState(301);
			variableDeclarador();
			setState(306);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- VariableDeclaradorContext ------------------------------------------------------------------

HLSL_Parser::VariableDeclaradorContext::VariableDeclaradorContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::NombreContext* HLSL_Parser::VariableDeclaradorContext::nombre() {
	return getRuleContext<HLSL_Parser::NombreContext>(0);
}

HLSL_Parser::PackOffsetNodoContext* HLSL_Parser::VariableDeclaradorContext::packOffsetNodo() {
	return getRuleContext<HLSL_Parser::PackOffsetNodoContext>(0);
}

HLSL_Parser::RegistrarAlocacionContext* HLSL_Parser::VariableDeclaradorContext::registrarAlocacion() {
	return getRuleContext<HLSL_Parser::RegistrarAlocacionContext>(0);
}

HLSL_Parser::SemanticaContext* HLSL_Parser::VariableDeclaradorContext::semantica() {
	return getRuleContext<HLSL_Parser::SemanticaContext>(0);
}

HLSL_Parser::VariableInicializadorContext* HLSL_Parser::VariableDeclaradorContext::variableInicializador() {
	return getRuleContext<HLSL_Parser::VariableInicializadorContext>(0);
}

std::vector<HLSL_Parser::ArrayRankingEspecificadorContext *> HLSL_Parser::VariableDeclaradorContext::arrayRankingEspecificador() {
	return getRuleContexts<HLSL_Parser::ArrayRankingEspecificadorContext>();
}

HLSL_Parser::ArrayRankingEspecificadorContext* HLSL_Parser::VariableDeclaradorContext::arrayRankingEspecificador(size_t i) {
	return getRuleContext<HLSL_Parser::ArrayRankingEspecificadorContext>(i);
}


size_t HLSL_Parser::VariableDeclaradorContext::getRuleIndex() const {
	return HLSL_Parser::RuleVariableDeclarador;
}

void HLSL_Parser::VariableDeclaradorContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterVariableDeclarador(this);
}

void HLSL_Parser::VariableDeclaradorContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitVariableDeclarador(this);
}


antlrcpp::Any HLSL_Parser::VariableDeclaradorContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitVariableDeclarador(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::VariableDeclaradorContext* HLSL_Parser::variableDeclarador() {
	VariableDeclaradorContext *_localctx = _tracker.createInstance<VariableDeclaradorContext>(_ctx, getState());
	enterRule(_localctx, 66, HLSL_Parser::RuleVariableDeclarador);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(307);
		nombre();
		setState(311);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == HLSL_Parser::CorcheteAbierto) {
			setState(308);
			dynamic_cast<VariableDeclaradorContext *>(_localctx)->arrayRankingEspecificadorContext = arrayRankingEspecificador();
			dynamic_cast<VariableDeclaradorContext *>(_localctx)->arrayRankingEspecificadores.push_back(dynamic_cast<VariableDeclaradorContext *>(_localctx)->arrayRankingEspecificadorContext);
			setState(313);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
		setState(315);
		_errHandler->sync(this);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
		case 1: {
			setState(314);
			packOffsetNodo();
			break;
		}

		}
		setState(318);
		_errHandler->sync(this);

		switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
		case 1: {
			setState(317);
			registrarAlocacion();
			break;
		}

		}
		setState(321);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::DosPuntos) {
			setState(320);
			semantica();
		}
		setState(324);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::Asignar

			|| _la == HLSL_Parser::Script) {
			setState(323);
			variableInicializador();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ArrayRankingEspecificadorContext ------------------------------------------------------------------

HLSL_Parser::ArrayRankingEspecificadorContext::ArrayRankingEspecificadorContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::ArrayRankingEspecificadorContext::CorcheteAbierto() {
	return getToken(HLSL_Parser::CorcheteAbierto, 0);
}

tree::TerminalNode* HLSL_Parser::ArrayRankingEspecificadorContext::CorcheteCerrado() {
	return getToken(HLSL_Parser::CorcheteCerrado, 0);
}

HLSL_Parser::LiteralContext* HLSL_Parser::ArrayRankingEspecificadorContext::literal() {
	return getRuleContext<HLSL_Parser::LiteralContext>(0);
}


size_t HLSL_Parser::ArrayRankingEspecificadorContext::getRuleIndex() const {
	return HLSL_Parser::RuleArrayRankingEspecificador;
}

void HLSL_Parser::ArrayRankingEspecificadorContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterArrayRankingEspecificador(this);
}

void HLSL_Parser::ArrayRankingEspecificadorContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitArrayRankingEspecificador(this);
}


antlrcpp::Any HLSL_Parser::ArrayRankingEspecificadorContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitArrayRankingEspecificador(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ArrayRankingEspecificadorContext* HLSL_Parser::arrayRankingEspecificador() {
	ArrayRankingEspecificadorContext *_localctx = _tracker.createInstance<ArrayRankingEspecificadorContext>(_ctx, getState());
	enterRule(_localctx, 68, HLSL_Parser::RuleArrayRankingEspecificador);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(326);
		dynamic_cast<ArrayRankingEspecificadorContext *>(_localctx)->CorcheteAbiertoToken = match(HLSL_Parser::CorcheteAbierto);
		setState(328);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (((((_la - 156) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 156)) & ((1ULL << (HLSL_Parser::False - 156))
				| (1ULL << (HLSL_Parser::True - 156))
				| (1ULL << (HLSL_Parser::IntegerLiteral - 156)))) != 0) || _la == HLSL_Parser::FloatLiteral

			|| _la == HLSL_Parser::StringLiteral) {
			setState(327);
			dynamic_cast<ArrayRankingEspecificadorContext *>(_localctx)->Dimension = literal();
		}
		setState(330);
		dynamic_cast<ArrayRankingEspecificadorContext *>(_localctx)->CorcheteCerradoToken = match(HLSL_Parser::CorcheteCerrado);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- PackOffsetNodoContext ------------------------------------------------------------------

HLSL_Parser::PackOffsetNodoContext::PackOffsetNodoContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::PackOffsetNodoContext::DosPuntos() {
	return getToken(HLSL_Parser::DosPuntos, 0);
}

tree::TerminalNode* HLSL_Parser::PackOffsetNodoContext::Packoffset() {
	return getToken(HLSL_Parser::Packoffset, 0);
}

tree::TerminalNode* HLSL_Parser::PackOffsetNodoContext::ParentesisAbierto() {
	return getToken(HLSL_Parser::ParentesisAbierto, 0);
}

std::vector<tree::TerminalNode *> HLSL_Parser::PackOffsetNodoContext::ID() {
	return getTokens(HLSL_Parser::ID);
}

tree::TerminalNode* HLSL_Parser::PackOffsetNodoContext::ID(size_t i) {
	return getToken(HLSL_Parser::ID, i);
}

tree::TerminalNode* HLSL_Parser::PackOffsetNodoContext::ParentesisCerrado() {
	return getToken(HLSL_Parser::ParentesisCerrado, 0);
}

tree::TerminalNode* HLSL_Parser::PackOffsetNodoContext::Punto() {
	return getToken(HLSL_Parser::Punto, 0);
}


size_t HLSL_Parser::PackOffsetNodoContext::getRuleIndex() const {
	return HLSL_Parser::RulePackOffsetNodo;
}

void HLSL_Parser::PackOffsetNodoContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterPackOffsetNodo(this);
}

void HLSL_Parser::PackOffsetNodoContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitPackOffsetNodo(this);
}


antlrcpp::Any HLSL_Parser::PackOffsetNodoContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitPackOffsetNodo(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::PackOffsetNodoContext* HLSL_Parser::packOffsetNodo() {
	PackOffsetNodoContext *_localctx = _tracker.createInstance<PackOffsetNodoContext>(_ctx, getState());
	enterRule(_localctx, 70, HLSL_Parser::RulePackOffsetNodo);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(332);
		dynamic_cast<PackOffsetNodoContext *>(_localctx)->DosPuntosToken = match(HLSL_Parser::DosPuntos);
		setState(333);
		dynamic_cast<PackOffsetNodoContext *>(_localctx)->PackoffsetKeyword = match(HLSL_Parser::Packoffset);
		setState(334);
		dynamic_cast<PackOffsetNodoContext *>(_localctx)->ParentesisAbiertoToken = match(HLSL_Parser::ParentesisAbierto);
		setState(335);
		dynamic_cast<PackOffsetNodoContext *>(_localctx)->PackOffsetRegister = match(HLSL_Parser::ID);
		setState(338);
		_errHandler->sync(this);

		_la = _input->LA(1);
		if (_la == HLSL_Parser::Punto) {
			setState(336);
			dynamic_cast<PackOffsetNodoContext *>(_localctx)->PuntoToken = match(HLSL_Parser::Punto);
			setState(337);
			dynamic_cast<PackOffsetNodoContext *>(_localctx)->PackOffsetComponent = match(HLSL_Parser::ID);
		}
		setState(340);
		dynamic_cast<PackOffsetNodoContext *>(_localctx)->ParentesisCerradoToken = match(HLSL_Parser::ParentesisCerrado);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- StorageFlagsContext ------------------------------------------------------------------

HLSL_Parser::StorageFlagsContext::StorageFlagsContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<HLSL_Parser::StorageFlagContext *> HLSL_Parser::StorageFlagsContext::storageFlag() {
	return getRuleContexts<HLSL_Parser::StorageFlagContext>();
}

HLSL_Parser::StorageFlagContext* HLSL_Parser::StorageFlagsContext::storageFlag(size_t i) {
	return getRuleContext<HLSL_Parser::StorageFlagContext>(i);
}


size_t HLSL_Parser::StorageFlagsContext::getRuleIndex() const {
	return HLSL_Parser::RuleStorageFlags;
}

void HLSL_Parser::StorageFlagsContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterStorageFlags(this);
}

void HLSL_Parser::StorageFlagsContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitStorageFlags(this);
}


antlrcpp::Any HLSL_Parser::StorageFlagsContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitStorageFlags(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::StorageFlagsContext* HLSL_Parser::storageFlags() {
	StorageFlagsContext *_localctx = _tracker.createInstance<StorageFlagsContext>(_ctx, getState());
	enterRule(_localctx, 72, HLSL_Parser::RuleStorageFlags);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(345);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (((((_la - 118) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 118)) & ((1ULL << (HLSL_Parser::Triangle - 118))
				| (1ULL << (HLSL_Parser::Centroid - 118))
				| (1ULL << (HLSL_Parser::ColumnMajor - 118))
				| (1ULL << (HLSL_Parser::Const - 118))
				| (1ULL << (HLSL_Parser::Extern - 118))
				| (1ULL << (HLSL_Parser::Groupshared - 118))
				| (1ULL << (HLSL_Parser::In - 118))
				| (1ULL << (HLSL_Parser::Inout - 118))
				| (1ULL << (HLSL_Parser::Line_ - 118))
				| (1ULL << (HLSL_Parser::LineAdj - 118))
				| (1ULL << (HLSL_Parser::Linear - 118))
				| (1ULL << (HLSL_Parser::Nointerpolation - 118))
				| (1ULL << (HLSL_Parser::Noperspective - 118))
				| (1ULL << (HLSL_Parser::Out - 118))
				| (1ULL << (HLSL_Parser::Point - 118))
				| (1ULL << (HLSL_Parser::Precise - 118))
				| (1ULL << (HLSL_Parser::RowMajor - 118)))) != 0) || ((((_la - 183) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 183)) & ((1ULL << (HLSL_Parser::Sample - 183))
					| (1ULL << (HLSL_Parser::Shared - 183))
					| (1ULL << (HLSL_Parser::Static - 183))
					| (1ULL << (HLSL_Parser::TriangleAdj - 183))
					| (1ULL << (HLSL_Parser::Uniform - 183))
					| (1ULL << (HLSL_Parser::Volatile - 183)))) != 0)) {
			setState(342);
			storageFlag();
			setState(347);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- BloqueDeCodigoContext ------------------------------------------------------------------

HLSL_Parser::BloqueDeCodigoContext::BloqueDeCodigoContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::BloqueDeCodigoContext::Script() {
	return getToken(HLSL_Parser::Script, 0);
}


size_t HLSL_Parser::BloqueDeCodigoContext::getRuleIndex() const {
	return HLSL_Parser::RuleBloqueDeCodigo;
}

void HLSL_Parser::BloqueDeCodigoContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterBloqueDeCodigo(this);
}

void HLSL_Parser::BloqueDeCodigoContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitBloqueDeCodigo(this);
}


antlrcpp::Any HLSL_Parser::BloqueDeCodigoContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitBloqueDeCodigo(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::BloqueDeCodigoContext* HLSL_Parser::bloqueDeCodigo() {
	BloqueDeCodigoContext *_localctx = _tracker.createInstance<BloqueDeCodigoContext>(_ctx, getState());
	enterRule(_localctx, 74, HLSL_Parser::RuleBloqueDeCodigo);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(348);
		match(HLSL_Parser::Script);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- StorageFlagContext ------------------------------------------------------------------

HLSL_Parser::StorageFlagContext::StorageFlagContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Const() {
	return getToken(HLSL_Parser::Const, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::RowMajor() {
	return getToken(HLSL_Parser::RowMajor, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::ColumnMajor() {
	return getToken(HLSL_Parser::ColumnMajor, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Extern() {
	return getToken(HLSL_Parser::Extern, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Precise() {
	return getToken(HLSL_Parser::Precise, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Shared() {
	return getToken(HLSL_Parser::Shared, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Groupshared() {
	return getToken(HLSL_Parser::Groupshared, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Static() {
	return getToken(HLSL_Parser::Static, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Uniform() {
	return getToken(HLSL_Parser::Uniform, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Volatile() {
	return getToken(HLSL_Parser::Volatile, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Linear() {
	return getToken(HLSL_Parser::Linear, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Centroid() {
	return getToken(HLSL_Parser::Centroid, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Nointerpolation() {
	return getToken(HLSL_Parser::Nointerpolation, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Noperspective() {
	return getToken(HLSL_Parser::Noperspective, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Sample() {
	return getToken(HLSL_Parser::Sample, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::In() {
	return getToken(HLSL_Parser::In, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Out() {
	return getToken(HLSL_Parser::Out, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Inout() {
	return getToken(HLSL_Parser::Inout, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Point() {
	return getToken(HLSL_Parser::Point, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Line_() {
	return getToken(HLSL_Parser::Line_, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::Triangle() {
	return getToken(HLSL_Parser::Triangle, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::LineAdj() {
	return getToken(HLSL_Parser::LineAdj, 0);
}

tree::TerminalNode* HLSL_Parser::StorageFlagContext::TriangleAdj() {
	return getToken(HLSL_Parser::TriangleAdj, 0);
}


size_t HLSL_Parser::StorageFlagContext::getRuleIndex() const {
	return HLSL_Parser::RuleStorageFlag;
}

void HLSL_Parser::StorageFlagContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterStorageFlag(this);
}

void HLSL_Parser::StorageFlagContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitStorageFlag(this);
}


antlrcpp::Any HLSL_Parser::StorageFlagContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitStorageFlag(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::StorageFlagContext* HLSL_Parser::storageFlag() {
	StorageFlagContext *_localctx = _tracker.createInstance<StorageFlagContext>(_ctx, getState());
	enterRule(_localctx, 76, HLSL_Parser::RuleStorageFlag);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(350);
		_la = _input->LA(1);
		if (!(((((_la - 118) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 118)) & ((1ULL << (HLSL_Parser::Triangle - 118))
				| (1ULL << (HLSL_Parser::Centroid - 118))
				| (1ULL << (HLSL_Parser::ColumnMajor - 118))
				| (1ULL << (HLSL_Parser::Const - 118))
				| (1ULL << (HLSL_Parser::Extern - 118))
				| (1ULL << (HLSL_Parser::Groupshared - 118))
				| (1ULL << (HLSL_Parser::In - 118))
				| (1ULL << (HLSL_Parser::Inout - 118))
				| (1ULL << (HLSL_Parser::Line_ - 118))
				| (1ULL << (HLSL_Parser::LineAdj - 118))
				| (1ULL << (HLSL_Parser::Linear - 118))
				| (1ULL << (HLSL_Parser::Nointerpolation - 118))
				| (1ULL << (HLSL_Parser::Noperspective - 118))
				| (1ULL << (HLSL_Parser::Out - 118))
				| (1ULL << (HLSL_Parser::Point - 118))
				| (1ULL << (HLSL_Parser::Precise - 118))
				| (1ULL << (HLSL_Parser::RowMajor - 118)))) != 0) || ((((_la - 183) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 183)) & ((1ULL << (HLSL_Parser::Sample - 183))
					| (1ULL << (HLSL_Parser::Shared - 183))
					| (1ULL << (HLSL_Parser::Static - 183))
					| (1ULL << (HLSL_Parser::TriangleAdj - 183))
					| (1ULL << (HLSL_Parser::Uniform - 183))
					| (1ULL << (HLSL_Parser::Volatile - 183)))) != 0))) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ReferenciaContext ------------------------------------------------------------------

HLSL_Parser::ReferenciaContext::ReferenciaContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::ReferenciaContext::In() {
	return getToken(HLSL_Parser::In, 0);
}

tree::TerminalNode* HLSL_Parser::ReferenciaContext::Out() {
	return getToken(HLSL_Parser::Out, 0);
}

tree::TerminalNode* HLSL_Parser::ReferenciaContext::Inout() {
	return getToken(HLSL_Parser::Inout, 0);
}


size_t HLSL_Parser::ReferenciaContext::getRuleIndex() const {
	return HLSL_Parser::RuleReferencia;
}

void HLSL_Parser::ReferenciaContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterReferencia(this);
}

void HLSL_Parser::ReferenciaContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitReferencia(this);
}


antlrcpp::Any HLSL_Parser::ReferenciaContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitReferencia(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::ReferenciaContext* HLSL_Parser::referencia() {
	ReferenciaContext *_localctx = _tracker.createInstance<ReferenciaContext>(_ctx, getState());
	enterRule(_localctx, 78, HLSL_Parser::RuleReferencia);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(352);
		_la = _input->LA(1);
		if (!(((((_la - 160) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 160)) & ((1ULL << (HLSL_Parser::In - 160))
				| (1ULL << (HLSL_Parser::Inout - 160))
				| (1ULL << (HLSL_Parser::Out - 160)))) != 0))) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoContext ------------------------------------------------------------------

HLSL_Parser::TipoContext::TipoContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

HLSL_Parser::TipoMatrizContext* HLSL_Parser::TipoContext::tipoMatriz() {
	return getRuleContext<HLSL_Parser::TipoMatrizContext>(0);
}

HLSL_Parser::TipoEscalarContext* HLSL_Parser::TipoContext::tipoEscalar() {
	return getRuleContext<HLSL_Parser::TipoEscalarContext>(0);
}

HLSL_Parser::TipoTexturaContext* HLSL_Parser::TipoContext::tipoTextura() {
	return getRuleContext<HLSL_Parser::TipoTexturaContext>(0);
}

HLSL_Parser::TipoTexturaMSContext* HLSL_Parser::TipoContext::tipoTexturaMS() {
	return getRuleContext<HLSL_Parser::TipoTexturaMSContext>(0);
}

HLSL_Parser::TipoVectorContext* HLSL_Parser::TipoContext::tipoVector() {
	return getRuleContext<HLSL_Parser::TipoVectorContext>(0);
}

HLSL_Parser::TipoSampleContext* HLSL_Parser::TipoContext::tipoSample() {
	return getRuleContext<HLSL_Parser::TipoSampleContext>(0);
}

HLSL_Parser::TipoVoidContext* HLSL_Parser::TipoContext::tipoVoid() {
	return getRuleContext<HLSL_Parser::TipoVoidContext>(0);
}

HLSL_Parser::TipoDefinidoPorUsuarioContext* HLSL_Parser::TipoContext::tipoDefinidoPorUsuario() {
	return getRuleContext<HLSL_Parser::TipoDefinidoPorUsuarioContext>(0);
}


size_t HLSL_Parser::TipoContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipo;
}

void HLSL_Parser::TipoContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipo(this);
}

void HLSL_Parser::TipoContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipo(this);
}


antlrcpp::Any HLSL_Parser::TipoContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipo(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoContext* HLSL_Parser::tipo() {
	TipoContext *_localctx = _tracker.createInstance<TipoContext>(_ctx, getState());
	enterRule(_localctx, 80, HLSL_Parser::RuleTipo);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		setState(362);
		_errHandler->sync(this);
		switch (_input->LA(1)) {
		case HLSL_Parser::Bool1x1:
		case HLSL_Parser::Bool1x2:
		case HLSL_Parser::Bool1x3:
		case HLSL_Parser::Bool1x4:
		case HLSL_Parser::Bool2x1:
		case HLSL_Parser::Bool2x2:
		case HLSL_Parser::Bool2x3:
		case HLSL_Parser::Bool2x4:
		case HLSL_Parser::Bool3x1:
		case HLSL_Parser::Bool3x2:
		case HLSL_Parser::Bool3x3:
		case HLSL_Parser::Bool3x4:
		case HLSL_Parser::Bool4x1:
		case HLSL_Parser::Bool4x2:
		case HLSL_Parser::Bool4x3:
		case HLSL_Parser::Bool4x4:
		case HLSL_Parser::Double1x1:
		case HLSL_Parser::Double1x2:
		case HLSL_Parser::Double1x3:
		case HLSL_Parser::Double1x4:
		case HLSL_Parser::Double2x1:
		case HLSL_Parser::Double2x2:
		case HLSL_Parser::Double2x3:
		case HLSL_Parser::Double2x4:
		case HLSL_Parser::Double3x1:
		case HLSL_Parser::Double3x2:
		case HLSL_Parser::Double3x3:
		case HLSL_Parser::Double3x4:
		case HLSL_Parser::Double4x1:
		case HLSL_Parser::Double4x2:
		case HLSL_Parser::Double4x3:
		case HLSL_Parser::Double4x4:
		case HLSL_Parser::Float1x1:
		case HLSL_Parser::Float1x2:
		case HLSL_Parser::Float1x3:
		case HLSL_Parser::Float1x4:
		case HLSL_Parser::Float2x1:
		case HLSL_Parser::Float2x2:
		case HLSL_Parser::Float2x3:
		case HLSL_Parser::Float2x4:
		case HLSL_Parser::Float3x1:
		case HLSL_Parser::Float3x2:
		case HLSL_Parser::Float3x3:
		case HLSL_Parser::Float3x4:
		case HLSL_Parser::Float4x1:
		case HLSL_Parser::Float4x2:
		case HLSL_Parser::Float4x3:
		case HLSL_Parser::Float4x4:
		case HLSL_Parser::Half1x1:
		case HLSL_Parser::Half1x2:
		case HLSL_Parser::Half1x3:
		case HLSL_Parser::Half1x4:
		case HLSL_Parser::Half2x1:
		case HLSL_Parser::Half2x2:
		case HLSL_Parser::Half2x3:
		case HLSL_Parser::Half2x4:
		case HLSL_Parser::Half3x1:
		case HLSL_Parser::Half3x2:
		case HLSL_Parser::Half3x3:
		case HLSL_Parser::Half3x4:
		case HLSL_Parser::Half4x1:
		case HLSL_Parser::Half4x2:
		case HLSL_Parser::Half4x3:
		case HLSL_Parser::Half4x4:
		case HLSL_Parser::Int1x1:
		case HLSL_Parser::Int1x2:
		case HLSL_Parser::Int1x3:
		case HLSL_Parser::Int1x4:
		case HLSL_Parser::Int2x1:
		case HLSL_Parser::Int2x2:
		case HLSL_Parser::Int2x3:
		case HLSL_Parser::Int2x4:
		case HLSL_Parser::Int3x1:
		case HLSL_Parser::Int3x2:
		case HLSL_Parser::Int3x3:
		case HLSL_Parser::Int3x4:
		case HLSL_Parser::Int4x1:
		case HLSL_Parser::Int4x2:
		case HLSL_Parser::Int4x3:
		case HLSL_Parser::Int4x4:
		case HLSL_Parser::Uint1x1:
		case HLSL_Parser::Uint1x2:
		case HLSL_Parser::Uint1x3:
		case HLSL_Parser::Uint1x4:
		case HLSL_Parser::Uint2x1:
		case HLSL_Parser::Uint2x2:
		case HLSL_Parser::Uint2x3:
		case HLSL_Parser::Uint2x4:
		case HLSL_Parser::Uint3x1:
		case HLSL_Parser::Uint3x2:
		case HLSL_Parser::Uint3x3:
		case HLSL_Parser::Uint3x4:
		case HLSL_Parser::Uint4x1:
		case HLSL_Parser::Uint4x2:
		case HLSL_Parser::Uint4x3:
		case HLSL_Parser::Uint4x4:
		case HLSL_Parser::Matrix: {
			enterOuterAlt(_localctx, 1);
			setState(354);
			tipoMatriz();
			break;
		}

		case HLSL_Parser::Bool:
		case HLSL_Parser::Double:
		case HLSL_Parser::Float:
		case HLSL_Parser::Half:
		case HLSL_Parser::Int:
		case HLSL_Parser::Uint: {
			enterOuterAlt(_localctx, 2);
			setState(355);
			tipoEscalar();
			break;
		}

		case HLSL_Parser::Texture1D:
		case HLSL_Parser::Texture1DArray:
		case HLSL_Parser::Texture2D:
		case HLSL_Parser::Texture2DArray:
		case HLSL_Parser::Texture3D:
		case HLSL_Parser::TextureCube:
		case HLSL_Parser::TextureCubeArray: {
			enterOuterAlt(_localctx, 3);
			setState(356);
			tipoTextura();
			break;
		}

		case HLSL_Parser::Texture2DMS:
		case HLSL_Parser::Texture2DMSArray: {
			enterOuterAlt(_localctx, 4);
			setState(357);
			tipoTexturaMS();
			break;
		}

		case HLSL_Parser::Bool1:
		case HLSL_Parser::Bool2:
		case HLSL_Parser::Bool3:
		case HLSL_Parser::Bool4:
		case HLSL_Parser::Double1:
		case HLSL_Parser::Double2:
		case HLSL_Parser::Double3:
		case HLSL_Parser::Double4:
		case HLSL_Parser::Float1:
		case HLSL_Parser::Float2:
		case HLSL_Parser::Float3:
		case HLSL_Parser::Float4:
		case HLSL_Parser::Half1:
		case HLSL_Parser::Half2:
		case HLSL_Parser::Half3:
		case HLSL_Parser::Half4:
		case HLSL_Parser::Int1:
		case HLSL_Parser::Int2:
		case HLSL_Parser::Int3:
		case HLSL_Parser::Int4:
		case HLSL_Parser::Uint1:
		case HLSL_Parser::Uint2:
		case HLSL_Parser::Uint3:
		case HLSL_Parser::Uint4:
		case HLSL_Parser::Vector: {
			enterOuterAlt(_localctx, 5);
			setState(358);
			tipoVector();
			break;
		}

		case HLSL_Parser::Sample:
		case HLSL_Parser::Sampler:
		case HLSL_Parser::SamplerComparisonState:
		case HLSL_Parser::SamplerState: {
			enterOuterAlt(_localctx, 6);
			setState(359);
			tipoSample();
			break;
		}

		case HLSL_Parser::Void: {
			enterOuterAlt(_localctx, 7);
			setState(360);
			tipoVoid();
			break;
		}

		case HLSL_Parser::ID: {
			enterOuterAlt(_localctx, 8);
			setState(361);
			tipoDefinidoPorUsuario();
			break;
		}

		default:
			throw NoViableAltException(this);
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoEscalarContext ------------------------------------------------------------------

HLSL_Parser::TipoEscalarContext::TipoEscalarContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoEscalarContext::Bool() {
	return getToken(HLSL_Parser::Bool, 0);
}

tree::TerminalNode* HLSL_Parser::TipoEscalarContext::Int() {
	return getToken(HLSL_Parser::Int, 0);
}

tree::TerminalNode* HLSL_Parser::TipoEscalarContext::Uint() {
	return getToken(HLSL_Parser::Uint, 0);
}

tree::TerminalNode* HLSL_Parser::TipoEscalarContext::Half() {
	return getToken(HLSL_Parser::Half, 0);
}

tree::TerminalNode* HLSL_Parser::TipoEscalarContext::Float() {
	return getToken(HLSL_Parser::Float, 0);
}

tree::TerminalNode* HLSL_Parser::TipoEscalarContext::Double() {
	return getToken(HLSL_Parser::Double, 0);
}


size_t HLSL_Parser::TipoEscalarContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoEscalar;
}

void HLSL_Parser::TipoEscalarContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoEscalar(this);
}

void HLSL_Parser::TipoEscalarContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoEscalar(this);
}


antlrcpp::Any HLSL_Parser::TipoEscalarContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoEscalar(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoEscalarContext* HLSL_Parser::tipoEscalar() {
	TipoEscalarContext *_localctx = _tracker.createInstance<TipoEscalarContext>(_ctx, getState());
	enterRule(_localctx, 82, HLSL_Parser::RuleTipoEscalar);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(364);
		_la = _input->LA(1);
		if (!((((_la & ~0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << HLSL_Parser::Bool)
				| (1ULL << HLSL_Parser::Double)
				| (1ULL << HLSL_Parser::Float))) != 0) || ((((_la - 66) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 66)) & ((1ULL << (HLSL_Parser::Half - 66))
					| (1ULL << (HLSL_Parser::Int - 66))
					| (1ULL << (HLSL_Parser::Uint - 66)))) != 0))) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoTexturaContext ------------------------------------------------------------------

HLSL_Parser::TipoTexturaContext::TipoTexturaContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::Texture1D() {
	return getToken(HLSL_Parser::Texture1D, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::Texture1DArray() {
	return getToken(HLSL_Parser::Texture1DArray, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::Texture2D() {
	return getToken(HLSL_Parser::Texture2D, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::Texture2DArray() {
	return getToken(HLSL_Parser::Texture2DArray, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::Texture3D() {
	return getToken(HLSL_Parser::Texture3D, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::TextureCube() {
	return getToken(HLSL_Parser::TextureCube, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaContext::TextureCubeArray() {
	return getToken(HLSL_Parser::TextureCubeArray, 0);
}


size_t HLSL_Parser::TipoTexturaContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoTextura;
}

void HLSL_Parser::TipoTexturaContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoTextura(this);
}

void HLSL_Parser::TipoTexturaContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoTextura(this);
}


antlrcpp::Any HLSL_Parser::TipoTexturaContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoTextura(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoTexturaContext* HLSL_Parser::tipoTextura() {
	TipoTexturaContext *_localctx = _tracker.createInstance<TipoTexturaContext>(_ctx, getState());
	enterRule(_localctx, 84, HLSL_Parser::RuleTipoTextura);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(366);
		_la = _input->LA(1);
		if (!(((((_la - 109) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 109)) & ((1ULL << (HLSL_Parser::Texture1D - 109))
				| (1ULL << (HLSL_Parser::Texture1DArray - 109))
				| (1ULL << (HLSL_Parser::Texture2D - 109))
				| (1ULL << (HLSL_Parser::Texture2DArray - 109))
				| (1ULL << (HLSL_Parser::Texture3D - 109))
				| (1ULL << (HLSL_Parser::TextureCube - 109))
				| (1ULL << (HLSL_Parser::TextureCubeArray - 109)))) != 0))) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoTexturaMSContext ------------------------------------------------------------------

HLSL_Parser::TipoTexturaMSContext::TipoTexturaMSContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoTexturaMSContext::Texture2DMS() {
	return getToken(HLSL_Parser::Texture2DMS, 0);
}

tree::TerminalNode* HLSL_Parser::TipoTexturaMSContext::Texture2DMSArray() {
	return getToken(HLSL_Parser::Texture2DMSArray, 0);
}


size_t HLSL_Parser::TipoTexturaMSContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoTexturaMS;
}

void HLSL_Parser::TipoTexturaMSContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoTexturaMS(this);
}

void HLSL_Parser::TipoTexturaMSContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoTexturaMS(this);
}


antlrcpp::Any HLSL_Parser::TipoTexturaMSContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoTexturaMS(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoTexturaMSContext* HLSL_Parser::tipoTexturaMS() {
	TipoTexturaMSContext *_localctx = _tracker.createInstance<TipoTexturaMSContext>(_ctx, getState());
	enterRule(_localctx, 86, HLSL_Parser::RuleTipoTexturaMS);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(368);
		_la = _input->LA(1);
		if (!(_la == HLSL_Parser::Texture2DMS

			|| _la == HLSL_Parser::Texture2DMSArray)) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoVectorContext ------------------------------------------------------------------

HLSL_Parser::TipoVectorContext::TipoVectorContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Vector() {
	return getToken(HLSL_Parser::Vector, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Bool1() {
	return getToken(HLSL_Parser::Bool1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Bool2() {
	return getToken(HLSL_Parser::Bool2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Bool3() {
	return getToken(HLSL_Parser::Bool3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Bool4() {
	return getToken(HLSL_Parser::Bool4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Int1() {
	return getToken(HLSL_Parser::Int1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Int2() {
	return getToken(HLSL_Parser::Int2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Int3() {
	return getToken(HLSL_Parser::Int3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Int4() {
	return getToken(HLSL_Parser::Int4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Uint1() {
	return getToken(HLSL_Parser::Uint1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Uint2() {
	return getToken(HLSL_Parser::Uint2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Uint3() {
	return getToken(HLSL_Parser::Uint3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Uint4() {
	return getToken(HLSL_Parser::Uint4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Half1() {
	return getToken(HLSL_Parser::Half1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Half2() {
	return getToken(HLSL_Parser::Half2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Half3() {
	return getToken(HLSL_Parser::Half3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Half4() {
	return getToken(HLSL_Parser::Half4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Float1() {
	return getToken(HLSL_Parser::Float1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Float2() {
	return getToken(HLSL_Parser::Float2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Float3() {
	return getToken(HLSL_Parser::Float3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Float4() {
	return getToken(HLSL_Parser::Float4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Double1() {
	return getToken(HLSL_Parser::Double1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Double2() {
	return getToken(HLSL_Parser::Double2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Double3() {
	return getToken(HLSL_Parser::Double3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoVectorContext::Double4() {
	return getToken(HLSL_Parser::Double4, 0);
}


size_t HLSL_Parser::TipoVectorContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoVector;
}

void HLSL_Parser::TipoVectorContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoVector(this);
}

void HLSL_Parser::TipoVectorContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoVector(this);
}


antlrcpp::Any HLSL_Parser::TipoVectorContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoVector(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoVectorContext* HLSL_Parser::tipoVector() {
	TipoVectorContext *_localctx = _tracker.createInstance<TipoVectorContext>(_ctx, getState());
	enterRule(_localctx, 88, HLSL_Parser::RuleTipoVector);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(370);
		_la = _input->LA(1);
		if (!((((_la & ~0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << HLSL_Parser::Bool1)
				| (1ULL << HLSL_Parser::Bool2)
				| (1ULL << HLSL_Parser::Bool3)
				| (1ULL << HLSL_Parser::Bool4)
				| (1ULL << HLSL_Parser::Double1)
				| (1ULL << HLSL_Parser::Double2)
				| (1ULL << HLSL_Parser::Double3)
				| (1ULL << HLSL_Parser::Double4)
				| (1ULL << HLSL_Parser::Float1)
				| (1ULL << HLSL_Parser::Float2)
				| (1ULL << HLSL_Parser::Float3)
				| (1ULL << HLSL_Parser::Float4))) != 0) || ((((_la - 67) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 67)) & ((1ULL << (HLSL_Parser::Half1 - 67))
					| (1ULL << (HLSL_Parser::Half2 - 67))
					| (1ULL << (HLSL_Parser::Half3 - 67))
					| (1ULL << (HLSL_Parser::Half4 - 67))
					| (1ULL << (HLSL_Parser::Int1 - 67))
					| (1ULL << (HLSL_Parser::Int2 - 67))
					| (1ULL << (HLSL_Parser::Int3 - 67))
					| (1ULL << (HLSL_Parser::Int4 - 67))
					| (1ULL << (HLSL_Parser::Uint1 - 67))
					| (1ULL << (HLSL_Parser::Uint2 - 67))
					| (1ULL << (HLSL_Parser::Uint3 - 67))
					| (1ULL << (HLSL_Parser::Uint4 - 67)))) != 0) || _la == HLSL_Parser::Vector)) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoMatrizContext ------------------------------------------------------------------

HLSL_Parser::TipoMatrizContext::TipoMatrizContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Matrix() {
	return getToken(HLSL_Parser::Matrix, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool1x1() {
	return getToken(HLSL_Parser::Bool1x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool1x2() {
	return getToken(HLSL_Parser::Bool1x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool1x3() {
	return getToken(HLSL_Parser::Bool1x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool1x4() {
	return getToken(HLSL_Parser::Bool1x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool2x1() {
	return getToken(HLSL_Parser::Bool2x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool2x2() {
	return getToken(HLSL_Parser::Bool2x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool2x3() {
	return getToken(HLSL_Parser::Bool2x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool2x4() {
	return getToken(HLSL_Parser::Bool2x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool3x1() {
	return getToken(HLSL_Parser::Bool3x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool3x2() {
	return getToken(HLSL_Parser::Bool3x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool3x3() {
	return getToken(HLSL_Parser::Bool3x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool3x4() {
	return getToken(HLSL_Parser::Bool3x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool4x1() {
	return getToken(HLSL_Parser::Bool4x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool4x2() {
	return getToken(HLSL_Parser::Bool4x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool4x3() {
	return getToken(HLSL_Parser::Bool4x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Bool4x4() {
	return getToken(HLSL_Parser::Bool4x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int1x1() {
	return getToken(HLSL_Parser::Int1x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int1x2() {
	return getToken(HLSL_Parser::Int1x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int1x3() {
	return getToken(HLSL_Parser::Int1x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int1x4() {
	return getToken(HLSL_Parser::Int1x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int2x1() {
	return getToken(HLSL_Parser::Int2x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int2x2() {
	return getToken(HLSL_Parser::Int2x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int2x3() {
	return getToken(HLSL_Parser::Int2x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int2x4() {
	return getToken(HLSL_Parser::Int2x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int3x1() {
	return getToken(HLSL_Parser::Int3x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int3x2() {
	return getToken(HLSL_Parser::Int3x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int3x3() {
	return getToken(HLSL_Parser::Int3x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int3x4() {
	return getToken(HLSL_Parser::Int3x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int4x1() {
	return getToken(HLSL_Parser::Int4x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int4x2() {
	return getToken(HLSL_Parser::Int4x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int4x3() {
	return getToken(HLSL_Parser::Int4x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Int4x4() {
	return getToken(HLSL_Parser::Int4x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint1x1() {
	return getToken(HLSL_Parser::Uint1x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint1x2() {
	return getToken(HLSL_Parser::Uint1x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint1x3() {
	return getToken(HLSL_Parser::Uint1x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint1x4() {
	return getToken(HLSL_Parser::Uint1x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint2x1() {
	return getToken(HLSL_Parser::Uint2x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint2x2() {
	return getToken(HLSL_Parser::Uint2x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint2x3() {
	return getToken(HLSL_Parser::Uint2x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint2x4() {
	return getToken(HLSL_Parser::Uint2x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint3x1() {
	return getToken(HLSL_Parser::Uint3x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint3x2() {
	return getToken(HLSL_Parser::Uint3x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint3x3() {
	return getToken(HLSL_Parser::Uint3x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint3x4() {
	return getToken(HLSL_Parser::Uint3x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint4x1() {
	return getToken(HLSL_Parser::Uint4x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint4x2() {
	return getToken(HLSL_Parser::Uint4x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint4x3() {
	return getToken(HLSL_Parser::Uint4x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Uint4x4() {
	return getToken(HLSL_Parser::Uint4x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half1x1() {
	return getToken(HLSL_Parser::Half1x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half1x2() {
	return getToken(HLSL_Parser::Half1x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half1x3() {
	return getToken(HLSL_Parser::Half1x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half1x4() {
	return getToken(HLSL_Parser::Half1x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half2x1() {
	return getToken(HLSL_Parser::Half2x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half2x2() {
	return getToken(HLSL_Parser::Half2x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half2x3() {
	return getToken(HLSL_Parser::Half2x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half2x4() {
	return getToken(HLSL_Parser::Half2x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half3x1() {
	return getToken(HLSL_Parser::Half3x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half3x2() {
	return getToken(HLSL_Parser::Half3x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half3x3() {
	return getToken(HLSL_Parser::Half3x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half3x4() {
	return getToken(HLSL_Parser::Half3x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half4x1() {
	return getToken(HLSL_Parser::Half4x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half4x2() {
	return getToken(HLSL_Parser::Half4x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half4x3() {
	return getToken(HLSL_Parser::Half4x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Half4x4() {
	return getToken(HLSL_Parser::Half4x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float1x1() {
	return getToken(HLSL_Parser::Float1x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float1x2() {
	return getToken(HLSL_Parser::Float1x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float1x3() {
	return getToken(HLSL_Parser::Float1x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float1x4() {
	return getToken(HLSL_Parser::Float1x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float2x1() {
	return getToken(HLSL_Parser::Float2x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float2x2() {
	return getToken(HLSL_Parser::Float2x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float2x3() {
	return getToken(HLSL_Parser::Float2x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float2x4() {
	return getToken(HLSL_Parser::Float2x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float3x1() {
	return getToken(HLSL_Parser::Float3x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float3x2() {
	return getToken(HLSL_Parser::Float3x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float3x3() {
	return getToken(HLSL_Parser::Float3x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float3x4() {
	return getToken(HLSL_Parser::Float3x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float4x1() {
	return getToken(HLSL_Parser::Float4x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float4x2() {
	return getToken(HLSL_Parser::Float4x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float4x3() {
	return getToken(HLSL_Parser::Float4x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Float4x4() {
	return getToken(HLSL_Parser::Float4x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double1x1() {
	return getToken(HLSL_Parser::Double1x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double1x2() {
	return getToken(HLSL_Parser::Double1x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double1x3() {
	return getToken(HLSL_Parser::Double1x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double1x4() {
	return getToken(HLSL_Parser::Double1x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double2x1() {
	return getToken(HLSL_Parser::Double2x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double2x2() {
	return getToken(HLSL_Parser::Double2x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double2x3() {
	return getToken(HLSL_Parser::Double2x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double2x4() {
	return getToken(HLSL_Parser::Double2x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double3x1() {
	return getToken(HLSL_Parser::Double3x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double3x2() {
	return getToken(HLSL_Parser::Double3x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double3x3() {
	return getToken(HLSL_Parser::Double3x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double3x4() {
	return getToken(HLSL_Parser::Double3x4, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double4x1() {
	return getToken(HLSL_Parser::Double4x1, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double4x2() {
	return getToken(HLSL_Parser::Double4x2, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double4x3() {
	return getToken(HLSL_Parser::Double4x3, 0);
}

tree::TerminalNode* HLSL_Parser::TipoMatrizContext::Double4x4() {
	return getToken(HLSL_Parser::Double4x4, 0);
}


size_t HLSL_Parser::TipoMatrizContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoMatriz;
}

void HLSL_Parser::TipoMatrizContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoMatriz(this);
}

void HLSL_Parser::TipoMatrizContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoMatriz(this);
}


antlrcpp::Any HLSL_Parser::TipoMatrizContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoMatriz(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoMatrizContext* HLSL_Parser::tipoMatriz() {
	TipoMatrizContext *_localctx = _tracker.createInstance<TipoMatrizContext>(_ctx, getState());
	enterRule(_localctx, 90, HLSL_Parser::RuleTipoMatriz);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(372);
		_la = _input->LA(1);
		if (!((((_la & ~0x3fULL) == 0) &&
			((1ULL << _la) & ((1ULL << HLSL_Parser::Bool1x1)
				| (1ULL << HLSL_Parser::Bool1x2)
				| (1ULL << HLSL_Parser::Bool1x3)
				| (1ULL << HLSL_Parser::Bool1x4)
				| (1ULL << HLSL_Parser::Bool2x1)
				| (1ULL << HLSL_Parser::Bool2x2)
				| (1ULL << HLSL_Parser::Bool2x3)
				| (1ULL << HLSL_Parser::Bool2x4)
				| (1ULL << HLSL_Parser::Bool3x1)
				| (1ULL << HLSL_Parser::Bool3x2)
				| (1ULL << HLSL_Parser::Bool3x3)
				| (1ULL << HLSL_Parser::Bool3x4)
				| (1ULL << HLSL_Parser::Bool4x1)
				| (1ULL << HLSL_Parser::Bool4x2)
				| (1ULL << HLSL_Parser::Bool4x3)
				| (1ULL << HLSL_Parser::Bool4x4)
				| (1ULL << HLSL_Parser::Double1x1)
				| (1ULL << HLSL_Parser::Double1x2)
				| (1ULL << HLSL_Parser::Double1x3)
				| (1ULL << HLSL_Parser::Double1x4)
				| (1ULL << HLSL_Parser::Double2x1)
				| (1ULL << HLSL_Parser::Double2x2)
				| (1ULL << HLSL_Parser::Double2x3)
				| (1ULL << HLSL_Parser::Double2x4)
				| (1ULL << HLSL_Parser::Double3x1)
				| (1ULL << HLSL_Parser::Double3x2)
				| (1ULL << HLSL_Parser::Double3x3)
				| (1ULL << HLSL_Parser::Double3x4)
				| (1ULL << HLSL_Parser::Double4x1)
				| (1ULL << HLSL_Parser::Double4x2)
				| (1ULL << HLSL_Parser::Double4x3)
				| (1ULL << HLSL_Parser::Double4x4)
				| (1ULL << HLSL_Parser::Float1x1)
				| (1ULL << HLSL_Parser::Float1x2)
				| (1ULL << HLSL_Parser::Float1x3)
				| (1ULL << HLSL_Parser::Float1x4)
				| (1ULL << HLSL_Parser::Float2x1)
				| (1ULL << HLSL_Parser::Float2x2)
				| (1ULL << HLSL_Parser::Float2x3)
				| (1ULL << HLSL_Parser::Float2x4)
				| (1ULL << HLSL_Parser::Float3x1)
				| (1ULL << HLSL_Parser::Float3x2)
				| (1ULL << HLSL_Parser::Float3x3)
				| (1ULL << HLSL_Parser::Float3x4)
				| (1ULL << HLSL_Parser::Float4x1)
				| (1ULL << HLSL_Parser::Float4x2))) != 0) || ((((_la - 64) & ~0x3fULL) == 0) &&
				((1ULL << (_la - 64)) & ((1ULL << (HLSL_Parser::Float4x3 - 64))
					| (1ULL << (HLSL_Parser::Float4x4 - 64))
					| (1ULL << (HLSL_Parser::Half1x1 - 64))
					| (1ULL << (HLSL_Parser::Half1x2 - 64))
					| (1ULL << (HLSL_Parser::Half1x3 - 64))
					| (1ULL << (HLSL_Parser::Half1x4 - 64))
					| (1ULL << (HLSL_Parser::Half2x1 - 64))
					| (1ULL << (HLSL_Parser::Half2x2 - 64))
					| (1ULL << (HLSL_Parser::Half2x3 - 64))
					| (1ULL << (HLSL_Parser::Half2x4 - 64))
					| (1ULL << (HLSL_Parser::Half3x1 - 64))
					| (1ULL << (HLSL_Parser::Half3x2 - 64))
					| (1ULL << (HLSL_Parser::Half3x3 - 64))
					| (1ULL << (HLSL_Parser::Half3x4 - 64))
					| (1ULL << (HLSL_Parser::Half4x1 - 64))
					| (1ULL << (HLSL_Parser::Half4x2 - 64))
					| (1ULL << (HLSL_Parser::Half4x3 - 64))
					| (1ULL << (HLSL_Parser::Half4x4 - 64))
					| (1ULL << (HLSL_Parser::Int1x1 - 64))
					| (1ULL << (HLSL_Parser::Int1x2 - 64))
					| (1ULL << (HLSL_Parser::Int1x3 - 64))
					| (1ULL << (HLSL_Parser::Int1x4 - 64))
					| (1ULL << (HLSL_Parser::Int2x1 - 64))
					| (1ULL << (HLSL_Parser::Int2x2 - 64))
					| (1ULL << (HLSL_Parser::Int2x3 - 64))
					| (1ULL << (HLSL_Parser::Int2x4 - 64))
					| (1ULL << (HLSL_Parser::Int3x1 - 64))
					| (1ULL << (HLSL_Parser::Int3x2 - 64))
					| (1ULL << (HLSL_Parser::Int3x3 - 64))
					| (1ULL << (HLSL_Parser::Int3x4 - 64))
					| (1ULL << (HLSL_Parser::Int4x1 - 64))
					| (1ULL << (HLSL_Parser::Int4x2 - 64))
					| (1ULL << (HLSL_Parser::Int4x3 - 64))
					| (1ULL << (HLSL_Parser::Int4x4 - 64))
					| (1ULL << (HLSL_Parser::Uint1x1 - 64))
					| (1ULL << (HLSL_Parser::Uint1x2 - 64))
					| (1ULL << (HLSL_Parser::Uint1x3 - 64))
					| (1ULL << (HLSL_Parser::Uint1x4 - 64)))) != 0) || ((((_la - 128) & ~0x3fULL) == 0) &&
					((1ULL << (_la - 128)) & ((1ULL << (HLSL_Parser::Uint2x1 - 128))
						| (1ULL << (HLSL_Parser::Uint2x2 - 128))
						| (1ULL << (HLSL_Parser::Uint2x3 - 128))
						| (1ULL << (HLSL_Parser::Uint2x4 - 128))
						| (1ULL << (HLSL_Parser::Uint3x1 - 128))
						| (1ULL << (HLSL_Parser::Uint3x2 - 128))
						| (1ULL << (HLSL_Parser::Uint3x3 - 128))
						| (1ULL << (HLSL_Parser::Uint3x4 - 128))
						| (1ULL << (HLSL_Parser::Uint4x1 - 128))
						| (1ULL << (HLSL_Parser::Uint4x2 - 128))
						| (1ULL << (HLSL_Parser::Uint4x3 - 128))
						| (1ULL << (HLSL_Parser::Uint4x4 - 128))
						| (1ULL << (HLSL_Parser::Matrix - 128)))) != 0))) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoSampleContext ------------------------------------------------------------------

HLSL_Parser::TipoSampleContext::TipoSampleContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoSampleContext::Sample() {
	return getToken(HLSL_Parser::Sample, 0);
}

tree::TerminalNode* HLSL_Parser::TipoSampleContext::Sampler() {
	return getToken(HLSL_Parser::Sampler, 0);
}

tree::TerminalNode* HLSL_Parser::TipoSampleContext::SamplerComparisonState() {
	return getToken(HLSL_Parser::SamplerComparisonState, 0);
}

tree::TerminalNode* HLSL_Parser::TipoSampleContext::SamplerState() {
	return getToken(HLSL_Parser::SamplerState, 0);
}


size_t HLSL_Parser::TipoSampleContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoSample;
}

void HLSL_Parser::TipoSampleContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoSample(this);
}

void HLSL_Parser::TipoSampleContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoSample(this);
}


antlrcpp::Any HLSL_Parser::TipoSampleContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoSample(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoSampleContext* HLSL_Parser::tipoSample() {
	TipoSampleContext *_localctx = _tracker.createInstance<TipoSampleContext>(_ctx, getState());
	enterRule(_localctx, 92, HLSL_Parser::RuleTipoSample);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(374);
		_la = _input->LA(1);
		if (!(((((_la - 183) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 183)) & ((1ULL << (HLSL_Parser::Sample - 183))
				| (1ULL << (HLSL_Parser::Sampler - 183))
				| (1ULL << (HLSL_Parser::SamplerComparisonState - 183))
				| (1ULL << (HLSL_Parser::SamplerState - 183)))) != 0))) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoVoidContext ------------------------------------------------------------------

HLSL_Parser::TipoVoidContext::TipoVoidContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoVoidContext::Void() {
	return getToken(HLSL_Parser::Void, 0);
}


size_t HLSL_Parser::TipoVoidContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoVoid;
}

void HLSL_Parser::TipoVoidContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoVoid(this);
}

void HLSL_Parser::TipoVoidContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoVoid(this);
}


antlrcpp::Any HLSL_Parser::TipoVoidContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoVoid(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoVoidContext* HLSL_Parser::tipoVoid() {
	TipoVoidContext *_localctx = _tracker.createInstance<TipoVoidContext>(_ctx, getState());
	enterRule(_localctx, 94, HLSL_Parser::RuleTipoVoid);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(376);
		match(HLSL_Parser::Void);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

HLSL_Parser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::LiteralContext::True() {
	return getToken(HLSL_Parser::True, 0);
}

tree::TerminalNode* HLSL_Parser::LiteralContext::False() {
	return getToken(HLSL_Parser::False, 0);
}

tree::TerminalNode* HLSL_Parser::LiteralContext::FloatLiteral() {
	return getToken(HLSL_Parser::FloatLiteral, 0);
}

tree::TerminalNode* HLSL_Parser::LiteralContext::IntegerLiteral() {
	return getToken(HLSL_Parser::IntegerLiteral, 0);
}

tree::TerminalNode* HLSL_Parser::LiteralContext::StringLiteral() {
	return getToken(HLSL_Parser::StringLiteral, 0);
}


size_t HLSL_Parser::LiteralContext::getRuleIndex() const {
	return HLSL_Parser::RuleLiteral;
}

void HLSL_Parser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterLiteral(this);
}

void HLSL_Parser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitLiteral(this);
}


antlrcpp::Any HLSL_Parser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitLiteral(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::LiteralContext* HLSL_Parser::literal() {
	LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
	enterRule(_localctx, 96, HLSL_Parser::RuleLiteral);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(378);
		_la = _input->LA(1);
		if (!(((((_la - 156) & ~0x3fULL) == 0) &&
			((1ULL << (_la - 156)) & ((1ULL << (HLSL_Parser::False - 156))
				| (1ULL << (HLSL_Parser::True - 156))
				| (1ULL << (HLSL_Parser::IntegerLiteral - 156)))) != 0) || _la == HLSL_Parser::FloatLiteral

			|| _la == HLSL_Parser::StringLiteral)) {
			_errHandler->recoverInline(this);
		}
		else {
			_errHandler->reportMatch(this);
			consume();
		}

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- TipoDefinidoPorUsuarioContext ------------------------------------------------------------------

HLSL_Parser::TipoDefinidoPorUsuarioContext::TipoDefinidoPorUsuarioContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HLSL_Parser::TipoDefinidoPorUsuarioContext::ID() {
	return getToken(HLSL_Parser::ID, 0);
}


size_t HLSL_Parser::TipoDefinidoPorUsuarioContext::getRuleIndex() const {
	return HLSL_Parser::RuleTipoDefinidoPorUsuario;
}

void HLSL_Parser::TipoDefinidoPorUsuarioContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterTipoDefinidoPorUsuario(this);
}

void HLSL_Parser::TipoDefinidoPorUsuarioContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<HLSL_ParserListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitTipoDefinidoPorUsuario(this);
}


antlrcpp::Any HLSL_Parser::TipoDefinidoPorUsuarioContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<HLSL_ParserVisitor*>(visitor))
		return parserVisitor->visitTipoDefinidoPorUsuario(this);
	else
		return visitor->visitChildren(this);
}

HLSL_Parser::TipoDefinidoPorUsuarioContext* HLSL_Parser::tipoDefinidoPorUsuario() {
	TipoDefinidoPorUsuarioContext *_localctx = _tracker.createInstance<TipoDefinidoPorUsuarioContext>(_ctx, getState());
	enterRule(_localctx, 98, HLSL_Parser::RuleTipoDefinidoPorUsuario);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(380);
		dynamic_cast<TipoDefinidoPorUsuarioContext *>(_localctx)->Nombre = match(HLSL_Parser::ID);

	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HLSL_Parser::_decisionToDFA;
atn::PredictionContextCache HLSL_Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HLSL_Parser::_atn;
std::vector<uint16_t> HLSL_Parser::_serializedATN;

std::vector<std::string> HLSL_Parser::_ruleNames = {
	"main", "declaraciones", "structDefinicion", "constantBuffer", "funcionDefinicion",
	"tipoFuncion", "nombreFuncion", "semanticaFuncion", "bloqueDeCodigoFuncion",
	"funcionDeclaracion", "interfazDefinicion", "claseDefinicion", "variableDeclaracionSentencia",
	"atributo", "atributosListaArgumentos", "atributosArgumentos", "nombre",
	"listaClaseBase", "declaracionMiembroClase", "semantica", "parametros",
	"parametro", "storageFlagParametro", "tipoParametro", "nombreParametro",
	"semanticaParametro", "registrarAlocacion", "variableInicializador", "estandardVariableInicializador",
	"arrayElementosInicializadores", "samplerStateProperty", "variableDeclaracion",
	"variableDeclaradores", "variableDeclarador", "arrayRankingEspecificador",
	"packOffsetNodo", "storageFlags", "bloqueDeCodigo", "storageFlag", "referencia",
	"tipo", "tipoEscalar", "tipoTextura", "tipoTexturaMS", "tipoVector", "tipoMatriz",
	"tipoSample", "tipoVoid", "literal", "tipoDefinidoPorUsuario"
};

std::vector<std::string> HLSL_Parser::_literalNames = {
	"", "", "'bool'", "'bool1'", "'bool2'", "'bool3'", "'bool4'", "'bool1x1'",
	"'bool1x2'", "'bool1x3'", "'bool1x4'", "'bool2x1'", "'bool2x2'", "'bool2x3'",
	"'bool2x4'", "'bool3x1'", "'bool3x2'", "'bool3x3'", "'bool3x4'", "'bool4x1'",
	"'bool4x2'", "'bool4x3'", "'bool4x4'", "'Buffer'", "'double'", "'double1'",
	"'double2'", "'double3'", "'double4'", "'double1x1'", "'double1x2'", "'double1x3'",
	"'double1x4'", "'double2x1'", "'double2x2'", "'double2x3'", "'double2x4'",
	"'double3x1'", "'double3x2'", "'double3x3'", "'double3x4'", "'double4x1'",
	"'double4x2'", "'double4x3'", "'double4x4'", "'float'", "'float1'", "'float2'",
	"'float3'", "'float4'", "'float1x1'", "'float1x2'", "'float1x3'", "'float1x4'",
	"'float2x1'", "'float2x2'", "'float2x3'", "'float2x4'", "'float3x1'",
	"'float3x2'", "'float3x3'", "'float3x4'", "'float4x1'", "'float4x2'",
	"'float4x3'", "'float4x4'", "'half'", "'half1'", "'half2'", "'half3'",
	"'half4'", "'half1x1'", "'half1x2'", "'half1x3'", "'half1x4'", "'half2x1'",
	"'half2x2'", "'half2x3'", "'half2x4'", "'half3x1'", "'half3x2'", "'half3x3'",
	"'half3x4'", "'half4x1'", "'half4x2'", "'half4x3'", "'half4x4'", "'int'",
	"'int1'", "'int2'", "'int3'", "'int4'", "'int1x1'", "'int1x2'", "'int1x3'",
	"'int1x4'", "'int2x1'", "'int2x2'", "'int2x3'", "'int2x4'", "'int3x1'",
	"'int3x2'", "'int3x3'", "'int3x4'", "'int4x1'", "'int4x2'", "'int4x3'",
	"'int4x4'", "'long'", "'Texture1D'", "'Texture1DArray'", "'Texture2D'",
	"'Texture2DArray'", "'Texture2DMS'", "'Texture2DMSArray'", "'Texture3D'",
	"'TextureCube'", "'TextureCubeArray'", "'triangle'", "", "'uint1'", "'uint2'",
	"'uint3'", "'uint4'", "'uint1x1'", "'uint1x2'", "'uint1x3'", "'uint1x4'",
	"'uint2x1'", "'uint2x2'", "'uint2x3'", "'uint2x4'", "'uint3x1'", "'uint3x2'",
	"'uint3x3'", "'uint3x4'", "'uint4x1'", "'uint4x2'", "'uint4x3'", "'uint4x4'",
	"'vector'", "'ByteAddressBuffer'", "'break'", "'case'", "'cbuffer'", "'centroid'",
	"'class'", "'column_major'", "'const'", "'ConsumeStructuredBuffer'", "'continue'",
	"'default'", "'discard'", "'do'", "'else'", "'extern'", "'false'", "'for'",
	"'groupshared'", "'if'", "'in'", "", "'InputPatch'", "'interface'", "'line'",
	"'lineadj'", "'linear'", "'LineStream'", "'matrix'", "'nointerpolation'",
	"'noperspective'", "'out'", "'OutputPatch'", "'packoffset'", "'point'",
	"'PointStream'", "'precise'", "'register'", "'return'", "'row_major'",
	"'RWBuffer'", "'RWByteAddressBuffer'", "'RWStructuredBuffer'", "'sample'",
	"'sampler'", "'SamplerComparisonState'", "'SamplerState'", "'shared'",
	"'static'", "'struct'", "'StructuredBuffer'", "'switch'", "'triangleadj'",
	"'TriangleStream'", "'True'", "'uniform'", "'volatile'", "'void'", "'while'",
	"", "'<'", "'>'", "'='", "'and'", "", "','", "':'", "'::'", "';'", "'+'",
	"'-'", "'*'", "'('", "')'", "'{'", "'}'", "'['", "']'", "'?'", "", "",
	"", "", "", "", "'..'", "", "", "", "'*/'", "'$'", "'&'", "'/*'"
};

std::vector<std::string> HLSL_Parser::_symbolicNames = {
	"", "DUMMY", "Bool", "Bool1", "Bool2", "Bool3", "Bool4", "Bool1x1", "Bool1x2",
	"Bool1x3", "Bool1x4", "Bool2x1", "Bool2x2", "Bool2x3", "Bool2x4", "Bool3x1",
	"Bool3x2", "Bool3x3", "Bool3x4", "Bool4x1", "Bool4x2", "Bool4x3", "Bool4x4",
	"Buffer", "Double", "Double1", "Double2", "Double3", "Double4", "Double1x1",
	"Double1x2", "Double1x3", "Double1x4", "Double2x1", "Double2x2", "Double2x3",
	"Double2x4", "Double3x1", "Double3x2", "Double3x3", "Double3x4", "Double4x1",
	"Double4x2", "Double4x3", "Double4x4", "Float", "Float1", "Float2", "Float3",
	"Float4", "Float1x1", "Float1x2", "Float1x3", "Float1x4", "Float2x1",
	"Float2x2", "Float2x3", "Float2x4", "Float3x1", "Float3x2", "Float3x3",
	"Float3x4", "Float4x1", "Float4x2", "Float4x3", "Float4x4", "Half", "Half1",
	"Half2", "Half3", "Half4", "Half1x1", "Half1x2", "Half1x3", "Half1x4",
	"Half2x1", "Half2x2", "Half2x3", "Half2x4", "Half3x1", "Half3x2", "Half3x3",
	"Half3x4", "Half4x1", "Half4x2", "Half4x3", "Half4x4", "Int", "Int1",
	"Int2", "Int3", "Int4", "Int1x1", "Int1x2", "Int1x3", "Int1x4", "Int2x1",
	"Int2x2", "Int2x3", "Int2x4", "Int3x1", "Int3x2", "Int3x3", "Int3x4",
	"Int4x1", "Int4x2", "Int4x3", "Int4x4", "Long", "Texture1D", "Texture1DArray",
	"Texture2D", "Texture2DArray", "Texture2DMS", "Texture2DMSArray", "Texture3D",
	"TextureCube", "TextureCubeArray", "Triangle", "Uint", "Uint1", "Uint2",
	"Uint3", "Uint4", "Uint1x1", "Uint1x2", "Uint1x3", "Uint1x4", "Uint2x1",
	"Uint2x2", "Uint2x3", "Uint2x4", "Uint3x1", "Uint3x2", "Uint3x3", "Uint3x4",
	"Uint4x1", "Uint4x2", "Uint4x3", "Uint4x4", "Vector", "ByteAddressBuffer",
	"Break", "Case", "CBuffer", "Centroid", "Class", "ColumnMajor", "Const",
	"ConsumeStructuredBuffer", "Continue", "Default", "Discard", "Do", "Else",
	"Extern", "False", "For", "Groupshared", "If", "In", "Inout", "InputPatch",
	"Interface", "Line_", "LineAdj", "Linear", "LineStream", "Matrix", "Nointerpolation",
	"Noperspective", "Out", "OutputPatch", "Packoffset", "Point", "PointStream",
	"Precise", "Register", "Return", "RowMajor", "RWBuffer", "RWByteAddressBuffer",
	"RWStructuredBuffer", "Sample", "Sampler", "SamplerComparisonState", "SamplerState",
	"Shared", "Static", "Struct", "StructuredBuffer", "Switch", "TriangleAdj",
	"TriangleStream", "True", "Uniform", "Volatile", "Void", "While", "ID",
	"MenorA", "MayorA", "Asignar", "And", "Punto", "Coma", "DosPuntos", "DobleDosPuntos",
	"PuntoYComa", "Mas", "Menos", "Asterisco", "ParentesisAbierto", "ParentesisCerrado",
	"LlaveAbierta", "LlaveCerrada", "CorcheteAbierto", "CorcheteCerrado",
	"QuestionMark", "IntegerLiteral", "FloatLiteral", "Espacio", "Script",
	"ComentarioLinea", "Dot", "DotDot", "LineComment", "StringLiteral", "BlockCommentEndOfFile",
	"BlockComment", "Dolar", "Ampersand", "StartBlockComment"
};

dfa::Vocabulary HLSL_Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HLSL_Parser::_tokenNames;

HLSL_Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		}
		else {
			_tokenNames.push_back(name);
		}
	}

	_serializedATN = {
		0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964,
		0x3, 0xea, 0x181, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4,
		0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7,
		0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb,
		0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe,
		0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4,
		0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15,
		0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9,
		0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b,
		0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4,
		0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22,
		0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9,
		0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28,
		0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4,
		0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f,
		0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9,
		0x32, 0x4, 0x33, 0x9, 0x33, 0x3, 0x2, 0x7, 0x2, 0x68, 0xa, 0x2, 0xc,
		0x2, 0xe, 0x2, 0x6b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3,
		0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x76, 0xa,
		0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3,
		0x5, 0x3, 0x5, 0x5, 0x5, 0x80, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x83, 0xa,
		0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x87, 0xa, 0x5, 0x3, 0x6, 0x7, 0x6,
		0x8a, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x8d, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6,
		0x3, 0x6, 0x5, 0x6, 0x92, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5,
		0x6, 0x97, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x9b, 0xa, 0x6, 0x3,
		0x6, 0x3, 0x6, 0x5, 0x6, 0x9f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8,
		0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x7, 0xb,
		0xaa, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xad, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb,
		0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xb3, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5,
		0xb, 0xb7, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc,
		0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc3, 0xa,
		0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3,
		0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xce, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf,
		0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3,
		0x11, 0x7, 0x11, 0xd9, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xdc, 0xb, 0x11,
		0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3,
		0x14, 0x3, 0x14, 0x5, 0x14, 0xe6, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3,
		0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xee, 0xa, 0x16, 0xc,
		0x16, 0xe, 0x16, 0xf1, 0xb, 0x16, 0x3, 0x17, 0x7, 0x17, 0xf4, 0xa, 0x17,
		0xc, 0x17, 0xe, 0x17, 0xf7, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17,
		0x5, 0x17, 0xfc, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19,
		0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3,
		0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d,
		0x5, 0x1d, 0x10f, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x113,
		0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x118, 0xa, 0x1f,
		0xc, 0x1f, 0xe, 0x1f, 0x11b, 0xb, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x11e,
		0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3,
		0x21, 0x7, 0x21, 0x126, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x129, 0xb,
		0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22,
		0x7, 0x22, 0x131, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x134, 0xb, 0x22,
		0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x138, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23,
		0x13b, 0xb, 0x23, 0x3, 0x23, 0x5, 0x23, 0x13e, 0xa, 0x23, 0x3, 0x23,
		0x5, 0x23, 0x141, 0xa, 0x23, 0x3, 0x23, 0x5, 0x23, 0x144, 0xa, 0x23,
		0x3, 0x23, 0x5, 0x23, 0x147, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24,
		0x14b, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25,
		0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x155, 0xa, 0x25, 0x3, 0x25,
		0x3, 0x25, 0x3, 0x26, 0x7, 0x26, 0x15a, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26,
		0x15d, 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29,
		0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3,
		0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x16d, 0xa, 0x2a, 0x3, 0x2b,
		0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3,
		0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31,
		0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x2, 0x2, 0x34,
		0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a,
		0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32,
		0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a,
		0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62,
		0x64, 0x2, 0xb, 0x11, 0x2, 0x78, 0x78, 0x93, 0x93, 0x95, 0x96, 0x9d,
		0x9d, 0xa0, 0xa0, 0xa2, 0xa3, 0xa6, 0xa8, 0xab, 0xad, 0xb0, 0xb0, 0xb2,
		0xb2, 0xb5, 0xb5, 0xb9, 0xb9, 0xbd, 0xbe, 0xc2, 0xc2, 0xc5, 0xc6, 0x4,
		0x2, 0xa2, 0xa3, 0xad, 0xad, 0x8, 0x2, 0x4, 0x4, 0x1a, 0x1a, 0x2f, 0x2f,
		0x44, 0x44, 0x59, 0x59, 0x79, 0x79, 0x4, 0x2, 0x6f, 0x72, 0x75, 0x77,
		0x3, 0x2, 0x73, 0x74, 0x9, 0x2, 0x5, 0x8, 0x1b, 0x1e, 0x30, 0x33, 0x45,
		0x48, 0x5a, 0x5d, 0x7a, 0x7d, 0x8e, 0x8e, 0x9, 0x2, 0x9, 0x18, 0x1f,
		0x2e, 0x34, 0x43, 0x49, 0x58, 0x5e, 0x6d, 0x7e, 0x8d, 0xaa, 0xaa, 0x3,
		0x2, 0xb9, 0xbc, 0x6, 0x2, 0x9e, 0x9e, 0xc4, 0xc4, 0xdd, 0xde, 0xe5,
		0xe5, 0x2, 0x17d, 0x2, 0x69, 0x3, 0x2, 0x2, 0x2, 0x4, 0x75, 0x3, 0x2,
		0x2, 0x2, 0x6, 0x77, 0x3, 0x2, 0x2, 0x2, 0x8, 0x7c, 0x3, 0x2, 0x2, 0x2,
		0xa, 0x8b, 0x3, 0x2, 0x2, 0x2, 0xc, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa2,
		0x3, 0x2, 0x2, 0x2, 0x10, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa6, 0x3,
		0x2, 0x2, 0x2, 0x14, 0xab, 0x3, 0x2, 0x2, 0x2, 0x16, 0xba, 0x3, 0x2,
		0x2, 0x2, 0x18, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc7, 0x3, 0x2, 0x2,
		0x2, 0x1c, 0xca, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd1, 0x3, 0x2, 0x2, 0x2,
		0x20, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x22, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x24,
		0xdf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe7,
		0x3, 0x2, 0x2, 0x2, 0x2a, 0xea, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf5, 0x3,
		0x2, 0x2, 0x2, 0x2e, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x30, 0xff, 0x3, 0x2,
		0x2, 0x2, 0x32, 0x101, 0x3, 0x2, 0x2, 0x2, 0x34, 0x103, 0x3, 0x2, 0x2,
		0x2, 0x36, 0x105, 0x3, 0x2, 0x2, 0x2, 0x38, 0x10e, 0x3, 0x2, 0x2, 0x2,
		0x3a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x114, 0x3, 0x2, 0x2, 0x2, 0x3e,
		0x11f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x127, 0x3, 0x2, 0x2, 0x2, 0x42, 0x12d,
		0x3, 0x2, 0x2, 0x2, 0x44, 0x135, 0x3, 0x2, 0x2, 0x2, 0x46, 0x148, 0x3,
		0x2, 0x2, 0x2, 0x48, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x15b, 0x3, 0x2,
		0x2, 0x2, 0x4c, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x160, 0x3, 0x2, 0x2,
		0x2, 0x50, 0x162, 0x3, 0x2, 0x2, 0x2, 0x52, 0x16c, 0x3, 0x2, 0x2, 0x2,
		0x54, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x56, 0x170, 0x3, 0x2, 0x2, 0x2, 0x58,
		0x172, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x174, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x176,
		0x3, 0x2, 0x2, 0x2, 0x5e, 0x178, 0x3, 0x2, 0x2, 0x2, 0x60, 0x17a, 0x3,
		0x2, 0x2, 0x2, 0x62, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x64, 0x17e, 0x3, 0x2,
		0x2, 0x2, 0x66, 0x68, 0x5, 0x4, 0x3, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2,
		0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2,
		0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6b,
		0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x2, 0x2, 0x3, 0x6d, 0x3,
		0x3, 0x2, 0x2, 0x2, 0x6e, 0x76, 0x5, 0x6, 0x4, 0x2, 0x6f, 0x76, 0x5,
		0xa, 0x6, 0x2, 0x70, 0x76, 0x5, 0x18, 0xd, 0x2, 0x71, 0x76, 0x5, 0x8,
		0x5, 0x2, 0x72, 0x76, 0x5, 0x1a, 0xe, 0x2, 0x73, 0x76, 0x5, 0x16, 0xc,
		0x2, 0x74, 0x76, 0x5, 0x14, 0xb, 0x2, 0x75, 0x6e, 0x3, 0x2, 0x2, 0x2,
		0x75, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x75, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75,
		0x71, 0x3, 0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73,
		0x3, 0x2, 0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x5, 0x3,
		0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0xbf, 0x2, 0x2, 0x78, 0x79, 0x5, 0x22,
		0x12, 0x2, 0x79, 0x7a, 0x5, 0x4c, 0x27, 0x2, 0x7a, 0x7b, 0x7, 0xd2,
		0x2, 0x2, 0x7b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x92, 0x2,
		0x2, 0x7d, 0x7f, 0x5, 0x22, 0x12, 0x2, 0x7e, 0x80, 0x5, 0x36, 0x1c,
		0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2,
		0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x5, 0x28, 0x15, 0x2, 0x82,
		0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84,
		0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0x4c, 0x27, 0x2, 0x85, 0x87, 0x7,
		0xd2, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2,
		0x2, 0x2, 0x87, 0x9, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x5, 0x1c, 0xf,
		0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2,
		0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c,
		0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x91,
		0x5, 0xc, 0x7, 0x2, 0x8f, 0x90, 0x7, 0xc9, 0x2, 0x2, 0x90, 0x92, 0x7,
		0xd1, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2,
		0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x5, 0xe, 0x8,
		0x2, 0x94, 0x96, 0x7, 0xd6, 0x2, 0x2, 0x95, 0x97, 0x5, 0x2a, 0x16, 0x2,
		0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97,
		0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x7, 0xd7, 0x2, 0x2, 0x99, 0x9b,
		0x5, 0x10, 0x9, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3,
		0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x12,
		0xa, 0x2, 0x9d, 0x9f, 0x7, 0xd2, 0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2,
		0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xb, 0x3, 0x2, 0x2, 0x2,
		0xa0, 0xa1, 0x5, 0x52, 0x2a, 0x2, 0xa1, 0xd, 0x3, 0x2, 0x2, 0x2, 0xa2,
		0xa3, 0x7, 0xc9, 0x2, 0x2, 0xa3, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5,
		0x5, 0x28, 0x15, 0x2, 0xa5, 0x11, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x5,
		0x4c, 0x27, 0x2, 0xa7, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x1c,
		0xf, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2,
		0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2,
		0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae,
		0xaf, 0x5, 0x52, 0x2a, 0x2, 0xaf, 0xb0, 0x5, 0x22, 0x12, 0x2, 0xb0,
		0xb2, 0x7, 0xd6, 0x2, 0x2, 0xb1, 0xb3, 0x5, 0x2a, 0x16, 0x2, 0xb2, 0xb1,
		0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3,
		0x2, 0x2, 0x2, 0xb4, 0xb6, 0x7, 0xd7, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x28,
		0x15, 0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2,
		0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0xd2, 0x2, 0x2,
		0xb9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0xa5, 0x2, 0x2, 0xbb,
		0xbc, 0x5, 0x22, 0x12, 0x2, 0xbc, 0xbd, 0x5, 0x4c, 0x27, 0x2, 0xbd,
		0xbe, 0x7, 0xd2, 0x2, 0x2, 0xbe, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0,
		0x7, 0x94, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0x22, 0x12, 0x2, 0xc1, 0xc3, 0x5,
		0x24, 0x13, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2,
		0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x4c, 0x27,
		0x2, 0xc5, 0xc6, 0x7, 0xd2, 0x2, 0x2, 0xc6, 0x19, 0x3, 0x2, 0x2, 0x2,
		0xc7, 0xc8, 0x5, 0x40, 0x21, 0x2, 0xc8, 0xc9, 0x7, 0xd2, 0x2, 0x2, 0xc9,
		0x1b, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0xda, 0x2, 0x2, 0xcb, 0xcd,
		0x7, 0xc9, 0x2, 0x2, 0xcc, 0xce, 0x5, 0x1e, 0x10, 0x2, 0xcd, 0xcc, 0x3,
		0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2,
		0x2, 0x2, 0xcf, 0xd0, 0x7, 0xdb, 0x2, 0x2, 0xd0, 0x1d, 0x3, 0x2, 0x2,
		0x2, 0xd1, 0xd2, 0x7, 0xd6, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x20, 0x11, 0x2,
		0xd3, 0xd4, 0x7, 0xd7, 0x2, 0x2, 0xd4, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd5,
		0xda, 0x5, 0x62, 0x32, 0x2, 0xd6, 0xd7, 0x7, 0xcf, 0x2, 0x2, 0xd7, 0xd9,
		0x5, 0x62, 0x32, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3,
		0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2,
		0x2, 0x2, 0xdb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2,
		0x2, 0xdd, 0xde, 0x7, 0xc9, 0x2, 0x2, 0xde, 0x23, 0x3, 0x2, 0x2, 0x2,
		0xdf, 0xe0, 0x7, 0xd0, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0xc9, 0x2, 0x2, 0xe1,
		0x25, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe6, 0x5, 0x1a, 0xe, 0x2, 0xe3, 0xe6,
		0x5, 0xa, 0x6, 0x2, 0xe4, 0xe6, 0x5, 0x14, 0xb, 0x2, 0xe5, 0xe2, 0x3,
		0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe4, 0x3, 0x2,
		0x2, 0x2, 0xe6, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0xd0, 0x2,
		0x2, 0xe8, 0xe9, 0x7, 0xc9, 0x2, 0x2, 0xe9, 0x29, 0x3, 0x2, 0x2, 0x2,
		0xea, 0xef, 0x5, 0x2c, 0x17, 0x2, 0xeb, 0xec, 0x7, 0xcf, 0x2, 0x2, 0xec,
		0xee, 0x5, 0x2c, 0x17, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1,
		0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3,
		0x2, 0x2, 0x2, 0xf0, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2,
		0x2, 0x2, 0xf2, 0xf4, 0x5, 0x2e, 0x18, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2,
		0x2, 0xf4, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2,
		0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7,
		0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x30, 0x19, 0x2, 0xf9, 0xfb,
		0x5, 0x32, 0x1a, 0x2, 0xfa, 0xfc, 0x5, 0x34, 0x1b, 0x2, 0xfb, 0xfa,
		0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x2d, 0x3,
		0x2, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x4e, 0x28, 0x2, 0xfe, 0x2f, 0x3, 0x2,
		0x2, 0x2, 0xff, 0x100, 0x5, 0x52, 0x2a, 0x2, 0x100, 0x31, 0x3, 0x2,
		0x2, 0x2, 0x101, 0x102, 0x7, 0xc9, 0x2, 0x2, 0x102, 0x33, 0x3, 0x2,
		0x2, 0x2, 0x103, 0x104, 0x5, 0x28, 0x15, 0x2, 0x104, 0x35, 0x3, 0x2,
		0x2, 0x2, 0x105, 0x106, 0x7, 0xd0, 0x2, 0x2, 0x106, 0x107, 0x7, 0xb3,
		0x2, 0x2, 0x107, 0x108, 0x7, 0xd6, 0x2, 0x2, 0x108, 0x109, 0x7, 0xc9,
		0x2, 0x2, 0x109, 0x10a, 0x7, 0xd7, 0x2, 0x2, 0x10a, 0x37, 0x3, 0x2,
		0x2, 0x2, 0x10b, 0x10c, 0x7, 0xcc, 0x2, 0x2, 0x10c, 0x10f, 0x5, 0x3a,
		0x1e, 0x2, 0x10d, 0x10f, 0x5, 0x4c, 0x27, 0x2, 0x10e, 0x10b, 0x3, 0x2,
		0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x39, 0x3, 0x2, 0x2,
		0x2, 0x110, 0x113, 0x5, 0x4c, 0x27, 0x2, 0x111, 0x113, 0x5, 0x62, 0x32,
		0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x111, 0x3, 0x2, 0x2,
		0x2, 0x113, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x114, 0x119, 0x5, 0x3a, 0x1e,
		0x2, 0x115, 0x116, 0x7, 0xcf, 0x2, 0x2, 0x116, 0x118, 0x5, 0x3a, 0x1e,
		0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11b, 0x3, 0x2, 0x2,
		0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2,
		0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2,
		0x2, 0x11c, 0x11e, 0x7, 0xcf, 0x2, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2,
		0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x3d, 0x3, 0x2, 0x2, 0x2,
		0x11f, 0x120, 0x7, 0xc9, 0x2, 0x2, 0x120, 0x121, 0x7, 0xcc, 0x2, 0x2,
		0x121, 0x122, 0x5, 0x62, 0x32, 0x2, 0x122, 0x123, 0x7, 0xd2, 0x2, 0x2,
		0x123, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x124, 0x126, 0x5, 0x4e, 0x28, 0x2,
		0x125, 0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x129, 0x3, 0x2, 0x2, 0x2,
		0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2,
		0x128, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2,
		0x12a, 0x12b, 0x5, 0x52, 0x2a, 0x2, 0x12b, 0x12c, 0x5, 0x42, 0x22, 0x2,
		0x12c, 0x41, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x132, 0x5, 0x44, 0x23, 0x2,
		0x12e, 0x12f, 0x7, 0xcf, 0x2, 0x2, 0x12f, 0x131, 0x5, 0x44, 0x23, 0x2,
		0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2,
		0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2,
		0x133, 0x43, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135,
		0x139, 0x5, 0x22, 0x12, 0x2, 0x136, 0x138, 0x5, 0x46, 0x24, 0x2, 0x137,
		0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139,
		0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a,
		0x13d, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13c,
		0x13e, 0x5, 0x48, 0x25, 0x2, 0x13d, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13d,
		0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13f,
		0x141, 0x5, 0x36, 0x1c, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x140,
		0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x143, 0x3, 0x2, 0x2, 0x2, 0x142,
		0x144, 0x5, 0x28, 0x15, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 0x143,
		0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x3, 0x2, 0x2, 0x2, 0x145,
		0x147, 0x5, 0x38, 0x1d, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x146,
		0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x45, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14a,
		0x7, 0xda, 0x2, 0x2, 0x149, 0x14b, 0x5, 0x62, 0x32, 0x2, 0x14a, 0x149,
		0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c,
		0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0xdb, 0x2, 0x2, 0x14d, 0x47,
		0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0xd0, 0x2, 0x2, 0x14f, 0x150,
		0x7, 0xaf, 0x2, 0x2, 0x150, 0x151, 0x7, 0xd6, 0x2, 0x2, 0x151, 0x154,
		0x7, 0xc9, 0x2, 0x2, 0x152, 0x153, 0x7, 0xce, 0x2, 0x2, 0x153, 0x155,
		0x7, 0xc9, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155,
		0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157,
		0x7, 0xd7, 0x2, 0x2, 0x157, 0x49, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15a,
		0x5, 0x4e, 0x28, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d,
		0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c,
		0x3, 0x2, 0x2, 0x2, 0x15c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3,
		0x2, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0xe0, 0x2, 0x2, 0x15f, 0x4d, 0x3,
		0x2, 0x2, 0x2, 0x160, 0x161, 0x9, 0x2, 0x2, 0x2, 0x161, 0x4f, 0x3, 0x2,
		0x2, 0x2, 0x162, 0x163, 0x9, 0x3, 0x2, 0x2, 0x163, 0x51, 0x3, 0x2, 0x2,
		0x2, 0x164, 0x16d, 0x5, 0x5c, 0x2f, 0x2, 0x165, 0x16d, 0x5, 0x54, 0x2b,
		0x2, 0x166, 0x16d, 0x5, 0x56, 0x2c, 0x2, 0x167, 0x16d, 0x5, 0x58, 0x2d,
		0x2, 0x168, 0x16d, 0x5, 0x5a, 0x2e, 0x2, 0x169, 0x16d, 0x5, 0x5e, 0x30,
		0x2, 0x16a, 0x16d, 0x5, 0x60, 0x31, 0x2, 0x16b, 0x16d, 0x5, 0x64, 0x33,
		0x2, 0x16c, 0x164, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x165, 0x3, 0x2, 0x2,
		0x2, 0x16c, 0x166, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x167, 0x3, 0x2, 0x2,
		0x2, 0x16c, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x169, 0x3, 0x2, 0x2,
		0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16b, 0x3, 0x2, 0x2,
		0x2, 0x16d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x9, 0x4, 0x2, 0x2,
		0x16f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x9, 0x5, 0x2, 0x2, 0x171,
		0x57, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x9, 0x6, 0x2, 0x2, 0x173, 0x59,
		0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x9, 0x7, 0x2, 0x2, 0x175, 0x5b, 0x3,
		0x2, 0x2, 0x2, 0x176, 0x177, 0x9, 0x8, 0x2, 0x2, 0x177, 0x5d, 0x3, 0x2,
		0x2, 0x2, 0x178, 0x179, 0x9, 0x9, 0x2, 0x2, 0x179, 0x5f, 0x3, 0x2, 0x2,
		0x2, 0x17a, 0x17b, 0x7, 0xc7, 0x2, 0x2, 0x17b, 0x61, 0x3, 0x2, 0x2,
		0x2, 0x17c, 0x17d, 0x9, 0xa, 0x2, 0x2, 0x17d, 0x63, 0x3, 0x2, 0x2, 0x2,
		0x17e, 0x17f, 0x7, 0xc9, 0x2, 0x2, 0x17f, 0x65, 0x3, 0x2, 0x2, 0x2,
		0x25, 0x69, 0x75, 0x7f, 0x82, 0x86, 0x8b, 0x91, 0x96, 0x9a, 0x9e, 0xab,
		0xb2, 0xb6, 0xc2, 0xcd, 0xda, 0xe5, 0xef, 0xf5, 0xfb, 0x10e, 0x112,
		0x119, 0x11d, 0x127, 0x132, 0x139, 0x13d, 0x140, 0x143, 0x146, 0x14a,
		0x154, 0x15b, 0x16c,
	};

	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++) {
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

HLSL_Parser::Initializer HLSL_Parser::_init;