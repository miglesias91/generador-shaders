
float4 colorPhongObjetoBillboard(in float4 phong_color : ColorPhongObjeto, in float4 tex_color : ColorTexturaObjetoBillboard) : ColorPhongObjetoBillboard
{
    return phong_color * tex_color;
}