matrix matriz_imagen : OBJETO_MATRIZ_IMAGEN;

float4 imagePosition(in float3 posicion : POSITION) : ImagePosition
{
    float3 posicion_canonica = (float3)mul(float4(posicion.xyz, 1.0), matriz_imagen);

    return float4(posicion_canonica, 1.0);
}