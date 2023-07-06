// 2D���� ��һ�����봢����t0  
Texture2D InputTexture : register(t0);

// ������״̬ ��һ��������s0  
SamplerState InputSampler : register(s0);

// Shader���  
float4 main(
	float4 clipSpaceOutput : SV_POSITION,
	float4 sceneSpaceOutput : SCENE_POSITION,
	float4 texelSpaceInput0 : TEXCOORD0
) : SV_Target
{
	// ������� ��͸�����������  
	//return float4(1,1,1,2) - InputTexture.Sample(InputSampler, texelSpaceInput0.xy);  

	float4 color = InputTexture.Sample(InputSampler, texelSpaceInput0.xy);
	color.xyz = float3(1, 1, 1) - color.xyz;
	return color;
}