/// \file InputLayout.h
/// \date 2017-11-17
/// \brief Representación del input del pipeline.

#ifndef GENERADORSHADER_PUBLICADOR_INPUTLAYOUT_H_
#define GENERADORSHADER_PUBLICADOR_INPUTLAYOUT_H_

// stl
#include <vector>

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// json
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>

// publicador
#include <Publicador/ElementoInput.h>

namespace GeneradorShader
{
namespace Publicador
{
/// \brief DESCRIPCION
class InputLayout
{
    public:
        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        InputLayout();
        InputLayout(rapidjson::Value & input);

        /// \brief Destructor
        virtual ~InputLayout();

        // ========== OPERATORS ========== //
        
        // ========== METHODS ========== //
        
        // ========== GETTERS ========== //

        std::vector<ElementoInput*> getElementos();
        
        std::vector<std::string> getSemanticasElementos();

        std::string getEtiqueta();
        
        std::string getSemanticaSalidaVertex();
        
        // ========== SETTERS ========== //
        
        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(InputLayout);

        // ========== INTERNAL METHODS ========== //

        // ========== ATTRIBUTES ========== //       
        std::vector<ElementoInput*> elementos;

        std::string etiqueta;
        std::string semantica_salida_vertex;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_INPUTLAYOUT_H_
