float4 AmbientLight : register(c0);

float4 AmbientLighting( in float4 color : DiffuseColor, in float3 normal : PixelNormal) : LitColor
{
	// return (AmbientLight + ComputeLight(normal)) * color;
}