/// \file IDeclaracion.h
/// \date 2017-09-05
/// \brief Interfaz que implementan las declaraciones de un shader, contiene el texto que representa la declaracion.

#ifndef GENERADORSHADER_PUBLICADOR_IDECLARACION_H_
#define GENERADORSHADER_PUBLICADOR_IDECLARACION_H_

// stl
#include <string>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// Publicador
#include <Publicador/IJson.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class IDeclaracion : public IJson
{
    public:

		struct Register
		{
			Register() : numero(0), subcomponente(0), tipo("") {}
			Register(unsigned int numero, std::string tipo, unsigned int subcomponente = 0) : numero(numero), subcomponente(subcomponente), tipo(tipo) {}

			std::string escribir()
			{
				std::string declaracion_estandar = " : register(" + this->tipo + std::to_string( (long long) this->numero);

				if (0 != this->subcomponente)
				{
					declaracion_estandar += "[" + std::to_string((long long) this->subcomponente) + "]";
				}

				declaracion_estandar += ")";

				return declaracion_estandar;
			}

			virtual rapidjson::Value json(rapidjson::Document* documento)
			{
				rapidjson::Value registracion(rapidjson::kObjectType);

				registracion.AddMember(rapidjson::Value("tipo", documento->GetAllocator()).Move(), rapidjson::Value(this->tipo.c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());

				registracion.AddMember(rapidjson::Value("numero", documento->GetAllocator()).Move(), this->numero, documento->GetAllocator());

				registracion.AddMember(rapidjson::Value("subcomponente", documento->GetAllocator()).Move(), this->subcomponente, documento->GetAllocator());

				return registracion;
			};

			std::string tipo;
			unsigned int numero;
			unsigned int subcomponente;
		};

		struct PacketOffset
		{
			PacketOffset() : numero(0), componente("") {};
			PacketOffset(unsigned int numero, std::string componente = "") : numero(numero), componente(componente) {}

			std::string escribir()
			{
				std::string declaracion_estandar = " : packoffset(c" + std::to_string((long long) this->numero);

				if ( false == this->componente.empty())
				{
					declaracion_estandar += "." + this->componente;
				}

				declaracion_estandar += ")";
				
				return declaracion_estandar;
			}

			virtual rapidjson::Value json(rapidjson::Document* documento)
			{
				rapidjson::Value packoffset(rapidjson::kObjectType);

				packoffset.AddMember(rapidjson::Value("numero", documento->GetAllocator()).Move(), this->numero, documento->GetAllocator());

				packoffset.AddMember(rapidjson::Value("componente", documento->GetAllocator()).Move(), rapidjson::Value(this->componente.c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());

				return packoffset;
			};

			unsigned int numero;
			std::string componente;
		};

        // ========== LIFECYCLE ========== //

        /// \brief Constructor
		IDeclaracion();

        IDeclaracion(std::string declaracion);

        /// \brief Destructor
        virtual ~IDeclaracion();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //

		virtual std::string escribir() = 0;

		virtual rapidjson::Value json(rapidjson::Document* documento) = 0;

		virtual std::string escribirSemantica();

		virtual void eliminarRegister();

        // ========== GETTERS ========== //
        
		virtual std::string getTextoDeclaracion();
		virtual std::string getNombre();
        virtual unsigned int getTamanioArray();

		virtual std::string getReferencia();
		virtual std::string getTipo();
		virtual PacketOffset* getPacketOffset();
		virtual Register* getRegister();
		virtual std::string getSematica();
        virtual unsigned int getTamanioMemoria();
        virtual unsigned int getTamanioMemoriaAdaptadoAlPipeline() = 0;
		virtual unsigned int getTamanioMemoriaRedondeadoAMultiploDe16();

        // ========== SETTERS ========== //
        
		virtual void setTextoDeclaracion(std::string declaracion);
		virtual void setNombre(std::string nombre);
        virtual void setTamanioArray(unsigned int tamanio_array);

		virtual void setReferencia(std::string referencia);
		virtual void setTipo(std::string tipo);
		virtual void setPacketOffset(PacketOffset* packetoffset);
		virtual void setRegister(Register* registracion);
		virtual void setSematica(std::string semantica);
		virtual void setTamanioMemoria(unsigned int tamanio_memoria);

        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(IDeclaracion);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //

		std::string declaracion;
		std::string nombre;
        unsigned int tamanio_array;

		std::string referencia;
		std::string tipo;
		PacketOffset* packet_offset;
		Register* registracion;
		std::string sematica;
		unsigned int tamanio_memoria;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_IDECLARACION_H_
