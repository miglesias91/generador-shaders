/// \file Pipeline.h
/// \date 2017-08-04
/// \brief Representa a los distintos shader que se aplican durante un pipeline,principalmente Vertex Shader y Pixel Shader.

#ifndef GENERADORSHADER_PUBLICADOR_PIPELINE_H_
#define GENERADORSHADER_PUBLICADOR_PIPELINE_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/PixelShader.h>
#include <Publicador/VertexShader.h>

// Publicador
#include <Publicador/IJson.h>

namespace GeneradorShader
{
namespace Publicador
{
	/// \brief DESCRIPCION
	class Pipeline : public IJson
	{
	public:
		// ========== LIFECYCLE ========== //

		/// \brief Constructor
		Pipeline();

		Pipeline(std::string nombre, Shader* vertex_shader, Shader* pixel_shader);

		/// \brief Destructor
		virtual ~Pipeline();

		// ========== OPERATORS ========== //

		// ========== METHODS ========== //

		virtual rapidjson::Value json(rapidjson::Document* documento);

		// ========== GETTERS ========== //

		std::string getNombre();

		Shader* getVertexShader();

		Shader* getPixelShader();

		// ========== SETTERS ========== //

		// ========== INQUIRY ========== //

	private:
		DISALLOW_COPY_AND_ASSIGN(Pipeline);

		// ========== INTERNAL METHODS ========== //

		// ========== ATTRIBUTES ========== //

		std::string nombre;

		Shader* vertex_shader;
		Shader* pixel_shader;
	};
};
};
#endif // GENERADORSHADER_PUBLICADOR_PIPELINE_H_
