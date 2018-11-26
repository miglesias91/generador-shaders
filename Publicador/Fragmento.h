/// \file Fragmento.h
/// \date 2017-06-06
/// \brief Representa a un fragmento (fragmento = shader ".hlsl"). 

#ifndef GENERADORSHADER_PUBLICADOR_FRAGMENTO_H_
#define GENERADORSHADER_PUBLICADOR_FRAGMENTO_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// fragmento
#include <Publicador/FragmentoDefinicion.h>
#include <Publicador/CBufferShader.h>
#include <Publicador/StructShader.h>
#include <Publicador/VariableShader.h>

namespace GeneradorShader
{
namespace Publicador
{

/// \brief DESCRIPCION
class Fragmento
{
    public:

		static std::string referencia_in;
		static std::string referencia_out;
		static std::string referencia_inout;

        // ========== LIFECYCLE ========== //

        /// \brief Constructor
        Fragmento(FragmentoDefinicion* definicion);

		Fragmento();

        /// \brief Destructor
        virtual ~Fragmento();

        // ========== OPERADORES ========== //
        
        // ========== MÉTODOS ========== //
        
		void agregarParametro(FragmentoParametro* nuevo_parametro);

		void agregarCBuffer(CBufferShader* nuevo_cbuffer);

		void agregarStruct(StructShader* nuevo_struct);

		void agregarVariableDeclarada(VariableShader* nueva_variable_declarada);
		
        void agregarVariableTextura2D(VariableShader* nueva_variable_textura_2d);

        void agregarVariableTextura2DArray(VariableShader* nueva_variable_textura_2d_array);

        void agregarVariableTextura3D(VariableShader* nueva_variable_textura_3d);

		void agregarVariableSampler(VariableShader* nueva_variable_sampler);

		void transformarVariablesDeclaradasACBuffer();

		// ========== GETTERS ========== //

		FragmentoDefinicion* getDefinicion();

		std::string getPath();
		std::string getCodigoCompleto();

		std::string getTipoRetorno();
		std::string getSemanticaTipoRetorno();
		std::string getNombreFuncion();
		std::string getBloqueDeCodigo();
		std::string getDefinicionDeFuncion();

		std::vector<CBufferShader*> getCBuffers();
		std::vector<StructShader*> getStructs();
		std::vector<VariableShader*> getVariablesDeclaradas();
        std::vector<VariableShader*> getVariablesTexturas2D();
        std::vector<VariableShader*> getVariablesTexturas2DArray();
        std::vector<VariableShader*> getVariablesTexturas3D();
		std::vector<VariableShader*> getVariablesSamplers();

        // ========== SETTERS ========== //
        
		void setDefinicion(FragmentoDefinicion* definicion);

		void setPath(std::string path);
		void setCodigoCompleto(std::string codigo_completo);

		void setTipoRetorno(std::string tipo_retorno);
		void setSemanticaTipoRetorno(std::string tipo_retorno);
		void setNombreFuncion(std::string nombre_funcion);
		void setBloqueDeCodigo(std::string bloque_de_codigo);
		void setDefinicionDeFuncion(std::string definicion_funcion);

        // ========== INQUIRY ========== //
        
    private:
        DISALLOW_COPY_AND_ASSIGN(Fragmento);

        // ========== MÉTODOS INTERNOS ========== //

		bool existeVariableConMismoNombre(IDeclaracion* nueva_variable);
		bool existeStructConMismoNombre(IDeclaracion* nueva_struct);
		bool existeCBufferConMismoNombre(IDeclaracion* nueva_cbuffer);

        // ========== ATRIBUTOS ========== //

		FragmentoDefinicion* definicion;
		// FragmentoMetadata* metadata; --> esto puede ser un ".json" que se guarda en la misma carpeta que el fragmento.
		std::string path;
		std::string codigo_completo;
		std::string bloque_de_codigo;
		std::string definicion_funcion;


		std::vector<CBufferShader*> cbuffers;
		std::vector<StructShader*> structs;
        std::vector<VariableShader*> variables_textura_2d;
        std::vector<VariableShader*> variables_textura_2d_array;
        std::vector<VariableShader*> variables_textura_3d;
		std::vector<VariableShader*> variables_sampler;
		std::vector<VariableShader*> variables_declaradas;

		// estos dos tipos no estan contemplados. en caso de que existiese un shader con interfaces o clases, entonces se procederia igual q con los cbuffers, structs y variables_declaradas.
		// std::vector<std::string> interfaces;
		// std::vector<std::string> clases;
};
};
};

#endif // GENERADORSHADER_PUBLICADOR_FRAGMENTO_H_
