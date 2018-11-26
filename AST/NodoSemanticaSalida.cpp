#include <AST/NodoSemanticaSalida.h>

// stl
#include <iostream>

// publicador
#include <Publicador/InfoHLSL.h>

using namespace GeneradorShader::AST;

// ========== LIFECYCLE ========== //

NodoSemanticaSalida::NodoSemanticaSalida()
{
}

NodoSemanticaSalida::NodoSemanticaSalida(GeneradorShader::Publicador::Fragmento* fragmento) : Nodo(fragmento)
{

}

NodoSemanticaSalida::~NodoSemanticaSalida()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void NodoSemanticaSalida::aceptar(VisitadorAST* visitador)
{
	std::vector<Nodo*> hijos = this->getHijos();

	// visito a los hijos. hago un recorrido pre-order.
	for (std::vector<Nodo*>::iterator nodo_it = hijos.begin(); nodo_it != hijos.end(); nodo_it++)
	{
		Nodo* nodo_hijo = *nodo_it;
		visitador->visitar(nodo_hijo);
	}

	std::cout << "NodoSemanticaSalida: visitador estuvo aqui." << std::endl;

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> parametros_out = this->getParametrosDeSalida();

	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator param_it = parametros_out.begin(); param_it != parametros_out.end(); param_it++)
	{ 
		GeneradorShader::Publicador::FragmentoParametro* parametro_out = *param_it;
		visitador->getShader()->agregarParametroOut(parametro_out);
	}
}

void NodoSemanticaSalida::agregarHijo(Nodo * nuevo_nodo_hijo)
{
	this->Nodo::agregarHijo(nuevo_nodo_hijo);

	// me quedo con la info de parametros de salida del nodo nuevo. Esta info representa los parametros de salida del shader.
	GeneradorShader::Publicador::Fragmento* fragmento_nuevo = nuevo_nodo_hijo->getFragmento();
	GeneradorShader::Publicador::Fragmento* fragmento_nodo_salida = this->getFragmento();

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> parametros_out = fragmento_nuevo->getDefinicion()->getSemanticasOut();

	// this->agregarSemanticasDelSistemaALosParametrosDeSalida(parametros_out);

	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator it = parametros_out.begin(); it != parametros_out.end(); it++)
	{
		GeneradorShader::Publicador::FragmentoParametro* param_out = *it;
		fragmento_nodo_salida->agregarParametro(param_out);
	}
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //

void NodoSemanticaSalida::agregarSemanticasDelSistemaALosParametrosDeSalida(std::vector<GeneradorShader::Publicador::FragmentoParametro*> & parametros_out)
{
	std::vector<std::string>::iterator it_semanticas_sistema = GeneradorShader::Publicador::InfoHLSL::semanticas_sistema_dx11_salida_pixelbuffer.begin();
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator it = parametros_out.begin(); it != parametros_out.end(); it++)
	{
		(*it)->setSemanticaSistema(*it_semanticas_sistema);
	}
}
