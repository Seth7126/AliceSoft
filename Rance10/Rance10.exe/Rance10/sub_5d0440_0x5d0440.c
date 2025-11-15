// 函数: sub_5d0440
// 地址: 0x5d0440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = sub_5d0530(arg1, arg2)

if (result.b == 0)
    void** var_30
    sub_4175e0(result, arg2, &var_30, ".zlb")
    int32_t var_8_1 = 0
    __Smtx_lock_shared(arg1 + 0x34)
    int32_t esi_1 = *(arg1 + 0x30)
    __Smtx_unlock_shared(arg1 + 0x34)
    int32_t var_1c
    
    if (esi_1 != 0)
        __Smtx_lock_shared(arg1 + 0x34)
        int32_t* edi_2 = *(arg1 + 0x30)
        __Smtx_unlock_shared(arg1 + 0x34)
        void** edx_2 = &var_30
        
        if (var_1c u>= 0x10)
            edx_2 = var_30
        
        result = (*(*edi_2 + 0x10))(edx_2)
    
    void* ebx
    
    if (esi_1 == 0 || result.b == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    if (var_1c u>= 0x10)
        sub_403160(var_30, var_1c + 1, 1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
