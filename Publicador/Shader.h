/// \file Shader.h
/// \date 2017-06-13
/// \brief Representa a un shader armado a partir de varios fragmentos.

#ifndef GENERADORSHADER_PUBLICADOR_SHADER_H_
#define GENERADORSHADER_PUBLICADOR_SHADER_H_

// stl
#include <string>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Fragmento.h>
#include <Publicador/IJson.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class Shader : public IJson
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        Shader();

		Shader(std::string nombre);

        /// \brief Destructor
        virtual ~Shader();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //

		virtual rapidjson::Value json(rapidjson::Document* documento);
        
		virtual void agregarFragmentoComponente(GeneradorShader::Publicador::Fragmento* fragmento_nuevo);

		virtual void agregarParametroIn(GeneradorShader::Publicador::FragmentoParametro* parametro_in) = 0;

		virtual void agregarParametroOut(GeneradorShader::Publicador::FragmentoParametro* parametro_out) = 0;

        virtual void ordernarFragmentosComponentesSegunDependeciaDeVariables();

        // ========== GETTERS ========== //
        
		virtual std::string getNombre();

		virtual std::string getNombreArchivo();

		virtual std::string getExtension();

		virtual GeneradorShader::Publicador::Fragmento* getFragmento();

		virtual std::vector<GeneradorShader::Publicador::Fragmento*> getFragmentosComponentes();

		virtual std::vector<FragmentoParametro*> getSemanticasDeEntrada();

        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(Shader);

        // ========== INTERNAL METHODS ========== //

        static bool ordenarFragmentosSegunDependeciaDeVariables(Fragmento* a, Fragmento* b);

        // ========== ATTRIBUTES ========== //

		/// \brief fragmento que contiene la información de definicion y parametros del shader.
		GeneradorShader::Publicador::Fragmento* fragmento_shader;

		/// \brief lista fragmentos que componen al shader. Estan ordenados según orden de aparición en el código.
		/// Es decir, el fragmento que no dependa de ningun otro fragmento sera el 1ero. El fragmento que dependa de todos los fragmentos sera el ultimo.
		std::vector<GeneradorShader::Publicador::Fragmento*> fragmentos_componentes;

		std::string nombre;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_SHADER_H_
