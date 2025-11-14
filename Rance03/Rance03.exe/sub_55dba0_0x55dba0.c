// 函数: sub_55dba0
// 地址: 0x55dba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_6c5510
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54
char* result

if (sub_59d240(&var_54).b != 0)
    int32_t var_3c_1 = 0xf
    int32_t var_40_1 = 0
    char var_50 = 0
    sub_402110(&var_50, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x25], 1)
    int32_t var_14_1 = 0
    char* eax_6 = &var_50
    
    if (var_3c_1 u>= 0x10)
        eax_6 = var_50.d
    
    if (sub_59d180(arg2, eax_6).b != 0)
        result.b = 1
    else
        char* eax_7 = &var_50
        
        if (var_3c_1 u>= 0x10)
            eax_7 = var_50.d
        
        char* var_78_2 = eax_7
        int32_t var_7c_1 = 0x6e48cc
        void* var_80_1 = arg2
        sub_561610(arg1)
        result.b = 0
    
    int32_t var_14_2 = 0xffffffff
    result.b = result.b == 0
    char var_61_1 = result.b
    
    if (var_3c_1 u>= 0x10)
        j__free(var_50.d)
        result.b = var_61_1
    
    int32_t var_60
    
    if (result.b != 0)
        result.b = 0
    else if (sub_59d240(&var_60).b == 0)
        result.b = 0
    else
        sub_401f60(&var_50, &(*U",}},},,,{,=,=,,},},{}=},{,=,,},{,=,,,,},},{,=")[0x22])
        int32_t var_14_3 = 1
        int32_t var_14_4 = 0xffffffff
        result.b = sub_5615c0(arg1, arg2, &var_50).b == 0
        char var_61_2 = result.b
        
        if (var_3c_1 u>= 0x10)
            j__free(var_50.d)
            result.b = var_61_2
        
        int32_t var_5c
        
        if (result.b != 0)
            result.b = 0
        else if (sub_59d240(&var_5c).b == 0)
            result.b = 0
        else
            var_50.d = var_54
            int32_t var_4c_1 = var_60
            int32_t var_48_1 = var_5c
            int32_t var_44_1 = 0x3f800000
            *(arg3 + 4) = var_50.o
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
