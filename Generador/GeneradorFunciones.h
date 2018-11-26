#pragma once

// generador
#include <Generador/Generador.h>

// parser
#include <Parser/ParserFunciones.h>
#include <Parser/MapaSemanticaVertexFragmento.h>

// publicador
#include <Publicador/Fragmento.h>
#include <Publicador/Pipeline.h>

namespace GeneradorShader
{

    // parsea el archivo ".hlsl" recibido. Devuelve un Fragmento que representa información del ".hlsl".
    inline Publicador::Shader* generar(std::string nombre_efecto, std::vector<std::string> entrada_semanticas_vertex, std::vector<std::string> salida_semanticas_efectos_deseados, std::vector<std::string> path_fragmentos)
    {
        //return Generador::generar(entrada_semanticas_vertex, salida_semanticas_efectos_deseados, path_fragmentos);
        return NULL;
    };

    inline std::string armarNombre(std::vector<std::string> salida_semanticas_efectos_deseados)
    {
        std::string nombre = salida_semanticas_efectos_deseados[0];
        for (std::vector<std::string>::iterator it_semanticas = salida_semanticas_efectos_deseados.begin() + 1; it_semanticas != salida_semanticas_efectos_deseados.end(); it_semanticas++)
        {
            nombre += "_" + *it_semanticas;
        }
        return nombre;
    }

    // parsea el archivo ".hlsl" recibido. Devuelve un Fragmento que representa información del ".hlsl".
    inline Publicador::Pipeline* generarPipeline(std::string nombre_efecto, std::string etiqueta_input_vertex, std::vector<std::string> salida_pixelshader, std::string dir_carpeta_fragmentos_vertexshader, std::string dir_carpeta_fragmentos_pixelshader)
    {
        std::vector<std::string> path_fragmentos_vertex_shader = Parser::leerFragmentosEnCarpeta(dir_carpeta_fragmentos_vertexshader);
        std::vector<std::string> path_fragmentos_pixel_shader = Parser::leerFragmentosEnCarpeta(dir_carpeta_fragmentos_pixelshader);

		Parser::MapaSemanticaVertexFragmento::cargarSemanticasUsuarioSistema();

		std::vector<std::string> entrada_semanticas_pixel = Parser::MapaSemanticaVertexFragmento::getSemanticasDePath(path_fragmentos_vertex_shader);

		Publicador::Shader* pixel_shader = new Publicador::PixelShader("ps_" + nombre_efecto);
		Generador::generar(entrada_semanticas_pixel, salida_pixelshader, path_fragmentos_pixel_shader, pixel_shader);

		std::vector<Publicador::FragmentoParametro*> parametros_entrada_pixelshader = pixel_shader->getSemanticasDeEntrada();

		std::vector<std::string> salida_vertexshader;
		for (std::vector<Publicador::FragmentoParametro*>::iterator it = parametros_entrada_pixelshader.begin(); it != parametros_entrada_pixelshader.end(); it++)
		{
            salida_vertexshader.push_back((*it)->getSemanticaUsuario());
		}

		Publicador::Shader* vertex_shader = new Publicador::VertexShader("vs_" + nombre_efecto);
		vertex_shader->getFragmento()->getDefinicion()->setEtiquetaInput(etiqueta_input_vertex);

        Publicador::InputLayout * input = Parser::MapaSemanticaVertexFragmento::cargarInput(etiqueta_input_vertex);
        std::vector<std::string> entrada_semanticas_vertex = input->getSemanticasElementos();

        // agrego los atributos del vertex.
        salida_vertexshader.push_back(input->getSemanticaSalidaVertex());

		Generador::generar(entrada_semanticas_vertex, salida_vertexshader, path_fragmentos_vertex_shader, vertex_shader);

        // completo los parametros 'in' del vertex, para que en el input queden todas las variables, inclusive las que no se usan (como por ejemplo COLOR).
        for (std::vector<std::string>::iterator it = entrada_semanticas_vertex.begin(); it != entrada_semanticas_vertex.end(); it++)
        {
            if (NULL == vertex_shader->getFragmento()->getDefinicion()->hallarSemanticaIn(*it))
            {
                GeneradorShader::Publicador::FragmentoParametro* parametro_main = Parser::MapaSemanticaVertexFragmento::getVertexComoParametro(*it); // recupero el parametro de la semantica.

                parametro_main->setReferencia("in");
                vertex_shader->getFragmento()->agregarParametro(parametro_main);
            }
        }

		return new Publicador::Pipeline(nombre_efecto, vertex_shader, pixel_shader);
	};
};

