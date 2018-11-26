// parser/listener/visitor header section

// Generated from HLSL_Parser.g4 by ANTLR 4.7

#ifndef GENERADORSHADER_PARSER_HLSLPARSER_H_
#define GENERADORSHADER_PARSER_HLSLPARSER_H_

// parser precinclude section

#include <antlr4-runtime.h>

// parser postinclude section

#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


// parser context section
namespace GeneradorShader
{
namespace Parser
{

	class  HLSL_Parser : public antlr4::Parser {
	public:
		enum {
			DUMMY = 1, Bool = 2, Bool1 = 3, Bool2 = 4, Bool3 = 5, Bool4 = 6, Bool1x1 = 7,
			Bool1x2 = 8, Bool1x3 = 9, Bool1x4 = 10, Bool2x1 = 11, Bool2x2 = 12,
			Bool2x3 = 13, Bool2x4 = 14, Bool3x1 = 15, Bool3x2 = 16, Bool3x3 = 17,
			Bool3x4 = 18, Bool4x1 = 19, Bool4x2 = 20, Bool4x3 = 21, Bool4x4 = 22,
			Buffer = 23, Double = 24, Double1 = 25, Double2 = 26, Double3 = 27,
			Double4 = 28, Double1x1 = 29, Double1x2 = 30, Double1x3 = 31, Double1x4 = 32,
			Double2x1 = 33, Double2x2 = 34, Double2x3 = 35, Double2x4 = 36, Double3x1 = 37,
			Double3x2 = 38, Double3x3 = 39, Double3x4 = 40, Double4x1 = 41, Double4x2 = 42,
			Double4x3 = 43, Double4x4 = 44, Float = 45, Float1 = 46, Float2 = 47,
			Float3 = 48, Float4 = 49, Float1x1 = 50, Float1x2 = 51, Float1x3 = 52,
			Float1x4 = 53, Float2x1 = 54, Float2x2 = 55, Float2x3 = 56, Float2x4 = 57,
			Float3x1 = 58, Float3x2 = 59, Float3x3 = 60, Float3x4 = 61, Float4x1 = 62,
			Float4x2 = 63, Float4x3 = 64, Float4x4 = 65, Half = 66, Half1 = 67,
			Half2 = 68, Half3 = 69, Half4 = 70, Half1x1 = 71, Half1x2 = 72, Half1x3 = 73,
			Half1x4 = 74, Half2x1 = 75, Half2x2 = 76, Half2x3 = 77, Half2x4 = 78,
			Half3x1 = 79, Half3x2 = 80, Half3x3 = 81, Half3x4 = 82, Half4x1 = 83,
			Half4x2 = 84, Half4x3 = 85, Half4x4 = 86, Int = 87, Int1 = 88, Int2 = 89,
			Int3 = 90, Int4 = 91, Int1x1 = 92, Int1x2 = 93, Int1x3 = 94, Int1x4 = 95,
			Int2x1 = 96, Int2x2 = 97, Int2x3 = 98, Int2x4 = 99, Int3x1 = 100, Int3x2 = 101,
			Int3x3 = 102, Int3x4 = 103, Int4x1 = 104, Int4x2 = 105, Int4x3 = 106,
			Int4x4 = 107, Long = 108, Texture1D = 109, Texture1DArray = 110, Texture2D = 111,
			Texture2DArray = 112, Texture2DMS = 113, Texture2DMSArray = 114, Texture3D = 115,
			TextureCube = 116, TextureCubeArray = 117, Triangle = 118, Uint = 119,
			Uint1 = 120, Uint2 = 121, Uint3 = 122, Uint4 = 123, Uint1x1 = 124, Uint1x2 = 125,
			Uint1x3 = 126, Uint1x4 = 127, Uint2x1 = 128, Uint2x2 = 129, Uint2x3 = 130,
			Uint2x4 = 131, Uint3x1 = 132, Uint3x2 = 133, Uint3x3 = 134, Uint3x4 = 135,
			Uint4x1 = 136, Uint4x2 = 137, Uint4x3 = 138, Uint4x4 = 139, Vector = 140,
			ByteAddressBuffer = 141, Break = 142, Case = 143, CBuffer = 144, Centroid = 145,
			Class = 146, ColumnMajor = 147, Const = 148, ConsumeStructuredBuffer = 149,
			Continue = 150, Default = 151, Discard = 152, Do = 153, Else = 154,
			Extern = 155, False = 156, For = 157, Groupshared = 158, If = 159, In = 160,
			Inout = 161, InputPatch = 162, Interface = 163, Line_ = 164, LineAdj = 165,
			Linear = 166, LineStream = 167, Matrix = 168, Nointerpolation = 169,
			Noperspective = 170, Out = 171, OutputPatch = 172, Packoffset = 173,
			Point = 174, PointStream = 175, Precise = 176, Register = 177, Return = 178,
			RowMajor = 179, RWBuffer = 180, RWByteAddressBuffer = 181, RWStructuredBuffer = 182,
			Sample = 183, Sampler = 184, SamplerComparisonState = 185, SamplerState = 186,
			Shared = 187, Static = 188, Struct = 189, StructuredBuffer = 190, Switch = 191,
			TriangleAdj = 192, TriangleStream = 193, True = 194, Uniform = 195,
			Volatile = 196, Void = 197, While = 198, ID = 199, MenorA = 200, MayorA = 201,
			Asignar = 202, And = 203, Punto = 204, Coma = 205, DosPuntos = 206,
			DobleDosPuntos = 207, PuntoYComa = 208, Mas = 209, Menos = 210, Asterisco = 211,
			ParentesisAbierto = 212, ParentesisCerrado = 213, LlaveAbierta = 214,
			LlaveCerrada = 215, CorcheteAbierto = 216, CorcheteCerrado = 217, QuestionMark = 218,
			IntegerLiteral = 219, FloatLiteral = 220, Espacio = 221, Script = 222,
			ComentarioLinea = 223, Dot = 224, DotDot = 225, LineComment = 226, StringLiteral = 227,
			BlockCommentEndOfFile = 228, BlockComment = 229, Dolar = 230, Ampersand = 231,
			StartBlockComment = 232
		};

		enum {
			RuleMain = 0, RuleDeclaraciones = 1, RuleStructDefinicion = 2, RuleConstantBuffer = 3,
			RuleFuncionDefinicion = 4, RuleTipoFuncion = 5, RuleNombreFuncion = 6,
			RuleSemanticaFuncion = 7, RuleBloqueDeCodigoFuncion = 8, RuleFuncionDeclaracion = 9,
			RuleInterfazDefinicion = 10, RuleClaseDefinicion = 11, RuleVariableDeclaracionSentencia = 12,
			RuleAtributo = 13, RuleAtributosListaArgumentos = 14, RuleAtributosArgumentos = 15,
			RuleNombre = 16, RuleListaClaseBase = 17, RuleDeclaracionMiembroClase = 18,
			RuleSemantica = 19, RuleParametros = 20, RuleParametro = 21, RuleStorageFlagParametro = 22,
			RuleTipoParametro = 23, RuleNombreParametro = 24, RuleSemanticaParametro = 25,
			RuleRegistrarAlocacion = 26, RuleVariableInicializador = 27, RuleEstandardVariableInicializador = 28,
			RuleArrayElementosInicializadores = 29, RuleSamplerStateProperty = 30,
			RuleVariableDeclaracion = 31, RuleVariableDeclaradores = 32, RuleVariableDeclarador = 33,
			RuleArrayRankingEspecificador = 34, RulePackOffsetNodo = 35, RuleStorageFlags = 36,
			RuleBloqueDeCodigo = 37, RuleStorageFlag = 38, RuleReferencia = 39,
			RuleTipo = 40, RuleTipoEscalar = 41, RuleTipoTextura = 42, RuleTipoTexturaMS = 43,
			RuleTipoVector = 44, RuleTipoMatriz = 45, RuleTipoSample = 46, RuleTipoVoid = 47,
			RuleLiteral = 48, RuleTipoDefinidoPorUsuario = 49
		};

		HLSL_Parser(antlr4::TokenStream *input);
		~HLSL_Parser();

		virtual std::string getGrammarFileName() const override;
		virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
		virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
		virtual const std::vector<std::string>& getRuleNames() const override;
		virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


		class MainContext;
		class DeclaracionesContext;
		class StructDefinicionContext;
		class ConstantBufferContext;
		class FuncionDefinicionContext;
		class TipoFuncionContext;
		class NombreFuncionContext;
		class SemanticaFuncionContext;
		class BloqueDeCodigoFuncionContext;
		class FuncionDeclaracionContext;
		class InterfazDefinicionContext;
		class ClaseDefinicionContext;
		class VariableDeclaracionSentenciaContext;
		class AtributoContext;
		class AtributosListaArgumentosContext;
		class AtributosArgumentosContext;
		class NombreContext;
		class ListaClaseBaseContext;
		class DeclaracionMiembroClaseContext;
		class SemanticaContext;
		class ParametrosContext;
		class ParametroContext;
		class StorageFlagParametroContext;
		class TipoParametroContext;
		class NombreParametroContext;
		class SemanticaParametroContext;
		class RegistrarAlocacionContext;
		class VariableInicializadorContext;
		class EstandardVariableInicializadorContext;
		class ArrayElementosInicializadoresContext;
		class SamplerStatePropertyContext;
		class VariableDeclaracionContext;
		class VariableDeclaradoresContext;
		class VariableDeclaradorContext;
		class ArrayRankingEspecificadorContext;
		class PackOffsetNodoContext;
		class StorageFlagsContext;
		class BloqueDeCodigoContext;
		class StorageFlagContext;
		class ReferenciaContext;
		class TipoContext;
		class TipoEscalarContext;
		class TipoTexturaContext;
		class TipoTexturaMSContext;
		class TipoVectorContext;
		class TipoMatrizContext;
		class TipoSampleContext;
		class TipoVoidContext;
		class LiteralContext;
		class TipoDefinidoPorUsuarioContext;

		class  MainContext : public antlr4::ParserRuleContext {
		public:
			MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *EOF();
			std::vector<DeclaracionesContext *> declaraciones();
			DeclaracionesContext* declaraciones(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		MainContext* main();

		class  DeclaracionesContext : public antlr4::ParserRuleContext {
		public:
			DeclaracionesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			StructDefinicionContext *structDefinicion();
			FuncionDefinicionContext *funcionDefinicion();
			ClaseDefinicionContext *claseDefinicion();
			ConstantBufferContext *constantBuffer();
			VariableDeclaracionSentenciaContext *variableDeclaracionSentencia();
			InterfazDefinicionContext *interfazDefinicion();
			FuncionDeclaracionContext *funcionDeclaracion();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		DeclaracionesContext* declaraciones();

		class  StructDefinicionContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *StructKeyword = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			StructDefinicionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			NombreContext *nombre();
			BloqueDeCodigoContext *bloqueDeCodigo();
			antlr4::tree::TerminalNode *Struct();
			antlr4::tree::TerminalNode *PuntoYComa();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		StructDefinicionContext* structDefinicion();

		class  ConstantBufferContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *CBufferKeyword = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			ConstantBufferContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			NombreContext *nombre();
			BloqueDeCodigoContext *bloqueDeCodigo();
			antlr4::tree::TerminalNode *CBuffer();
			RegistrarAlocacionContext *registrarAlocacion();
			SemanticaContext *semantica();
			antlr4::tree::TerminalNode *PuntoYComa();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ConstantBufferContext* constantBuffer();

		class  FuncionDefinicionContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *NombreClase = nullptr;;
			antlr4::Token *DobleDosPuntosToken = nullptr;;
			antlr4::Token *ParentesisAbiertoToken = nullptr;;
			antlr4::Token *ParentesisCerradoToken = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			FuncionDefinicionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoFuncionContext *tipoFuncion();
			NombreFuncionContext *nombreFuncion();
			BloqueDeCodigoFuncionContext *bloqueDeCodigoFuncion();
			antlr4::tree::TerminalNode *ParentesisAbierto();
			antlr4::tree::TerminalNode *ParentesisCerrado();
			std::vector<AtributoContext *> atributo();
			AtributoContext* atributo(size_t i);
			ParametrosContext *parametros();
			SemanticaFuncionContext *semanticaFuncion();
			antlr4::tree::TerminalNode *ID();
			antlr4::tree::TerminalNode *DobleDosPuntos();
			antlr4::tree::TerminalNode *PuntoYComa();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		FuncionDefinicionContext* funcionDefinicion();

		class  TipoFuncionContext : public antlr4::ParserRuleContext {
		public:
			TipoFuncionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoContext *tipo();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoFuncionContext* tipoFuncion();

		class  NombreFuncionContext : public antlr4::ParserRuleContext {
		public:
			NombreFuncionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *ID();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		NombreFuncionContext* nombreFuncion();

		class  SemanticaFuncionContext : public antlr4::ParserRuleContext {
		public:
			SemanticaFuncionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			SemanticaContext *semantica();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		SemanticaFuncionContext* semanticaFuncion();

		class  BloqueDeCodigoFuncionContext : public antlr4::ParserRuleContext {
		public:
			BloqueDeCodigoFuncionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			BloqueDeCodigoContext *bloqueDeCodigo();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		BloqueDeCodigoFuncionContext* bloqueDeCodigoFuncion();

		class  FuncionDeclaracionContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *ParentesisAbiertoToken = nullptr;;
			antlr4::Token *ParentesisCerradoToken = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			FuncionDeclaracionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoContext *tipo();
			NombreContext *nombre();
			antlr4::tree::TerminalNode *ParentesisAbierto();
			antlr4::tree::TerminalNode *ParentesisCerrado();
			antlr4::tree::TerminalNode *PuntoYComa();
			std::vector<AtributoContext *> atributo();
			AtributoContext* atributo(size_t i);
			ParametrosContext *parametros();
			SemanticaContext *semantica();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		FuncionDeclaracionContext* funcionDeclaracion();

		class  InterfazDefinicionContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *InterfaceKeyword = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			InterfazDefinicionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			NombreContext *nombre();
			BloqueDeCodigoContext *bloqueDeCodigo();
			antlr4::tree::TerminalNode *Interface();
			antlr4::tree::TerminalNode *PuntoYComa();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		InterfazDefinicionContext* interfazDefinicion();

		class  ClaseDefinicionContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *ClassKeyword = nullptr;;
			HLSL_Parser::ListaClaseBaseContext *ListaClaseBaseOpt = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			ClaseDefinicionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			NombreContext *nombre();
			BloqueDeCodigoContext *bloqueDeCodigo();
			antlr4::tree::TerminalNode *Class();
			antlr4::tree::TerminalNode *PuntoYComa();
			ListaClaseBaseContext *listaClaseBase();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ClaseDefinicionContext* claseDefinicion();

		class  VariableDeclaracionSentenciaContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *PuntoYComaToken = nullptr;;
			VariableDeclaracionSentenciaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			VariableDeclaracionContext *variableDeclaracion();
			antlr4::tree::TerminalNode *PuntoYComa();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		VariableDeclaracionSentenciaContext* variableDeclaracionSentencia();

		class  AtributoContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *CorcheteAbiertoToken = nullptr;;
			antlr4::Token *Nombre = nullptr;;
			antlr4::Token *CorcheteCerradoToken = nullptr;;
			AtributoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *CorcheteAbierto();
			antlr4::tree::TerminalNode *ID();
			antlr4::tree::TerminalNode *CorcheteCerrado();
			AtributosListaArgumentosContext *atributosListaArgumentos();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		AtributoContext* atributo();

		class  AtributosListaArgumentosContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *ParentesisAbiertoToken = nullptr;;
			antlr4::Token *ParentesisCerradoToken = nullptr;;
			AtributosListaArgumentosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			AtributosArgumentosContext *atributosArgumentos();
			antlr4::tree::TerminalNode *ParentesisAbierto();
			antlr4::tree::TerminalNode *ParentesisCerrado();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		AtributosListaArgumentosContext* atributosListaArgumentos();

		class  AtributosArgumentosContext : public antlr4::ParserRuleContext {
		public:
			AtributosArgumentosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			std::vector<LiteralContext *> literal();
			LiteralContext* literal(size_t i);
			std::vector<antlr4::tree::TerminalNode *> Coma();
			antlr4::tree::TerminalNode* Coma(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		AtributosArgumentosContext* atributosArgumentos();

		class  NombreContext : public antlr4::ParserRuleContext {
		public:
			NombreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *ID();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		NombreContext* nombre();

		class  ListaClaseBaseContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *DosPuntosToken = nullptr;;
			antlr4::Token *TipoBase = nullptr;;
			ListaClaseBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *DosPuntos();
			antlr4::tree::TerminalNode *ID();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ListaClaseBaseContext* listaClaseBase();

		class  DeclaracionMiembroClaseContext : public antlr4::ParserRuleContext {
		public:
			DeclaracionMiembroClaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			VariableDeclaracionSentenciaContext *variableDeclaracionSentencia();
			FuncionDefinicionContext *funcionDefinicion();
			FuncionDeclaracionContext *funcionDeclaracion();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		DeclaracionMiembroClaseContext* declaracionMiembroClase();

		class  SemanticaContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *DosPuntosToken = nullptr;;
			antlr4::Token *Nombre = nullptr;;
			SemanticaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *DosPuntos();
			antlr4::tree::TerminalNode *ID();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		SemanticaContext* semantica();

		class  ParametrosContext : public antlr4::ParserRuleContext {
		public:
			ParametrosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			std::vector<ParametroContext *> parametro();
			ParametroContext* parametro(size_t i);
			std::vector<antlr4::tree::TerminalNode *> Coma();
			antlr4::tree::TerminalNode* Coma(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ParametrosContext* parametros();

		class  ParametroContext : public antlr4::ParserRuleContext {
		public:
			ParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoParametroContext *tipoParametro();
			NombreParametroContext *nombreParametro();
			std::vector<StorageFlagParametroContext *> storageFlagParametro();
			StorageFlagParametroContext* storageFlagParametro(size_t i);
			SemanticaParametroContext *semanticaParametro();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ParametroContext* parametro();

		class  StorageFlagParametroContext : public antlr4::ParserRuleContext {
		public:
			StorageFlagParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			StorageFlagContext *storageFlag();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		StorageFlagParametroContext* storageFlagParametro();

		class  TipoParametroContext : public antlr4::ParserRuleContext {
		public:
			TipoParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoContext *tipo();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoParametroContext* tipoParametro();

		class  NombreParametroContext : public antlr4::ParserRuleContext {
		public:
			NombreParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *ID();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		NombreParametroContext* nombreParametro();

		class  SemanticaParametroContext : public antlr4::ParserRuleContext {
		public:
			SemanticaParametroContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			SemanticaContext *semantica();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		SemanticaParametroContext* semanticaParametro();

		class  RegistrarAlocacionContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *RegistrarDosPuntos = nullptr;;
			antlr4::Token *RegistrarKeyword = nullptr;;
			antlr4::Token *ParentesisAbiertoToken = nullptr;;
			antlr4::Token *DireccionMemoria = nullptr;;
			antlr4::Token *ParentesisCerradoToken = nullptr;;
			RegistrarAlocacionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *DosPuntos();
			antlr4::tree::TerminalNode *Register();
			antlr4::tree::TerminalNode *ParentesisAbierto();
			antlr4::tree::TerminalNode *ID();
			antlr4::tree::TerminalNode *ParentesisCerrado();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		RegistrarAlocacionContext* registrarAlocacion();

		class  VariableInicializadorContext : public antlr4::ParserRuleContext {
		public:
			VariableInicializadorContext(antlr4::ParserRuleContext *parent, size_t invokingState);

			VariableInicializadorContext() : antlr4::ParserRuleContext() { }
			void copyFrom(VariableInicializadorContext *context);
			using antlr4::ParserRuleContext::copyFrom;

			virtual size_t getRuleIndex() const override;


		};

		class  StandardVariableInitializer_Context : public VariableInicializadorContext {
		public:
			StandardVariableInitializer_Context(VariableInicializadorContext *ctx);

			antlr4::Token *AsignacionToken = nullptr;
			EstandardVariableInicializadorContext *estandardVariableInicializador();
			antlr4::tree::TerminalNode *Asignar();
			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
		};

		class  SamplerStateInitializerContext : public VariableInicializadorContext {
		public:
			SamplerStateInitializerContext(VariableInicializadorContext *ctx);

			BloqueDeCodigoContext *bloqueDeCodigo();
			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
		};

		VariableInicializadorContext* variableInicializador();

		class  EstandardVariableInicializadorContext : public antlr4::ParserRuleContext {
		public:
			EstandardVariableInicializadorContext(antlr4::ParserRuleContext *parent, size_t invokingState);

			EstandardVariableInicializadorContext() : antlr4::ParserRuleContext() { }
			void copyFrom(EstandardVariableInicializadorContext *context);
			using antlr4::ParserRuleContext::copyFrom;

			virtual size_t getRuleIndex() const override;


		};

		class  ExpressionVariableInitializerContext : public EstandardVariableInicializadorContext {
		public:
			ExpressionVariableInitializerContext(EstandardVariableInicializadorContext *ctx);

			HLSL_Parser::LiteralContext *Expr = nullptr;
			LiteralContext *literal();
			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
		};

		class  ArrayVariableInitializerContext : public EstandardVariableInicializadorContext {
		public:
			ArrayVariableInitializerContext(EstandardVariableInicializadorContext *ctx);

			BloqueDeCodigoContext *bloqueDeCodigo();
			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
		};

		EstandardVariableInicializadorContext* estandardVariableInicializador();

		class  ArrayElementosInicializadoresContext : public antlr4::ParserRuleContext {
		public:
			ArrayElementosInicializadoresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			std::vector<EstandardVariableInicializadorContext *> estandardVariableInicializador();
			EstandardVariableInicializadorContext* estandardVariableInicializador(size_t i);
			std::vector<antlr4::tree::TerminalNode *> Coma();
			antlr4::tree::TerminalNode* Coma(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ArrayElementosInicializadoresContext* arrayElementosInicializadores();

		class  SamplerStatePropertyContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *Nombre = nullptr;;
			antlr4::Token *AsignacionToken = nullptr;;
			HLSL_Parser::LiteralContext *Expr = nullptr;;
			antlr4::Token *PuntoYComaToken = nullptr;;
			SamplerStatePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *ID();
			antlr4::tree::TerminalNode *Asignar();
			LiteralContext *literal();
			antlr4::tree::TerminalNode *PuntoYComa();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		SamplerStatePropertyContext* samplerStateProperty();

		class  VariableDeclaracionContext : public antlr4::ParserRuleContext {
		public:
			VariableDeclaracionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoContext *tipo();
			VariableDeclaradoresContext *variableDeclaradores();
			std::vector<StorageFlagContext *> storageFlag();
			StorageFlagContext* storageFlag(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		VariableDeclaracionContext* variableDeclaracion();

		class  VariableDeclaradoresContext : public antlr4::ParserRuleContext {
		public:
			VariableDeclaradoresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			std::vector<VariableDeclaradorContext *> variableDeclarador();
			VariableDeclaradorContext* variableDeclarador(size_t i);
			std::vector<antlr4::tree::TerminalNode *> Coma();
			antlr4::tree::TerminalNode* Coma(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		VariableDeclaradoresContext* variableDeclaradores();

		class  VariableDeclaradorContext : public antlr4::ParserRuleContext {
		public:
			HLSL_Parser::ArrayRankingEspecificadorContext *arrayRankingEspecificadorContext = nullptr;;
			std::vector<ArrayRankingEspecificadorContext *> arrayRankingEspecificadores;;
			VariableDeclaradorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			NombreContext *nombre();
			PackOffsetNodoContext *packOffsetNodo();
			RegistrarAlocacionContext *registrarAlocacion();
			SemanticaContext *semantica();
			VariableInicializadorContext *variableInicializador();
			std::vector<ArrayRankingEspecificadorContext *> arrayRankingEspecificador();
			ArrayRankingEspecificadorContext* arrayRankingEspecificador(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		VariableDeclaradorContext* variableDeclarador();

		class  ArrayRankingEspecificadorContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *CorcheteAbiertoToken = nullptr;;
			HLSL_Parser::LiteralContext *Dimension = nullptr;;
			antlr4::Token *CorcheteCerradoToken = nullptr;;
			ArrayRankingEspecificadorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *CorcheteAbierto();
			antlr4::tree::TerminalNode *CorcheteCerrado();
			LiteralContext *literal();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ArrayRankingEspecificadorContext* arrayRankingEspecificador();

		class  PackOffsetNodoContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *DosPuntosToken = nullptr;;
			antlr4::Token *PackoffsetKeyword = nullptr;;
			antlr4::Token *ParentesisAbiertoToken = nullptr;;
			antlr4::Token *PackOffsetRegister = nullptr;;
			antlr4::Token *PuntoToken = nullptr;;
			antlr4::Token *PackOffsetComponent = nullptr;;
			antlr4::Token *ParentesisCerradoToken = nullptr;;
			PackOffsetNodoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *DosPuntos();
			antlr4::tree::TerminalNode *Packoffset();
			antlr4::tree::TerminalNode *ParentesisAbierto();
			std::vector<antlr4::tree::TerminalNode *> ID();
			antlr4::tree::TerminalNode* ID(size_t i);
			antlr4::tree::TerminalNode *ParentesisCerrado();
			antlr4::tree::TerminalNode *Punto();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		PackOffsetNodoContext* packOffsetNodo();

		class  StorageFlagsContext : public antlr4::ParserRuleContext {
		public:
			StorageFlagsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			std::vector<StorageFlagContext *> storageFlag();
			StorageFlagContext* storageFlag(size_t i);

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		StorageFlagsContext* storageFlags();

		class  BloqueDeCodigoContext : public antlr4::ParserRuleContext {
		public:
			BloqueDeCodigoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Script();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		BloqueDeCodigoContext* bloqueDeCodigo();

		class  StorageFlagContext : public antlr4::ParserRuleContext {
		public:
			StorageFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Const();
			antlr4::tree::TerminalNode *RowMajor();
			antlr4::tree::TerminalNode *ColumnMajor();
			antlr4::tree::TerminalNode *Extern();
			antlr4::tree::TerminalNode *Precise();
			antlr4::tree::TerminalNode *Shared();
			antlr4::tree::TerminalNode *Groupshared();
			antlr4::tree::TerminalNode *Static();
			antlr4::tree::TerminalNode *Uniform();
			antlr4::tree::TerminalNode *Volatile();
			antlr4::tree::TerminalNode *Linear();
			antlr4::tree::TerminalNode *Centroid();
			antlr4::tree::TerminalNode *Nointerpolation();
			antlr4::tree::TerminalNode *Noperspective();
			antlr4::tree::TerminalNode *Sample();
			antlr4::tree::TerminalNode *In();
			antlr4::tree::TerminalNode *Out();
			antlr4::tree::TerminalNode *Inout();
			antlr4::tree::TerminalNode *Point();
			antlr4::tree::TerminalNode *Line_();
			antlr4::tree::TerminalNode *Triangle();
			antlr4::tree::TerminalNode *LineAdj();
			antlr4::tree::TerminalNode *TriangleAdj();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		StorageFlagContext* storageFlag();

		class  ReferenciaContext : public antlr4::ParserRuleContext {
		public:
			ReferenciaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *In();
			antlr4::tree::TerminalNode *Out();
			antlr4::tree::TerminalNode *Inout();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		ReferenciaContext* referencia();

		class  TipoContext : public antlr4::ParserRuleContext {
		public:
			TipoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			TipoMatrizContext *tipoMatriz();
			TipoEscalarContext *tipoEscalar();
			TipoTexturaContext *tipoTextura();
			TipoTexturaMSContext *tipoTexturaMS();
			TipoVectorContext *tipoVector();
			TipoSampleContext *tipoSample();
			TipoVoidContext *tipoVoid();
			TipoDefinidoPorUsuarioContext *tipoDefinidoPorUsuario();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoContext* tipo();

		class  TipoEscalarContext : public antlr4::ParserRuleContext {
		public:
			TipoEscalarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Bool();
			antlr4::tree::TerminalNode *Int();
			antlr4::tree::TerminalNode *Uint();
			antlr4::tree::TerminalNode *Half();
			antlr4::tree::TerminalNode *Float();
			antlr4::tree::TerminalNode *Double();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoEscalarContext* tipoEscalar();

		class  TipoTexturaContext : public antlr4::ParserRuleContext {
		public:
			TipoTexturaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Texture1D();
			antlr4::tree::TerminalNode *Texture1DArray();
			antlr4::tree::TerminalNode *Texture2D();
			antlr4::tree::TerminalNode *Texture2DArray();
			antlr4::tree::TerminalNode *Texture3D();
			antlr4::tree::TerminalNode *TextureCube();
			antlr4::tree::TerminalNode *TextureCubeArray();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoTexturaContext* tipoTextura();

		class  TipoTexturaMSContext : public antlr4::ParserRuleContext {
		public:
			TipoTexturaMSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Texture2DMS();
			antlr4::tree::TerminalNode *Texture2DMSArray();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoTexturaMSContext* tipoTexturaMS();

		class  TipoVectorContext : public antlr4::ParserRuleContext {
		public:
			TipoVectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Vector();
			antlr4::tree::TerminalNode *Bool1();
			antlr4::tree::TerminalNode *Bool2();
			antlr4::tree::TerminalNode *Bool3();
			antlr4::tree::TerminalNode *Bool4();
			antlr4::tree::TerminalNode *Int1();
			antlr4::tree::TerminalNode *Int2();
			antlr4::tree::TerminalNode *Int3();
			antlr4::tree::TerminalNode *Int4();
			antlr4::tree::TerminalNode *Uint1();
			antlr4::tree::TerminalNode *Uint2();
			antlr4::tree::TerminalNode *Uint3();
			antlr4::tree::TerminalNode *Uint4();
			antlr4::tree::TerminalNode *Half1();
			antlr4::tree::TerminalNode *Half2();
			antlr4::tree::TerminalNode *Half3();
			antlr4::tree::TerminalNode *Half4();
			antlr4::tree::TerminalNode *Float1();
			antlr4::tree::TerminalNode *Float2();
			antlr4::tree::TerminalNode *Float3();
			antlr4::tree::TerminalNode *Float4();
			antlr4::tree::TerminalNode *Double1();
			antlr4::tree::TerminalNode *Double2();
			antlr4::tree::TerminalNode *Double3();
			antlr4::tree::TerminalNode *Double4();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoVectorContext* tipoVector();

		class  TipoMatrizContext : public antlr4::ParserRuleContext {
		public:
			TipoMatrizContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Matrix();
			antlr4::tree::TerminalNode *Bool1x1();
			antlr4::tree::TerminalNode *Bool1x2();
			antlr4::tree::TerminalNode *Bool1x3();
			antlr4::tree::TerminalNode *Bool1x4();
			antlr4::tree::TerminalNode *Bool2x1();
			antlr4::tree::TerminalNode *Bool2x2();
			antlr4::tree::TerminalNode *Bool2x3();
			antlr4::tree::TerminalNode *Bool2x4();
			antlr4::tree::TerminalNode *Bool3x1();
			antlr4::tree::TerminalNode *Bool3x2();
			antlr4::tree::TerminalNode *Bool3x3();
			antlr4::tree::TerminalNode *Bool3x4();
			antlr4::tree::TerminalNode *Bool4x1();
			antlr4::tree::TerminalNode *Bool4x2();
			antlr4::tree::TerminalNode *Bool4x3();
			antlr4::tree::TerminalNode *Bool4x4();
			antlr4::tree::TerminalNode *Int1x1();
			antlr4::tree::TerminalNode *Int1x2();
			antlr4::tree::TerminalNode *Int1x3();
			antlr4::tree::TerminalNode *Int1x4();
			antlr4::tree::TerminalNode *Int2x1();
			antlr4::tree::TerminalNode *Int2x2();
			antlr4::tree::TerminalNode *Int2x3();
			antlr4::tree::TerminalNode *Int2x4();
			antlr4::tree::TerminalNode *Int3x1();
			antlr4::tree::TerminalNode *Int3x2();
			antlr4::tree::TerminalNode *Int3x3();
			antlr4::tree::TerminalNode *Int3x4();
			antlr4::tree::TerminalNode *Int4x1();
			antlr4::tree::TerminalNode *Int4x2();
			antlr4::tree::TerminalNode *Int4x3();
			antlr4::tree::TerminalNode *Int4x4();
			antlr4::tree::TerminalNode *Uint1x1();
			antlr4::tree::TerminalNode *Uint1x2();
			antlr4::tree::TerminalNode *Uint1x3();
			antlr4::tree::TerminalNode *Uint1x4();
			antlr4::tree::TerminalNode *Uint2x1();
			antlr4::tree::TerminalNode *Uint2x2();
			antlr4::tree::TerminalNode *Uint2x3();
			antlr4::tree::TerminalNode *Uint2x4();
			antlr4::tree::TerminalNode *Uint3x1();
			antlr4::tree::TerminalNode *Uint3x2();
			antlr4::tree::TerminalNode *Uint3x3();
			antlr4::tree::TerminalNode *Uint3x4();
			antlr4::tree::TerminalNode *Uint4x1();
			antlr4::tree::TerminalNode *Uint4x2();
			antlr4::tree::TerminalNode *Uint4x3();
			antlr4::tree::TerminalNode *Uint4x4();
			antlr4::tree::TerminalNode *Half1x1();
			antlr4::tree::TerminalNode *Half1x2();
			antlr4::tree::TerminalNode *Half1x3();
			antlr4::tree::TerminalNode *Half1x4();
			antlr4::tree::TerminalNode *Half2x1();
			antlr4::tree::TerminalNode *Half2x2();
			antlr4::tree::TerminalNode *Half2x3();
			antlr4::tree::TerminalNode *Half2x4();
			antlr4::tree::TerminalNode *Half3x1();
			antlr4::tree::TerminalNode *Half3x2();
			antlr4::tree::TerminalNode *Half3x3();
			antlr4::tree::TerminalNode *Half3x4();
			antlr4::tree::TerminalNode *Half4x1();
			antlr4::tree::TerminalNode *Half4x2();
			antlr4::tree::TerminalNode *Half4x3();
			antlr4::tree::TerminalNode *Half4x4();
			antlr4::tree::TerminalNode *Float1x1();
			antlr4::tree::TerminalNode *Float1x2();
			antlr4::tree::TerminalNode *Float1x3();
			antlr4::tree::TerminalNode *Float1x4();
			antlr4::tree::TerminalNode *Float2x1();
			antlr4::tree::TerminalNode *Float2x2();
			antlr4::tree::TerminalNode *Float2x3();
			antlr4::tree::TerminalNode *Float2x4();
			antlr4::tree::TerminalNode *Float3x1();
			antlr4::tree::TerminalNode *Float3x2();
			antlr4::tree::TerminalNode *Float3x3();
			antlr4::tree::TerminalNode *Float3x4();
			antlr4::tree::TerminalNode *Float4x1();
			antlr4::tree::TerminalNode *Float4x2();
			antlr4::tree::TerminalNode *Float4x3();
			antlr4::tree::TerminalNode *Float4x4();
			antlr4::tree::TerminalNode *Double1x1();
			antlr4::tree::TerminalNode *Double1x2();
			antlr4::tree::TerminalNode *Double1x3();
			antlr4::tree::TerminalNode *Double1x4();
			antlr4::tree::TerminalNode *Double2x1();
			antlr4::tree::TerminalNode *Double2x2();
			antlr4::tree::TerminalNode *Double2x3();
			antlr4::tree::TerminalNode *Double2x4();
			antlr4::tree::TerminalNode *Double3x1();
			antlr4::tree::TerminalNode *Double3x2();
			antlr4::tree::TerminalNode *Double3x3();
			antlr4::tree::TerminalNode *Double3x4();
			antlr4::tree::TerminalNode *Double4x1();
			antlr4::tree::TerminalNode *Double4x2();
			antlr4::tree::TerminalNode *Double4x3();
			antlr4::tree::TerminalNode *Double4x4();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoMatrizContext* tipoMatriz();

		class  TipoSampleContext : public antlr4::ParserRuleContext {
		public:
			TipoSampleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Sample();
			antlr4::tree::TerminalNode *Sampler();
			antlr4::tree::TerminalNode *SamplerComparisonState();
			antlr4::tree::TerminalNode *SamplerState();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoSampleContext* tipoSample();

		class  TipoVoidContext : public antlr4::ParserRuleContext {
		public:
			TipoVoidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *Void();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoVoidContext* tipoVoid();

		class  LiteralContext : public antlr4::ParserRuleContext {
		public:
			LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *True();
			antlr4::tree::TerminalNode *False();
			antlr4::tree::TerminalNode *FloatLiteral();
			antlr4::tree::TerminalNode *IntegerLiteral();
			antlr4::tree::TerminalNode *StringLiteral();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		LiteralContext* literal();

		class  TipoDefinidoPorUsuarioContext : public antlr4::ParserRuleContext {
		public:
			antlr4::Token *Nombre = nullptr;;
			TipoDefinidoPorUsuarioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
			virtual size_t getRuleIndex() const override;
			antlr4::tree::TerminalNode *ID();

			virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
			virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

			virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

		};

		TipoDefinidoPorUsuarioContext* tipoDefinidoPorUsuario();


	private:
		static std::vector<antlr4::dfa::DFA> _decisionToDFA;
		static antlr4::atn::PredictionContextCache _sharedContextCache;
		static std::vector<std::string> _ruleNames;
		static std::vector<std::string> _tokenNames;

		static std::vector<std::string> _literalNames;
		static std::vector<std::string> _symbolicNames;
		static antlr4::dfa::Vocabulary _vocabulary;
		static antlr4::atn::ATN _atn;
		static std::vector<uint16_t> _serializedATN;

		/* private parser declarations section */

		struct Initializer {
			Initializer();
		};
		static Initializer _init;
};
};
};

#endif // GENERADORSHADER_PARSER_HLSLPARSER_H_