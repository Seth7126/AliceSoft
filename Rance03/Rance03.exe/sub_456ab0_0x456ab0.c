// 函数: sub_456ab0
// 地址: 0x456ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg3 == 0)
    result = sub_456a00(arg1, arg2)
else
    int32_t var_28
    int32_t* eax_5 = sub_466200(arg3, &var_28)
    int32_t var_4 = 0
    char var_58
    int32_t* eax_6 = sub_410930(eax_5, arg2, &var_58, 0x6db964)
    var_4.b = 1
    var_4.b = 2
    char var_40
    result = sub_456a00(arg1, sub_410a20(eax_6, eax_6, &var_40, eax_5))
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        result = j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_44
    
    if (var_44 u>= 0x10)
        result = j__free(var_58.d)
    
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    var_58 = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
