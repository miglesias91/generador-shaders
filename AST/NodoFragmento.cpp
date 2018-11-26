#include <AST/NodoFragmento.h>

// stl
#include <algorithm>
#include <iostream>

// publicador
#include <Publicador/EscritorHLSL.h>
#include <Publicador/CBufferShader.h>
#include <Publicador/StructShader.h>
#include <Publicador/VariableShader.h>

// ast
#include <AST/ASTFunciones.h>

using namespace GeneradorShader::AST;

// ========== LIFECYCLE ========== //

NodoFragmento::NodoFragmento()
{
}

NodoFragmento::NodoFragmento(GeneradorShader::Publicador::Fragmento* fragmento) : Nodo(fragmento)
{

}

NodoFragmento::~NodoFragmento()
{
}

// ========== OPERATORS ========== //

// ========== METHODS ========== //

void NodoFragmento::aceptar(VisitadorAST* visitador)
{
	std::vector<Nodo*> hijos = this->getHijos();

	// ordena "hijos" para que se escriban en el orden correcto. cada hijo puede necesitar semanticas definidas por subhijos de sus hermanos.
	// ordenando de esta forma, me aseguro q se escriban primero los subhijos necesarios, y luego los hijos q necesitan a de las semanticas de los subhijos.
	std::sort(hijos.begin(), hijos.end(), ordernarSegunCantidadDeHijosMayorAMenor);

	// visito a los hijos. hago un recorrido pre-order.
	for (std::vector<Nodo*>::iterator nodo_it = hijos.begin(); nodo_it != hijos.end(); nodo_it++)
	{
		Nodo* nodo_hijo = *nodo_it;
		visitador->visitar(nodo_hijo);
	}

	visitador->getShader()->agregarFragmentoComponente(this->getFragmento());

	// agrego al shader las variables declaradas por el fragmento.
	 this->agregarVariablesDelFragmentoAlShader(visitador->getShader());

	// agrego al shader las texturas declaradas por el fragmento.
	this->agregarTexturasDelFragmentoAlShader(visitador->getShader());

	// agrego al shader los samplers declarados por el fragmento.
	this->agregarSamplersDelFragmentoAlShader(visitador->getShader());

	// agrego al shader los structs declarados por el fragmento.
	this->agregarStructsDelFragmentoAlShader(visitador->getShader());

	// agrego al shader los cbuffers declarados por el fragmento.
	this->agregarCBuffersDelFragmentoAlShader(visitador->getShader());
}

// ========== GETTERS ========== //

// ========== SETTERS ========== //

// ========== INQUIRY ========== //

// ========== INTERNAL METHODS ========== //

void NodoFragmento::agregarVariablesDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader)
{
	std::vector<Publicador::VariableShader*> variables_declaradas = this->getFragmento()->getVariablesDeclaradas();
	for (std::vector<Publicador::VariableShader*>::iterator variable_declarada_it = variables_declaradas.begin(); variable_declarada_it != variables_declaradas.end(); variable_declarada_it++)
	{
		shader->getFragmento()->agregarVariableDeclarada(*variable_declarada_it);
	}
}

void NodoFragmento::agregarTexturasDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader)
{
	std::vector<Publicador::VariableShader*> variables_texturas_2d = this->getFragmento()->getVariablesTexturas2D();
	for (std::vector<Publicador::VariableShader*>::iterator variable_textura_it = variables_texturas_2d.begin(); variable_textura_it != variables_texturas_2d.end(); variable_textura_it++)
	{
		shader->getFragmento()->agregarVariableTextura2D(*variable_textura_it);
	}

    std::vector<Publicador::VariableShader*> variables_texturas_2d_array = this->getFragmento()->getVariablesTexturas2DArray();
    for (std::vector<Publicador::VariableShader*>::iterator variable_textura_it = variables_texturas_2d_array.begin(); variable_textura_it != variables_texturas_2d_array.end(); variable_textura_it++)
    {
        shader->getFragmento()->agregarVariableTextura2DArray(*variable_textura_it);
    }

    std::vector<Publicador::VariableShader*> variables_texturas_3d = this->getFragmento()->getVariablesTexturas3D();
    for (std::vector<Publicador::VariableShader*>::iterator variable_textura_it = variables_texturas_3d.begin(); variable_textura_it != variables_texturas_3d.end(); variable_textura_it++)
    {
        shader->getFragmento()->agregarVariableTextura3D(*variable_textura_it);
    }
}

void NodoFragmento::agregarSamplersDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader)
{
	std::vector<Publicador::VariableShader*> variables_samplers = this->getFragmento()->getVariablesSamplers();
	for (std::vector<Publicador::VariableShader*>::iterator variable_sampler_it = variables_samplers.begin(); variable_sampler_it != variables_samplers.end(); variable_sampler_it++)
	{
		shader->getFragmento()->agregarVariableSampler(*variable_sampler_it);
	}
}

void NodoFragmento::agregarStructsDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader)
{
	std::vector<Publicador::StructShader*> structs_declarados = this->getFragmento()->getStructs();
	for (std::vector<Publicador::StructShader*>::iterator struct_declarado_it = structs_declarados.begin(); struct_declarado_it != structs_declarados.end(); struct_declarado_it++)
	{
		shader->getFragmento()->agregarStruct(*struct_declarado_it);
	}
}

void NodoFragmento::agregarCBuffersDelFragmentoAlShader(GeneradorShader::Publicador::Shader* shader)
{
	std::vector<Publicador::CBufferShader*> cbuffers_declarados = this->getFragmento()->getCBuffers();
	for (std::vector<Publicador::CBufferShader*>::iterator cbuffer_declarado_it = cbuffers_declarados.begin(); cbuffer_declarado_it != cbuffers_declarados.end(); cbuffer_declarado_it++)
	{
		shader->getFragmento()->agregarCBuffer(*cbuffer_declarado_it);
	}
}