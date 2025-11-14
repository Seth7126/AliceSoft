// 函数: sub_675820
// 地址: 0x675820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d030e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CPartsWindow::VTable** result = arg1
struct dpparts::CWindow::dpparts::CPartsWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_684d60(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpparts::CPartsWindow::`vftable'{for `dpparts::CWindow'}
result[0xb] = 8
result[0xc] = 0xc
result[0xd] = 0x18
result[0xe] = 0
result[0xf] = 0
result[0x10] = 0
result[0x11] = 0
result[0x17] = 0xf
result[0x16] = 0
result[0x12].b = 0
sub_402110(&result[0x12], 0x6da8f7, nullptr)
var_4.b = 1
result[0x18] = 0
result[0x19] = 0
sub_670af0(&result[0x1a])
var_4.b = 2
sub_671970(&result[0x3a])
result[0x5b] = &dpparts::CMouse::`vftable'
__builtin_memset(&result[0x5c], 0, 0x15)
result[0x63] = 0
result[0x64] = 0
result[0x65] = 1
result[0x66] = 0
result[0x67] = 0
result[0x68].b = 1
result[0x62] = &dpparts::CGuiVScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0x6a], 0, 0x14)
result[0x6f].b = 1
result[0x69] = &dpparts::CGuiHScrollBar::`vftable'{for `dpparts::CGuiScrollBar'}
__builtin_memset(&result[0x70], 0, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
