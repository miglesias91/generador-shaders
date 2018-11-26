#include <Parser/MapaSemanticaVertexFragmento.h>

// stl
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <filesystem>

// json
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

// publicador
#include <Publicador/VertexShader.h>

using namespace GeneradorShader::Parser;

std::unordered_map<std::string, GeneradorShader::Publicador::FragmentoParametro*> MapaSemanticaVertexFragmento::mapa_semantica_fragmento;

std::vector<std::string> MapaSemanticaVertexFragmento::semanticas_usuario_vertex;
std::vector<std::string> MapaSemanticaVertexFragmento::semanticas_usuario_pixel;

// ========== LIFECYCLE ========== //

MapaSemanticaVertexFragmento::MapaSemanticaVertexFragmento()
{
}

MapaSemanticaVertexFragmento::~MapaSemanticaVertexFragmento()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

GeneradorShader::Publicador::FragmentoParametro* MapaSemanticaVertexFragmento::getVertexComoParametro(std::string semantica_vertex)
{
	return mapa_semantica_fragmento[semantica_vertex];
}

void MapaSemanticaVertexFragmento::cargarSemanticasUsuarioSistema()
{
	if (yaEstaCargado())
	{
		return;
	}

	std::ifstream in("semanticas.json");

	std::ostringstream sstream;
	sstream << in.rdbuf();

	const std::string str(sstream.str());
	const char* json = str.c_str();

	rapidjson::Document document;
	document.Parse(json);

	const rapidjson::Value& semanticas = document["semanticas"];
	for (rapidjson::Value::ConstValueIterator itr = semanticas.Begin(); itr != semanticas.End(); itr++)
	{
		const rapidjson::Value& semantica = (*itr);

		std::string semantica_sistema = semantica["semantica_sistema"].GetString();
		std::string referencia = semantica["referencia"].GetString();
		std::string tipo = semantica["tipo"].GetString();
		unsigned int max_values = semantica["max_values"].GetUint();
		
		const rapidjson::Value& semanticas_usuario = semantica["semanticas_usuario"];

		unsigned int index = 0;
		for (rapidjson::Value::ConstValueIterator itr = semanticas_usuario.Begin(); itr != semanticas_usuario.End(); itr++)
		{
			if (index >= max_values)
			{
				std::cout << "NO PUEDE INGRESAR UNA CANTIDAD DE SEMANTICAS MAYOR AL MAXIMO ESPECIFICADO.\n";
				throw - 1;
			}

			std::string semantica_usuario = itr->GetString();
			std::string nombre = semantica_usuario;

			// si max_value es 1, entonces pongo la semantica sin indice.
			std::string semantica_sistema_y_index = (max_values != 1) ? semantica_sistema + std::to_string(index) : semantica_sistema;

			std::transform(nombre.begin(), nombre.end(), nombre.begin(), ::tolower);

			if (0 == semantica_sistema.compare("SemanticasVertex"))
			{
				semanticas_usuario_vertex.push_back(semantica_usuario);
				semantica_sistema_y_index = semantica_usuario;
			}

			if (0 == semantica_sistema.compare("SemanticasPixel"))
			{
				semanticas_usuario_pixel.push_back(semantica_usuario);
				semantica_sistema_y_index = semantica_usuario;
			}


			GeneradorShader::Publicador::FragmentoParametro* nuevo_fragmento = new GeneradorShader::Publicador::FragmentoParametro(referencia, tipo, nombre, semantica_usuario, semantica_sistema_y_index, index);

			mapa_semantica_fragmento[semantica_usuario] = nuevo_fragmento;

			index++;
		}
	}
}

//std::vector<std::string> MapaSemanticaVertexFragmento::cargarInput(std::string etiqueta_input)
GeneradorShader::Publicador::InputLayout* MapaSemanticaVertexFragmento::cargarInput(std::string etiqueta_input)
{
	std::vector<std::string> semanticas_input;

	std::ifstream in("input_layouts.json");

	std::ostringstream sstream;
	sstream << in.rdbuf();

	const std::string str(sstream.str());
	const char* json = str.c_str();

	rapidjson::Document document;
	document.Parse(json);

    Publicador::InputLayout * input = NULL;
    rapidjson::Value& semanticas = document["layouts"];
	for (rapidjson::Value::ValueIterator itr = semanticas.Begin(); itr != semanticas.End(); itr++)
	{
        std::string etiqueta = (*itr)["etiqueta"].GetString();

		if (0 != etiqueta.compare(etiqueta_input))
		{
			continue;
		}

        input = new Publicador::InputLayout(*itr);

        std::vector<Publicador::ElementoInput*> elementos = input->getElementos();
        for (std::vector<Publicador::ElementoInput*>::iterator it = elementos.begin(); it != elementos.end(); it++)
        {
            std::string semantica = (*it)->getSemantica();
            unsigned int index = (*it)->getIndex();
            std::string tipo = (*it)->getTipo();

            std::string nombre = semantica;
            std::transform(nombre.begin(), nombre.end(), nombre.begin(), ::tolower);

            std::unordered_map<std::string, GeneradorShader::Publicador::FragmentoParametro*>::iterator it_mapa = mapa_semantica_fragmento.find(semantica);
            if (mapa_semantica_fragmento.end() != it_mapa)
            {// si lo encuentro, lo elimino y dsp lo actualizo.
                delete it_mapa->second;
                mapa_semantica_fragmento.erase(it_mapa);
            }
            mapa_semantica_fragmento[semantica] = new GeneradorShader::Publicador::FragmentoParametro("in", tipo, nombre, semantica, semantica + std::to_string(index), index);

            semanticas_input.push_back(semantica);
        }
	}

    rapidjson::Value& semanticas_ordenadas = document["semanticas_ordenadas"];
    for (rapidjson::Value::ValueIterator itr = semanticas_ordenadas.Begin(); itr != semanticas_ordenadas.End(); itr++)
    {
        Publicador::VertexShader::semanticas_ordenadas.push_back((*itr).GetString());
    }

	return input;
}
// ========== GETTERS ========== //

std::vector<std::string> MapaSemanticaVertexFragmento::getSemanticasVertex()
{
	return semanticas_usuario_vertex;
}

std::vector<std::string> MapaSemanticaVertexFragmento::getSemanticasDePath(std::vector<std::string> paths_fragmentos_a_usar)
{
	std::vector<std::string> semanticas;
	for (std::vector<std::string>::iterator it = paths_fragmentos_a_usar.begin(); it != paths_fragmentos_a_usar.end(); it++)
	{
		std::experimental::filesystem::path path = *it;
		std::string filename = path.filename().string();
		filename.erase(filename.end() - 5, filename.end());
        semanticas.push_back(filename);
	}
	return semanticas;
}

std::vector<std::string> MapaSemanticaVertexFragmento::getSemanticasPixel()
{
	return semanticas_usuario_pixel;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

bool MapaSemanticaVertexFragmento::yaEstaCargado()
{
	return 0 != mapa_semantica_fragmento.size();
}

// ========== INTERNAL METHODS ========== //
