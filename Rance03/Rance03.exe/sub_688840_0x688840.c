// 函数: sub_688840
// 地址: 0x688840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d12b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CWindow::dpsound::COptionWindow::VTable** result = arg1
struct dpsound::CWindow::dpsound::COptionWindow::VTable** result_1 = result
int32_t var_1c = arg7
void var_24
sub_695db0(arg1, arg2, arg3, 8, arg4, arg5, arg6, 0, var_24)
int32_t var_4 = 0
*result = &dpsound::COptionWindow::`vftable'{for `dpsound::CWindow'}
result[0xb] = 0xf
result[0xc] = 0x10
result[0xd] = &dpsound::CMouse::`vftable'
__builtin_memset(&result[0xe], 0, 0x15)
__builtin_memset(&result[0x15], 0, 0x18)
result[0x1b].b = 1
result[0x14] = &dpsound::CHScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
result[0x1d] = 0
result[0x1e] = 0
result[0x1f] = 0
result[0x20] = 1
result[0x21] = 0
result[0x22] = 0
result[0x23].b = 1
result[0x1c] = &dpsound::CVScrollBar::`vftable'{for `dpsound::CParamScrollBar'}
var_4.b = 3
sub_695a00(&result[0x24])
__builtin_memset(&result[0x3e], 0, 0x11)
fsbase->NtTib.ExceptionList = ExceptionList
return result
