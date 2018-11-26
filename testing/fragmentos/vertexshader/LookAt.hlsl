float4 camara_pos : register(c0) : ESCENA_CAMARA_POS;

float3 lookAt(in float4 position_mv : ModelViewPosition) : LookAt
{
	return -(camara_pos - position_mv).xyz;
}