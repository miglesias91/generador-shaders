/// \file NodoFragmento.h
/// \date 2017-06-21
/// \brief Nodo del AST que contiene a un fragmento necesario para generar el shader.

#ifndef GENERADORSHADER_AST_NODOFRAGMENTO_H_
#define GENERADORSHADER_AST_NODOFRAGMENTO_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// ast
#include <AST/Nodo.h>

namespace GeneradorShader
{
namespace AST
{
/// \brief DESCRIPCION
class NodoFragmento : public Nodo
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        NodoFragmento();

		NodoFragmento(GeneradorShader::Publicador::Fragmento* fragmento);

        /// \brief Destructor
        virtual ~NodoFragmento();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		virtual void aceptar(VisitadorAST* visitador);

        // ========== GETTERS ========== //
        
        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(NodoFragmento);

        // ========== INTERNAL METHODS ========== //

		void agregarVariablesDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader);
		
		void agregarTexturasDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader);

		void agregarSamplersDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader);
		
		void agregarStructsDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader);
		
		void agregarCBuffersDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader);

        // ========== ATTRIBUTES ========== //
};
};
};

#endif // GENERADORSHADER_AST_NODOFRAGMENTO_H_
