#pragma once

// stl
#include <experimental/filesystem>
#include <iostream>
#include <unordered_map>

// antlr4
#include <antlr4-runtime.h>

// parser
#include <Parser/HLSL_Lexer.h>
#include <Parser/HLSL_Parser.h>
#include <Parser/HLSL_ConstructorVisitador.h>
#include <Parser/MapaSemanticaVertexFragmento.h>

// publicador
#include <Publicador/Fragmento.h>

namespace GeneradorShader
{
	namespace Parser
	{
		// parsea el archivo ".hlsl" recibido. Devuelve un Fragmento que representa información del ".hlsl".
		inline Publicador::Fragmento* parsearHLSL(std::string path_hlsl)
		{
			std::ifstream stream;
			stream.open(path_hlsl);

			antlr4::ANTLRInputStream input(stream);
			GeneradorShader::Parser::HLSL_Lexer lexer(&input);

			antlr4::CommonTokenStream tokens(&lexer);
			GeneradorShader::Parser::HLSL_Parser parser(&tokens);

			antlr4::ParserRuleContext* ctx_main = parser.main();

			Publicador::Fragmento* nuevo_fragmento = new Publicador::Fragmento();
			GeneradorShader::Parser::HLSL_ConstructorVisitador visitador(nuevo_fragmento);
			visitador.visit(ctx_main);

			return nuevo_fragmento;
		}

		static GeneradorShader::Publicador::FragmentoParametro* getVertexComoParametro(std::string semantica_vertex)
		{
			GeneradorShader::Publicador::FragmentoParametro* parametro = MapaSemanticaVertexFragmento::mapa_semantica_fragmento[semantica_vertex];

			if (NULL == parametro)
			{
				std::cout << "La semantica \"" + semantica_vertex + "\" no esta definida en el archivo de semanticas (\"semanticas.json\")." << std::endl;
				throw - 1;
			}

			return parametro;
		}

		static void cargarSemanticasUsuarioSistema()
		{
			MapaSemanticaVertexFragmento::cargarSemanticasUsuarioSistema();
		}

		static std::vector<std::string> getSemanticasVertex()
		{
			MapaSemanticaVertexFragmento::getSemanticasVertex();
		}

        inline std::vector<std::string> leerFragmentosEnCarpeta(std::string dir_carpeta)
        {
            std::vector<std::string> fragmentos;
            for (auto & dir_it : std::experimental::filesystem::directory_iterator(dir_carpeta))
            { 
                fragmentos.push_back(dir_it.path().string());
            }
            return fragmentos;
        }
};
};