float4x4 World;
float4x4 View;
float4x4 Projection;

void GetPosition(
	in float3 position: POSITION,
	out float4 viewspace_position: ViewSpacePosition,
	out float4 projected_position: SV_POSITION
	)
{
	float4 worldspace_position = mul(float4(input.Pos, 1.0), World);
    viewspace_position = mul(worldspace_position, View);    
    projected_position = mul(viewspace_position, Projection);	
}