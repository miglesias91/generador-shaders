/// \file FragmentoDefinicion.h
/// \date 2017-06-06
/// \brief Representa a la "firma" de la funcion principal del fragmento. Contiene: el nombre del fragmento, el tipo de dato que retorna, la semantica del tipo de dato, y los datos de los parametros.

#ifndef GENERADORSHADER_PUBLICADOR_FRAGMENTODEFINICION_H_
#define GENERADORSHADER_PUBLICADOR_FRAGMENTODEFINICION_H_

// stl
#include <vector>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// Fragmento
#include <Publicador/FragmentoParametro.h>

namespace GeneradorShader
{
namespace Publicador
{

/// \brief DESCRIPCION
class FragmentoDefinicion : public IJson
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        FragmentoDefinicion();

		FragmentoDefinicion(std::string nombre, std::string tipo_retorno, std::string semantica_tipo_retorno, std::string etiqueta_input = "");

        /// \brief Destructor
        virtual ~FragmentoDefinicion();

        // ========== OPERADORES ========== //
        
        // ========== MÉTODOS ========== //
		
		rapidjson::Value json(rapidjson::Document * documento);

		void agregarSemanticaIn(FragmentoParametro* nueva_semantica_in);
		void agregarSemanticaOut(FragmentoParametro* nueva_semantica_out);
		void agregarSemanticaInout(FragmentoParametro* nueva_semantica_inout);

		void ordenarParametros( bool (*comparador)(FragmentoParametro* fragmento_a, FragmentoParametro* fragmento_b) );

        // ========== GETTERS ========== //
        
		std::string getNombre();
		std::string getEtiquetaInput();
		std::string getTipoRetorno();
		std::string getSemanticaTipoRetorno();
		std::vector<FragmentoParametro*> getSemanticasIn();
		std::vector<FragmentoParametro*> getSemanticasOut();
		std::vector<FragmentoParametro*> getSemanticasInout();

		FragmentoParametro* getRetornoComoParametro();

        // ========== SETTERS ========== //

		void setNombre(std::string nombre);
		void setEtiquetaInput(std::string etiqueta_input);
		void setTipoRetorno(std::string tipo_retorno);
		void setSemanticaTipoRetorno(std::string tipo_retorno);
		void setInSemanticas(std::vector<FragmentoParametro*> semanticas_in);
		void setOutSemanticas(std::vector<FragmentoParametro*> semanticas_out);
		void setInoutSemanticas(std::vector<FragmentoParametro*> semanticas_inout);

        // ========== INQUIRY ========== //

		bool tieneValorDeRetorno();

		FragmentoParametro* hallarSemanticaIn(std::string semantica);
        
    private:
        DISALLOW_COPY_AND_ASSIGN(FragmentoDefinicion);

        // ========== MÉTODOS INTERNOS ========== //

        // ========== ATRIBUTOS ========== //

		std::string nombre;
		std::string etiqueta_input;
		std::string tipo_retorno;
		std::string semantica_tipo_retorno;

		std::vector<FragmentoParametro*> sematicas_in;
		std::vector<FragmentoParametro*> sematicas_out;
		std::vector<FragmentoParametro*> sematicas_inout;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_FRAGMENTO_H_
