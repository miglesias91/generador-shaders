/// \file NodoPrincipal.h
/// \date 2017-06-21
/// \brief Nodo raiz del AST. Contiene un fragmento que, a su vez, contiene los parametros de entrada del shader.

#ifndef GENERADORSHADER_AST_NODOPRINCIPAL_H_
#define GENERADORSHADER_AST_NODOPRINCIPAL_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// ast
#include <AST/Nodo.h>

namespace GeneradorShader
{
namespace AST
{
/// \brief DESCRIPCION
class NodoPrincipal : public Nodo
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
		NodoPrincipal();

        NodoPrincipal(GeneradorShader::Publicador::Fragmento* fragmento);

        /// \brief Destructor
        virtual ~NodoPrincipal();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		virtual void aceptar(VisitadorAST* visitador);

        // ========== GETTERS ========== //
        
        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(NodoPrincipal);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //
};
};
};

#endif // GENERADORSHADER_AST_NODOPRINCIPAL_H_
