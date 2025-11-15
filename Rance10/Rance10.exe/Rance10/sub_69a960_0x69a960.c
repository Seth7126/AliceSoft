// 函数: sub_69a960
// 地址: 0x69a960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg1[0x1c]

if (ecx != 0)
    bool cond:0_1 = ecx[2] != 1
    ecx[2]
    ecx[2] -= 1
    
    if (not(cond:0_1))
        (*(*ecx + 4))(eax_2)

*arg1 = &Concurrency::details::_CancellationTokenRegistration::`vftable'{for `Concurrency::details::_RefCounter'}
__Mtx_destroy_in_situ(&arg1[0xd])
__Cnd_destroy_in_situ(&arg1[3])
*arg1 = &Concurrency::details::_RefCounter::`vftable'

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x74
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
