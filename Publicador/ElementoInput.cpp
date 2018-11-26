#include <Publicador/ElementoInput.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

ElementoInput::ElementoInput()
{
}

ElementoInput::ElementoInput(rapidjson::Value & elemento)
{
    this->semantica = elemento["semantica"].GetString();
    this->index = elemento["index"].GetUint();
    this->tipo = elemento["tipo"].GetString();
}

ElementoInput::~ElementoInput()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

// ========== GETTERS ========== //

std::string ElementoInput::getSemantica()
{
    return this->semantica;
}

std::string ElementoInput::getTipo()
{
    return this->tipo;
}

unsigned int ElementoInput::getIndex()
{
    return this->index;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
