/// \file InfoHLSL.h
/// \date 2017-07-18
/// \brief DESCRIPCION

#ifndef GENERADORSHADER_PUBLICADOR_INFOHLSL_H_
#define GENERADORSHADER_PUBLICADOR_INFOHLSL_H_

// stl
#include <vector>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class InfoHLSL
{
	public:
		static std::vector<std::string> semanticas_sistema_salida_vertexbuffer;

		static std::vector<std::string> semanticas_sistema_dx9_salida_pixelbuffer;

		static std::vector<std::string> semanticas_sistema_dx11_salida_pixelbuffer;

		// ========== LIFECYCLE ========== //

		// ========== OPERATORS ========== //

		// ========== METHODS ========== //

		static std::string getSemanticaSistemaSalidaPixel();

		// ========== GETTERS ========== //

		// ========== SETTERS ========== //

		// ========== INQUIRY ========== //

	private:
		DISALLOW_COPY_AND_ASSIGN(InfoHLSL);

		// ========== INTERNAL METHODS ========== //

		// ========== ATTRIBUTES ========== //
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_INFOHLSL_H_
