/// \file VisitadorAST.h
/// \date 2017-06-22
/// \brief Clase que sigue el patron "Visitador" y se encarga de visitar a cada nodo, ejecutando una acción para cada tipo de nodo.

#ifndef GENERADORSHADER_AST_VISITADORAST_H_
#define GENERADORSHADER_AST_VISITADORAST_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// ast
#include <AST/Nodo.h>

// publicador
#include <Publicador/Shader.h>

namespace GeneradorShader
{
namespace AST
{
	class Nodo; // al tener "VistiadorAST.h" y "Nodo.h" incluidos entre si, tengo que hacer esta forward declaration ppara llamar a "Nodo" desde aca y poder compilar OK.
/// \brief DESCRIPCION
class VisitadorAST
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        VisitadorAST();

		VisitadorAST(GeneradorShader::Publicador::Shader* shader);

        /// \brief Destructor
        virtual ~VisitadorAST();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		void visitar(Nodo* nodo);

        // ========== GETTERS ========== //
        
		GeneradorShader::Publicador::Shader* getShader();

        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(VisitadorAST);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //    

		GeneradorShader::Publicador::Shader* shader;
};
};
};

#endif // GENERADORSHADER_AST_VISITADORAST_H_
