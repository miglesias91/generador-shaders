#include <Publicador/VertexShader.h>

using namespace GeneradorShader::Publicador;

#include <Parser/ParserFunciones.h>

std::vector<std::string> VertexShader::semanticas_ordenadas;

// ========== LIFECYCLE ========== //

VertexShader::VertexShader()
{
}

VertexShader::VertexShader(std::string nombre) : Shader(nombre)
{

}

VertexShader::~VertexShader()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void VertexShader::agregarParametroIn(FragmentoParametro* parametro_in)
{
	this->getFragmento()->agregarParametro(parametro_in);

	std::vector<FragmentoParametro*> parametros_in = this->getFragmento()->getDefinicion()->getSemanticasIn();

	this->getFragmento()->getDefinicion()->ordenarParametros(&VertexShader::comparadorParametrosVertex);

	// std::sort(parametros_in.begin(), parametros_in.end(), comparadorParametrosVertex);
}

void VertexShader::agregarParametroOut(FragmentoParametro* parametro_out)
{
	this->getFragmento()->agregarParametro(parametro_out);
}

bool VertexShader::comparadorParametrosVertex(FragmentoParametro* fragmento_a, FragmentoParametro* fragmento_b)
{
	std::string semantica_a = fragmento_a->getSemanticaUsuario();
	std::string semantica_b = fragmento_b->getSemanticaUsuario();

	unsigned int index_a = fragmento_a->getIndex();
	unsigned int index_b = fragmento_b->getIndex();

	if (0 == semantica_b.compare(semantica_a))
	{
		if (index_a <= index_b)
		{
			return true;
		}
		return false;
	}

	//std::vector<std::string> semanticas_ordenadas = { "POSITION", "NORMAL", "TEXCOORD", "COLOR", "BLENDWEIGHT", "BLENDINDICES" };

	std::vector<std::string>::iterator orden_a = std::find(semanticas_ordenadas.begin(), semanticas_ordenadas.end(), semantica_a);
	std::vector<std::string>::iterator orden_b = std::find(semanticas_ordenadas.begin(), semanticas_ordenadas.end(), semantica_b);

	if (orden_a <= orden_b)
	{
		return true;
	}
	return false;
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
