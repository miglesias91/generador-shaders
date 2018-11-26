void ComputeNormal(in float3 vertex_normal : VertexNormal, out float3 pixel_normal : PixelNormal)
{
	pixel_normal = normalize(vertex_normal);
}