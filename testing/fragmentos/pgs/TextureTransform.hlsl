float4x4 TextureTransform;

void GetTransformedTextureCoords(
	in float2 input_texture_coords: TEXCOORD,
	out float2 transformed_texture_coords: TRANSF_TEXCOORD
	)
{
	transformed_texture_coords = (float2)mul(float4(input_texture_coords, 0.0, 1.0), TextureTransform);
}