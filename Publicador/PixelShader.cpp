#include <Publicador/PixelShader.h>

using namespace GeneradorShader::Publicador;

#include <Publicador/InfoHLSL.h>

// ========== LIFECYCLE ========== //

PixelShader::PixelShader()
{
}

PixelShader::PixelShader(std::string nombre) : Shader(nombre)
{
}

PixelShader::~PixelShader()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void PixelShader::agregarParametroIn(GeneradorShader::Publicador::FragmentoParametro* parametro_in)
{
	this->getFragmento()->agregarParametro(parametro_in);
}

void PixelShader::agregarParametroOut(GeneradorShader::Publicador::FragmentoParametro* parametro_out)
{
	parametro_out->setSemanticaSistema(InfoHLSL::getSemanticaSistemaSalidaPixel());
	this->getFragmento()->agregarParametro(parametro_out);
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
