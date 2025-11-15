// 函数: sub_5cf7c0
// 地址: 0x5cf7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
int32_t __saved_ebp

if ((*(*arg3 + 0x24))(__security_cookie ^ &__saved_ebp) != 0
        && (*(*arg3 + 0x10))() == (*(*arg4 + 0x10))()
        && (*(*arg3 + 0x14))() == (*(*arg4 + 0x14))())
    __Smtx_lock_shared(arg1 + 0x20)
    int32_t* edi_3 = *(arg1 + 0x1c)
    __Smtx_unlock_shared(arg1 + 0x20)
    void var_2c
    int32_t* eax_18 =
        sub_432270(&var_2c, (*(*edi_3 + 8))((*(*arg3 + 0x10))((*(*arg3 + 0x14))(0x20))))
    int32_t* var_24 = nullptr
    SRWLOCK var_20
    __builtin_memset(&var_20, 0, 4)
    sub_4323a0(&var_24, eax_18)
    int32_t var_8_1 = 0
    sub_431b10(&var_2c)
    __Smtx_lock_shared(&var_20)
    int32_t* ebx
    ebx.b = var_24 != 0
    __Smtx_unlock_shared(&var_20)
    int32_t** ecx_14
    int32_t* esi_5
    
    if (ebx.b != 0)
        __Smtx_lock_shared(&var_20)
        int32_t* esi_6 = var_24
        __Smtx_unlock_shared(&var_20)
        ecx_14 = &var_24
        
        if (sub_5cfc10(arg1, arg3, esi_6, *(arg1 + 0x24)) != 0)
            char eax_22 = sub_5cfd60(sub_431af0(ecx_14), arg4)
            esi_5 = arg2
            *esi_5 = 0
            esi_5[1] = 0
            
            if (eax_22 != 0)
                sub_4323a0(esi_5, &var_24)
            
            ecx_14 = &var_24
        else
            esi_5 = arg2
            *esi_5 = 0
            esi_5[1] = 0
    else
        esi_5 = arg2
        *esi_5 = 0
        esi_5[1] = 0
        ecx_14 = &var_24
    
    sub_431b10(ecx_14)
    fsbase->NtTib.ExceptionList = ExceptionList
    return esi_5

*arg2 = 0
arg2[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
