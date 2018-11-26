#include <Publicador/CBufferShader.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

CBufferShader::CBufferShader() : IDeclaracion(), nombre_clase("")/*cbuffer_de_objeto(false), cbuffer_de_escena(false)*/
{
}

CBufferShader::~CBufferShader()
{
	for (std::vector<VariableShader*>::iterator it = this->variables_cbuffer.begin(); it != this->variables_cbuffer.end(); it++)
	{
		delete *it;
		*it = NULL;
	}

}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

std::string CBufferShader::escribir()
{
	std::string declaracion_estandar ="cbuffer " + this->getNombre();

	IDeclaracion::Register* registracion = this->getRegister();
	if (NULL != registracion)
	{
		declaracion_estandar += registracion->escribir();
	}
	
	if (false == this->getSematica().empty())
	{
		declaracion_estandar += this->escribirSemantica();
	}

	declaracion_estandar += "\n";
	declaracion_estandar += "{\n";

	for (std::vector<VariableShader*>::iterator it = this->variables_cbuffer.begin(); it != this->variables_cbuffer.end(); it++)
	{
		declaracion_estandar += "\t" + (*it)->escribir() + "\n";
	}

	declaracion_estandar += "};";

	return declaracion_estandar;
}

rapidjson::Value CBufferShader::json(rapidjson::Document* documento)
{
	rapidjson::Value cbuffer(rapidjson::kObjectType);

	cbuffer.AddMember(rapidjson::Value("tipo", documento->GetAllocator()).Move(), rapidjson::Value("cbuffer", documento->GetAllocator()).Move(), documento->GetAllocator());
	cbuffer.AddMember(rapidjson::Value("nombre", documento->GetAllocator()).Move(), rapidjson::Value(this->getNombre().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
    cbuffer.AddMember(rapidjson::Value("tamanio_array", documento->GetAllocator()).Move(), this->getTamanioArray(), documento->GetAllocator());
    cbuffer.AddMember(rapidjson::Value("semantica", documento->GetAllocator()).Move(), rapidjson::Value(this->getSematica().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
    cbuffer.AddMember(rapidjson::Value("tamanio", documento->GetAllocator()).Move(), this->getTamanioMemoria(), documento->GetAllocator());
    cbuffer.AddMember(rapidjson::Value("tamanio_adaptado", documento->GetAllocator()).Move(), this->getTamanioMemoriaAdaptadoAlPipeline(), documento->GetAllocator());
    cbuffer.AddMember(rapidjson::Value("clase", documento->GetAllocator()).Move(), rapidjson::Value(this->clase().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
    //cbuffer.AddMember(rapidjson::Value("de_escena", documento->GetAllocator()).Move(), this->esDeEscena(), documento->GetAllocator());
    //cbuffer.AddMember(rapidjson::Value("de_objeto", documento->GetAllocator()).Move(), this->esDeObjeto(), documento->GetAllocator());

	if (NULL != this->getRegister())
	{
		cbuffer.AddMember("register", this->getRegister()->json(documento), documento->GetAllocator());
	}

	rapidjson::Value json_variables(rapidjson::kArrayType);

	std::vector<VariableShader*> variables = this->getVariables();
	for (std::vector<VariableShader*>::iterator it = variables.begin(); it != variables.end(); it++)
	{
		json_variables.PushBack((*it)->json(documento), documento->GetAllocator());
	}

	rapidjson::Value tag_variables("variables", documento->GetAllocator());
	cbuffer.AddMember(tag_variables, json_variables, documento->GetAllocator());

	return cbuffer;
}

void CBufferShader::clase(std::string nombre_clase)
{
    this->nombre_clase = nombre_clase;
}

// ========== GETTERS ========== //

unsigned int CBufferShader::getTamanioMemoriaAdaptadoAlPipeline()
{
    unsigned int tamanio_adaptado = 0;
    for (std::vector<VariableShader*>::iterator it = this->variables_cbuffer.begin(); it != this->variables_cbuffer.end(); it++)
    {
        tamanio_adaptado += (*it)->getTamanioMemoriaAdaptadoAlPipeline();
    }
    return tamanio_adaptado;
}

std::vector<VariableShader*> CBufferShader::getVariables()
{
	return this->variables_cbuffer;
}

std::string CBufferShader::clase()
{
    return this->nombre_clase;
}

// ========== SETTERS ========== //

void CBufferShader::agregarVariable(VariableShader * variable_cbuffer)
{
	this->variables_cbuffer.push_back(variable_cbuffer);

	unsigned int nuevo_tamanio_memoria = this->getTamanioMemoria() + variable_cbuffer->getTamanioMemoria();
	this->setTamanioMemoria(nuevo_tamanio_memoria);
}

//void CBufferShader::esDeObjeto(bool es_de_objeto)
//{
//    this->cbuffer_de_objeto = es_de_objeto;
//}
//
//bool CBufferShader::esDeObjeto()
//{
//    return this->cbuffer_de_objeto;
//}
//
//void CBufferShader::esDeEscena(bool es_de_escena)
//{
//    this->cbuffer_de_escena = es_de_escena;
//}
//
//bool CBufferShader::esDeEscena()
//{
//    return this->cbuffer_de_escena;
//}

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
