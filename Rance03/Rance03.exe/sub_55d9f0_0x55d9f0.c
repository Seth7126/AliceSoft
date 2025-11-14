// 函数: sub_55d9f0
// 地址: 0x55d9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c54d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38
char result

if (sub_59d240(&var_38) != 0)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    sub_402110(&var_34, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x27], 1)
    int32_t var_c_1 = 0
    char* eax_5 = &var_34
    
    if (var_20_1 u>= 0x10)
        eax_5 = var_34.d
    
    if (sub_59d180(arg2, eax_5) != 0)
        result = 1
    else
        char* eax_6 = &var_34
        
        if (var_20_1 u>= 0x10)
            eax_6 = var_34.d
        
        char* var_58_2 = eax_6
        int32_t var_5c_1 = 0x6e48cc
        void* var_60_1 = arg2
        sub_561610(arg1)
        result = 0
    
    int32_t var_c_2 = 0xffffffff
    int32_t ebx
    ebx.b = result == 0
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    if (ebx.b != 0)
        result = 0
    else if (sub_59d240(&var_44) == 0)
        result = 0
    else
        sub_401f60(&var_34, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x24])
        int32_t var_c_3 = 1
        int32_t var_c_4 = 0xffffffff
        ebx.b = sub_5615c0(arg1, arg2, &var_34) == 0
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
        
        int32_t var_3c
        
        if (ebx.b != 0)
            result = 0
        else if (sub_59d240(&var_3c) == 0)
            result = 0
        else
            result = 1
            *(arg3 + 4) = var_38
            *(arg3 + 8) = var_44
            *(arg3 + 0xc) = var_3c
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
