// 函数: sub_413510
// 地址: 0x413510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3c88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = GetScrollPos(arg1[3], SB_VERT)
arg1[0x1c] = divs.dp.d(sx.q(arg3 u>> 0x10), arg1[0x16] + arg1[0x15]) + eax_3
InvalidateRect(arg2, nullptr, 1)
struct win32only::CMenu::VTable* const var_18 = &win32only::CMenu::`vftable'
int32_t var_4 = 0
char var_10 = 1
HMENU hMenu = CreatePopupMenu()
HMENU hMenu_1 = hMenu

if (hMenu != 0)
    if (arg1[0x1c] s>= 0)
        int32_t eax_8 = (*(*arg1 + 0x90))(eax_2)
        
        if (arg1[0x1c] s< eax_8)
            AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c7c, 0x6da39c)
            AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c72, 0x6da3b0)
            AppendMenuA(hMenu, MF_SEPARATOR, 0, nullptr)
            AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c7d, 0x6da3c4)
    
    AppendMenuA(hMenu, MF_BYCOMMAND, 0x9c73, 0x6da3d0)
    POINT point
    GetCursorPos(&point)
    TrackPopupMenu(hMenu, TPM_RIGHTBUTTON, point.x, point.y, 0, 
        GetParent(GetParent(GetParent(arg2))), nullptr)
    DestroyMenu(hMenu)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
