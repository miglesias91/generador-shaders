
//Texture2DArray texture_resourceview : TEXTURA_ARRAY;

Texture2D textura_0 : TEXTURA_0;
Texture2D textura_1 : TEXTURA_1;
Texture2D textura_2 : TEXTURA_2;
Texture2D textura_3 : TEXTURA_3;

SamplerState sampler_lineal : SAMPLER;

int textura_nula : OBJETO_TEXTURA_NULA;
int textura_actual : SUBOBJETO_TEXTURA_ACTUAL;

float4 colorTexturaObjeto(in float2 tex_coord : ObjetoTexCoord) : ColorTexturaObjeto
{
    float4 color = float4(1.0f, 1.0f, 1.0f, 1.0f);
    if (textura_nula == 0)
    {
        if (textura_actual == 0)
        {
            color = textura_0.Sample(sampler_lineal, tex_coord);
        }
        if (textura_actual == 1)
        {
            color = textura_1.Sample(sampler_lineal, tex_coord);
        }
        if (textura_actual == 2)
        {
            color = textura_2.Sample(sampler_lineal, tex_coord);
        }
        if (textura_actual == 3)
        {
            color = textura_3.Sample(sampler_lineal, tex_coord);
        }
    }

    return color;
}