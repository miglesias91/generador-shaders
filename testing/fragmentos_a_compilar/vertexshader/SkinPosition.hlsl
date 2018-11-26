// SKIN POSITION
struct Paleta4x4
{
    float4 vector1 : OBJETO_PALETA_V1;
    float4 vector2 : OBJETO_PALETA_V2;
    float4 vector3 : OBJETO_PALETA_V3;
    float4 vector4 : OBJETO_PALETA_V4;
};

int numero_de_huesos : OBJETO_BONES_NUMBER;
Paleta4x3 paletas[50] : OBJETO_BONES_PALETTE;

float4 skinPosition(in float3 posicion : POSITION, in float3 blend_weight : BLENDWEIGHT, in float4 blend_indices : BLENDINDICES) : TransformedPosition
{
    float ultimo_peso = 1.0;
    float peso;
    int vec_indices[4] = (int[4]) D3DCOLORtoUBYTE4(blend_indices);

    float4 skin_position = float4(0,0,0,0);
    for (int i_hueso = 0; (i_hueso < 3) && (i_hueso < numero_de_huesos - 1); i_hueso++)
    {
        if (vec_indices[i_hueso] < 0)
        {
            return skin_position;
        }

        peso = blend_weight[i_hueso];
        ultimo_peso -= peso;

        float4x4 paleta = {
            paletas[vec_indices[i_hueso]].vector1,
            paletas[vec_indices[i_hueso]].vector2,
            paletas[vec_indices[i_hueso]].vector3,
            paletas[vec_indices[i_hueso]].vector4
        };

        skin_position.xyz += mul(posicion, paleta) * peso;
    }

    if (vec_indices[numero_de_huesos - 1] < 0)
    {
        return skin_position;
    }

    float4x4 paleta = {
        paletas[vec_indices[numero_de_huesos - 1]].vector1,
        paletas[vec_indices[numero_de_huesos - 1]].vector2,
        paletas[vec_indices[numero_de_huesos - 1]].vector3,
        paletas[vec_indices[numero_de_huesos - 1]].vector4,
    };

    skin_position.xyz += mul(posicion, paleta) * ultimo_peso;

    return skin_position;
}