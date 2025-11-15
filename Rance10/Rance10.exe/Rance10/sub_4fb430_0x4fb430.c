// 函数: sub_4fb430
// 地址: 0x4fb430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73624b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t __saved_ebp
    (**ecx)(__security_cookie ^ &__saved_ebp)
    void* eax_4 = sub_4efcc0(*(arg1 + 4))
    *(arg1 + 8) = *(eax_4 + 0x48)
    *(*(arg1 + 4) + 0x98) = 0
    
    if (*(eax_4 + 0x40) != 0)
        *(eax_4 + 0x40) = 0
    
    *(*(arg1 + 4) + 0x1a8) = 1
    sub_4fb500(arg1)
    float var_d0[0x30]
    float* eax_6 = sub_5269a0(&var_d0)
    int32_t var_e0_1 = 0
    int32_t var_e4_1 = 0
    int32_t var_8_1 = 0
    sub_4ee2b0(*(arg1 + 4), 0, 0, eax_6)
    ___dyn_tls_init@12(&var_d0)
    result = *(arg1 + 8)
    *(arg1 + 0x1e4) = result
    *(arg1 + 0x1f4) = result
    *(arg1 + 0x1f8) = result
    *(arg1 + 0x1fc) = result
    *(arg1 + 0x200) = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
