/// \file MapaSemanticaVertexFragmento.h
/// \date 2017-06-22
/// \brief Clase que contiene al mapa que relaciona las semanticas del usuario con las semanticas del sistema.

#ifndef GENERADORSHADER_PARSER_MAPASEMANTICAVERTEXFRAGMENTO_H_
#define GENERADORSHADER_PARSER_MAPASEMANTICAVERTEXFRAGMENTO_H_

// stl
#include <unordered_map>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Fragmento.h>
#include <Publicador/InputLayout.h>

namespace GeneradorShader
{
namespace Parser
{
/// \brief DESCRIPCION
class MapaSemanticaVertexFragmento
{
    public:

		static std::unordered_map<std::string, GeneradorShader::Publicador::FragmentoParametro*> mapa_semantica_fragmento;

        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        MapaSemanticaVertexFragmento();

        /// \brief Destructor
        virtual ~MapaSemanticaVertexFragmento();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
		static void cargarSemanticasUsuarioSistema();
		
		//static std::vector<std::string> cargarInput(std::string etiqueta_input);
        static Publicador::InputLayout* cargarInput(std::string etiqueta_input);

        // ========== GETTERS ========== //
        
		static GeneradorShader::Publicador::FragmentoParametro* getVertexComoParametro(std::string semantica_vertex);

		static std::vector<std::string> getSemanticasVertex();

		static std::vector<std::string> getSemanticasDePath(std::vector<std::string> fragmentos_a_usar);

		static std::vector<std::string> getSemanticasPixel();


        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
		static bool yaEstaCargado();

    private:
        DISALLOW_COPY_AND_ASSIGN(MapaSemanticaVertexFragmento);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //    

		static std::vector<std::string> semanticas_usuario_vertex;
		static std::vector<std::string> semanticas_usuario_pixel;
};
};
};

#endif // GENERADORSHADER_PARSER_MAPASEMANTICAVERTEXFRAGMENTO_H_
