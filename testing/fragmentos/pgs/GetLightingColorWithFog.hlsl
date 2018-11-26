float4 fogColor;

float4 GetLightingColorWithFog( in float  fog_factor: FogFactor, inout float4 final_color : COLOR0) : FogColor
{
	final_color = fog_factor * fogColor + (1.0f - fog_factor) * final_color;
	return final_color;
}