#include <Publicador/Pipeline.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

Pipeline::Pipeline()
{
}

Pipeline::Pipeline(std::string nombre, Shader* vertex_shader, Shader* pixel_shader) : nombre(nombre), vertex_shader(vertex_shader), pixel_shader(pixel_shader)
{
}

Pipeline::~Pipeline()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

rapidjson::Value Pipeline::json(rapidjson::Document * documento)
{
	rapidjson::Value efecto(rapidjson::kObjectType);

	efecto.AddMember(rapidjson::Value("nombre", documento->GetAllocator()).Move(), rapidjson::Value(this->getNombre().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());

	efecto.AddMember("layout", this->getVertexShader()->getFragmento()->getDefinicion()->json(documento), documento->GetAllocator());
	efecto.AddMember("vertexshader", this->getVertexShader()->json(documento), documento->GetAllocator());
	efecto.AddMember("pixelshader", this->getPixelShader()->json(documento), documento->GetAllocator());

	return efecto;
}

// ========== GETTERS ========== //

std::string Pipeline::getNombre()
{
	return this->nombre;
}

Shader* Pipeline::getVertexShader()
{
	return this->vertex_shader;
}

Shader* Pipeline::getPixelShader()
{
	return this->pixel_shader;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
