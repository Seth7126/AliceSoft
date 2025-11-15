// 函数: ??1_Locimp@locale@std@@MAE@XZ
// 地址: 0x6d44d8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &std::locale::_Locimp::`vftable'{for `std::locale::facet'}
int32_t result = std::locale::_Locimp::_Locimp_dtor(arg1)

if (arg1[6] != 0)
    result = _free(arg1[6])

arg1[6] = 0
*arg1 = &std::_Facet_base::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
