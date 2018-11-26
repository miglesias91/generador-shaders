matrix matriz_normal : OBJETO_MATRIZ_NORMAL;

float3 modelViewTransformedNormal(in float3 normal : TransformedNormal) : ModelViewNormal
{
    return normalize(mul(normal, (float3x3) matriz_normal));
}