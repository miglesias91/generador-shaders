#include <Publicador/InfoHLSL.h>

using namespace GeneradorShader::Publicador;

std::vector<std::string> InfoHLSL::semanticas_sistema_dx9_salida_pixelbuffer = { "COLOR0", "DEPTH0" };

std::vector<std::string> InfoHLSL::semanticas_sistema_dx11_salida_pixelbuffer = { "SV_TARGET", "SV_DEPTH" };

// ========== LIFECYCLE ========== //

// ========== OPERATORS ========== //

// ========== METHODS ========== //

std::string InfoHLSL::getSemanticaSistemaSalidaPixel()
{
	return semanticas_sistema_dx11_salida_pixelbuffer[0];
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //

