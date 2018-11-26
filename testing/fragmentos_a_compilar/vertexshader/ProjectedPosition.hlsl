matrix matriz_proyeccion : ESCENA_MATRIZ_PROYECCION;

float4 projectedPosition(in float4 posicion_vista : ModelViewPosition) : ProjectedPosition
{
    return mul(posicion_vista, matriz_proyeccion);
}