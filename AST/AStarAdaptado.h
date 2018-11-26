/// \file AStarAdaptado.h
/// \date 2017-06-13
/// \brief Algoritmo A* adaptado para la generación de shaders a partir de fragmentos. Solo sirve para generar AST.

#ifndef GENERADORSHADER_AST_ASTARADAPTADO_H_
#define GENERADORSHADER_AST_ASTARADAPTADO_H_

// stl
#include <unordered_map>
#include <vector>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Fragmento.h>

// AST
#include <AST/Nodo.h>

namespace GeneradorShader
{
namespace AST
{
/// \brief DESCRIPCION
class AStarAdaptado
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        AStarAdaptado();

		AStarAdaptado(std::vector<std::string> semanticas_de_entrada, std::vector<std::string> semanticas_de_salida);

        /// \brief Destructor
        virtual ~AStarAdaptado();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		void inicializar(std::vector<std::string> semanticas_de_entrada, std::vector<std::string> semanticas_de_salida);

		void armarAST(std::vector<std::string> semanticas_de_entrada, std::vector<GeneradorShader::Publicador::Fragmento*> fragmentos, std::vector<std::string> semanticas_de_salida);

		bool recorrerSemanticasAbiertas(GeneradorShader::Publicador::Fragmento* fragmento_analizado);

        // ========== GETTERS ========== //
        
		Nodo* getNodoRaiz();

        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //

		bool fragmentoContieneASemantica(GeneradorShader::Publicador::Fragmento* fragmento_analizado, std::string semantica_analizada);

		bool fragmentoUsadoAnteriormente(GeneradorShader::Publicador::Fragmento* fragmento_analizado);

		bool haySemanticasAbiertas();
        
    private:
        DISALLOW_COPY_AND_ASSIGN(AStarAdaptado);

        // ========== INTERNAL METHODS ========== //

		/// \brief chequea si quedaron semanticas sin definir luego de un ciclo. Para hacer esto, se fija si hay semanticas abiertas que aparecen antes y despues del ciclo.
		bool quedaronSemanticaSinDefinir(std::vector<std::string> semanticas_abiertas_iniciales);

		/// \brief limpia del vector 'fragmentos' los fragmentos que ya fueron usados (es decir, limpia los fragmentos que aparecen en 'fragmentos_usados').
		void limpiarFragmentosUsados(std::vector<GeneradorShader::Publicador::Fragmento*> & fragmentos);

		/// \brief elimina de "semanticas abiertas" las semanticas que ya fueron cerradas en ciclos previos (es decir, elimina las semantiacas que aparecen en "semantiacas_cerradas").
		void eliminarSemanticasAbiertasQueEstanCerradas();

		/// \brief elimina de "semanticas_abiertas" las semanticas que son de entrada.
		void eliminarSemanticasAbiertasQueSonDeEntrada();

		void actualizarSemanticasAbiertasYCerradas(GeneradorShader::Publicador::Fragmento* fragmento_a_agregar);

		void eliminarSemanticasAbiertas(std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_abiertas_a_borrar);

		void agregarSemanticasAbiertas(std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_abiertas_a_agregar);

		void agregarSemanticasCerradas(std::vector<GeneradorShader::Publicador::FragmentoParametro*> semanticas_cerradas_a_agregar);

		void relacionarNodosDelAST(GeneradorShader::Publicador::Fragmento* fragmento_a_agregar);

        // ========== ATTRIBUTES ========== //

		/// \brief semanticas de entrada (semanticas de atributos del vertex).
		std::vector<std::string> semanticas_entrada;

		/// \brief semanticas que faltan mapear.
		std::vector<std::string> semanticas_abiertas;

		/// \brief semanticas que ya estan mapeadas.
		std::vector<std::string> semanticas_cerradas;

		/// \brief vector auxiliar que contiene todos los fragmentos que ya fueron usados.
		std::vector<GeneradorShader::Publicador::Fragmento*> fragmentos_usados;

		/// \brief mapa de los nodos del AST.
		std::unordered_map<std::string, Nodo*> nodos;

		/// \brief nodo raiz del shader. Tiene como hijos a los nodos que representan a las salidas (efectos deseados) del shader.
		Nodo* nodo_raiz;
};
};
};

#endif // GENERADORSHADER_AST_ASTARADAPTADO_H_
