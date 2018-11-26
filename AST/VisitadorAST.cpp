#include <AST/VisitadorAST.h>

using namespace GeneradorShader::AST;

// ========== LIFECYCLE ========== //

VisitadorAST::VisitadorAST()
{
}

VisitadorAST::VisitadorAST(GeneradorShader::Publicador::Shader* shader) : shader(shader)
{

}

VisitadorAST::~VisitadorAST()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void VisitadorAST::visitar(Nodo* nodo)
{
	nodo->aceptar(this);
}

// ========== GETTERS ========== //

GeneradorShader::Publicador::Shader* VisitadorAST::getShader()
{
	return this->shader;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
