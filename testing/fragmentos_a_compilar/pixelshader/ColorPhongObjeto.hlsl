
float4 colorPhongObjeto(in float4 modelo_phong_color : ModeloPhong) : ColorPhongObjeto
{
    return saturate(modelo_phong_color);
}