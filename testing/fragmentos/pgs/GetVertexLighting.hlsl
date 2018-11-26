void GetVertexLighting(
	in float4 shadowable_color: ShadowableColor,
	in float4 non_shadowable_color: NonShadowableColor,
	out float4 output_color: COLOR0
	)
{
	output_color = saturate(non_shadowable_color + shadowable_color);
}