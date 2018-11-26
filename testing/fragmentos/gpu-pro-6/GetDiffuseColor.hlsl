

void GetDiffuseColor(in float2 texcoord : DiffuseTexCoord, out float4 color : DiffuseColor)
{
	color = tex2D(DiffuseTextureSampler, texcoord);
}