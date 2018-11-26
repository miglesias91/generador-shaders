matrix matriz_mundo : OBJETO_MATRIZ_MUNDO;
matrix matriz_vista : ESCENA_MATRIZ_VISTA;

float4 modelViewTransformedPosition(in float3 posicion : TransformedPosition) : ModelViewPosition
{
    float4 posicion_mundo = mul(float4(posicion, 1.0), matriz_mundo);
    return mul(posicion_mundo, matriz_vista);
}