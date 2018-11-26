matrix matriz_textura : OBJETO_MATRIZ_TEXTURA;

float2 billboardTexCoord(in float3 billboard_tex_coord : TEXCOORD ) : BillboardTexCoord
{
    return (float2)mul(float4(billboard_tex_coord.x, billboard_tex_coord.y, 0.0, 1.0), matriz_textura);
}