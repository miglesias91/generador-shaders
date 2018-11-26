/// \file EscritorHLSL.h
/// \date 2017-06-23
/// \brief Clase que sabe como escribir un HLSL. Toma como entrada a un Shader, Fragmento, FragmentoDefinicion o FragmentoParamtero y te devuelve su representación en codigo HLSL.

#ifndef GENERADORSHADER_PUBLICADOR_ESCRITORHLSL_H_
#define GENERADORSHADER_PUBLICADOR_ESCRITORHLSL_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Shader.h>
#include <Publicador/Fragmento.h>
#include <Publicador/FragmentoDefinicion.h>
#include <Publicador/FragmentoParametro.h>

namespace GeneradorShader
{
namespace Publicador
{

/// \brief DESCRIPCION
class EscritorHLSL
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        EscritorHLSL();

        /// \brief Destructor
        virtual ~EscritorHLSL();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		static std::string escribirShaderHLSLOrdenadoPorSecciones(Shader* shader);

		static std::string escribirShaderHLSLComoSecuenciaDeFragmentos(Shader* shader);

		static std::string escribirCodigoPrincipal(Shader * shader);

		static std::string escribirCodigoSecuenciaDeFragmentos(Shader * shader);

		static std::string escribirDefinicionComoLlamadaAFuncion(FragmentoDefinicion * definicion, bool devuelve_parametro_out_del_shader, std::vector<FragmentoParametro*> parametros_input_shader = std::vector<FragmentoParametro*>());

		static std::string escribirDefinicionComoFirmaDeFuncion(FragmentoDefinicion * definicion);

		static std::string escribirInputStructDeDefincion(FragmentoDefinicion * definicion);

		static std::string escribirParametroDeFirmaDeFuncion(FragmentoParametro * parametro);
		
		static std::string escribirCodigoVariablesDeclaradas(Shader * shader);

		static std::string escribirCodigoVariablesDeclaradasComoCBuffer(Shader * shader);

		static std::string escribirCodigoVariablesTexturas(Shader * shader);

		static std::string escribirCodigoVariablesSamplers(Shader * shader);

		static std::string escribirCodigoStructsDeclarados(Shader * shader);

		static std::string escribirCodigoCBuffersDeclarados(Shader * shader);

		static std::string escribirCodigoFragmentosDeclarados(Shader * shader);

		static std::string escribirEncabezado(std::string nombre_seccion);

        // ========== GETTERS ========== //
        
        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //

		static bool variableYaFueDeclarada(std::string nombre_variable);

		static bool devuelveUnoDeLosParametrosOut(Fragmento* fragmento, std::vector<FragmentoParametro*> parametros_out);
        
		static bool parametroIncluidoEnVector(FragmentoParametro* parametro, std::vector<FragmentoParametro*> parametros);

    private:
        DISALLOW_COPY_AND_ASSIGN(EscritorHLSL);

        // ========== INTERNAL METHODS ========== //

		static void reiniciarContadoresRegister();

		static unsigned int calcularOffsetBuffer(std::string tipo_variable);

		static std::vector<std::string> split(const std::string &s, char delim);

		static std::string escribirVariableConIndexDeRegister(std::string declaracion_variable);

		static std::string getSemanticaUsuarioDiferenteASemanticaSistema(FragmentoParametro* parametro);

        // ========== ATTRIBUTES ========== //       

		static std::vector<std::string> variables_declaradas_en_codigo_main;

		static std::string salto_de_linea;

		static std::string doble_salto_de_linea;

		static std::string separacion_encabezado;

		static std::string prefijo_input;

		static std::string nombre_input;

		static unsigned int index_c;
		static unsigned int index_b;
		static unsigned int index_t;
		static unsigned int index_s;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_ESCRITORHLSL_H_
