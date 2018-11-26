float4x4 Normal;

void GetTransformedNormal(
	in float3 normal: NORMAL,
	out float3 viewspace_normal: ViewSpaceNormal
	)
{
	viewspace_normal = normalize(mul(normal, (float3x3) Normal));	
}