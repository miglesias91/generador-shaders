#include <AST/AStarAdaptado.h>

//stl
#include <algorithm>

// ast
#include <AST/NodoFragmento.h>
#include <AST/NodoPrincipal.h>
#include <AST/NodoSemanticaSalida.h>

// parser
#include <Parser/ParserFunciones.h>

using namespace GeneradorShader::AST;

// ========== LIFECYCLE ========== //

AStarAdaptado::AStarAdaptado() : nodo_raiz(NULL)
{
}

AStarAdaptado::AStarAdaptado(std::vector<std::string> semanticas_de_entrada, std::vector<std::string> semanticas_de_salida)
{
	this->inicializar(semanticas_de_entrada, semanticas_de_salida);
}

AStarAdaptado::~AStarAdaptado()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void AStarAdaptado::inicializar(std::vector<std::string> semanticas_de_entrada, std::vector<std::string> semanticas_de_salida)
{
	this->semanticas_entrada = semanticas_de_entrada;

	GeneradorShader::Publicador::FragmentoDefinicion* definicion_main = new GeneradorShader::Publicador::FragmentoDefinicion();
	GeneradorShader::Publicador::Fragmento* fragmento_main = new GeneradorShader::Publicador::Fragmento(definicion_main);

	this->nodo_raiz = new NodoPrincipal(fragmento_main);

	for (std::vector<std::string>::iterator it = semanticas_de_salida.begin(); it != semanticas_de_salida.end(); it++)
	{
		std::string semantica = *it;
		this->semanticas_abiertas.push_back(semantica);

		GeneradorShader::Publicador::FragmentoDefinicion* definicion_salida = new GeneradorShader::Publicador::FragmentoDefinicion();
		GeneradorShader::Publicador::Fragmento* fragmento_salida = new GeneradorShader::Publicador::Fragmento(definicion_salida);
		Nodo* nodo_semantica_de_salida = new NodoSemanticaSalida(fragmento_salida);
		this->nodos[semantica] = nodo_semantica_de_salida;
		this->nodo_raiz->agregarHijo(nodo_semantica_de_salida);
	}
}

void AStarAdaptado::armarAST(std::vector<std::string> semanticas_de_entrada, std::vector<GeneradorShader::Publicador::Fragmento*> fragmentos, std::vector<std::string> semanticas_de_salida)
{
	this->inicializar(semanticas_de_entrada, semanticas_de_salida);

	while (this->haySemanticasAbiertas())
	{
		bool ciclo_completo = true;
		this->limpiarFragmentosUsados(fragmentos);
		std::vector<std::string> semanticas_abiertas_iniciales = this->semanticas_abiertas;
		for (std::vector<GeneradorShader::Publicador::Fragmento*>::iterator frag_it = fragmentos.begin(); frag_it != fragmentos.end(); frag_it++)
		{
			if (true == this->recorrerSemanticasAbiertas((*frag_it)))
			{
				// si devuelve "true", entonces quiere decir que se agrego un fragmento. debo reiniciar la iteracion.
				ciclo_completo = false;
				break;
			}
		}

		if (ciclo_completo && this->quedaronSemanticaSinDefinir(semanticas_abiertas_iniciales))
		{
			throw - 1; // crear una excepcion q describa este error. (error tipo 3).
		}
	}
}

bool AStarAdaptado::recorrerSemanticasAbiertas(GeneradorShader::Publicador::Fragmento* fragmento_analizado)
{
	for (std::vector<std::string>::iterator semantica_it = this->semanticas_abiertas.begin(); semantica_it != this->semanticas_abiertas.end(); semantica_it++)
	{
		if (false == this->fragmentoUsadoAnteriormente(fragmento_analizado) && this->fragmentoContieneASemantica(fragmento_analizado, *semantica_it))
		{
			// agrego el fragmento.
			this->actualizarSemanticasAbiertasYCerradas(fragmento_analizado);

			this->relacionarNodosDelAST(fragmento_analizado);

			// lo agrego a la lista de ya usados.
			this->fragmentos_usados.push_back(fragmento_analizado);

			// devuelvo "true" para indicar que se agrego un fragmento y q se debe reiniciar la iteracion.
			return true;
		}
	}

	// si no se agrego ningun fragmento devuelvo "false" para que se analize el proximo fragmento.
	return false;
}

// ========== GETTERS ========== //

Nodo* AStarAdaptado::getNodoRaiz()
{
	return this->nodo_raiz;
}

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

bool AStarAdaptado::fragmentoContieneASemantica(GeneradorShader::Publicador::Fragmento* fragmento_analizado, std::string semantica_analizada)
{
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_out = fragmento_analizado->getDefinicion()->getSemanticasOut();
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_inout = fragmento_analizado->getDefinicion()->getSemanticasInout();

	semanticas_out.insert(semanticas_out.end(), semanticas_inout.begin(), semanticas_inout.end());

	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator semantica_it = semanticas_out.begin(); semantica_it != semanticas_out.end(); semantica_it++)
	{
		std::string nombre_semantica_it = (*semantica_it)->getSemanticaUsuario();
		if (0 == semantica_analizada.compare(nombre_semantica_it))
		{// si matcheo, entonces el fragmento si contiene a la semantica analizada.
			return true;
		}
	}

	// si matcheo ninguno, entonces el fragmento no contiene a la semantica analizada.
	return false;
}

bool AStarAdaptado::fragmentoUsadoAnteriormente(GeneradorShader::Publicador::Fragmento* fragmento_analizado)
{
	std::vector<GeneradorShader::Publicador::Fragmento*>::iterator fragmento_hallado = std::find(this->fragmentos_usados.begin(), this->fragmentos_usados.end(), fragmento_analizado);

	if (this->fragmentos_usados.end() == fragmento_hallado)
	{// si entra al "if", entonces no fue usado anteriormente.
		return false;
	}
	// si no entró al "if", entonces quiere decir que ya fue usado anteriormente. devuelve true.
	return true;
}

bool AStarAdaptado::haySemanticasAbiertas()
{
	if (0 == this->semanticas_abiertas.size())
	{
		return false;
	}
	return true;
}

// ========== INTERNAL METHODS ========== //

bool AStarAdaptado::quedaronSemanticaSinDefinir(std::vector<std::string> semanticas_abiertas_iniciales)
{
	for (std::vector<std::string>::iterator sem_a_buscar_it = semanticas_abiertas_iniciales.begin(); sem_a_buscar_it != semanticas_abiertas_iniciales.end(); sem_a_buscar_it++)
	{
		std::string semantica_a_buscar = (*sem_a_buscar_it);

		std::vector<std::string>::iterator it_a_borrar = std::find(this->semanticas_abiertas.begin(), this->semanticas_abiertas.end(), semantica_a_buscar);

		if (this->semanticas_abiertas.end() != it_a_borrar)
		{// si encontró "semantica_a_buscar" dentro de las semanticas abiertas, entonces quiere decir que hubieron semanticas sin definir. devuelvo 'true'.
			return true;
		}
	}
	// si llego hasta aca, entonces no quedaron semanticas sin definir. devuelvo false.
	return false;
}

void AStarAdaptado::actualizarSemanticasAbiertasYCerradas(GeneradorShader::Publicador::Fragmento* fragmento_a_agregar)
{
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_inout = fragmento_a_agregar->getDefinicion()->getSemanticasInout();
	
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_abiertas_a_borrar = fragmento_a_agregar->getDefinicion()->getSemanticasOut();
	
	semanticas_abiertas_a_borrar.insert(semanticas_abiertas_a_borrar.end(), semanticas_inout.begin(), semanticas_inout.end());
	this->eliminarSemanticasAbiertas(semanticas_abiertas_a_borrar);

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_abiertas_a_agregar = fragmento_a_agregar->getDefinicion()->getSemanticasIn();

	semanticas_abiertas_a_agregar.insert(semanticas_abiertas_a_agregar.end(), semanticas_inout.begin(), semanticas_inout.end());
	this->agregarSemanticasAbiertas(semanticas_abiertas_a_agregar);

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_cerradas_a_agregar = fragmento_a_agregar->getDefinicion()->getSemanticasOut();
	this->agregarSemanticasCerradas(semanticas_cerradas_a_agregar);

	this->eliminarSemanticasAbiertasQueSonDeEntrada();

	this->eliminarSemanticasAbiertasQueEstanCerradas();
}

void AStarAdaptado::eliminarSemanticasAbiertasQueEstanCerradas()
{
	for (std::vector<std::string>::iterator sem_a_borrar_it = this->semanticas_cerradas.begin(); sem_a_borrar_it != semanticas_cerradas.end(); sem_a_borrar_it++)
	{
		std::string semantica_a_borrar = (*sem_a_borrar_it);

		std::vector<std::string>::iterator it_a_borrar = std::find(this->semanticas_abiertas.begin(), this->semanticas_abiertas.end(), semantica_a_borrar);

		if (this->semanticas_abiertas.end() != it_a_borrar)
		{// si encontró "semantica_a_borrar" dentro de las semanticas abiertas, entonces la elimino.
			this->semanticas_abiertas.erase(it_a_borrar);
		}
	}
}

void AStarAdaptado::eliminarSemanticasAbiertasQueSonDeEntrada()
{
	for (std::vector<std::string>::iterator sem_entrada_a_borrar_it = this->semanticas_entrada.begin(); sem_entrada_a_borrar_it != semanticas_entrada.end(); sem_entrada_a_borrar_it++)
	{
		std::string semantica_entrada_a_borrar = (*sem_entrada_a_borrar_it);

		std::vector<std::string>::iterator it_entrada_a_borrar = std::find(this->semanticas_abiertas.begin(), this->semanticas_abiertas.end(), semantica_entrada_a_borrar);

		if (this->semanticas_abiertas.end() != it_entrada_a_borrar)
		{// si encontró "semantica_a_borrar" dentro de las semanticas abiertas, entonces la agrego como parametro de entrada del shader, y la elimino de las semanticas de entradas disponibles.
			if ( NULL == this->nodo_raiz->getFragmento()->getDefinicion()->hallarSemanticaIn(*it_entrada_a_borrar))
			{ 
				GeneradorShader::Publicador::FragmentoParametro* parametro_main = GeneradorShader::Parser::getVertexComoParametro(*it_entrada_a_borrar); // recupero el parametro de la semantica.

				// seteo la referencia como "in" porque es la que necesito para el shader. La referencia que me devuelve "getVertexComoParametro" hace referencia a la semantica del sistema.
				// si "getVertexComoParametro" me trae una referencia "inout", entonces quiero decir que puede ser tanto "in" como "out". Entonces me quedo con el "in": se lo seteo.
				parametro_main->setReferencia("in");
				this->nodo_raiz->getFragmento()->agregarParametro(parametro_main);
			}

			this->semanticas_abiertas.erase(it_entrada_a_borrar);
		}
	}
}

void AStarAdaptado::eliminarSemanticasAbiertas(std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_abiertas_a_borrar)
{
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator sem_a_borrar_it = semanticas_abiertas_a_borrar.begin(); sem_a_borrar_it != semanticas_abiertas_a_borrar.end(); sem_a_borrar_it++)
	{
		std::string semantica_a_borrar = (*sem_a_borrar_it)->getSemanticaUsuario();

		std::vector<std::string>::iterator it_a_borrar = std::find(this->semanticas_abiertas.begin(), this->semanticas_abiertas.end(), semantica_a_borrar);

		if ( this->semanticas_abiertas.end() != it_a_borrar )
		{// si encontró "semantica_a_borrar" dentro de las semanticas abiertas, entonces la elimino.
			this->semanticas_abiertas.erase(it_a_borrar);
		}
	}
}

void AStarAdaptado::agregarSemanticasAbiertas(std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_abiertas_a_agregar)
{
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator sem_a_agregar_it = semanticas_abiertas_a_agregar.begin(); sem_a_agregar_it != semanticas_abiertas_a_agregar.end(); sem_a_agregar_it++)
	{
		std::string semantica_a_agregar = (*sem_a_agregar_it)->getSemanticaUsuario();

		this->semanticas_abiertas.push_back(semantica_a_agregar);
	}
}

void AStarAdaptado::agregarSemanticasCerradas(std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_cerradas_a_agregar)
{
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator sem_a_agregar_it = semanticas_cerradas_a_agregar.begin(); sem_a_agregar_it != semanticas_cerradas_a_agregar.end(); sem_a_agregar_it++)
	{
		std::string semantica_a_agregar = (*sem_a_agregar_it)->getSemanticaUsuario();

		this->semanticas_cerradas.push_back(semantica_a_agregar);
	}
}

void AStarAdaptado::limpiarFragmentosUsados(std::vector<GeneradorShader::Publicador::Fragmento*> & fragmentos)
{
	for (std::vector<GeneradorShader::Publicador::Fragmento*>::iterator frag_a_borrar_it = fragmentos_usados.begin(); frag_a_borrar_it != fragmentos_usados.end(); frag_a_borrar_it++)
	{
		GeneradorShader::Publicador::Fragmento* fragmento_a_borrar = (*frag_a_borrar_it);

		std::vector<GeneradorShader::Publicador::Fragmento*>::iterator it_a_borrar = std::find(fragmentos.begin(), fragmentos.end(), fragmento_a_borrar);

		if (fragmentos.end() != it_a_borrar)
		{// si encontró "semantica_a_borrar" dentro de las semanticas abiertas, entonces la elimino.
			fragmentos.erase(it_a_borrar);
		}
	}
}

void AStarAdaptado::relacionarNodosDelAST(GeneradorShader::Publicador::Fragmento* fragmento_a_agregar)
{
	Nodo* nodo_nuevo = new NodoFragmento(fragmento_a_agregar);

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_inout = fragmento_a_agregar->getDefinicion()->getSemanticasInout();
	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_out = fragmento_a_agregar->getDefinicion()->getSemanticasOut();

	semanticas_out.insert(semanticas_out.end(), semanticas_inout.begin(), semanticas_inout.end());

	// relaciono el nodo nuevo con las semanticas que me ofrece (sus semanticas_out + semanticas_inout).
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator semanticas_out_it = semanticas_out.begin(); semanticas_out_it != semanticas_out.end(); semanticas_out_it++)
	{
		std::string semantica = (*semanticas_out_it)->getSemanticaUsuario();
		Nodo* nodo_padre = this->nodos[semantica];

		// si no existe, lo incializo y lo agrego
		if (NULL == nodo_padre)
		{
			nodo_padre = new NodoFragmento();
			this->nodos[semantica] = nodo_padre;
		}

		if (false == nodo_padre->contieneHijo(nodo_nuevo))
		{ // si ya lo tiene no lo agrego. sino, estaria repitiendo codigo.
			nodo_padre->agregarHijo(nodo_nuevo);
		}
	}

	std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_in = fragmento_a_agregar->getDefinicion()->getSemanticasIn();

	semanticas_in.insert(semanticas_in.end(), semanticas_inout.begin(), semanticas_inout.end());

	// agrego al nodo nuevo para pedir q relacionen sus semanticas_in + semanticas_inout.
	for (std::vector<GeneradorShader::Publicador::FragmentoParametro*>::iterator semanticas_in_it = semanticas_in.begin(); semanticas_in_it != semanticas_in.end(); semanticas_in_it++)
	{
		std::string semantica = (*semanticas_in_it)->getSemanticaUsuario();
		this->nodos[semantica] = nodo_nuevo;
	}
}