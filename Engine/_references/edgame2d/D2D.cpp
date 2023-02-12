/*******************************************************************************
	Generated by: DLL to C version 3.04
	Date: 2022-10-17
	Description: The implementation code for D2D.dll.
	Website: http://www.dll-decompiler.com
	Technical Support: support@dll-decompiler.com
*******************************************************************************/

#include "stdafx.h"
#include "D2D.h"


HMODULE g_hD2D;
BOOL (WINAPI *D2D_DllEntryPoint)(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);

void* __stdcall D2D_RVA(DWORD rvaAddr)
{
	return &D2DData[rvaAddr];
}

BOOL D2D_Init()
{
	HMODULE hDll;
	DWORD oldProtect;
	void (*fInitData)(void*);

	oldProtect = PAGE_EXECUTE_READWRITE;
	VirtualProtect(D2DData,sizeof(D2DData),PAGE_EXECUTE_READWRITE,&oldProtect);

	hDll = ::LoadLibraryA("KERNEL32.DLL");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755B4) = ::GetProcAddress(hDll,"LoadLibraryA");
	if(!*(FARPROC*)D2D_RVA(0x1755B4))
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755B8) = ::GetProcAddress(hDll,"GetProcAddress");
	if(!*(FARPROC*)D2D_RVA(0x1755B8))
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755BC) = ::GetProcAddress(hDll,"VirtualProtect");
	if(!*(FARPROC*)D2D_RVA(0x1755BC))
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755C0) = ::GetProcAddress(hDll,"VirtualAlloc");
	if(!*(FARPROC*)D2D_RVA(0x1755C0))
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755C4) = ::GetProcAddress(hDll,"VirtualFree");
	if(!*(FARPROC*)D2D_RVA(0x1755C4))
		return FALSE;

	hDll = ::LoadLibraryA("ADVAPI32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755CC) = ::GetProcAddress(hDll,"RegOpenKeyA");
	if(!*(FARPROC*)D2D_RVA(0x1755CC))
		return FALSE;

	hDll = ::LoadLibraryA("AVIFIL32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755D4) = ::GetProcAddress(hDll,"AVIFileInit");
	if(!*(FARPROC*)D2D_RVA(0x1755D4))
		return FALSE;

	hDll = ::LoadLibraryA("d3d8.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755DC) = ::GetProcAddress(hDll,"Direct3DCreate8");
	if(!*(FARPROC*)D2D_RVA(0x1755DC))
		return FALSE;

	hDll = ::LoadLibraryA("GDI32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755E4) = ::GetProcAddress(hDll,"DeleteDC");
	if(!*(FARPROC*)D2D_RVA(0x1755E4))
		return FALSE;

	hDll = ::LoadLibraryA("ole32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755EC) = ::GetProcAddress(hDll,"CoInitialize");
	if(!*(FARPROC*)D2D_RVA(0x1755EC))
		return FALSE;

	hDll = ::LoadLibraryA("OLEAUT32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755F4) = ::GetProcAddress(hDll,(LPCSTR)0x9);
	if(!*(FARPROC*)D2D_RVA(0x1755F4))
		return FALSE;

	hDll = ::LoadLibraryA("SHELL32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x1755FC) = ::GetProcAddress(hDll,"ShellExecuteA");
	if(!*(FARPROC*)D2D_RVA(0x1755FC))
		return FALSE;

	hDll = ::LoadLibraryA("USER32.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x175604) = ::GetProcAddress(hDll,"GetDC");
	if(!*(FARPROC*)D2D_RVA(0x175604))
		return FALSE;

	hDll = ::LoadLibraryA("WINMM.dll");
	if(!hDll)
		return FALSE;
	*(FARPROC*)D2D_RVA(0x17560C) = ::GetProcAddress(hDll,"timeGetTime");
	if(!*(FARPROC*)D2D_RVA(0x17560C))
		return FALSE;

	*(FARPROC*)&fInitData = (FARPROC)&D2D_InitData[0];
	fInitData(D2D_RVA);

	*(FARPROC*)&D2D_DllEntryPoint = (FARPROC)D2D_RVA(0x1743D0);
	return TRUE;
}

extern "C" __declspec(naked) void _Interface_Get(){__asm push offset D2DData + 0x2D1B0 __asm ret}
extern "C" __declspec(naked) INT __stdcall D2dCreate(INT){__asm push offset D2DData + 0x2D160 __asm ret}
extern "C" __declspec(naked) void System_SetState_b(){__asm push offset D2DData + 0x2D1F0 __asm ret}
extern "C" __declspec(naked) void System_Initiate_e(){__asm push offset D2DData + 0x2D810 __asm ret}
extern "C" __declspec(naked) void System_Start_e(){__asm push offset D2DData + 0x2D870 __asm ret}
extern "C" __declspec(naked) void System_Shutdown_e(){__asm push offset D2DData + 0x2D8F0 __asm ret}
extern "C" __declspec(naked) void Release_e(){__asm push offset D2DData + 0x2D940 __asm ret}
extern "C" __declspec(naked) void System_SetState_f(){__asm push offset D2DData + 0x2D9A0 __asm ret}
extern "C" __declspec(naked) void System_SetState_s(){__asm push offset D2DData + 0x2DA00 __asm ret}
extern "C" __declspec(naked) void Input_GetKeyState_e(){__asm push offset D2DData + 0x2DA60 __asm ret}
extern "C" __declspec(naked) void System_SetState_i(){__asm push offset D2DData + 0x2DAC0 __asm ret}
extern "C" __declspec(naked) void Gfx_BeginScene_e(){__asm push offset D2DData + 0x19350 __asm ret}
extern "C" __declspec(naked) void Gfx_EndScene_e(){__asm push offset D2DData + 0x193B0 __asm ret}
extern "C" __declspec(naked) void Gfx_Clear_e(){__asm push offset D2DData + 0x19400 __asm ret}
extern "C" __declspec(naked) void Timer_GetFPS_e(){__asm push offset D2DData + 0x313C0 __asm ret}
extern "C" __declspec(naked) void Texture_Load_e(){__asm push offset D2DData + 0x2E1D0 __asm ret}
extern "C" __declspec(naked) void Texture_Free_e(){__asm push offset D2DData + 0x2E290 __asm ret}
extern "C" __declspec(naked) void Timer_GetDelta_e(){__asm push offset D2DData + 0x31420 __asm ret}
extern "C" __declspec(naked) void Font_Interface_Get(){__asm push offset D2DData + 0x17B30 __asm ret}
extern "C" __declspec(naked) void Font_Printf(){__asm push offset D2DData + 0x17C00 __asm ret}
extern "C" __declspec(naked) void Font_Del(){__asm push offset D2DData + 0x17D30 __asm ret}
extern "C" __declspec(naked) void Font_SetColor(){__asm push offset D2DData + 0x187B0 __asm ret}
extern "C" __declspec(naked) void Spr_Interface_Get(){__asm push offset D2DData + 0x26100 __asm ret}
extern "C" __declspec(naked) void Spr_Render_e(){__asm push offset D2DData + 0x26260 __asm ret}
extern "C" __declspec(naked) void Spr_Del(){__asm push offset D2DData + 0x262B0 __asm ret}
extern "C" __declspec(naked) void Ani_Interface_Get(){__asm push offset D2DData + 0x1DCD0 __asm ret}
extern "C" __declspec(naked) void Ani_Play_e(){__asm push offset D2DData + 0x1DE50 __asm ret}
extern "C" __declspec(naked) void Ani_Update_e(){__asm push offset D2DData + 0x1DE90 __asm ret}
extern "C" __declspec(naked) void Spr_Render_e(){__asm push offset D2DData + 0x26260 __asm ret}
extern "C" __declspec(naked) void Ani_GetFrame_e(){__asm push offset D2DData + 0x1E1C0 __asm ret}
extern "C" __declspec(naked) void Input_GetMousePos_e(){__asm push offset D2DData + 0x282E0 __asm ret}
extern "C" __declspec(naked) void Ani_SetFrames_e(){__asm push offset D2DData + 0x1E240 __asm ret}
extern "C" __declspec(naked) void Ani_SetTexture_e(){__asm push offset D2DData + 0x1E300 __asm ret}
extern "C" __declspec(naked) void Ani_SetSpeed_e(){__asm push offset D2DData + 0x1E3C0 __asm ret}
extern "C" __declspec(naked) void Ani_RenderEx_e(){__asm push offset D2DData + 0x1E450 __asm ret}
extern "C" __declspec(naked) void Input_KeyDown_e(){__asm push offset D2DData + 0x28330 __asm ret}
extern "C" __declspec(naked) void Input_KeyUp_e(){__asm push offset D2DData + 0x28390 __asm ret}
extern "C" __declspec(naked) void Timer_GetTime_e(){__asm push offset D2DData + 0x313F0 __asm ret}
extern "C" __declspec(naked) void Texture_Create_e(){__asm push offset D2DData + 0x2E330 __asm ret}
extern "C" __declspec(naked) void GUIButton_Interface_Get(){__asm push offset D2DData + 0x21EA0 __asm ret}
extern "C" __declspec(naked) void Texture_GetHeight_e(){__asm push offset D2DData + 0x2E3F0 __asm ret}
extern "C" __declspec(naked) void Texture_GetWidth_e(){__asm push offset D2DData + 0x2E390 __asm ret}
extern "C" __declspec(naked) void Button_SetMode_e(){__asm push offset D2DData + 0x21F50 __asm ret}
extern "C" __declspec(naked) void Button_SetState_e(){__asm push offset D2DData + 0x21FE0 __asm ret}
extern "C" __declspec(naked) void Button_GetState_e(){__asm push offset D2DData + 0x22070 __asm ret}
extern "C" __declspec(naked) void Gui_Interface_Get(){__asm push offset D2DData + 0x20B20 __asm ret}
extern "C" __declspec(naked) void Gui_AddCtrl_e(){__asm push offset D2DData + 0x20BA0 __asm ret}
extern "C" __declspec(naked) void Gui_Render_e(){__asm push offset D2DData + 0x20BE0 __asm ret}
extern "C" __declspec(naked) void Gui_Update_e(){__asm push offset D2DData + 0x20C20 __asm ret}
extern "C" __declspec(naked) void Gui_GetCtrl_e(){__asm push offset D2DData + 0x20C70 __asm ret}
extern "C" __declspec(naked) void Spr_SetTexture_e(){__asm push offset D2DData + 0x26330 __asm ret}
extern "C" __declspec(naked) void Spr_SetTextureRect_e(){__asm push offset D2DData + 0x26370 __asm ret}
extern "C" __declspec(naked) void System_GetErrorMessage(){__asm push offset D2DData + 0x2DB20 __asm ret}
extern "C" __declspec(naked) void Texture_Load_c_e(){__asm push offset D2DData + 0x2E230 __asm ret}
extern "C" __declspec(naked) void Gfx_RenderLine_e(){__asm push offset D2DData + 0x194E0 __asm ret}
extern "C" __declspec(naked) void ARGB_e(){__asm push offset D2DData + 0x2E2F0 __asm ret}
extern "C" __declspec(naked) void Ani_Del_e(){__asm push offset D2DData + 0x1E0E0 __asm ret}
extern "C" __declspec(naked) void Gui_Del_e(){__asm push offset D2DData + 0x20CB0 __asm ret}
extern "C" __declspec(naked) void Effect_Load_e(){__asm push offset D2DData + 0x2AA80 __asm ret}
extern "C" __declspec(naked) void Effect_Play_e(){__asm push offset D2DData + 0x2AB40 __asm ret}
extern "C" __declspec(naked) void Effect_PlayEx_e(){__asm push offset D2DData + 0x2ABA0 __asm ret}
extern "C" __declspec(naked) void Music_Load_e(){__asm push offset D2DData + 0x2B030 __asm ret}
extern "C" __declspec(naked) void Music_Play_e(){__asm push offset D2DData + 0x2B090 __asm ret}
extern "C" __declspec(naked) void Effect_Free_e(){__asm push offset D2DData + 0x2B100 __asm ret}
extern "C" __declspec(naked) void Channel_Pause_e(){__asm push offset D2DData + 0x2BEF0 __asm ret}
extern "C" __declspec(naked) void Channel_Resume_e(){__asm push offset D2DData + 0x2C130 __asm ret}
extern "C" __declspec(naked) void Channel_Stop_e(){__asm push offset D2DData + 0x2C190 __asm ret}
extern "C" __declspec(naked) void Channel_PauseAll_e(){__asm push offset D2DData + 0x2BE00 __asm ret}
extern "C" __declspec(naked) void Channel_ResumeAll_e(){__asm push offset D2DData + 0x2BE50 __asm ret}
extern "C" __declspec(naked) void Channel_StopAll_e(){__asm push offset D2DData + 0x2BEA0 __asm ret}
extern "C" __declspec(naked) void Channel_IsPlaying_e(){__asm push offset D2DData + 0x2BDA0 __asm ret}
extern "C" __declspec(naked) void System_SetState_h(){__asm push offset D2DData + 0x2F7B0 __asm ret}
extern "C" __declspec(naked) void System_GetState_h(){__asm push offset D2DData + 0x2FDE0 __asm ret}
extern "C" __declspec(naked) void Edit_Interface_Get(){__asm push offset D2DData + 0x131A0 __asm ret}
extern "C" __declspec(naked) void Edit_Updata_e(){__asm push offset D2DData + 0x13240 __asm ret}
extern "C" __declspec(naked) void Edit_Render_e(){__asm push offset D2DData + 0x13390 __asm ret}
extern "C" __declspec(naked) void Edit_InsertCookie_e(){__asm push offset D2DData + 0x133E0 __asm ret}
extern "C" __declspec(naked) void Edit_GetCookie_e(){__asm push offset D2DData + 0x13420 __asm ret}
extern "C" __declspec(naked) void Edit_SetNumOnly_e(){__asm push offset D2DData + 0x13460 __asm ret}
extern "C" __declspec(naked) void Edit_ShowOuterFrame_e(){__asm push offset D2DData + 0x13610 __asm ret}
extern "C" __declspec(naked) void Edit_Del_e(){__asm push offset D2DData + 0x136A0 __asm ret}
extern "C" __declspec(naked) void GUIButton_Interface_GetT(){__asm push offset D2DData + 0x220E0 __asm ret}
extern "C" __declspec(naked) void ED2d_ParticleSystem_e(){__asm push offset D2DData + 0x235D0 __asm ret}
extern "C" __declspec(naked) void Fire_e(){__asm push offset D2DData + 0x23660 __asm ret}
extern "C" __declspec(naked) void MoveTo_e(){__asm push offset D2DData + 0x23810 __asm ret}
extern "C" __declspec(naked) void Update_e(){__asm push offset D2DData + 0x237C0 __asm ret}
extern "C" __declspec(naked) void Spr_SetHotSpot_e(){__asm push offset D2DData + 0x26480 __asm ret}
extern "C" __declspec(naked) void Spr_SetColor_e(){__asm push offset D2DData + 0x264D0 __asm ret}
extern "C" __declspec(naked) void Spr_SetBlendMode_e(){__asm push offset D2DData + 0x26520 __asm ret}
extern "C" __declspec(naked) void Render_e(){__asm push offset D2DData + 0x23860 __asm ret}
extern "C" __declspec(naked) void FireAt_e(){__asm push offset D2DData + 0x238A0 __asm ret}
extern "C" __declspec(naked) void Resource_AttachPack_e(){__asm push offset D2DData + 0x2D250 __asm ret}
extern "C" __declspec(naked) void Resource_RemoveAllPacks_e(){__asm push offset D2DData + 0x2D2B0 __asm ret}
extern "C" __declspec(naked) void Resource_Load_e(){__asm push offset D2DData + 0x29D60 __asm ret}
extern "C" __declspec(naked) void CCollision_e(){__asm push offset D2DData + 0x2820 __asm ret}
extern "C" __declspec(naked) void Font_SetKerningHeight(){__asm push offset D2DData + 0x33BB0 __asm ret}
extern "C" __declspec(naked) void CColl_SetColor_e(){__asm push offset D2DData + 0x2910 __asm ret}
extern "C" __declspec(naked) void CColl_Move_e(){__asm push offset D2DData + 0x2950 __asm ret}
extern "C" __declspec(naked) void CColl_Render_e(){__asm push offset D2DData + 0x29A0 __asm ret}
extern "C" __declspec(naked) void CColl_TextPoint_e(){__asm push offset D2DData + 0x28C0 __asm ret}
extern "C" __declspec(naked) void GUISlider_Interface_Get(){__asm push offset D2DData + 0x22900 __asm ret}
extern "C" __declspec(naked) void GUISlider_SetMode_e(){__asm push offset D2DData + 0x229D0 __asm ret}
extern "C" __declspec(naked) void GUISlider_SetValue_e(){__asm push offset D2DData + 0x22A70 __asm ret}
extern "C" __declspec(naked) void GUISlider_GetValue_e(){__asm push offset D2DData + 0x22AC0 __asm ret}
extern "C" __declspec(naked) void CColl_SetPoint_e(){__asm push offset D2DData + 0x2D50 __asm ret}
extern "C" __declspec(naked) void CColl_SetWH_e(){__asm push offset D2DData + 0x2DA0 __asm ret}
extern "C" __declspec(naked) void CColl_GetX_e(){__asm push offset D2DData + 0x2DF0 __asm ret}
extern "C" __declspec(naked) void CColl_GetY_e(){__asm push offset D2DData + 0x2E20 __asm ret}
extern "C" __declspec(naked) void CColl_GetW_e(){__asm push offset D2DData + 0x2E50 __asm ret}
extern "C" __declspec(naked) void CColl_GetH_e(){__asm push offset D2DData + 0x2E80 __asm ret}
extern "C" __declspec(naked) void Resource_Load_Effect(){__asm push offset D2DData + 0x29E40 __asm ret}
extern "C" __declspec(naked) void System_Snapshot_e(){__asm push offset D2DData + 0x2D7C0 __asm ret}
extern "C" __declspec(naked) void System_FX_e(){__asm push offset D2DData + 0x2D630 __asm ret}
extern "C" __declspec(naked) void Gui_MoveCtrl_e(){__asm push offset D2DData + 0x21020 __asm ret}
extern "C" __declspec(naked) void Gui_ShowCtrl_e(){__asm push offset D2DData + 0x21070 __asm ret}
extern "C" __declspec(naked) void Input_SetMousePos_e(){__asm push offset D2DData + 0x2DB70 __asm ret}
extern "C" __declspec(naked) void Input_GetMouseWheel_e(){__asm push offset D2DData + 0x2DC30 __asm ret}
extern "C" __declspec(naked) void Random_Int_e(){__asm push offset D2DData + 0x2E000 __asm ret}
extern "C" __declspec(naked) void Random_Float_e(){__asm push offset D2DData + 0x2E060 __asm ret}
extern "C" __declspec(naked) void System_Log_e(){__asm push offset D2DData + 0x2DBD0 __asm ret}
extern "C" __declspec(naked) void Ini_SetInt_e(){__asm push offset D2DData + 0x2DC80 __asm ret}
extern "C" __declspec(naked) void Ini_GetInt_e(){__asm push offset D2DData + 0x2DCE0 __asm ret}
extern "C" __declspec(naked) void Ini_SetFloat_e(){__asm push offset D2DData + 0x2DD40 __asm ret}
extern "C" __declspec(naked) void Ini_GetFloat_e(){__asm push offset D2DData + 0x2DDA0 __asm ret}
extern "C" __declspec(naked) void Ini_SetString_e(){__asm push offset D2DData + 0x2DE00 __asm ret}
extern "C" __declspec(naked) void Ini_GetString_e(){__asm push offset D2DData + 0x2DE60 __asm ret}
extern "C" __declspec(naked) void ClearCookie_e(){__asm push offset D2DData + 0x13290 __asm ret}
extern "C" __declspec(naked) void GetPosition_e(){__asm push offset D2DData + 0x236A0 __asm ret}
extern "C" __declspec(naked) void FontM_Interface_Get(){__asm push offset D2DData + 0xF3C0 __asm ret}
extern "C" __declspec(naked) void FontM_Initialize(){__asm push offset D2DData + 0xF440 __asm ret}
extern "C" __declspec(naked) void FontM_loadFont(){__asm push offset D2DData + 0xF480 __asm ret}
extern "C" __declspec(naked) void FontN_printf(){__asm push offset D2DData + 0x7AD0 __asm ret}
extern "C" __declspec(naked) void FontN_setWidth(){__asm push offset D2DData + 0x7B60 __asm ret}
extern "C" __declspec(naked) void FontN_setHeight(){__asm push offset D2DData + 0x7BE0 __asm ret}
extern "C" __declspec(naked) void FontN_setSize(){__asm push offset D2DData + 0x7C60 __asm ret}
extern "C" __declspec(naked) void FontN_setRotation(){__asm push offset D2DData + 0x7CE0 __asm ret}
extern "C" __declspec(naked) void FontN_setColor(){__asm push offset D2DData + 0x7D70 __asm ret}
extern "C" __declspec(naked) void FontN_setBlendMode(){__asm push offset D2DData + 0x7E10 __asm ret}
extern "C" __declspec(naked) void System_GetWidth_e(){__asm push offset D2DData + 0x2DEC0 __asm ret}
extern "C" __declspec(naked) void System_GetHeight_e(){__asm push offset D2DData + 0x2DF10 __asm ret}
extern "C" __declspec(naked) void AVIFileInit_e(){__asm push offset D2DData + 0x2D300 __asm ret}
extern "C" __declspec(naked) void AVI_update(){__asm push offset D2DData + 0x2D440 __asm ret}
extern "C" __declspec(naked) void AVI_render(){__asm push offset D2DData + 0x2D4F0 __asm ret}
extern "C" __declspec(naked) void AVI_del(){__asm push offset D2DData + 0x2D540 __asm ret}
extern "C" __declspec(naked) void AVI_Getstate(){__asm push offset D2DData + 0x2130 __asm ret}
extern "C" __declspec(naked) void Spr_GetWidth_e(){__asm push offset D2DData + 0x261E0 __asm ret}
extern "C" __declspec(naked) void Spr_GetHeight_e(){__asm push offset D2DData + 0x26220 __asm ret}
extern "C" __declspec(naked) void Ani_GetFrames_e(){__asm push offset D2DData + 0x1E060 __asm ret}
extern "C" __declspec(naked) void Ani_IsPlaying_e(){__asm push offset D2DData + 0x1DFE0 __asm ret}
extern "C" __declspec(naked) void Ani_Stop_e(){__asm push offset D2DData + 0x1DEE0 __asm ret}
extern "C" __declspec(naked) void Ani_Resume_e(){__asm push offset D2DData + 0x1DF60 __asm ret}
extern "C" __declspec(naked) void Mesh_Interface_Get(){__asm push offset D2DData + 0x1EB30 __asm ret}
extern "C" __declspec(naked) void Mesh_SetTexture_e(){__asm push offset D2DData + 0x1EBC0 __asm ret}
extern "C" __declspec(naked) void Mesh_SetTextureRect_e(){__asm push offset D2DData + 0x1EC00 __asm ret}
extern "C" __declspec(naked) void Mesh_SetBlendMode_e(){__asm push offset D2DData + 0x1EC60 __asm ret}
extern "C" __declspec(naked) void Mesh_Clear_e(){__asm push offset D2DData + 0x1ECA0 __asm ret}
extern "C" __declspec(naked) void Mesh_Render_e(){__asm push offset D2DData + 0x1ECF0 __asm ret}
extern "C" __declspec(naked) void Mesh_SetDisplacement_e(){__asm push offset D2DData + 0x1ED40 __asm ret}
extern "C" __declspec(naked) void Mesh_SetColor_e(){__asm push offset D2DData + 0x1EDA0 __asm ret}
extern "C" __declspec(naked) void Tran_Interface_Get(){__asm push offset D2DData + 0x31480 __asm ret}
extern "C" __declspec(naked) void Tran_IsComplete_e(){__asm push offset D2DData + 0x31810 __asm ret}
extern "C" __declspec(naked) void Tran_Tick_e(){__asm push offset D2DData + 0x31850 __asm ret}
extern "C" __declspec(naked) void Tran_Draw_e(){__asm push offset D2DData + 0x31890 __asm ret}
extern "C" __declspec(naked) void Ani_SetMode_e(){__asm push offset D2DData + 0x1DD80 __asm ret}
extern "C" __declspec(naked) void Ani_SetFrame_e(){__asm push offset D2DData + 0x1E2C0 __asm ret}
extern "C" __declspec(naked) void Ani_GetSpeed_e(){__asm push offset D2DData + 0x1DDC0 __asm ret}
extern "C" __declspec(naked) void System_Input_GetKey(){__asm push offset D2DData + 0x2DF60 __asm ret}
extern "C" __declspec(naked) void System_Input_GetKeyName(){__asm push offset D2DData + 0x2E110 __asm ret}
extern "C" __declspec(naked) void System_Input_IsMouseOver(){__asm push offset D2DData + 0x2DFB0 __asm ret}
extern "C" __declspec(naked) void System_Texture_Lock(){__asm push offset D2DData + 0x2E170 __asm ret}
extern "C" __declspec(naked) void Draw_Circle_e(){__asm push offset D2DData + 0x199F0 __asm ret}
extern "C" __declspec(naked) void Spr_Set_Z_e(){__asm push offset D2DData + 0x27210 __asm ret}
extern "C" __declspec(naked) void hFont_Interface_Get(){__asm push offset D2DData + 0x1F800 __asm ret}
extern "C" __declspec(naked) void hFont_printf_e(){__asm push offset D2DData + 0x1F890 __asm ret}
extern "C" __declspec(naked) void hFont_SetColor_e(){__asm push offset D2DData + 0x1F8F0 __asm ret}
extern "C" __declspec(naked) void hFont_SetBlendMode_e(){__asm push offset D2DData + 0x1F930 __asm ret}
extern "C" __declspec(naked) void hFont_SetScale_e(){__asm push offset D2DData + 0x1F970 __asm ret}
extern "C" __declspec(naked) void hFont_SetRotation_e(){__asm push offset D2DData + 0x1FA00 __asm ret}
extern "C" __declspec(naked) void hFont_SetSpacing_e(){__asm push offset D2DData + 0x1FA90 __asm ret}
extern "C" __declspec(naked) void hFont_SetTracking_e(){__asm push offset D2DData + 0x1FB20 __asm ret}
extern "C" __declspec(naked) void Set_Emission_e(){__asm push offset D2DData + 0x238F0 __asm ret}
extern "C" __declspec(naked) void Set_Lifetime_e(){__asm push offset D2DData + 0x23920 __asm ret}
extern "C" __declspec(naked) void Set_fParticleLifeMin_e(){__asm push offset D2DData + 0x23950 __asm ret}
extern "C" __declspec(naked) void Set_fParticleLifeMax_e(){__asm push offset D2DData + 0x23980 __asm ret}
extern "C" __declspec(naked) void Set_fDirection_e(){__asm push offset D2DData + 0x239B0 __asm ret}
extern "C" __declspec(naked) void Set_fSpread_e(){__asm push offset D2DData + 0x239E0 __asm ret}
extern "C" __declspec(naked) void Set_fSizeStart_e(){__asm push offset D2DData + 0x23A10 __asm ret}
extern "C" __declspec(naked) void Set_fSizeEnd_e(){__asm push offset D2DData + 0x23B80 __asm ret}
extern "C" __declspec(naked) void Set_fSizeVar_e(){__asm push offset D2DData + 0x23BB0 __asm ret}
extern "C" __declspec(naked) void Set_ColorStart_e(){__asm push offset D2DData + 0x23BE0 __asm ret}
extern "C" __declspec(naked) void Set_ColorEnd_e(){__asm push offset D2DData + 0x23D60 __asm ret}
extern "C" __declspec(naked) void Set_sprite_e(){__asm push offset D2DData + 0x23DD0 __asm ret}
extern "C" __declspec(naked) void Set_fGravityMin_e(){__asm push offset D2DData + 0x23E00 __asm ret}
extern "C" __declspec(naked) void Set_fGravityMax_e(){__asm push offset D2DData + 0x23E30 __asm ret}
extern "C" __declspec(naked) void Set_fSpeedMin_e(){__asm push offset D2DData + 0x23E60 __asm ret}
extern "C" __declspec(naked) void Set_fSpeedMax_e(){__asm push offset D2DData + 0x23E90 __asm ret}
extern "C" __declspec(naked) void Spr_RenderStretch_e(){__asm push offset D2DData + 0x263D0 __asm ret}
extern "C" __declspec(naked) void System_Target_Create(){__asm push offset D2DData + 0x2D5D0 __asm ret}
extern "C" __declspec(naked) void System_Target_GetTexture(){__asm push offset D2DData + 0x2D490 __asm ret}
extern "C" __declspec(naked) void Spr_GetTexture_e(){__asm push offset D2DData + 0x26560 __asm ret}
extern "C" __declspec(naked) void Font_GetCharacterWidth(){__asm push offset D2DData + 0x17DB0 __asm ret}
extern "C" __declspec(naked) void Font_GetTextWidth(){__asm push offset D2DData + 0x17DF0 __asm ret}
extern "C" __declspec(naked) void Font_GetTextHeight(){__asm push offset D2DData + 0x17EC0 __asm ret}
extern "C" __declspec(naked) void Font_Set_Z_e(){__asm push offset D2DData + 0x18810 __asm ret}
extern "C" __declspec(naked) void SetFocus_e(){__asm push offset D2DData + 0x132D0 __asm ret}
extern "C" __declspec(naked) void KillFocus_e(){__asm push offset D2DData + 0x13310 __asm ret}
extern "C" __declspec(naked) void GetFocus_e(){__asm push offset D2DData + 0x13350 __asm ret}
extern "C" __declspec(naked) void FontN_Set_Z_e(){__asm push offset D2DData + 0x7EE0 __asm ret}
extern "C" __declspec(naked) void SetPassWord_e(){__asm push offset D2DData + 0x13580 __asm ret}
extern "C" __declspec(naked) void Resource_Load_txt(){__asm push offset D2DData + 0x29F20 __asm ret}
extern "C" __declspec(naked) void Button_Set_Z_e(){__asm push offset D2DData + 0x22180 __asm ret}
extern "C" __declspec(naked) void Channel_SetVolume_e(){__asm push offset D2DData + 0x2C070 __asm ret}
extern "C" __declspec(naked) void Channel_SetPitch_e(){__asm push offset D2DData + 0x2C0D0 __asm ret}
extern "C" __declspec(naked) void Channel_GetLength_e(){__asm push offset D2DData + 0x2BF50 __asm ret}
extern "C" __declspec(naked) void Channel_GetPos_e(){__asm push offset D2DData + 0x2C010 __asm ret}
extern "C" __declspec(naked) void Channel_SetPos_e(){__asm push offset D2DData + 0x2BFB0 __asm ret}
extern "C" __declspec(naked) void Edgame_RES_Get(){__asm push offset D2DData + 0x256D0 __asm ret}
extern "C" __declspec(naked) void Edgame_RES_GetSprite(){__asm push offset D2DData + 0x25750 __asm ret}
extern "C" __declspec(naked) void Edgame_RES_GetTexture(){__asm push offset D2DData + 0x257D0 __asm ret}
extern "C" __declspec(naked) void Edgame_RES_GetAnimation(){__asm push offset D2DData + 0x25790 __asm ret}
extern "C" __declspec(naked) void Edgame_RES_GetEffect(){__asm push offset D2DData + 0x25820 __asm ret}
extern "C" __declspec(naked) void GUISlider_MouseMove_e(){__asm push offset D2DData + 0x22B30 __asm ret}
extern "C" __declspec(naked) void GUISlider_MouseLButton_e(){__asm push offset D2DData + 0x22B90 __asm ret}
extern "C" __declspec(naked) void D2D_GetQuad_e(){__asm push offset D2DData + 0x19870 __asm ret}
extern "C" __declspec(naked) void Gfx_RenderQuad_e(){__asm push offset D2DData + 0x19560 __asm ret}
extern "C" __declspec(naked) void D2D_Triple_e(){__asm push offset D2DData + 0x19940 __asm ret}
extern "C" __declspec(naked) void Gfx_RenderTriple_e(){__asm push offset D2DData + 0x19710 __asm ret}
extern "C" __declspec(naked) void Gfx_SetTransform_e(){__asm push offset D2DData + 0x19460 __asm ret}
extern "C" __declspec(naked) void Random_Seed_e(){__asm push offset D2DData + 0x2E0C0 __asm ret}
extern "C" __declspec(naked) void FontN_getStringWidth(){__asm push offset D2DData + 0x7F30 __asm ret}
extern "C" __declspec(naked) void FontN_getStringHeight(){__asm push offset D2DData + 0x7FB0 __asm ret}
extern "C" __declspec(naked) void FontN_Unload(){__asm push offset D2DData + 0x8030 __asm ret}
extern "C" __declspec(naked) void Gfx_GetTexture_e(){__asm push offset D2DData + 0x1B0F0 __asm ret}
extern "C" __declspec(naked) void Set_Stop_e(){__asm push offset D2DData + 0x23770 __asm ret}
extern "C" __declspec(naked) void GUISlider_SetColor_e(){__asm push offset D2DData + 0x33DB0 __asm ret}
extern "C" __declspec(naked) void SetBGcolor_e(){__asm push offset D2DData + 0x13780 __asm ret}
extern "C" __declspec(naked) void GUISlider_SetZ_e(){__asm push offset D2DData + 0x22BE0 __asm ret}
extern "C" __declspec(naked) void Edit_SetZ_e(){__asm push offset D2DData + 0x137C0 __asm ret}
extern "C" __declspec(naked) void Effect_Load_c_e(){__asm push offset D2DData + 0x2AAE0 __asm ret}
extern "C" __declspec(naked) void Del_Particle(){__asm push offset D2DData + 0x23A40 __asm ret}
extern "C" __declspec(naked) void D2DFlash_Get(){__asm push offset D2DData + 0x6D00 __asm ret}
extern "C" __declspec(naked) void D2DFlash_Start(){__asm push offset D2DData + 0x6D80 __asm ret}
extern "C" __declspec(naked) void D2DFlash_Del(){__asm push offset D2DData + 0x6DD0 __asm ret}
extern "C" __declspec(naked) void D2DFlash_Update(){__asm push offset D2DData + 0x6E10 __asm ret}
extern "C" __declspec(naked) void D2DFlash_Render(){__asm push offset D2DData + 0x6E60 __asm ret}
extern "C" __declspec(naked) void Font_SetBlendMode_e(){__asm push offset D2DData + 0x17F90 __asm ret}
extern "C" __declspec(naked) void D2DF_Interface_Get(){__asm push offset D2DData + 0x33980 __asm ret}
extern "C" __declspec(naked) void Font_Printf(){__asm push offset D2DData + 0x17C00 __asm ret}
extern "C" __declspec(naked) void D2DF_SetColor(){__asm push offset D2DData + 0x33AA0 __asm ret}
extern "C" __declspec(naked) void D2DF_Del(){__asm push offset D2DData + 0x33B00 __asm ret}
extern "C" __declspec(naked) void D2DF_RenderEx(){__asm push offset D2DData + 0x339D0 __asm ret}
extern "C" __declspec(naked) void D2DF_SetKerningHeight(){__asm push offset D2DData + 0x33B50 __asm ret}
extern "C" __declspec(naked) void D2DF_GetTextWidth(){__asm push offset D2DData + 0x33C10 __asm ret}
extern "C" __declspec(naked) void D2DF_GetTextHeight(){__asm push offset D2DData + 0x33CE0 __asm ret}
extern "C" __declspec(naked) void GUISlider_SetColor_e(){__asm push offset D2DData + 0x33DB0 __asm ret}
extern "C" __declspec(naked) void D2DF_Set_Z(){__asm push offset D2DData + 0x33E00 __asm ret}
extern "C" __declspec(naked) void Font_SetKerningHeight(){__asm push offset D2DData + 0x33BB0 __asm ret}
extern "C" __declspec(naked) void Font_SetKerningWidth(){__asm push offset D2DData + 0x17CD0 __asm ret}
extern "C" __declspec(naked) void Spr_SetFlip(){__asm push offset D2DData + 0x26430 __asm ret}
extern "C" __declspec(naked) void Spr_Get_ColorD(){__asm push offset D2DData + 0x274F0 __asm ret}
extern "C" __declspec(naked) void Spr_Set_ColorD(){__asm push offset D2DData + 0x27540 __asm ret}
extern "C" __declspec(naked) void ED_GETA(){__asm push offset D2DData + 0x2D080 __asm ret}
extern "C" __declspec(naked) void ED_GETR(){__asm push offset D2DData + 0x2D0B0 __asm ret}
extern "C" __declspec(naked) void ED_GETG(){__asm push offset D2DData + 0x2D0F0 __asm ret}
extern "C" __declspec(naked) void ED_GETB(){__asm push offset D2DData + 0x2D130 __asm ret}
extern "C" __declspec(naked) void Edit_SetNumCharOnly_e(){__asm push offset D2DData + 0x134F0 __asm ret}
extern "C" __declspec(naked) void Texture_Get_ColorD(){__asm push offset D2DData + 0x2E450 __asm ret}
extern "C" __declspec(naked) void GetParticlesAlive_e(){__asm push offset D2DData + 0x236F0 __asm ret}
extern "C" __declspec(naked) void CheckAll_e(){__asm push offset D2DData + 0x13810 __asm ret}
extern "C" __declspec(naked) void D2DFlash_Pause(){__asm push offset D2DData + 0x6EB0 __asm ret}
extern "C" __declspec(naked) void D2DFlash_IsPlaying(){__asm push offset D2DData + 0x6EF0 __asm ret}
extern "C" __declspec(naked) void D2DFlash_SetLoopPlay(){__asm push offset D2DData + 0x6F30 __asm ret}

/* Replace the default DllMain in dllmain.cpp */
BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	if(ul_reason_for_call==DLL_PROCESS_ATTACH)
	{
		g_hD2D = hModule;
		D2D_Init();
	}

	return D2D_DllEntryPoint(hModule,ul_reason_for_call,lpReserved);
}
