matrix matriz_textura : OBJETO_MATRIZ_TEXTURA;

float2 objetoTexCoord(in float2 tex_coord : TEXCOORD ) : ObjetoTexCoord
{
    return (float2)mul(float4(tex_coord, 0.0, 1.0), matriz_textura);
}