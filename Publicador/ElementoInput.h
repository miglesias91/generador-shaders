/// \file ElementoInput.h
/// \date 2017-11-17
/// \brief Representacion de un elemento de entrada del input.

#ifndef GENERADORSHADER_PUBLICADOR_ELEMENTOINPUT_H_
#define GENERADORSHADER_PUBLICADOR_ELEMENTOINPUT_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// json
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class ElementoInput
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        ElementoInput();
        ElementoInput(rapidjson::Value & elemento);

        /// \brief Destructor
        virtual ~ElementoInput();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
        // ========== GETTERS ========== //
        
        std::string getSemantica();
        std::string getTipo();
        unsigned int getIndex();

        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(ElementoInput);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //  

        std::string semantica;
        std::string tipo;
        unsigned int index;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_ELEMENTOINPUT_H_
