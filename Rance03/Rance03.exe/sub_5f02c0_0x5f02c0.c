// 函数: sub_5f02c0
// 地址: 0x5f02c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbdf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5f03e0(arg1)
uint32_t arg_4

if (sub_6049e0(arg1 + 4, arg_4) != 0 && sub_451e10(arg1 + 0x20) != 0)
    uint8_t* var_18
    sub_448e90(&var_18, 0x10)
    int32_t var_4 = 0
    uint8_t* esi = var_18
    int32_t var_14
    void* ebx
    
    if (sub_604e90(arg1 + 4, esi, var_14 - esi) == 0)
        ebx.b = 0
    else if (sub_5eff10(&var_18, &arg_4) == 0)
        ebx.b = 0
    else
        uint8_t* var_24
        sub_448e90(&var_24, arg_4)
        var_4.b = 1
        uint8_t* edx_1 = var_24
        int32_t var_20
        char eax_9 = sub_604e90(arg1 + 4, edx_1, var_20 - edx_1)
        char eax_10
        
        if (eax_9 != 0)
            eax_10 = sub_5f0030(arg1, &var_24)
        
        if (eax_9 == 0 || eax_10 == 0)
            ebx.b = 0
            sub_403510(&var_24)
        else
            ebx.b = 1
            sub_403510(&var_24)
    
    if (esi != 0)
        j__free(esi)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
return 0
