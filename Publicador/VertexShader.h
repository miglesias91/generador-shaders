/// \file VertexShader.h
/// \date 2017-08-04
/// \brief Representacion del Vertex Shader utilizada para escribirlo/exportarlo en un archivo.

#ifndef GENERADORSHADER_PUBLICADOR_VERTEXSHADER_H_
#define GENERADORSHADER_PUBLICADOR_VERTEXSHADER_H_

// Utils
#include <UtilsLib/Include/DisallowCopyAndAssign.h>

// publicador
#include <Publicador/Shader.h>

namespace GeneradorShader
{
namespace Publicador
{
	/// \brief DESCRIPCION
	class VertexShader : public Shader
	{
	public:

        static std::vector<std::string> semanticas_ordenadas;

		// ========== LIFECYCLE ========== //

		/// \brief Constructor
		VertexShader();

		VertexShader(std::string nombre);

		/// \brief Destructor
		virtual ~VertexShader();

		// ========== OPERATORS ========== //

		// ========== METHODS ========== //

		virtual void agregarParametroIn(GeneradorShader::Publicador::FragmentoParametro* parametro_in);

		virtual void agregarParametroOut(GeneradorShader::Publicador::FragmentoParametro* parametro_out);

		// ========== GETTERS ========== //

		// ========== SETTERS ========== //

		// ========== INQUIRY ========== //

	private:
		DISALLOW_COPY_AND_ASSIGN(VertexShader);

		// ========== INTERNAL METHODS ========== //

		static bool comparadorParametrosVertex(FragmentoParametro* fragmento_a, FragmentoParametro* fragmento_b);

		// ========== ATTRIBUTES ========== //       
	};
};
};

#endif // GENERADORSHADER_PUBLICADOR_VERTEXSHADER_H_
