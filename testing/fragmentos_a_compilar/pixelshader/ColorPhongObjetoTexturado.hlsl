
float4 colorPhongObjetoTexturado(in float4 phong_color : ColorPhongObjeto, in float4 tex_color : ColorTexturaObjeto) : ColorPhongObjetoTexturado
{
    return phong_color * tex_color;
}