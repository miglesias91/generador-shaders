float fogStart;
float fogEnd;

float CalculateLinearFogFactor(
	in float3 position: ViewSpacePosition	
	): FogFactor
{
	return clamp((position.z - fogStart) / (fogEnd - fogStart), 0.0, 1.0);
}
