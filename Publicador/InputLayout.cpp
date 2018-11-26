#include <Publicador/InputLayout.h>

// stl
#include <algorithm>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

InputLayout::InputLayout()
{
}

InputLayout::InputLayout(rapidjson::Value & input)
{
    this->etiqueta = input["etiqueta"].GetString();
    this->semantica_salida_vertex = input["semantica_salida_vertex"].GetString();

    rapidjson::Value& elementos = input["elementos"];
    for (rapidjson::Value::ValueIterator itr = elementos.Begin(); itr != elementos.End(); itr++)
    {
        ElementoInput* nuevo_elemento = new ElementoInput(*itr);

        this->elementos.push_back(nuevo_elemento);
    }

}

InputLayout::~InputLayout()
{
}

std::vector<ElementoInput*> InputLayout::getElementos()
{
    return this->elementos;
}

std::vector<std::string> InputLayout::getSemanticasElementos()
{
    std::vector<std::string> semanticas;
    for (std::vector<ElementoInput*>::iterator it = this->elementos.begin(); it != this->elementos.end(); it++)
    {
        semanticas.push_back((*it)->getSemantica());
    }

    return semanticas;
}

std::string InputLayout::getEtiqueta()
{
    return this->etiqueta;
}

std::string InputLayout::getSemanticaSalidaVertex()
{
    return this->semantica_salida_vertex;
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
