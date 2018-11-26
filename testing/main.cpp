
// stl
#include <iostream>
#include <algorithm>

// debug api
//#include <Windows.h>

// generador shaders
#include <Generador/GeneradorFunciones.h>

// publicador
#include <Publicador/Shader.h>
#include <Publicador/PublicadorFunciones.h>

// forward declaration.
void efectoEstandarObjetoBillboard();
void efectoEstandarObjetoSinTextura();
void efectoEstandarObjeto2D();
void efectoEstandarObjetoTexturado();
void efectoEstandarObjetoTexturadoEsqueletico();

std::string dir_carpeta_fragmentos_vertexshader = "fragmentos_a_compilar/vertexshader/";
std::string dir_carpeta_fragmentos_pixelshader = "fragmentos_a_compilar/pixelshader/";

std::vector<std::string> salida_semanticas_efectos_deseados;
std::string path_output_vertex_shader = "";
std::string path_output_pixel_shader = "";
std::string nombre_efecto = "";
GeneradorShader::Publicador::Pipeline* pipeline_generado = NULL;

int main()
{
    //efectoEstandarObjetoTexturado();
    //efectoEstandarObjetoBillboard();
    //efectoEstandarObjetoSinTextura();
    //efectoEstandarObjeto2D();

    efectoEstandarObjetoTexturadoEsqueletico();

	std::getchar();

	return 1;
}

void efectoEstandarObjetoTexturado()
{
	// shader standar para objetos texturados
	salida_semanticas_efectos_deseados.push_back("ColorPhongObjetoTexturado");
    nombre_efecto = "objeto_texturado";
    path_output_vertex_shader = "vs_" + nombre_efecto + ".hlsl";
	path_output_pixel_shader = "ps_" + nombre_efecto + ".hlsl";

    pipeline_generado = GeneradorShader::generarPipeline(nombre_efecto, "objeto_texturado", salida_semanticas_efectos_deseados, dir_carpeta_fragmentos_vertexshader, dir_carpeta_fragmentos_pixelshader);
	GeneradorShader::Publicador::escribirPipelineHLSL(pipeline_generado, path_output_vertex_shader, path_output_pixel_shader);
	GeneradorShader::Publicador::serializarJSON(pipeline_generado, pipeline_generado->getNombre() + ".json");
    GeneradorShader::Publicador::compilarShaders(pipeline_generado);

	salida_semanticas_efectos_deseados.clear();
	delete pipeline_generado;
}

void efectoEstandarObjetoBillboard()
{
    // shader standar para objetos 3d texturados (billboards)
    salida_semanticas_efectos_deseados.push_back("ColorPhongObjetoBillboard");
    nombre_efecto = "objeto_billboard";
    path_output_vertex_shader = "vs_" + nombre_efecto + ".hlsl";
    path_output_pixel_shader = "ps_" + nombre_efecto + ".hlsl";

    pipeline_generado = GeneradorShader::generarPipeline(nombre_efecto,"objeto_texturado_3d", salida_semanticas_efectos_deseados, dir_carpeta_fragmentos_vertexshader, dir_carpeta_fragmentos_pixelshader);
    GeneradorShader::Publicador::escribirPipelineHLSL(pipeline_generado, path_output_vertex_shader, path_output_pixel_shader);
    GeneradorShader::Publicador::serializarJSON(pipeline_generado, pipeline_generado->getNombre() + ".json");
    GeneradorShader::Publicador::compilarShaders(pipeline_generado);

    salida_semanticas_efectos_deseados.clear();
    delete pipeline_generado;
}

void efectoEstandarObjetoSinTextura()
{
    // shader standar para objetos sin textura
    salida_semanticas_efectos_deseados.push_back("ColorPhongObjeto");
    nombre_efecto = "objeto_sin_textura";
    path_output_vertex_shader = "vs_" + nombre_efecto + ".hlsl";
    path_output_pixel_shader = "ps_" + nombre_efecto + ".hlsl";

    pipeline_generado = GeneradorShader::generarPipeline(nombre_efecto, "objeto_sin_textura", salida_semanticas_efectos_deseados, dir_carpeta_fragmentos_vertexshader, dir_carpeta_fragmentos_pixelshader);
    GeneradorShader::Publicador::escribirPipelineHLSL(pipeline_generado, path_output_vertex_shader, path_output_pixel_shader);
    GeneradorShader::Publicador::serializarJSON(pipeline_generado, pipeline_generado->getNombre() + ".json");
    GeneradorShader::Publicador::compilarShaders(pipeline_generado);

    salida_semanticas_efectos_deseados.clear();
    delete pipeline_generado;
}

void efectoEstandarObjeto2D()
{
    // shader standar para objetos 2d
    salida_semanticas_efectos_deseados.push_back("ColorTexturaObjeto");
    nombre_efecto = "objeto_2d";
    path_output_vertex_shader = "vs_" + nombre_efecto + ".hlsl";
    path_output_pixel_shader = "ps_" + nombre_efecto + ".hlsl";
    
    pipeline_generado = GeneradorShader::generarPipeline(nombre_efecto, "objeto_2d", salida_semanticas_efectos_deseados, dir_carpeta_fragmentos_vertexshader, dir_carpeta_fragmentos_pixelshader);
    GeneradorShader::Publicador::escribirPipelineHLSL(pipeline_generado, path_output_vertex_shader, path_output_pixel_shader);
    GeneradorShader::Publicador::serializarJSON(pipeline_generado, pipeline_generado->getNombre() + ".json");
    GeneradorShader::Publicador::compilarShaders(pipeline_generado);

    salida_semanticas_efectos_deseados.clear();
    delete pipeline_generado;
}

void efectoEstandarObjetoTexturadoEsqueletico()
{
    // shader standar para objetos texturados esqueleticos
    salida_semanticas_efectos_deseados.push_back("ColorPhongObjetoTexturado");
    nombre_efecto = "objeto_texturado_esqueletico";
    path_output_vertex_shader = "vs_" + nombre_efecto + ".hlsl";
    path_output_pixel_shader = "ps_" + nombre_efecto + ".hlsl";

    pipeline_generado = GeneradorShader::generarPipeline(nombre_efecto, "objeto_texturado_esqueletico", salida_semanticas_efectos_deseados, dir_carpeta_fragmentos_vertexshader, dir_carpeta_fragmentos_pixelshader);
    GeneradorShader::Publicador::escribirPipelineHLSL(pipeline_generado, path_output_vertex_shader, path_output_pixel_shader);
    GeneradorShader::Publicador::serializarJSON(pipeline_generado, pipeline_generado->getNombre() + ".json");
    GeneradorShader::Publicador::compilarShaders(pipeline_generado);

    salida_semanticas_efectos_deseados.clear();
    delete pipeline_generado;
}