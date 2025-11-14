// 函数: sub_680f20
// 地址: 0x680f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0d73
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CTabWindow::VTable** result = arg1
struct dpparts::CWindow::dpparts::CTabWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_684d60(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpparts::CTabWindow::`vftable'{for `dpparts::CWindow'}
result[0xb] = 0x18
result[0xc] = 8
result[0xd] = 0xc
result[0xe] = &dpparts::CMouse::`vftable'
__builtin_memset(&result[0xf], 0, 0x15)
var_4.b = 1
result[0x15] = 0
result[0x16] = 0
sub_670af0(&result[0x17])
result[0x37] = 0
result[0x38] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
