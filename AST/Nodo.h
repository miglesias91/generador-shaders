/// \file Nodo.h
/// \date 2017-06-13
/// \brief Interfaz Nodo del Arbol Sintactico Abstracto (AST).

#ifndef GENERADORSHADER_AST_NODO_H_
#define GENERADORSHADER_AST_NODO_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Fragmento.h>

// ast
#include <AST/VisitadorAST.h>

namespace GeneradorShader
{
namespace AST
{
	class VisitadorAST; // al tener "VistiadorAST.h" y "Nodo.h" incluidos entre si, tengo que hacer esta forward declaration para llamar a "VisitadorAST" desde aca y poder compilar OK.
/// \brief DESCRIPCION
class Nodo
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        Nodo();

		Nodo(GeneradorShader::Publicador::Fragmento* fragmento);

        /// \brief Destructor
        virtual ~Nodo();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		virtual void aceptar(VisitadorAST* visitador) = 0;

		virtual void agregarHijo(Nodo* nuevo_nodo_hijo);

        // ========== GETTERS ========== //
        
		virtual GeneradorShader::Publicador::Fragmento* getFragmento();

		std::vector<GeneradorShader::Publicador::FragmentoParametro*> getParametrosDeSalida();

		std::vector<GeneradorShader::Publicador::FragmentoParametro*> getParametrosDeEntrada();

        virtual std::vector<Nodo*> getNietos();

        virtual std::vector<Nodo*> getHijos();
        
        // ========== SETTERS ========== //

        // ========== INQUIRY ========== //

		virtual bool contieneHijo(Nodo* nodo_a_chequear);
        
    private:
        DISALLOW_COPY_AND_ASSIGN(Nodo);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //

		std::vector<Nodo*> hijos;

		GeneradorShader::Publicador::Fragmento* fragmento;
};
};
};

#endif // GENERADORSHADER_AST_NODO_H_
