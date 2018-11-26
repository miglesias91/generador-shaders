#include <Publicador/VariableShader.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

VariableShader::VariableShader() : IDeclaracion()
{
}

VariableShader::~VariableShader()
{
}

std::string VariableShader::escribir()
{
	std::string tipo = this->getTipo();

	std::string declaracion_estandar = this->getTipo() + " " + this->getNombre();
	

    if (1 < this->getTamanioArray())
    {
        declaracion_estandar += "[" + std::to_string(this->getTamanioArray()) + "]";
    }

	IDeclaracion::Register* registracion = this->getRegister();
	if (NULL != registracion)
	{
		declaracion_estandar += registracion->escribir();
	}

	IDeclaracion::PacketOffset* packoffset = this->getPacketOffset();
	if (NULL != packoffset)
	{
		declaracion_estandar += packoffset->escribir();
	}

	if (false == this->getSematica().empty())
	{
		declaracion_estandar += this->escribirSemantica();
	}

	declaracion_estandar += ";";
	
	return declaracion_estandar;
}

rapidjson::Value VariableShader::json(rapidjson::Document* documento)
{
	rapidjson::Value variable(rapidjson::kObjectType);

	variable.AddMember(rapidjson::Value("tipo", documento->GetAllocator()).Move(), rapidjson::Value(this->getTipo().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
	variable.AddMember(rapidjson::Value("nombre", documento->GetAllocator()).Move(), rapidjson::Value(this->getNombre().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
    variable.AddMember(rapidjson::Value("tamanio_array", documento->GetAllocator()).Move(), this->getTamanioArray(), documento->GetAllocator());
    variable.AddMember(rapidjson::Value("semantica", documento->GetAllocator()).Move(), rapidjson::Value(this->getSematica().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
	variable.AddMember(rapidjson::Value("tamanio", documento->GetAllocator()).Move(), this->getTamanioMemoria(), documento->GetAllocator());
    variable.AddMember(rapidjson::Value("tamanio_adaptado", documento->GetAllocator()).Move(), this->getTamanioMemoriaAdaptadoAlPipeline(), documento->GetAllocator());

	if (NULL != this->getRegister())
	{
		variable.AddMember(rapidjson::Value("register", documento->GetAllocator()).Move(), this->getRegister()->json(documento), documento->GetAllocator());
	}

	if (NULL != this->getPacketOffset())
	{
		variable.AddMember(rapidjson::Value("packoffset", documento->GetAllocator()).Move(), this->getPacketOffset()->json(documento), documento->GetAllocator());
	}

	return variable;
}

unsigned int VariableShader::getTamanioMemoriaAdaptadoAlPipeline()
{
    return this->getTamanioMemoriaRedondeadoAMultiploDe16();
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
