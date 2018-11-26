/// \file PixelShader.h
/// \date 2017-08-04
/// \brief Representacion del Pixel Shader utilizada para escribirlo/exportarlo en un archivo.

#ifndef GENERADORSHADER_PUBLICADOR_PIXELSHADER_H_
#define GENERADORSHADER_PUBLICADOR_PIXELSHADER_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Shader.h>

namespace GeneradorShader
{
namespace Publicador
{
	/// \brief DESCRIPCION
	class PixelShader : public Shader
	{
	public:
		// ========== LIFECYCLE ========== //

		/// \brief Constructor
		PixelShader();

		PixelShader(std::string nombre);

		/// \brief Destructor
		virtual ~PixelShader();

		// ========== OPERATORS ========== //

		// ========== METHODS ========== //

		virtual void agregarParametroIn(GeneradorShader::Publicador::FragmentoParametro* parametro_in);

		virtual void agregarParametroOut(GeneradorShader::Publicador::FragmentoParametro* parametro_out);

		// ========== GETTERS ========== //

		// ========== SETTERS ========== //

		// ========== INQUIRY ========== //

	private:
		DISALLOW_COPY_AND_ASSIGN(PixelShader);

		// ========== INTERNAL METHODS ========== //

		// ========== ATTRIBUTES ========== //       
	};
};
};

#endif // GENERADORSHADER_PUBLICADOR_PIXELSHADER_H_
