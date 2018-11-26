/// \file IJson.h
/// \date 2017-09-12
/// \brief Interfaz que implementan las clases que pueden ser representadas en formato JSON.

#ifndef GENERADORSHADER_PUBLICADOR_IJSON_H_
#define GENERADORSHADER_PUBLICADOR_IJSON_H_

// rapidjson
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class IJson
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        IJson();

        /// \brief Destructor
        virtual ~IJson();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		virtual rapidjson::Value json(rapidjson::Document* documento) = 0;

        // ========== GETTERS ========== //
        
        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(IJson);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //       
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_IJSON_H_
