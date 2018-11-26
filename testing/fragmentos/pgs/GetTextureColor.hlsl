Texture2D tex2D;

SamplerState linearSampler
{
    Filter = MIN_MAG_MIP_LINEAR;
    AddressU = Wrap;
    AddressV = Wrap;
};

void GetTextureColor(
	in float2 transformed_texture_coords: TRANSF_TEXCOORD,
	out float4 output_color: TextureColor
	)
{
	output_color = tex2D.Sample(linearSampler, transformed_texture_coords);
}