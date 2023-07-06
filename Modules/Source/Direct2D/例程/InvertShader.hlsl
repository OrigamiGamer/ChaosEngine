// 一个简单的像素着色器范例: 反相


// 2D纹理 第一个输入储存在t0
Texture2D InputTexture : register(t0);
// 采样器状态 第一个储存在s0
SamplerState InputSampler : register(s0);
// 常量缓存 (b0)
cbuffer InvProperties: register(b0)
{
	float	transparent1 : packoffset(c0);
};
// Shader入口
float4 main(
	float4 clipSpaceOutput  : SV_POSITION,
	float4 sceneSpaceOutput : SCENE_POSITION,
    float4 texelSpaceInput0 : TEXCOORD0
    ) : SV_Target
{
    // 反相代码 不透明可以用这个
    //return float4(1,1,1,2) - InputTexture.Sample(InputSampler, texelSpaceInput0.xy);

    float4 color = InputTexture.Sample(InputSampler, texelSpaceInput0.xy);
    color.xyz = float3(1, 1, 1) - color.xyz;
    color.w = float(1) - float(transparent1);
    return color;
}
