// ========== TEXTURAS ========== //

Texture2DArray texture_2d_resourceview : register(t0) : TEXTURA_ARRAY;

// ========== SAMPLERS ========== //

SamplerState sampler_lineal : register(s0) : SAMPLER;

// ========== STRUCTS ========== //

// ========== CBUFFERS ========== //

cbuffer cbuffer_objeto : register(b0) : CBUFFER_OBJETO
{
	int video_frame_actual : packoffset(c0) : OBJETO_VIDEO_FRAME_ACTUAL;
};

// ========== FRAGMENTOS ========== //

float4 colorPhongObjeto(in float4 modelo_phong_color : ModeloPhong) : ColorPhongObjeto
{
    return saturate(modelo_phong_color);
}

float4 colorTexturaObjetoBillboard(in float2 billboard_tex_coord : BillboardTexCoord) : ColorTexturaObjetoBillboard
{
    float3 sample_coords = float3(billboard_tex_coord.x, billboard_tex_coord.y,  float(video_frame_actual)); // u v, slice
    return texture_2d_resourceview.Sample(sampler_lineal, sample_coords);
}

float4 colorPhongObjetoBillboard(in float4 phong_color : ColorPhongObjeto, in float4 tex_color : ColorTexturaObjetoBillboard) : ColorPhongObjetoBillboard
{
    return phong_color * tex_color;
}

// ========== INPUT ========== //

struct input_ps_objeto_billboard
{
	float4 ModeloPhong : ModeloPhong;
	float2 BillboardTexCoord : BillboardTexCoord;
};

// ========== SHADER ========== //

void ps_objeto_billboard(input_ps_objeto_billboard input, out float4 ColorPhongObjetoBillboard : SV_TARGET)
{
    float4 ColorPhongObjeto = colorPhongObjeto(input.ModeloPhong);
    float4 ColorTexturaObjetoBillboard = colorTexturaObjetoBillboard(input.BillboardTexCoord);
    ColorPhongObjetoBillboard = colorPhongObjetoBillboard(ColorPhongObjeto, ColorTexturaObjetoBillboard);
}
