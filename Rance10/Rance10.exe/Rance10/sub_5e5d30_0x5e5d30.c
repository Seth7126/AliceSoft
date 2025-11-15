// 函数: sub_5e5d30
// 地址: 0x5e5d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = sub_5665c0(data_7fd4cc, arg3, arg2)
int32_t esi_1

if (ebx != 0)
    __Smtx_lock_shared(ebx + 0x200)
    esi_1 = *(ebx + 0x1fc)
    __Smtx_unlock_shared(ebx + 0x200)

int32_t result

if (ebx == 0 || esi_1 == 0)
    result.b = 0
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    __Smtx_lock_shared(ebx + 0x200)
    void* esi_2 = *(ebx + 0x1fc)
    __Smtx_unlock_shared(ebx + 0x200)
    
    if (sub_5bb4d0(esi_2, arg4, &var_2c).b != 0)
        char* edx = &var_2c
        
        if (var_18_1 u>= 0x10)
            edx = var_2c.d
        
        (*(*arg5 + 4))(edx)
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
