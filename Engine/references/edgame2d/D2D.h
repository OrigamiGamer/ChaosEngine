/*******************************************************************************
	Generated by: DLL to C version 3.04
	Date: 2022-10-17
	Description: The declaration of functions and variables for D2D.dll.
	Website: http://www.dll-decompiler.com
	Technical Support: support@dll-decompiler.com
*******************************************************************************/

#if !defined(D2SL_D2D_SUPP_H_0000292E_INCLUDED_)
#define D2SL_D2D_SUPP_H_0000292E_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifdef __cplusplus
extern "C" {
#endif


#include <windows.h>

__declspec(align(16)) extern UCHAR D2DData[0x178000];

/* Data for initialization. */
extern UCHAR D2D_InitData[0x215];


#ifdef __cplusplus
}
#endif


extern HMODULE g_hD2D;

/*
	Description: Access any address in the DLL.
	Parameters:
		rvaAddr: The RVA address you want to access.
*/
void* __stdcall D2D_RVA(DWORD rvaAddr);

extern "C" void _Interface_Get();
extern "C" void _D2dCreate_4();
extern "C" void System_SetState_b();
extern "C" void System_Initiate_e();
extern "C" void System_Start_e();
extern "C" void System_Shutdown_e();
extern "C" void Release_e();
extern "C" void System_SetState_f();
extern "C" void System_SetState_s();
extern "C" void Input_GetKeyState_e();
extern "C" void System_SetState_i();
extern "C" void Gfx_BeginScene_e();
extern "C" void Gfx_EndScene_e();
extern "C" void Gfx_Clear_e();
extern "C" void Timer_GetFPS_e();
extern "C" void Texture_Load_e();
extern "C" void Texture_Free_e();
extern "C" void Timer_GetDelta_e();
extern "C" void Font_Interface_Get();
extern "C" void Font_Printf();
extern "C" void Font_Del();
extern "C" void Font_SetColor();
extern "C" void Spr_Interface_Get();
extern "C" void Spr_Render_e();
extern "C" void Spr_Del();
extern "C" void Ani_Interface_Get();
extern "C" void Ani_Play_e();
extern "C" void Ani_Update_e();
extern "C" void Spr_Render_e();
extern "C" void Ani_GetFrame_e();
extern "C" void Input_GetMousePos_e();
extern "C" void Ani_SetFrames_e();
extern "C" void Ani_SetTexture_e();
extern "C" void Ani_SetSpeed_e();
extern "C" void Ani_RenderEx_e();
extern "C" void Input_KeyDown_e();
extern "C" void Input_KeyUp_e();
extern "C" void Timer_GetTime_e();
extern "C" void Texture_Create_e();
extern "C" void GUIButton_Interface_Get();
extern "C" void Texture_GetHeight_e();
extern "C" void Texture_GetWidth_e();
extern "C" void Button_SetMode_e();
extern "C" void Button_SetState_e();
extern "C" void Button_GetState_e();
extern "C" void Gui_Interface_Get();
extern "C" void Gui_AddCtrl_e();
extern "C" void Gui_Render_e();
extern "C" void Gui_Update_e();
extern "C" void Gui_GetCtrl_e();
extern "C" void Spr_SetTexture_e();
extern "C" void Spr_SetTextureRect_e();
extern "C" void System_GetErrorMessage();
extern "C" void Texture_Load_c_e();
extern "C" void Gfx_RenderLine_e();
extern "C" void ARGB_e();
extern "C" void Ani_Del_e();
extern "C" void Gui_Del_e();
extern "C" void Effect_Load_e();
extern "C" void Effect_Play_e();
extern "C" void Effect_PlayEx_e();
extern "C" void Music_Load_e();
extern "C" void Music_Play_e();
extern "C" void Effect_Free_e();
extern "C" void Channel_Pause_e();
extern "C" void Channel_Resume_e();
extern "C" void Channel_Stop_e();
extern "C" void Channel_PauseAll_e();
extern "C" void Channel_ResumeAll_e();
extern "C" void Channel_StopAll_e();
extern "C" void Channel_IsPlaying_e();
extern "C" void System_SetState_h();
extern "C" void System_GetState_h();
extern "C" void Edit_Interface_Get();
extern "C" void Edit_Updata_e();
extern "C" void Edit_Render_e();
extern "C" void Edit_InsertCookie_e();
extern "C" void Edit_GetCookie_e();
extern "C" void Edit_SetNumOnly_e();
extern "C" void Edit_ShowOuterFrame_e();
extern "C" void Edit_Del_e();
extern "C" void GUIButton_Interface_GetT();
extern "C" void ED2d_ParticleSystem_e();
extern "C" void Fire_e();
extern "C" void MoveTo_e();
extern "C" void Update_e();
extern "C" void Spr_SetHotSpot_e();
extern "C" void Spr_SetColor_e();
extern "C" void Spr_SetBlendMode_e();
extern "C" void Render_e();
extern "C" void FireAt_e();
extern "C" void Resource_AttachPack_e();
extern "C" void Resource_RemoveAllPacks_e();
extern "C" void Resource_Load_e();
extern "C" void CCollision_e();
extern "C" void Font_SetKerningHeight();
extern "C" void CColl_SetColor_e();
extern "C" void CColl_Move_e();
extern "C" void CColl_Render_e();
extern "C" void CColl_TextPoint_e();
extern "C" void GUISlider_Interface_Get();
extern "C" void GUISlider_SetMode_e();
extern "C" void GUISlider_SetValue_e();
extern "C" void GUISlider_GetValue_e();
extern "C" void CColl_SetPoint_e();
extern "C" void CColl_SetWH_e();
extern "C" void CColl_GetX_e();
extern "C" void CColl_GetY_e();
extern "C" void CColl_GetW_e();
extern "C" void CColl_GetH_e();
extern "C" void Resource_Load_Effect();
extern "C" void System_Snapshot_e();
extern "C" void System_FX_e();
extern "C" void Gui_MoveCtrl_e();
extern "C" void Gui_ShowCtrl_e();
extern "C" void Input_SetMousePos_e();
extern "C" void Input_GetMouseWheel_e();
extern "C" void Random_Int_e();
extern "C" void Random_Float_e();
extern "C" void System_Log_e();
extern "C" void Ini_SetInt_e();
extern "C" void Ini_GetInt_e();
extern "C" void Ini_SetFloat_e();
extern "C" void Ini_GetFloat_e();
extern "C" void Ini_SetString_e();
extern "C" void Ini_GetString_e();
extern "C" void ClearCookie_e();
extern "C" void GetPosition_e();
extern "C" void FontM_Interface_Get();
extern "C" void FontM_Initialize();
extern "C" void FontM_loadFont();
extern "C" void FontN_printf();
extern "C" void FontN_setWidth();
extern "C" void FontN_setHeight();
extern "C" void FontN_setSize();
extern "C" void FontN_setRotation();
extern "C" void FontN_setColor();
extern "C" void FontN_setBlendMode();
extern "C" void System_GetWidth_e();
extern "C" void System_GetHeight_e();
extern "C" void AVIFileInit_e();
extern "C" void AVI_update();
extern "C" void AVI_render();
extern "C" void AVI_del();
extern "C" void AVI_Getstate();
extern "C" void Spr_GetWidth_e();
extern "C" void Spr_GetHeight_e();
extern "C" void Ani_GetFrames_e();
extern "C" void Ani_IsPlaying_e();
extern "C" void Ani_Stop_e();
extern "C" void Ani_Resume_e();
extern "C" void Mesh_Interface_Get();
extern "C" void Mesh_SetTexture_e();
extern "C" void Mesh_SetTextureRect_e();
extern "C" void Mesh_SetBlendMode_e();
extern "C" void Mesh_Clear_e();
extern "C" void Mesh_Render_e();
extern "C" void Mesh_SetDisplacement_e();
extern "C" void Mesh_SetColor_e();
extern "C" void Tran_Interface_Get();
extern "C" void Tran_IsComplete_e();
extern "C" void Tran_Tick_e();
extern "C" void Tran_Draw_e();
extern "C" void Ani_SetMode_e();
extern "C" void Ani_SetFrame_e();
extern "C" void Ani_GetSpeed_e();
extern "C" void System_Input_GetKey();
extern "C" void System_Input_GetKeyName();
extern "C" void System_Input_IsMouseOver();
extern "C" void System_Texture_Lock();
extern "C" void Draw_Circle_e();
extern "C" void Spr_Set_Z_e();
extern "C" void hFont_Interface_Get();
extern "C" void hFont_printf_e();
extern "C" void hFont_SetColor_e();
extern "C" void hFont_SetBlendMode_e();
extern "C" void hFont_SetScale_e();
extern "C" void hFont_SetRotation_e();
extern "C" void hFont_SetSpacing_e();
extern "C" void hFont_SetTracking_e();
extern "C" void Set_Emission_e();
extern "C" void Set_Lifetime_e();
extern "C" void Set_fParticleLifeMin_e();
extern "C" void Set_fParticleLifeMax_e();
extern "C" void Set_fDirection_e();
extern "C" void Set_fSpread_e();
extern "C" void Set_fSizeStart_e();
extern "C" void Set_fSizeEnd_e();
extern "C" void Set_fSizeVar_e();
extern "C" void Set_ColorStart_e();
extern "C" void Set_ColorEnd_e();
extern "C" void Set_sprite_e();
extern "C" void Set_fGravityMin_e();
extern "C" void Set_fGravityMax_e();
extern "C" void Set_fSpeedMin_e();
extern "C" void Set_fSpeedMax_e();
extern "C" void Spr_RenderStretch_e();
extern "C" void System_Target_Create();
extern "C" void System_Target_GetTexture();
extern "C" void Spr_GetTexture_e();
extern "C" void Font_GetCharacterWidth();
extern "C" void Font_GetTextWidth();
extern "C" void Font_GetTextHeight();
extern "C" void Font_Set_Z_e();
extern "C" void SetFocus_e();
extern "C" void KillFocus_e();
extern "C" void GetFocus_e();
extern "C" void FontN_Set_Z_e();
extern "C" void SetPassWord_e();
extern "C" void Resource_Load_txt();
extern "C" void Button_Set_Z_e();
extern "C" void Channel_SetVolume_e();
extern "C" void Channel_SetPitch_e();
extern "C" void Channel_GetLength_e();
extern "C" void Channel_GetPos_e();
extern "C" void Channel_SetPos_e();
extern "C" void Edgame_RES_Get();
extern "C" void Edgame_RES_GetSprite();
extern "C" void Edgame_RES_GetTexture();
extern "C" void Edgame_RES_GetAnimation();
extern "C" void Edgame_RES_GetEffect();
extern "C" void GUISlider_MouseMove_e();
extern "C" void GUISlider_MouseLButton_e();
extern "C" void D2D_GetQuad_e();
extern "C" void Gfx_RenderQuad_e();
extern "C" void D2D_Triple_e();
extern "C" void Gfx_RenderTriple_e();
extern "C" void Gfx_SetTransform_e();
extern "C" void Random_Seed_e();
extern "C" void FontN_getStringWidth();
extern "C" void FontN_getStringHeight();
extern "C" void FontN_Unload();
extern "C" void Gfx_GetTexture_e();
extern "C" void Set_Stop_e();
extern "C" void GUISlider_SetColor_e();
extern "C" void SetBGcolor_e();
extern "C" void GUISlider_SetZ_e();
extern "C" void Edit_SetZ_e();
extern "C" void Effect_Load_c_e();
extern "C" void Del_Particle();
extern "C" void D2DFlash_Get();
extern "C" void D2DFlash_Start();
extern "C" void D2DFlash_Del();
extern "C" void D2DFlash_Update();
extern "C" void D2DFlash_Render();
extern "C" void Font_SetBlendMode_e();
extern "C" void D2DF_Interface_Get();
extern "C" void Font_Printf();
extern "C" void D2DF_SetColor();
extern "C" void D2DF_Del();
extern "C" void D2DF_RenderEx();
extern "C" void D2DF_SetKerningHeight();
extern "C" void D2DF_GetTextWidth();
extern "C" void D2DF_GetTextHeight();
extern "C" void GUISlider_SetColor_e();
extern "C" void D2DF_Set_Z();
extern "C" void Font_SetKerningHeight();
extern "C" void Font_SetKerningWidth();
extern "C" void Spr_SetFlip();
extern "C" void Spr_Get_ColorD();
extern "C" void Spr_Set_ColorD();
extern "C" void ED_GETA();
extern "C" void ED_GETR();
extern "C" void ED_GETG();
extern "C" void ED_GETB();
extern "C" void Edit_SetNumCharOnly_e();
extern "C" void Texture_Get_ColorD();
extern "C" void GetParticlesAlive_e();
extern "C" void CheckAll_e();
extern "C" void D2DFlash_Pause();
extern "C" void D2DFlash_IsPlaying();
extern "C" void D2DFlash_SetLoopPlay();

#endif // !defined(D2SL_D2D_SUPP_H_0000292E_INCLUDED_)