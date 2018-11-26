#include <Publicador/FragmentoDefinicion.h>

// stl
#include <algorithm>

// parser
#include <Parser/ParserFunciones.h>

using namespace GeneradorShader::Publicador;

// ========== LIFECYCLE ========== //

FragmentoDefinicion::FragmentoDefinicion() : nombre(""), tipo_retorno("void"), semantica_tipo_retorno("")
{
}

FragmentoDefinicion::FragmentoDefinicion(std::string nombre, std::string tipo_retorno, std::string semantica_tipo_retorno, std::string etiqueta_input) :
	nombre(nombre), tipo_retorno(tipo_retorno), semantica_tipo_retorno(semantica_tipo_retorno), etiqueta_input(etiqueta_input)
{

}

FragmentoDefinicion::~FragmentoDefinicion()
{
}

// ========== OPERADORES ========== //

// ========== MÉTODOS ========== //

rapidjson::Value FragmentoDefinicion::json(rapidjson::Document * documento)
{
	rapidjson::Value definicion_input_json(rapidjson::kObjectType);

	definicion_input_json.AddMember(rapidjson::Value("etiqueta", documento->GetAllocator()).Move(), rapidjson::Value(this->getEtiquetaInput().c_str(), documento->GetAllocator()).Move(), documento->GetAllocator());

	rapidjson::Value json_elementos(rapidjson::kArrayType);
	for (std::vector<FragmentoParametro*>::iterator it = this->sematicas_in.begin(); it != this->sematicas_in.end(); it++)
	{
		json_elementos.PushBack((*it)->json(documento), documento->GetAllocator());
	}

	definicion_input_json.AddMember(rapidjson::Value("elementos", documento->GetAllocator()).Move(), json_elementos, documento->GetAllocator());

	return definicion_input_json;
}

void FragmentoDefinicion::agregarSemanticaIn(FragmentoParametro* nueva_semantica_in)
{
	this->sematicas_in.push_back(nueva_semantica_in);
}

void FragmentoDefinicion::agregarSemanticaOut(FragmentoParametro* nueva_semantica_out)
{
	this->sematicas_out.push_back(nueva_semantica_out);
}
void FragmentoDefinicion::agregarSemanticaInout(FragmentoParametro* nueva_semantica_inout)
{
	this->sematicas_inout.push_back(nueva_semantica_inout);
}

void FragmentoDefinicion::ordenarParametros(bool(*comparador)(FragmentoParametro *fragmento_a, FragmentoParametro *fragmento_b))
{
	std::sort(this->sematicas_in.begin(), sematicas_in.end(), comparador);
}

// ========== GETTERS ========== //

std::string FragmentoDefinicion::getNombre()
{
	return this->nombre;
}

std::string FragmentoDefinicion::getEtiquetaInput()
{
	if (this->etiqueta_input.empty())
	{
		this->etiqueta_input = this->nombre;
	}
	return this->etiqueta_input;
}

std::string FragmentoDefinicion::getTipoRetorno()
{
	return this->tipo_retorno;
}

std::string FragmentoDefinicion::getSemanticaTipoRetorno()
{
	return this->semantica_tipo_retorno;
}

std::vector<FragmentoParametro*> FragmentoDefinicion::getSemanticasIn()
{
	return this->sematicas_in;
}

std::vector<FragmentoParametro*> FragmentoDefinicion::getSemanticasOut()
{
	std::vector<FragmentoParametro*> semanticas_out_por_parametro = this->sematicas_out;
	if (this->tieneValorDeRetorno())
	{
		FragmentoParametro* semantica_out_por_retorno = this->getRetornoComoParametro();
		semanticas_out_por_parametro.push_back(semantica_out_por_retorno);
	}
	return semanticas_out_por_parametro;
}

std::vector<FragmentoParametro*> FragmentoDefinicion::getSemanticasInout()
{
	return this->sematicas_inout;
}

FragmentoParametro*  FragmentoDefinicion::getRetornoComoParametro()
{
	FragmentoParametro* parametro_semanticas = Parser::getVertexComoParametro(this->getSemanticaTipoRetorno());

	//std::string nombre_semantica_tipo_retorno = this->getSemanticaTipoRetorno();
	//std::transform(nombre_semantica_tipo_retorno.begin(), nombre_semantica_tipo_retorno.end(), nombre_semantica_tipo_retorno.begin(), ::tolower);

	return new FragmentoParametro("out", this->getTipoRetorno(), parametro_semanticas->getNombre(), parametro_semanticas->getSemanticaUsuario(), parametro_semanticas->getSemanticaSistema());
}

// ========== SETTERS ========== //

void FragmentoDefinicion::setTipoRetorno(std::string tipo_retorno)
{
	this->tipo_retorno = tipo_retorno;
}

void FragmentoDefinicion::setSemanticaTipoRetorno(std::string semantica_tipo_retorno)
{
	this->semantica_tipo_retorno = semantica_tipo_retorno;
}

void FragmentoDefinicion::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void FragmentoDefinicion::setEtiquetaInput(std::string etiqueta_input)
{
	this->etiqueta_input = etiqueta_input;
}

void FragmentoDefinicion::setInSemanticas(std::vector<FragmentoParametro*> semanticas_in)
{
	this->sematicas_in = semanticas_in;
}

void FragmentoDefinicion::setOutSemanticas(std::vector<FragmentoParametro*> semanticas_out)
{
	this->sematicas_out = semanticas_out;
}

void FragmentoDefinicion::setInoutSemanticas(std::vector<FragmentoParametro*> semanticas_inout)
{
	this->sematicas_inout = semanticas_inout;
}

// ========== INQUIRY ========== //

bool FragmentoDefinicion::tieneValorDeRetorno()
{
	if (this->getSemanticaTipoRetorno().empty() && 0 == this->getTipoRetorno().compare("void"))
	{// la semantica del valor retorno no esta seteada, entonces quiere decir que no se tiene en cuenta. (es "void").
		return false;
	}
	return true;
}

FragmentoParametro* FragmentoDefinicion::hallarSemanticaIn(std::string semantica_a_hallar)
{
	FragmentoParametro* fragmento_hallado = NULL;
	for (std::vector<FragmentoParametro*>::iterator it_fragmento = this->sematicas_in.begin(); it_fragmento != this->sematicas_in.end(); it_fragmento++)
	{
		std::string semantica_a_evaluar = (*it_fragmento)->getSemanticaUsuario();

		if (0 == semantica_a_hallar.compare(semantica_a_evaluar))
		{
			fragmento_hallado = *it_fragmento;
		}
	}

	return fragmento_hallado;
}

// ========== MÉTODOS INTERNOS ========== //
