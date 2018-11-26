// ========== TEXTURAS ========== //

// ========== SAMPLERS ========== //

// ========== STRUCTS ========== //

struct Luz
{
    int tipo : LUZ_TIPO;
    float3 posicion : LUZ_POSICION;
    float padding1 : LUZ_PADDING1;
    float3 direccion: LUZ_DIRECCION;
    float4 color_ambiente: LUZ_COLOR_AMBIENTE;
    float4 color_difuso: LUZ_COLOR_DIFUSO;
    float4 color_especular: LUZ_COLOR_ESPECULAR;
    float rango : LUZ_RANGO;
    float3 atenuacion: LUZ_ATENUACION;
    float3 spot: LUZ_SPOT;
    float padding2 : LUZ_PADDING2;
};

struct Material
{
    float4 material_color_ambiente : OBJETO_MATERIAL_COLOR_AMBIENTE;
    float4 material_color_difuso : OBJETO_MATERIAL_COLOR_DIFUSO;
    float4 material_color_especular : OBJETO_MATERIAL_COLOR_ESPECULAR;
    float4 material_color_emisivo : OBJETO_MATERIAL_COLOR_EMISIVO;
    float material_brillo : OBJETO_MATERIAL_BRILLO;
};

// ========== CBUFFERS ========== //

cbuffer cbuffer_subobjeto : register(b0) : CBUFFER_SUBOBJETO
{
	int material_actual : packoffset(c0) : SUBOBJETO_MATERIAL_ACTUAL;
};

cbuffer cbuffer_escena : register(b1) : CBUFFER_ESCENA
{
	matrix matriz_vista : packoffset(c0) : ESCENA_MATRIZ_VISTA;
	int null_light : packoffset(c4) : ESCENA_NULL_LIGHT;
	int directional_light : packoffset(c5) : ESCENA_DIRECTIONAL_LIGHT;
	int point_light : packoffset(c6) : ESCENA_POINT_LIGHT;
	int spot_light : packoffset(c7) : ESCENA_SPOT_LIGHT;
	int cantidad_de_luces : packoffset(c8) : ESCENA_CANTIDAD_DE_LUCES_EN_ESCENA;
	Luz luces[16] : packoffset(c9) : ESCENA_LUCES;
	matrix matriz_proyeccion : packoffset(c121) : ESCENA_MATRIZ_PROYECCION;
};

cbuffer cbuffer_objeto : register(b2) : CBUFFER_OBJETO
{
	matrix matriz_normal : packoffset(c0) : OBJETO_MATRIZ_NORMAL;
	matrix matriz_mundo : packoffset(c4) : OBJETO_MATRIZ_MUNDO;
	Material material[16] : packoffset(c8) : OBJETO_MATERIALES;
};

// ========== FRAGMENTOS ========== //

float3 modelViewNormal(in float3 normal : NORMAL) : ModelViewNormal
{
    return normalize(mul(normal, (float3x3) matriz_normal));
}

float4 modelViewPosition(in float3 posicion : POSITION) : ModelViewPosition
{
    float4 posicion_mundo = mul(float4(posicion, 1.0), matriz_mundo);
    return mul(posicion_mundo, matriz_vista);
}

float4 modeloPhong(in float3 posicion_mundo_vista : ModelViewPosition, in float3 normal_mundo_vista : ModelViewNormal) : ModeloPhong
{
    float4 material_color_ambiente = material[material_actual].material_color_ambiente;
    float4 material_color_difuso = material[material_actual].material_color_difuso;
    float4 material_color_especular = material[material_actual].material_color_especular;
    float4 material_color_emisivo = material[material_actual].material_color_emisivo;
    float material_brillo = material[material_actual].material_brillo;

    float3 direccion_vista = normalize(-posicion_mundo_vista);
    float3 direcion_luz = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float3 posicion_luz = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float4 color_ambiente = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float4 color_difuso = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float4 color_especular = float4(0.0f, 0.0f, 0.0f, 0.0f);
    float atenuacion = 1.0f;
    float spot_atenuacion = 1.0f;

    for (int i = 0; i < cantidad_de_luces; i++)
    {
        if (null_light == luces[i].tipo)
        {
            continue;
        }

        direcion_luz = -normalize(mul(luces[i].direccion, (float3x3)matriz_vista)); // la matriz de vista no tiene escalado
        if (luces[i].tipo != directional_light)
        {
            // todo el calculo se hace en view coordinates
            posicion_luz = float3(mul(float4(luces[i].posicion, 1.0), matriz_vista).xyz);
            direcion_luz = posicion_luz - posicion_mundo_vista;
            float d = length(direcion_luz);

            if (d > luces[i].rango)
            {
                // si la distancia al punto es mayor al rango, no se ilumina nada
                continue;
            }

            atenuacion = 1.0 / dot(luces[i].atenuacion, float3(1, d, d * d));

            direcion_luz = normalize(direcion_luz);

            if (luces[i].tipo != spot_light)
            {
                float3 spot_dir = normalize(mul(luces[i].direccion, (float3x3)matriz_vista)); // la matriz de vista no tiene escalado
                // see if point on surface is inside cone of illumination
                float spot_dot = dot(-direcion_luz, spot_dir);

                spot_atenuacion = 0.0f;
                if (spot_dot > luces[i].spot.y)
                {
                    if (spot_dot > luces[i].spot.x)
                    {
                        spot_atenuacion = 1.0f; // esta dentro de la maxima lumninancia
                    }
                    else
                    {
                        spot_atenuacion = pow(spot_dot, luces[i].spot.z);
                    }
                }
            }
        }

        float nDotL = max(0.0, dot(normal_mundo_vista, direcion_luz));

        color_ambiente = luces[i].color_ambiente;
        color_difuso = luces[i].color_difuso * nDotL * atenuacion * spot_atenuacion;

        // reseteo 'atenuacion' y 'spot_atenuacion'.
        atenuacion = 1.0f;
        spot_atenuacion = 1.0f;

        if (material_brillo != 0.0f)
        {
            float3 double_normal = 2.0f * normal_mundo_vista;
            float doublenDotL = dot(double_normal, direcion_luz);
            float3 reflexion = doublenDotL * normal_mundo_vista - direcion_luz;
            float vDotR = max(0.0, dot(direccion_vista, reflexion));
            color_especular += luces[i].color_especular * pow(vDotR, material_brillo) * atenuacion * spot_atenuacion;
        }
    }

    float4 non_shadowable = saturate(material_color_ambiente * color_ambiente + material_color_emisivo);
    float4 shadowable = saturate(material_color_difuso * color_difuso + material_color_especular * color_especular);

    //return saturate(non_shadowable + shadowable);
    return (non_shadowable + shadowable);
}

float4 projectedPosition(in float4 posicion_vista : ModelViewPosition) : ProjectedPosition
{
    return mul(posicion_vista, matriz_proyeccion);
}

// ========== INPUT ========== //

struct input_objeto_sin_textura
{
	float3 POSITION : POSITION0;
	float3 NORMAL : NORMAL0;
};

// ========== SHADER ========== //

void vs_objeto_sin_textura(input_objeto_sin_textura input, out float4 ModeloPhong : ModeloPhong, out float4 ProjectedPosition : SV_POSITION)
{
    float3 ModelViewNormal = modelViewNormal(input.NORMAL);
    float4 ModelViewPosition = modelViewPosition(input.POSITION);
    ModeloPhong = modeloPhong(ModelViewPosition, ModelViewNormal);
    ProjectedPosition = projectedPosition(ModelViewPosition);
}
