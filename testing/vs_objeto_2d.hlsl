// ========== TEXTURAS ========== //

// ========== SAMPLERS ========== //

// ========== STRUCTS ========== //

// ========== CBUFFERS ========== //

cbuffer cbuffer_objeto : register(b0) : CBUFFER_OBJETO
{
	matrix matriz_textura : packoffset(c0) : OBJETO_MATRIZ_TEXTURA;
	matrix matriz_imagen : packoffset(c4) : OBJETO_MATRIZ_IMAGEN;
};

// ========== FRAGMENTOS ========== //

float2 objetoTexCoord(in float2 tex_coord : TEXCOORD ) : ObjetoTexCoord
{
    return (float2)mul(float4(tex_coord, 0.0, 1.0), matriz_textura);
}

float4 imagePosition(in float3 posicion : POSITION) : ImagePosition
{
    float3 posicion_canonica = (float3)mul(float4(posicion.xyz, 1.0), matriz_imagen);

    return float4(posicion_canonica, 1.0);
}

// ========== INPUT ========== //

struct input_objeto_2d
{
	float3 POSITION : POSITION0;
	float3 TEXCOORD : TEXCOORD0;
};

// ========== SHADER ========== //

void vs_objeto_2d(input_objeto_2d input, out float2 ObjetoTexCoord : ObjetoTexCoord, out float4 ImagePosition : SV_POSITION)
{
    ObjetoTexCoord = objetoTexCoord(input.TEXCOORD);
    ImagePosition = imagePosition(input.POSITION);
}
