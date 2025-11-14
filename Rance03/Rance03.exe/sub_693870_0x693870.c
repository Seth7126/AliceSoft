// 函数: sub_693870
// 地址: 0x693870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0bcb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CSplitWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CSplitWindow::VTable** var_10_1 = arg1
*arg1 = &dpsound::CSplitWindow::`vftable'
__builtin_memset(&arg1[1], 0, 0x2f)
arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
int32_t var_4 = 0
arg1[0x13] = 0xffffff
__builtin_memset(&arg1[0x14], 0, 0x18)
arg1[0x18] = sub_42f580()
__builtin_memset(&arg1[0x1a], 0, 0x30)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
