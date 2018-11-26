/* lexer header section */

// Generated from HLSL_Lexer.g4 by ANTLR 4.7

#ifndef GENERADORSHADER_PARSER_HLSLLEXER_H_
#define GENERADORSHADER_PARSER_HLSLLEXER_H_

// lexer precinclude section

#include <antlr4-runtime.h>

// lexer postinclude section

#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

// lexer context section

namespace GeneradorShader
{
namespace Parser
{

	class  HLSL_Lexer : public antlr4::Lexer {
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
			CommentsChannel = 2, DirectiveChannel = 3
		};

		enum {
			Mode1 = 1, Mode2 = 2, BlockCommentMode = 3
		};

		HLSL_Lexer(antlr4::CharStream *input);
		~HLSL_Lexer();

		/* public lexer declarations section */
		virtual std::string getGrammarFileName() const override;
		virtual const std::vector<std::string>& getRuleNames() const override;

		virtual const std::vector<std::string>& getChannelNames() const override;
		virtual const std::vector<std::string>& getModeNames() const override;
		virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
		virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

		virtual const std::vector<uint16_t> getSerializedATN() const override;
		virtual const antlr4::atn::ATN& getATN() const override;

	private:
		static std::vector<antlr4::dfa::DFA> _decisionToDFA;
		static antlr4::atn::PredictionContextCache _sharedContextCache;
		static std::vector<std::string> _ruleNames;
		static std::vector<std::string> _tokenNames;
		static std::vector<std::string> _channelNames;
		static std::vector<std::string> _modeNames;

		static std::vector<std::string> _literalNames;
		static std::vector<std::string> _symbolicNames;
		static antlr4::dfa::Vocabulary _vocabulary;
		static antlr4::atn::ATN _atn;
		static std::vector<uint16_t> _serializedATN;

		/* private lexer declarations/members section */

		// Individual action functions triggered by action() above.

		// Individual semantic predicate functions triggered by sempred() above.

		struct Initializer {
			Initializer();
		};
		static Initializer _init;
	};
};
};

#endif // GENERADORSHADER_PARSER_HLSLLEXER_H_
