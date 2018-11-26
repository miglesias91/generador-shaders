#include <Publicador/Shader.h>

// stl
#include <algorithm>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

Shader::Shader() : fragmento_shader(NULL)
{
}

Shader::Shader(std::string nombre) : nombre(nombre)
{
	FragmentoDefinicion* definicion = new FragmentoDefinicion(nombre, "void", "");

	this->fragmento_shader = new Fragmento(definicion);
}

Shader::~Shader()
{
	if (NULL != this->fragmento_shader)
	{
		delete this->fragmento_shader;
		this->fragmento_shader = NULL;
	}
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

rapidjson::Value Shader::json(rapidjson::Document * documento)
{
	rapidjson::Value shader(rapidjson::kObjectType);

	shader.AddMember(rapidjson::Value("nombre", documento->GetAllocator()).Move(), rapidjson::Value((this->getNombre()).c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());
	shader.AddMember(rapidjson::Value("path", documento->GetAllocator()).Move(), rapidjson::Value(this->getNombreArchivo().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());

	// agrego las texturas 2D
	rapidjson::Value json_texturas_2d(rapidjson::kArrayType);

	std::vector<VariableShader*> variables_texturas_2d = this->fragmento_shader->getVariablesTexturas2D();

	for (std::vector<VariableShader*>::iterator it = variables_texturas_2d.begin(); it != variables_texturas_2d.end(); it++)
	{
        json_texturas_2d.PushBack((*it)->json(documento), documento->GetAllocator());
	}

	shader.AddMember("texturas_2d", json_texturas_2d, documento->GetAllocator());

    // agrego las texturas 2D array
    rapidjson::Value json_texturas_2d_array(rapidjson::kArrayType);

    std::vector<VariableShader*> variables_texturas_2d_array = this->fragmento_shader->getVariablesTexturas2DArray();

    for (std::vector<VariableShader*>::iterator it = variables_texturas_2d_array.begin(); it != variables_texturas_2d_array.end(); it++)
    {
        json_texturas_2d_array.PushBack((*it)->json(documento), documento->GetAllocator());
    }

    shader.AddMember("texturas_2d_array", json_texturas_2d_array, documento->GetAllocator());

    // agrego las texturas 3D
    rapidjson::Value json_texturas_3d(rapidjson::kArrayType);

    std::vector<VariableShader*> variables_texturas_3d = this->fragmento_shader->getVariablesTexturas3D();

    for (std::vector<VariableShader*>::iterator it = variables_texturas_3d.begin(); it != variables_texturas_3d.end(); it++)
    {
        json_texturas_3d.PushBack((*it)->json(documento), documento->GetAllocator());
    }

    shader.AddMember("texturas_3d", json_texturas_3d, documento->GetAllocator());

	// agrego los samplers
	rapidjson::Value json_samplers(rapidjson::kArrayType);

	std::vector<VariableShader*> variables_samplers = this->fragmento_shader->getVariablesSamplers();

	for (std::vector<VariableShader*>::iterator it = variables_samplers.begin(); it != variables_samplers.end(); it++)
	{
		json_samplers.PushBack((*it)->json(documento), documento->GetAllocator());
	}

	shader.AddMember("samplers", json_samplers, documento->GetAllocator());

	// agrego los cbuffer del shader.
	rapidjson::Value json_cbuffers(rapidjson::kArrayType);

	std::vector<CBufferShader*> cbuffers = this->fragmento_shader->getCBuffers();

	for (std::vector<CBufferShader*>::iterator it = cbuffers.begin(); it != cbuffers.end(); it++)
	{
		json_cbuffers.PushBack((*it)->json(documento), documento->GetAllocator());
	}

	shader.AddMember("cbuffers", json_cbuffers, documento->GetAllocator());

	return shader;
}

void Shader::agregarFragmentoComponente(GeneradorShader::Publicador::Fragmento * fragmento_nuevo)
{
	this->fragmentos_componentes.push_back(fragmento_nuevo);
}

// ========== GETTERS ========== //

void Shader::ordernarFragmentosComponentesSegunDependeciaDeVariables()
{
    std::sort(this->fragmentos_componentes.begin(), this->fragmentos_componentes.end(), ordenarFragmentosSegunDependeciaDeVariables);
}

std::string Shader::getNombre()
{
	return this->nombre;
}

std::string Shader::getNombreArchivo()
{
	return this->nombre + "." + this->getExtension();
}

std::string Shader::getExtension()
{
	return "hlsl";
}

Fragmento * Shader::getFragmento()
{
	return this->fragmento_shader;
}

std::vector<Fragmento*> Shader::getFragmentosComponentes()
{
	return this->fragmentos_componentes;
}

std::vector<FragmentoParametro*> Shader::getSemanticasDeEntrada()
{
	return this->fragmento_shader->getDefinicion()->getSemanticasIn();
}

bool Shader::ordenarFragmentosSegunDependeciaDeVariables(Fragmento * a, Fragmento * b)
{
    std::vector<FragmentoParametro*> parametros_in = b->getDefinicion()->getSemanticasIn();
    std::vector<FragmentoParametro*> parametros_out = a->getDefinicion()->getSemanticasOut();

    for (std::vector<FragmentoParametro*>::iterator it_in = parametros_in.begin(); it_in != parametros_in.end(); it_in++)
    {
        std::string semantica_in = (*it_in)->getSemanticaUsuario();
        for (std::vector<FragmentoParametro*>::iterator it_out = parametros_out.begin(); it_out != parametros_out.end(); it_out++)
        {
            std::string semantica_out = (*it_out)->getSemanticaUsuario();
            if (0 == semantica_in.compare(semantica_out))
            {
                return true;
            }
        }
    }

    return false;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
