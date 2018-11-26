/// \file VariableShader.h
/// \date 2017-09-04
/// \brief Representa una variable global de un shader HLSL.

#ifndef GENERADORSHADER_PUBLICADOR_VARIABLESHADER_H_
#define GENERADORSHADER_PUBLICADOR_VARIABLESHADER_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/IDeclaracion.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class VariableShader : public IDeclaracion
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        VariableShader();

        /// \brief Destructor
        virtual ~VariableShader();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //

		virtual std::string escribir();

		virtual rapidjson::Value json(rapidjson::Document* documento);

		// ========== GETTERS ========== //

        virtual unsigned int getTamanioMemoriaAdaptadoAlPipeline();

        // ========== SETTERS ========== //

        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(VariableShader);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //       
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_VARIABLESHADER_H_
