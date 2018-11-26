#include <Publicador/FragmentoParametro.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

FragmentoParametro::FragmentoParametro() :
	referencia(""), nombre(""), tipo(""), semantica_usuario(""), semantica_sistema(""), index(0)
{
}

FragmentoParametro::FragmentoParametro(std::string referencia, std::string tipo, std::string nombre, std::string semantica_usuario, std::string semantica_sistema, unsigned int index) :
referencia(referencia), tipo(tipo), nombre(nombre),  semantica_usuario(semantica_usuario), semantica_sistema(semantica_sistema), index(index)
{

}

FragmentoParametro::~FragmentoParametro()
{
}

// ========== OPERADORES ========== //

// ========== MÉTODOS ========== //

// ========== GETTERS ========== //

rapidjson::Value FragmentoParametro::json(rapidjson::Document * documento)
{
	rapidjson::Value json_parametro(rapidjson::kObjectType);

	json_parametro.AddMember(rapidjson::Value("semantica", documento->GetAllocator()).Move(), rapidjson::Value(this->getSemanticaUsuario().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
	json_parametro.AddMember(rapidjson::Value("index", documento->GetAllocator()).Move(), rapidjson::Value(this->getIndex()).Move(), documento->GetAllocator());
	json_parametro.AddMember(rapidjson::Value("tipo", documento->GetAllocator()).Move(), rapidjson::Value(this->getTipo().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());

	return json_parametro;
}

std::string FragmentoParametro::getReferencia()
{
	return this->referencia;
}

std::string FragmentoParametro::getNombre()
{
	return this->nombre;
}

std::string FragmentoParametro::getTipo()
{
	return this->tipo;
}

std::string FragmentoParametro::getSemanticaUsuario()
{
	return this->semantica_usuario;
}

std::string FragmentoParametro::getSemanticaSistema()
{
	return this->semantica_sistema;
}

unsigned int FragmentoParametro::getIndex()
{
	return this->index;
}

// ========== SETTERS ========== //

void FragmentoParametro::setReferencia(std::string referencia)
{
	this->referencia = referencia;
}

void FragmentoParametro::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void FragmentoParametro::setTipo(std::string tipo)
{
	this->tipo = tipo;
}

void FragmentoParametro::setSemanticaUsuario(std::string semantica_usuario)
{
	this->semantica_usuario = semantica_usuario;
}

void FragmentoParametro::setSemanticaSistema(std::string semantica_sistema)
{
	this->semantica_sistema = semantica_sistema;
}

void FragmentoParametro::setIndex(unsigned int index)
{
	this->index = index;
}

// ========== INQUIRY ========== //

bool FragmentoParametro::semanticaUsuarioIgualASemanticaSistema()
{
	return 0 == this->getSemanticaUsuario().compare(this->getSemanticaSistema());
}

// ========== MÉTODOS INTERNOS ========== //
