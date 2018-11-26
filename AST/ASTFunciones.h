#pragma once

// AST
#include <AST/AStarAdaptado.h>
#include <AST/Nodo.h>

namespace GeneradorShader
{
	namespace AST
	{

		// parsea el archivo ".hlsl" recibido. Devuelve un Fragmento que representa información del ".hlsl".
		inline static Nodo* generarAST(std::vector<std::string> entrada_semanticas_vertex, std::vector<Publicador::Fragmento*> fragmentos, std::vector<std::string> efectos_deseados)
		{
			AStarAdaptado a_star;

			a_star.armarAST(entrada_semanticas_vertex, fragmentos, efectos_deseados);

			return a_star.getNodoRaiz();
		}

		inline bool ordernarSegunCantidadDeHijosMayorAMenor(Nodo* a, Nodo* b)
		{ 
			return (a->getHijos().size() > b->getHijos().size());
		}

        inline bool ordernarSegunCantidadDeHijosMenorAMayor(Nodo* a, Nodo* b)
        {
            return (a->getHijos().size() < b->getHijos().size());
        }

        inline bool ordernarSegunCantidadDeNietosMayorAMenor(Nodo* a, Nodo* b)
        {
            return (a->getNietos().size() > b->getNietos().size());
        }
        
	};
};
