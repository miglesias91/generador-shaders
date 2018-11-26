// SKIN NORMAL
struct Paleta4x4
{
    float4 vector1 : OBJETO_PALETA_V1;
    float4 vector2 : OBJETO_PALETA_V2;
    float4 vector3 : OBJETO_PALETA_V3;
    float4 vector4 : OBJETO_PALETA_V4;
};

int numero_de_huesos : OBJETO_BONES_NUMBER;
Paleta4x4 paletas[50] : OBJETO_BONES_PALETTE;

float3 skinNormal(in float3 normal : NORMAL, in float3 blend_weight : BLENDWEIGHT, in float4 blend_indices : BLENDINDICES) : TransformedNormal
{
    float ultimo_peso = 1.0;
    float peso;
    int vec_indices[4] = (int[4]) D3DCOLORtoUBYTE4(blend_indices);

    float3 skin_normal = float3(0,0,0);
    for (int i_hueso = 0; (i_hueso < 3) && (i_hueso < numero_de_huesos - 1); i_hueso++)
    {
        if (vec_indices[i_hueso] < 0)
        {
            return skin_normal;
        }

        peso = blend_weight[i_hueso];
        ultimo_peso -= peso;

        float4x4 paleta = {
            paletas[vec_indices[i_hueso]].vector1,
            paletas[vec_indices[i_hueso]].vector2,
            paletas[vec_indices[i_hueso]].vector3,
            paletas[vec_indices[i_hueso]].vector4
        };

        skin_normal += mul(normal, paleta) * peso;
    }

    if (vec_indices[numero_de_huesos - 1] < 0)
    {
        return skin_normal;
    }

    float4x4 paleta = {
        paletas[vec_indices[numero_de_huesos - 1]].vector1,
        paletas[vec_indices[numero_de_huesos - 1]].vector2,
        paletas[vec_indices[numero_de_huesos - 1]].vector3,
        paletas[vec_indices[numero_de_huesos - 1]].vector4
    };

    skin_normal += mul(normal, paleta) * ultimo_peso;

    return skin_normal;
}