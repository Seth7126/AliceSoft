// 函数: sub_55fe50
// 地址: 0x55fe50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5700
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
var_40 = 0
sub_402110(&var_40, &(*U"=====,=,=,=,=,=,,==,")[0xa], 1)
int32_t var_4 = 0
char* eax_5 = &var_40

if (var_2c u>= 0x10)
    eax_5 = var_40.d

bool result

if (sub_59d180(arg2, eax_5) != 0)
    result = true
else
    char* eax_6 = &var_40
    
    if (var_2c u>= 0x10)
        eax_6 = var_40.d
    
    char* var_58_1 = eax_6
    int32_t var_5c_1 = 0x6e48cc
    void* var_60_1 = arg2
    sub_561610(arg1)
    result = false

int32_t var_4_1 = 0xffffffff
int32_t ebx
ebx.b = result == 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

if (ebx.b == 0)
    if (sub_59d240(*(arg3 + 0x248)) == 0)
        result = false
    else
        char var_28
        sub_401f60(&var_28, &(*U"=====,=,=,=,=,=,,==,")[0xb])
        int32_t var_4_2 = 1
        int32_t var_4_3 = 0xffffffff
        ebx.b = sub_5615c0(arg1, arg2, &var_28) == 0
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        var_28 = 0
        
        if (ebx.b != 0)
            result = false
        else
            result = sub_59d240(*(arg3 + 0x248) + 4) != 0
else
    result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
