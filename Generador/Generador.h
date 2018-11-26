/// \file Generador.h
/// \date 2017-06-13
/// \brief Encargada de crear un shader a partir de los fragmentos disponibles. 

#ifndef GENERADORSHADER_GENERADOR_GENERADOR_H_
#define GENERADORSHADER_GENERADOR_GENERADOR_H_

// stl
#include <string>
#include <vector>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Shader.h>

namespace GeneradorShader
{
/// \brief DESCRIPCION
class Generador
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        Generador();

        /// \brief Destructor
        virtual ~Generador();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		/// \brief genera un nuevo shader que simule el 'efectos deseado'. Para crear el shader, busca en los 'atributos de entrada' en la lista de 'fragmentos' y se queda con los fragmentos
		/// que sirvan para calcular los 'atributos de entrada'. Luego, junta el codigo de los fragmentos utilizados, generando un único shader final. Serializa el shader final.
		/// \param[in] entrada_semanticas_vertex lista de semanticas de los atributos del vertex proporcionado para simular los efectos deseados.
		/// \param[in] salida_semanticas_efectos_deseados lista de semanticas de los efectos deseados.
		/// \param[in] path_fragmentos lista de paths de los fragmentos donde se buscaran los atributos para generar el shader.
		//static Publicador::Shader* generar(std::vector<std::string> entrada_semanticas_vertex, std::vector<std::string> salida_semanticas_efectos_deseados, std::vector<std::string> path_fragmentos);

        static void generar(std::vector<std::string> entrada_semanticas_vertex, std::vector<std::string> salida_semanticas_efectos_deseados, std::vector<std::string> path_fragmentos, Publicador::Shader* shader);

		/// \brief genera un nuevo vertex shader que simule el 'movimiento deseado'. Para crear el shader, busca en la lista de 'fragmentos' y se queda con los
		/// que sirvan para calcular las semanticas de los 'movimientos deseados'. Luego, junta el codigo de los fragmentos utilizados, generando un único vertex shader final. Se lo asigna al pipeline.
		/// \param[in] entrada_semanticas_input lista de semanticas que brindan info sobre los atributos del vertice, q vienen en el vertexbuffer.
		/// \param[in] salida_semanticas_movimientos_deseados lista de semanticas de los efectos deseados.
		/// \param[in] paths_fragmentos_vertexshader lista de paths de los fragmentos donde se buscaran los atributos para generar el shader.
		//static Publicador::Shader* generarVertexShader(std::vector<std::string> entrada_semanticas_input, std::vector<std::string> salida_semanticas_movimientos_deseados, std::vector<std::string> paths_fragmentos_vertexshader);

		/// \brief genera un nuevo pixel shader que simule el 'efecto deseado'. Para crear el shader, busca en la lista de 'fragmentos' y se queda con los
		/// que sirvan para calcular las semanticas de los 'efectos deseados'. Luego, junta el codigo de los fragmentos utilizados, generando un único pixel shader final. Se lo asigna al pipeline.
		/// \param[in] entrada_semanticas_input lista de semanticas que brindan info sobre los atributos del vertice, q vienen en el vertexbuffer.
		/// \param[in] salida_semanticas_movimientos_deseados lista de semanticas de los efectos deseados.
		/// \param[in] paths_fragmentos_vertexshader lista de paths de los fragmentos donde se buscaran los atributos para generar el shader.
		//static Publicador::Shader* generarPixelShader(std::vector<std::string> entrada_semanticas_vertex, std::vector<std::string> salida_semanticas_efectos_deseados, std::vector<std::string> path_fragmentos_pixelshader);

		static std::vector<Publicador::Fragmento*> parsearFragmentos(std::vector<std::string> path_fragmentos);

        // ========== GETTERS ========== //
        
        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(Generador);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //       
};
};

#endif // GENERADORSHADER_GENERADOR_GENERADOR_H_
