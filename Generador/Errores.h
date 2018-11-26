#pragma once

namespace GeneradorShader
{
namespace Errores
{
	// 1- error sintactico de fragmento: este error lo informa directamente el Parser autogenerado con antlr. (por defualt, tira una exception en ingles).

	// 2- error de defincion de fragmento:
	// error 2.1) no se puede usar 1 misma semantica en 2 outputs
	// error 2.2) hay alguna constante o sampler no definida.

	// 3- semantica perdida: ocurre cuando queda una semantica sin definir. esto deberia detectarse cuando hay durante 2 ciclos seguidos las semanticas_in y las semanticas_out quedan iguales.

	// 4- grafo con ciclos: ocurre cuando se ingresa un nodo que genera un grafo ciclico.

	// 5- multiples tipo de variable para una misma semantica: ocurre cuando una semantica aparece con 2 o más tipos diferente
	//														(por ej. en un momento aparece "float3 PixelNormal" y luego aparece "float2 PixelNormal").
};
};
