#include <Generador/Generador.h>

// parser
#include <Parser/ParserFunciones.h>

// AST
#include <AST/ASTFunciones.h>

// Publicador
#include <Publicador/PublicadorFunciones.h>

using namespace GeneradorShader;

// ========== LIFECYCLE ========== //

Generador::Generador()
{
}

Generador::~Generador()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void Generador::generar(std::vector<std::string> entrada_semanticas_vertex, std::vector<std::string> salida_semanticas_efectos_deseados, std::vector<std::string> path_fragmentos, Publicador::Shader* shader)
{
	std::vector<Publicador::Fragmento*> fragmentos = parsearFragmentos(path_fragmentos);

	AST::Nodo* raiz = AST::generarAST(entrada_semanticas_vertex, fragmentos, salida_semanticas_efectos_deseados);

	Publicador::generarShader(raiz, shader);
}

std::vector<Publicador::Fragmento*> Generador::parsearFragmentos(std::vector<std::string> path_fragmentos)
{
	std::vector<Publicador::Fragmento*> fragmentos;
	for (std::vector<std::string>::iterator it = path_fragmentos.begin(); it != path_fragmentos.end(); it++)
	{
		Publicador::Fragmento* fragmento_parseado = Parser::parsearHLSL(*it);
		fragmentos.push_back(fragmento_parseado);
	}
	return fragmentos;
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //
