// 函数: sub_6889c0
// 地址: 0x6889c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d12b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CWindow::dpsound::COptionWindow::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CWindow::dpsound::COptionWindow::VTable** var_10_1 = arg1
*arg1 = &dpsound::COptionWindow::`vftable'{for `dpsound::CWindow'}
int32_t var_4 = 3
int32_t* eax_3 = arg1[0x3f]

if (eax_3 != 0)
    sub_4107c0(eax_3, arg1[0x40])
    j__free(arg1[0x3f])
    arg1[0x3f] = 0
    arg1[0x40] = 0
    arg1[0x41] = 0

sub_695b10(&arg1[0x24])
arg1[0x1c] = &dpsound::CParamBase::`vftable'
arg1[0x14] = &dpsound::CParamBase::`vftable'
arg1[0xd] = &dpsound::CMouse::`vftable'
int32_t result = sub_695f10(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
