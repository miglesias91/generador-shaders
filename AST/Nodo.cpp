#include <AST/Nodo.h>

using namespace GeneradorShader::AST;

// ========== LIFECYCLE ========== //

Nodo::Nodo() : fragmento(NULL)
{
}

Nodo::Nodo(GeneradorShader::Publicador::Fragmento* fragmento) : fragmento(fragmento)
{

}

Nodo::~Nodo()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void Nodo::agregarHijo(Nodo* nuevo_nodo_hijo)
{
	this->hijos.push_back(nuevo_nodo_hijo);
}

// ========== GETTERS ========== //

std::vector<Nodo*> Nodo::getHijos()
{
	return this->hijos;
}

GeneradorShader::Publicador::Fragmento* Nodo::getFragmento()
{
	return this->fragmento;
}

std::vector<GeneradorShader::Publicador::FragmentoParametro*> Nodo::getParametrosDeSalida()
{
	GeneradorShader::Publicador::Fragmento* fragmento = this->getFragmento();

	return fragmento->getDefinicion()->getSemanticasOut();
}

std::vector<GeneradorShader::Publicador::FragmentoParametro*> Nodo::getParametrosDeEntrada()
{
	GeneradorShader::Publicador::Fragmento* fragmento = this->getFragmento();

	return fragmento->getDefinicion()->getSemanticasIn();
}

std::vector<Nodo*> GeneradorShader::AST::Nodo::getNietos()
{
    std::vector<Nodo*> nietos;
    for (std::vector<Nodo*>::iterator it = this->hijos.begin(); it != this->hijos.end(); it++)
    {
        std::vector<Nodo*> nietos_aux = (*it)->getHijos();
        nietos.insert(nietos.begin(), nietos_aux.begin(), nietos_aux.end());
    }

    return nietos;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

bool Nodo::contieneHijo(Nodo* nodo_a_chequear)
{
	std::vector<Nodo*>::iterator it_a_borrar = std::find(this->hijos.begin(), this->hijos.end(), nodo_a_chequear);

	if (this->hijos.end() != it_a_borrar)
	{// si encontró "nodo_a_chequear" dentro de los hijos, entonces devuelvo true.
		return true;
	}
	// si no la encontró, entonces devuelvo false;
	return false;
}

// ========== INTERNAL METHODS ========== //
