// ========== TEXTURAS ========== //

Texture2D textura_0 : register(t0) : TEXTURA_0;

Texture2D textura_1 : register(t1) : TEXTURA_1;

Texture2D textura_2 : register(t2) : TEXTURA_2;

Texture2D textura_3 : register(t3) : TEXTURA_3;

// ========== SAMPLERS ========== //

SamplerState sampler_lineal : register(s0) : SAMPLER;

// ========== STRUCTS ========== //

// ========== CBUFFERS ========== //

cbuffer cbuffer_subobjeto : register(b0) : CBUFFER_SUBOBJETO
{
	int textura_actual : packoffset(c0) : SUBOBJETO_TEXTURA_ACTUAL;
};

cbuffer cbuffer_objeto : register(b1) : CBUFFER_OBJETO
{
	int textura_nula : packoffset(c0) : OBJETO_TEXTURA_NULA;
};

// ========== FRAGMENTOS ========== //

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

// ========== INPUT ========== //

struct input_ps_objeto_2d
{
	float2 ObjetoTexCoord : ObjetoTexCoord;
};

// ========== SHADER ========== //

void ps_objeto_2d(input_ps_objeto_2d input, out float4 ColorTexturaObjeto : SV_TARGET)
{
    ColorTexturaObjeto = colorTexturaObjeto(input.ObjetoTexCoord);
}
