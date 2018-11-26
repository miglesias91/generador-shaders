/// \file NodoSemanticaSalida.h
/// \date 2017-06-21
/// \brief DESCRIPCION

#ifndef GENERADORSHADER_AST_NODOSEMANTICASALIDA_H_
#define GENERADORSHADER_AST_NODOSEMANTICASALIDA_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// ast
#include <AST/Nodo.h>

namespace GeneradorShader
{
namespace AST
{
/// \brief DESCRIPCION
class NodoSemanticaSalida : public Nodo
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
		NodoSemanticaSalida();

        NodoSemanticaSalida(GeneradorShader::Publicador::Fragmento* fragmento);

        /// \brief Destructor
        virtual ~NodoSemanticaSalida();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		virtual void aceptar(VisitadorAST* visitador);

		virtual void agregarHijo(Nodo* nuevo_nodo_hijo);


        // ========== GETTERS ========== //

        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(NodoSemanticaSalida);

        // ========== INTERNAL METHODS ========== //

		void agregarSemanticasDelSistemaALosParametrosDeSalida(std::vector<GeneradorShader::Publicador::FragmentoParametro*> & parametros_out);

        // ========== ATTRIBUTES ========== //     
};
};
};

#endif // GENERADORSHADER_AST_NODOSEMANTICASALIDA_H_
