// 函数: sub_69a680
// 地址: 0x69a680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &Concurrency::details::_RefCounter::`vftable'
arg1[1] = 1
*arg1 = &Concurrency::details::_CancellationTokenRegistration::`vftable'{for `Concurrency::details::_RefCounter'}
arg1[2] = 3
j_Concurrency::details::create_stl_critical_section(&arg1[3])
__Mtx_init_in_situ(&arg1[0xd], 2)
arg1[0x19].b = 0
arg1[0x1a] = 0
*arg1 = &Concurrency::details::_CancellationTokenCallback<class <lambda_3b8ab8d2629adf61a42ee3fe177a046b> >::`vftable'{for `Concurrency::details::_CancellationTokenRegistration'}
int32_t var_8_1 = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
void* edi = arg2[1]
int32_t ebx = *arg2

if (edi != 0)
    *(edi + 8) += 1

int32_t* ecx = arg1[0x1c]

if (ecx != 0)
    bool cond:0_1 = ecx[2] != 1
    ecx[2]
    ecx[2] -= 1
    
    if (not(cond:0_1))
        (*(*ecx + 4))(eax_2)

arg1[0x1c] = edi
arg1[0x1b] = ebx
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
