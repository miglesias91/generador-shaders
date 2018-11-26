// ========== TEXTURAS ========== //

// ========== SAMPLERS ========== //

// ========== STRUCTS ========== //

// ========== CBUFFERS ========== //

// ========== FRAGMENTOS ========== //

float4 colorPhongObjeto(in float4 modelo_phong_color : ModeloPhong) : ColorPhongObjeto
{
    return saturate(modelo_phong_color);
}

// ========== INPUT ========== //

struct input_ps_objeto_sin_textura
{
	float4 ModeloPhong : ModeloPhong;
};

// ========== SHADER ========== //

void ps_objeto_sin_textura(input_ps_objeto_sin_textura input, out float4 ColorPhongObjeto : SV_TARGET)
{
    ColorPhongObjeto = colorPhongObjeto(input.ModeloPhong);
}
