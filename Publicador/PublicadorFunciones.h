#pragma once

// stl
#include <fstream>

// directx
#include <D3DX11async.h>
#include <D3DCompiler.h>

// rapidjson
#include <rapidjson/document.h>
#include <rapidjson/ostreamwrapper.h>
#include <rapidjson/prettywriter.h>

// AST
#include <AST/VisitadorAST.h>

// publicador
#include <Publicador/EscritorHLSL.h>
#include <Publicador/Shader.h>
#include <Publicador/Pipeline.h>

namespace GeneradorShader
{
namespace Publicador
{
	/// \brief Recorre el AST desde su nodo_raiz. En cada nodo completa una parte del shader. Luego de completado el shader, lo devuelve.
	inline void generarShader(AST::Nodo* nodo_raiz, Publicador::Shader* shader)
	{
		GeneradorShader::AST::VisitadorAST visitador(shader);
		visitador.visitar(nodo_raiz);
	}

	inline std::string escribirShaderHLSL(Shader* shader, std::string path_output)
	{
		std::ofstream salida;
		salida.open(path_output);

		// std::string shader_escrito = EscritorHLSL::escribirShaderHLSLComoSecuenciaDeFragmentos(shader);

		std::string shader_escrito = EscritorHLSL::escribirShaderHLSLOrdenadoPorSecciones(shader);

		salida << shader_escrito;

		salida.close();

		return shader_escrito;
	}

	inline void escribirPipelineHLSL(Pipeline* pipeline_generado, std::string path_output_vertex_shader, std::string path_output_pixel_shader)
	{
		
		std::ofstream salida;

		// escribo vertexshader
		salida.open(path_output_vertex_shader);

		std::string shader_escrito = EscritorHLSL::escribirShaderHLSLOrdenadoPorSecciones(pipeline_generado->getVertexShader());

		salida << shader_escrito;

		salida.close();

		// escribo pixelshader
		salida.open(path_output_pixel_shader);

		shader_escrito = EscritorHLSL::escribirShaderHLSLOrdenadoPorSecciones(pipeline_generado->getPixelShader());

		salida << shader_escrito;

		salida.close();
	}

	inline void serializarJSON(Pipeline* pipeline_generado, std::string path_output_json)
	{
		rapidjson::Document documento;
		rapidjson::Value contenido = pipeline_generado->json(&documento);

		std::ofstream ofs(path_output_json);
		rapidjson::OStreamWrapper osw(ofs);

		rapidjson::PrettyWriter<rapidjson::OStreamWrapper> writer(osw);
		contenido.Accept(writer);

		writer.Flush();
	}

    inline void compilarShaders(Pipeline* pipeline_generado)
    {
        Shader* vs = pipeline_generado->getVertexShader();
        std::string path_vs_compilado = vs->getNombreArchivo() + "o";

        ID3D10Blob* blob = NULL;
        ID3D10Blob* errors_blob = NULL;

        HRESULT resultado = D3DX11CompileFromFileA(
            vs->getNombreArchivo().c_str(),
            NULL,
            NULL,
            vs->getNombre().c_str(),
            "vs_5_0",
            D3DCOMPILE_ENABLE_STRICTNESS | D3DCOMPILE_DEBUG,
            0,
            NULL,
            &blob,
            &errors_blob,
            NULL
        );

        if (FAILED(resultado))
        {
            if (NULL != errors_blob)
            {
                OutputDebugStringA((char*)errors_blob->GetBufferPointer());
            }
        }
        if (NULL != errors_blob)
        {
            errors_blob->Release();
        }

        Shader* ps = pipeline_generado->getPixelShader();
        std::string path_ps_compilado = ps->getNombreArchivo() + "o";

        blob = NULL;
        errors_blob = NULL;

        resultado = D3DX11CompileFromFileA(
            ps->getNombreArchivo().c_str(),
            NULL,
            NULL,
            ps->getNombre().c_str(),
            "ps_5_0",
            D3DCOMPILE_ENABLE_STRICTNESS | D3DCOMPILE_DEBUG,
            0,
            NULL,
            &blob,
            &errors_blob,
            NULL
        );

        if (FAILED(resultado))
        {
            if (NULL != errors_blob)
            {
                OutputDebugStringA((char*)errors_blob->GetBufferPointer());
            }
        }
        if (NULL != errors_blob)
        {
            errors_blob->Release();
        }
    }

};
};