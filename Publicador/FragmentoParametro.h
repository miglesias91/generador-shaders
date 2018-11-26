/// \file FragmentoParametro.h
/// \date 2017-06-06
/// \brief DESCRIPCION

#ifndef GENERADORSHADER_PUBLICADOR_FRAGMENTOPARAMETRO_H_
#define GENERADORSHADER_PUBLICADOR_FRAGMENTOPARAMETRO_H_

// stl
#include <string>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/IJson.h>

namespace GeneradorShader
{
namespace Publicador
{

/// \brief DESCRIPCION
class FragmentoParametro : public IJson
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
		FragmentoParametro();
		
		FragmentoParametro(std::string referencia, std::string tipo, std::string nombre, std::string semantica_usuario, std::string semantica_sistema = "", unsigned int index = 0);

        /// \brief Destructor
        virtual ~FragmentoParametro();

        // ========== OPERADORES ========== //
        
        // ========== MÉTODOS ========== //
        
		rapidjson::Value json(rapidjson::Document * documento);

        // ========== GETTERS ========== //
		
		std::string getReferencia();
		std::string getNombre();
		std::string getTipo();
		std::string getSemanticaUsuario();
		std::string getSemanticaSistema();
		unsigned int getIndex();

        // ========== SETTERS ========== //
        
		void setReferencia(std::string referencia);
		void setNombre(std::string nombre);
		void setTipo(std::string tipo);
		void setSemanticaUsuario(std::string semantica_usuario);
		void setSemanticaSistema(std::string semantica_sistema);
		void setIndex(unsigned int index);

        // ========== INQUIRY ========== //

		bool semanticaUsuarioIgualASemanticaSistema();
        
    private:
        DISALLOW_COPY_AND_ASSIGN(FragmentoParametro);

        // ========== MÉTODOS INTERNOS ========== //

        // ========== ATRIBUTOS ========== //    
		
		std::string referencia; // "in" | "out" | "inout"

		std::string nombre;

		std::string tipo;

		std::string semantica_usuario;

		std::string semantica_sistema;

		unsigned int index;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_FRAGMENTO_H_
