matrix matriz_normal : OBJETO_MATRIZ_NORMAL;

float3 modelViewNormal(in float3 normal : NORMAL) : ModelViewNormal
{
    return normalize(mul(normal, (float3x3) matriz_normal));
}