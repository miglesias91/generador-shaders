Texture2DArray texture_2d_resourceview : TEXTURA_ARRAY;
SamplerState sampler_lineal : SAMPLER;

int video_frame_actual : OBJETO_VIDEO_FRAME_ACTUAL;

float4 colorTexturaObjetoBillboard(in float2 billboard_tex_coord : BillboardTexCoord) : ColorTexturaObjetoBillboard
{
    float3 sample_coords = float3(billboard_tex_coord.x, billboard_tex_coord.y,  float(video_frame_actual)); // u v, slice
    return texture_2d_resourceview.Sample(sampler_lineal, sample_coords);
}