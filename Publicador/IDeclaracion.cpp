#include <Publicador/IDeclaracion.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

IDeclaracion::IDeclaracion() : declaracion(""), packet_offset(NULL), registracion(NULL), tamanio_array(1), tamanio_memoria(0)
{
}

IDeclaracion::IDeclaracion(std::string declaracion) : declaracion(declaracion), packet_offset(NULL), registracion(NULL), tamanio_array(1), tamanio_memoria(0)
{
}

IDeclaracion::~IDeclaracion()
{
	delete this->packet_offset;
	this->packet_offset = NULL;

	delete this->registracion;
	this->registracion = NULL;
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void IDeclaracion::eliminarRegister()
{
	delete this->registracion;
	this->registracion = NULL;
}

// ========== GETTERS ========== //

std::string IDeclaracion::escribirSemantica()
{
	return " : " + this->getSematica();
}

std::string IDeclaracion::getTextoDeclaracion()
{
	return this->declaracion;
}

std::string IDeclaracion::getNombre()
{
	return this->nombre;
}

unsigned int IDeclaracion::getTamanioArray()
{
    return this->tamanio_array;
}

std::string IDeclaracion::getReferencia()
{
	return this->referencia;
}

std::string IDeclaracion::getTipo()
{
	return this->tipo;
}

IDeclaracion::PacketOffset* IDeclaracion::getPacketOffset()
{
	return this->packet_offset;
}

IDeclaracion::Register* IDeclaracion::getRegister()
{
	return this->registracion;
}

std::string IDeclaracion::getSematica()
{
	return this->sematica;
}

unsigned int IDeclaracion::getTamanioMemoria()
{
	return this->tamanio_memoria;
}

unsigned int IDeclaracion::getTamanioMemoriaRedondeadoAMultiploDe16()
{
	unsigned int dieciseis = 16;

	if (this->getTamanioMemoria() <= dieciseis)
	{// si es menor o igual a 16, entonces el multiplo de 16 mas cercano es 16.
		return dieciseis;
	}

	unsigned int resto = this->getTamanioMemoria() % dieciseis;

	if (0 == resto)
	{
		return this->getTamanioMemoria();
	}

	return this->getTamanioMemoria() + (dieciseis - resto);
}

// ========== SETTERS ========== //

void IDeclaracion::setTextoDeclaracion(std::string declaracion)
{
	this->declaracion = declaracion;
}

void IDeclaracion::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void IDeclaracion::setTamanioArray(unsigned int tamanio_array)
{
    this->tamanio_array = tamanio_array;
}

void IDeclaracion::setReferencia(std::string referencia)
{
	this->referencia = referencia;
}

void IDeclaracion::setTipo(std::string tipo)
{
	this->tipo = tipo;
}

void IDeclaracion::setPacketOffset(PacketOffset* packet_offset)
{
	this->packet_offset = packet_offset;
}

void IDeclaracion::setRegister(Register* registracion)
{
	this->registracion = registracion;
}

void IDeclaracion::setSematica(std::string semantica)
{
	this->sematica = semantica;
}

void IDeclaracion::setTamanioMemoria(unsigned int tamanio_memoria)
{
	this->tamanio_memoria = tamanio_memoria;
}

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
