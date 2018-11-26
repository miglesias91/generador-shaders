struct Light
{
    int type;
    float3 pos;
    float padding1;
    float3 dir;
    float4 ambientColor;
    float4 diffuseColor;
    float4 specularColor;
    float range; 
    float3 atten; //1, D, D^2
    float3 spot;  //cos(theta/2), cos(phi/2), falloff
    float padding2;
};

struct ColorOut
{
    float4 ambient;
    float4 diffuse;
    float4 specular;
};

Light vLight[16];
int vLights;

float4 ambientColor;
float4 diffuseColor;
float4 specularColor;
float4 emmisiveColor;
float power; //exponente para el coseno en el calculo especular.


void Lighting(
	in float4 viewspace_position: ViewSpacePosition,
	in float3 viewspace_normal: ViewSpaceNormal,
	out float4 shadowable_color: ShadowableColor,
	out float4 non_shadowable_color: NonShadowableColor
	)
{
	ColorOut lighting_colors;
    lighting_colors.ambient = float4(0.0, 0.0, 0.0, 0.0);
    lighting_colors.diffuse = float4(0.0, 0.0, 0.0, 0.0);
    lighting_colors.specular = float4(0.0, 0.0, 0.0, 0.0);
    
    float4 viewspace_view_dir = -normalize(viewspace_position);
    for (int i = 0; i < vLights; i++)
    {
        if (NULL_LIGHT == vLight[i].type)
        {
            continue;
        }

        if (DIRECTIONAL_LIGHT == vLight[i].type)
        {
            ColorOut directionalColor = DirectionalLight(i, viewspace_normal, viewspace_view_dir, power);
            lighting_colors.ambient += directionalColor.ambient;
            lighting_colors.diffuse += directionalColor.diffuse;
            lighting_colors.specular += directionalColor.specular;
            continue;
        }

        if (POINT_LIGHT == vLight[i].type)
        {
            ColorOut pointColor = PointLight(i, viewspace_position, viewspace_normal, viewspace_view_dir, power);
            lighting_colors.ambient += pointColor.ambient;
            lighting_colors.diffuse += pointColor.diffuse;
            lighting_colors.specular += pointColor.specular;
            continue;
        }

        if (SPOT_LIGHT == vLight[i].type)
        {
            ColorOut pointColor = SpotLight(i, viewspace_position, viewspace_normal, viewspace_view_dir, power);
            lighting_colors.ambient += pointColor.ambient;
            lighting_colors.diffuse += pointColor.diffuse;
            lighting_colors.specular += pointColor.specular;
            continue;
        }
    }
	
	non_shadowable_color = saturate(ambientColor * lighting_colors.ambient + emmisiveColor);
	shadowable_color = saturate(diffuseColor * lighting_colors.diffuse + specularColor * lighting_colors.specular);
}