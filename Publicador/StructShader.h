/// \file StructShader.h
/// \date 2017-09-04
/// \brief Representa a un struct de un shader HLSL.

#ifndef GENERADORSHADER_PUBLICADOR_STRUCTSHADER_H_
#define GENERADORSHADER_PUBLICADOR_STRUCTSHADER_H_

// stl
#include <vector>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/IDeclaracion.h>
#include <Publicador/VariableShader.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class StructShader : public IDeclaracion
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        StructShader();

        /// \brief Destructor
        virtual ~StructShader();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		virtual std::string escribir();

		virtual rapidjson::Value json(rapidjson::Document* documento);
		
		// ========== GETTERS ========== //

        virtual unsigned int getTamanioMemoriaAdaptadoAlPipeline();

        std::vector<VariableShader*> getVariables();

        // ========== SETTERS ========== //

        void agregarVariable(VariableShader* variable_struct);

        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(StructShader);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //  
        std::vector<VariableShader*> variables_struct;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_STRUCTSHADER_H_
