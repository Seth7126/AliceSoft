// 函数: sub_652ae0
// 地址: 0x652ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cee58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CChildWindow::VTable** result = arg1
struct dpparts::CWindow::dpparts::CChildWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_684d60(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpparts::CChildWindow::`vftable'{for `dpparts::CWindow'}
result[0xb] = 8
result[0xc] = 0xc
result[0xd] = 0
result[0xe] = 0
sub_671970(&result[0xf])
result[0x30] = &dpparts::CMouse::`vftable'
__builtin_memset(&result[0x31], 0, 0x15)
result[0x38] = 0
result[0x39] = 0
result[0x3a] = 1
result[0x3b] = 0
result[0x3c] = 0
result[0x3d].b = 1
result[0x37] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0x3f], 0, 0x14)
result[0x44].b = 1
result[0x3e] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
result[0x45] = 0
result[0x46] = 0
result[0x47] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
