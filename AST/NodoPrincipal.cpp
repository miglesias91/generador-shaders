#include <AST/NodoPrincipal.h>

// stl
#include <algorithm>
#include <iostream>

// ast
#include <AST/ASTFunciones.h>

using namespace GeneradorShader::AST;

// ========== LIFECYCLE ========== //

NodoPrincipal::NodoPrincipal()
{
}

NodoPrincipal::NodoPrincipal(GeneradorShader::Publicador::Fragmento* fragmento) : Nodo(fragmento)
{

}

NodoPrincipal::~NodoPrincipal()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void NodoPrincipal::aceptar(VisitadorAST* visitador)
{
	std::vector<Nodo*> hijos = this->getHijos();

    //std::sort(hijos.begin(), hijos.end(), ordernarSegunCantidadDeNietosMayorAMenor);

    // visito a los hijos. hago un recorrido pre-order.
	for (std::vector<Nodo*>::iterator nodo_it = hijos.begin(); nodo_it != hijos.end(); nodo_it ++)
	{
		Nodo* nodo_hijo = *nodo_it;
		visitador->visitar(nodo_hijo);
	}

	std::cout << "NodoPrincipal: visitador estuvo aqui." << std::endl;
	std::cout << "nombre del shader: " << visitador->getShader()->getNombre() << std::endl;

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> parametros_in = this->getParametrosDeEntrada();

	std::cout << "parametros de entrada:\n";
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator it = parametros_in.begin(); it != parametros_in.end(); it++)
	{
		GeneradorShader::Publicador::FragmentoParametro* param = (*it);
		std::cout << param->getReferencia() << " " << param->getTipo() << " " << param->getSemanticaUsuario() << " : " << param->getSemanticaSistema() << std::endl;
	}

	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator param_it = parametros_in.begin(); param_it != parametros_in.end(); param_it++)
	{
		GeneradorShader::Publicador::FragmentoParametro* parametro_in = *param_it;
		visitador->getShader()->agregarParametroIn(parametro_in);
	}

	visitador->getShader()->getFragmento()->transformarVariablesDeclaradasACBuffer();

    visitador->getShader()->ordernarFragmentosComponentesSegunDependeciaDeVariables();
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
