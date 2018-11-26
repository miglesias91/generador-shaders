float4 GetLightingColor(
	in float4 lighting_color: COLOR0,
	in float4 texture_color: TextureColor
	) : SV_Target
{
	return saturate(lighting_color * texture_color);
}