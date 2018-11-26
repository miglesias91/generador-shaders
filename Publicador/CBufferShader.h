/// \file CBufferShader.h
/// \date 2017-09-04
/// \brief Representa a un 'cbuffer' de un shader HLSL.

#ifndef GENERADORSHADER_PUBLICADOR_CBUFFERSHADER_H_
#define GENERADORSHADER_PUBLICADOR_CBUFFERSHADER_H_

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
class CBufferShader : public IDeclaracion
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        CBufferShader();

        /// \brief Destructor
        virtual ~CBufferShader();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
		
		virtual std::string escribir();
		
		virtual rapidjson::Value json(rapidjson::Document* documento);
        
        virtual void clase(std::string nombre_clase);

        // ========== GETTERS ========== //

        virtual unsigned int getTamanioMemoriaAdaptadoAlPipeline();

		std::vector<VariableShader*> getVariables();

        virtual std::string clase();

        // ========== SETTERS ========== //
		
		void agregarVariable(VariableShader* variable_cbuffer);

        // ========== INQUIRY ========== //

        //void esDeObjeto(bool es_de_objeto);
        //bool esDeObjeto();

        //void esDeEscena(bool es_de_escena);
        //bool esDeEscena();

    private:
        DISALLOW_COPY_AND_ASSIGN(CBufferShader);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //

		std::vector<VariableShader*> variables_cbuffer;

        std::string nombre_clase;

        //bool cbuffer_de_objeto;
        //bool cbuffer_de_escena;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_CBUFFERSHADER_H_
