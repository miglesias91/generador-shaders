
// Generated from HLSL_Parser.g4 by ANTLR 4.7

// modificaciones 2017-06-06:
// - extrae el texto de cada contexto (usando la funcion "getFullText") y lo usa para construir el nuevo Fragmento.
// - renombrado de "HLSL_ParserBaseVisitor" a "HLSL_ConstructorVisitador"
// - se sacaron todos los comentarios que se habian generado (salvo que q indicado que fue generado por ANTLR 4.7
// - se adapto el formato al que usamos nosotros.

#ifndef GENERADORSHADER_PARSER_HLSLPARSERBASEVISITOR_H_
#define GENERADORSHADER_PARSER_HLSLPARSERBASEVISITOR_H_

#include <Parser/HLSL_Parser.h>
#include <Parser/HLSL_ParserVisitor.h>

#include <Publicador/Fragmento.h>
#include <Publicador/VariableShader.h>
#include <Publicador/CBufferShader.h>


namespace GeneradorShader
{
namespace Parser
{

class  HLSL_ConstructorVisitador : public HLSL_ParserVisitor
{
	public:

		/// \brief Constructor
		HLSL_ConstructorVisitador();

		/// \brief constructor a usar. le paso un fragmento con memmoria ya asignada. el Constructor no lo elimina en ningun momento.
		HLSL_ConstructorVisitador(GeneradorShader::Publicador::Fragmento* fragmento_a_completar);


		/// \brief Destructor
		virtual ~HLSL_ConstructorVisitador();

		virtual antlrcpp::Any visitMain(HLSL_Parser::MainContext *context) override;

		virtual antlrcpp::Any visitDeclaraciones(HLSL_Parser::DeclaracionesContext *context) override;

		virtual antlrcpp::Any visitStructDefinicion(HLSL_Parser::StructDefinicionContext *context) override;

		virtual antlrcpp::Any visitConstantBuffer(HLSL_Parser::ConstantBufferContext *context) override;

		virtual antlrcpp::Any visitFuncionDefinicion(HLSL_Parser::FuncionDefinicionContext *context) override;

		virtual antlrcpp::Any visitTipoFuncion(HLSL_Parser::TipoFuncionContext *ctx) override;

		virtual antlrcpp::Any visitNombreFuncion(HLSL_Parser::NombreFuncionContext *ctx) override;

		virtual antlrcpp::Any visitSemanticaFuncion(HLSL_Parser::SemanticaFuncionContext *ctx) override;
		
		virtual antlrcpp::Any visitBloqueDeCodigoFuncion(HLSL_Parser::BloqueDeCodigoFuncionContext *context) override;

		virtual antlrcpp::Any visitFuncionDeclaracion(HLSL_Parser::FuncionDeclaracionContext *context) override;

		virtual antlrcpp::Any visitInterfazDefinicion(HLSL_Parser::InterfazDefinicionContext *context) override;

		virtual antlrcpp::Any visitClaseDefinicion(HLSL_Parser::ClaseDefinicionContext *context) override;

		virtual antlrcpp::Any visitVariableDeclaracionSentencia(HLSL_Parser::VariableDeclaracionSentenciaContext *context) override;

		virtual antlrcpp::Any visitAtributosArgumentos(HLSL_Parser::AtributosArgumentosContext *context) override;

		virtual antlrcpp::Any visitAtributosListaArgumentos(HLSL_Parser::AtributosListaArgumentosContext *context) override;

		virtual antlrcpp::Any visitAtributo(HLSL_Parser::AtributoContext *context) override;

		virtual antlrcpp::Any visitNombre(HLSL_Parser::NombreContext *context) override;

		virtual antlrcpp::Any visitBloqueDeCodigo(HLSL_Parser::BloqueDeCodigoContext *context) override;

		virtual antlrcpp::Any visitListaClaseBase(HLSL_Parser::ListaClaseBaseContext *context) override;

		virtual antlrcpp::Any visitDeclaracionMiembroClase(HLSL_Parser::DeclaracionMiembroClaseContext *context) override;

		virtual antlrcpp::Any visitSemantica(HLSL_Parser::SemanticaContext *context) override;

		virtual antlrcpp::Any visitParametros(HLSL_Parser::ParametrosContext *context) override;

		virtual antlrcpp::Any visitParametro(HLSL_Parser::ParametroContext *context) override;

		virtual antlrcpp::Any visitStorageFlagParametro(HLSL_Parser::StorageFlagParametroContext *ctx) override;

		virtual antlrcpp::Any visitTipoParametro(HLSL_Parser::TipoParametroContext *ctx) override;

		virtual antlrcpp::Any visitNombreParametro(HLSL_Parser::NombreParametroContext *ctx) override;

		virtual antlrcpp::Any visitSemanticaParametro(HLSL_Parser::SemanticaParametroContext *ctx) override;

		virtual antlrcpp::Any visitRegistrarAlocacion(HLSL_Parser::RegistrarAlocacionContext *context) override;

		virtual antlrcpp::Any visitStandardVariableInitializer_(HLSL_Parser::StandardVariableInitializer_Context *context) override;

		virtual antlrcpp::Any visitSamplerStateInitializer(HLSL_Parser::SamplerStateInitializerContext *context) override;

		virtual antlrcpp::Any visitArrayVariableInitializer(HLSL_Parser::ArrayVariableInitializerContext *context) override;

		virtual antlrcpp::Any visitExpressionVariableInitializer(HLSL_Parser::ExpressionVariableInitializerContext *context) override;

		virtual antlrcpp::Any visitArrayElementosInicializadores(HLSL_Parser::ArrayElementosInicializadoresContext *context) override;

		virtual antlrcpp::Any visitSamplerStateProperty(HLSL_Parser::SamplerStatePropertyContext *context) override;

		virtual antlrcpp::Any visitVariableDeclaracion(HLSL_Parser::VariableDeclaracionContext *context) override;

		virtual antlrcpp::Any visitVariableDeclaradores(HLSL_Parser::VariableDeclaradoresContext *context) override;

		virtual antlrcpp::Any visitVariableDeclarador(HLSL_Parser::VariableDeclaradorContext *context) override;

		virtual antlrcpp::Any visitArrayRankingEspecificador(HLSL_Parser::ArrayRankingEspecificadorContext *context) override;

		virtual antlrcpp::Any visitPackOffsetNodo(HLSL_Parser::PackOffsetNodoContext *context) override;

		virtual antlrcpp::Any visitStorageFlags(HLSL_Parser::StorageFlagsContext *context) override;

		virtual antlrcpp::Any visitStorageFlag(HLSL_Parser::StorageFlagContext *context) override;

		virtual antlrcpp::Any visitReferencia(HLSL_Parser::ReferenciaContext *context) override;

		virtual antlrcpp::Any visitTipo(HLSL_Parser::TipoContext *context) override;

		virtual antlrcpp::Any visitTipoEscalar(HLSL_Parser::TipoEscalarContext *context) override;

		virtual antlrcpp::Any visitTipoTextura(HLSL_Parser::TipoTexturaContext *context) override;

		virtual antlrcpp::Any visitTipoTexturaMS(HLSL_Parser::TipoTexturaMSContext *context) override;

		virtual antlrcpp::Any visitTipoVector(HLSL_Parser::TipoVectorContext *context) override;

		virtual antlrcpp::Any visitTipoMatriz(HLSL_Parser::TipoMatrizContext *context) override;

		virtual antlrcpp::Any visitTipoSample(HLSL_Parser::TipoSampleContext *context) override;

		virtual antlrcpp::Any visitTipoVoid(HLSL_Parser::TipoVoidContext *context) override;

		virtual antlrcpp::Any visitLiteral(HLSL_Parser::LiteralContext *context) override;

		virtual antlrcpp::Any visitTipoDefinidoPorUsuario(HLSL_Parser::TipoDefinidoPorUsuarioContext *context) override;

		// std::string recuperarSemanticaDeFuncion(HLSL_Parser::FuncionFirmaContext* ctx);

		// std::string recuperarSemanticaDeParametro(HLSL_Parser::ParametroContext* ctx);

		std::string getFullText(antlr4::ParserRuleContext context);

		GeneradorShader::Publicador::Fragmento* getFragmento();

		Publicador::IDeclaracion::Register* reconocerRegister(std::string string_register);

		Publicador::IDeclaracion::PacketOffset* reconocerPacketOffset(std::string string_register);

		std::vector<Publicador::VariableShader*> reconocerVariablesDeCBuffer(std::string string_bloque_de_codigo);

		unsigned int reconocerTamanioTipoVariable(std::string tipo);

        bool esTipoDefinidoPorUsuario(std::string tipo);

        bool esMatriz(std::string tipo);

		bool esVector(std::string tipo);

		bool esEscalar(std::string tipo);

        unsigned int calcularTamanioTipoDefinidoPorUsuario(std::string tipo_definido_por_usuario);

        unsigned int calcularTamanioTipoMatriz(std::string matriz);

		unsigned int calcularTamanioTipoVector(std::string vector);

		unsigned int calcularTamanioTipoEscalar(std::string escalar);

		unsigned int tamanioTipo(std::string tipo);

	private:

		std::vector<std::string> separarString(std::string string_bloque_de_codigo, char separador);

		std::string trim(std::string string_bloque_de_codigo);

        bool contiene(std::string a_evaluar, std::string a_encontrar);

		/// \brief elimina los primeros 2 caracteres de un string.
		/// Las semanticas se obtienen con la forma ": nombreSemantica". Al eliminar los primeros 2 caracteres, me queda
		/// el nombre de la semantica "nombreSemnatica".
		void recortarStringSemantica(std::string & semantica_con_los_dos_puntos);

		GeneradorShader::Publicador::Fragmento* fragmento;

		GeneradorShader::Publicador::FragmentoParametro* parametro_a_completar;

		GeneradorShader::Publicador::VariableShader* variable_a_completar;

		GeneradorShader::Publicador::CBufferShader* cbuffer_a_completar;

		GeneradorShader::Publicador::CBufferShader* cbuffer_general;

		GeneradorShader::Publicador::StructShader* struct_a_completar;

        std::string nombre_bindeado;
        unsigned int tamanio_array_bindeado;
		std::string storage_flag_bindeada;
		std::string tipo_bindeado;
		std::string packetoffset_bindeado;
		std::string register_bindeado;
		std::string semantica_bindeada;
		std::string bloque_de_codigo_bindeado;

        std::unordered_map<std::string, GeneradorShader::Publicador::StructShader*> tipos_definidos_por_usuario;
};
};
};

#endif // GENERADORSHADER_PARSER_HLSLPARSERBASEVISITOR_H_