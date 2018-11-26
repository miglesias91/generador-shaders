#include <Publicador/StructShader.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

StructShader::StructShader() : IDeclaracion()
{
}

StructShader::~StructShader()
{
}

std::string StructShader::escribir()
{
	return this->getTextoDeclaracion();
}

rapidjson::Value StructShader::json(rapidjson::Document* documento)
{
	return rapidjson::Value();
}

unsigned int StructShader::getTamanioMemoriaAdaptadoAlPipeline()
{
    unsigned int tamanio_adaptado = 0;
    for (std::vector<VariableShader*>::iterator it = this->variables_struct.begin(); it != this->variables_struct.end(); it++)
    {
        tamanio_adaptado += (*it)->getTamanioMemoriaAdaptadoAlPipeline();
    }
    return tamanio_adaptado;
}

std::vector<VariableShader*> StructShader::getVariables()
{
    return this->variables_struct;
}

void StructShader::agregarVariable(VariableShader * variable_struct)
{
    this->variables_struct.push_back(variable_struct);

    unsigned int nuevo_tamanio_memoria = this->getTamanioMemoria() + variable_struct->getTamanioMemoria();
    this->setTamanioMemoria(nuevo_tamanio_memoria);
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
