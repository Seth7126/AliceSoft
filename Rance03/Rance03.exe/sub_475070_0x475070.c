// 函数: sub_475070
// 地址: 0x475070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b9cf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
char eax_7

if (ecx != 0)
    eax_7 = (*(*ecx + 0x2c))(0x6dd5e8)

void* result

if (ecx == 0 || eax_7 == 0)
    var_80 = 0xffffffff
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    sub_402110(&var_4c, 0x6dd714, 0x16)
    int32_t var_c_2 = 2
    int32_t var_68_1 = 0xf
    int32_t var_6c_1 = 0
    char var_7c = 0
    sub_402110(&var_7c, 0x6dd6fc, 0x16)
    var_c_2.b = 3
    void* result_1 = sub_4755e0(arg1, &var_7c, arg2, &var_4c, &var_80)
    
    if (var_68_1 u>= 0x10)
        j__free(var_7c.d)
    
    int32_t var_68_2 = 0xf
    int32_t var_6c_2 = 0
    var_7c = 0
    
    if (var_38_1 u>= 0x10)
        j__free(var_4c.d)
    
    result = result_1
else if (arg2 s> 5)
    var_80 = 0xffffffff
    void* var_34
    sub_401f60(&var_34, 0x6dd5d0)
    int32_t var_c_1 = 0
    char var_64
    sub_401f60(&var_64, 0x6dd72c)
    var_c_1.b = 1
    int32_t eax_8 = sub_4755e0(arg1, &var_64, arg2, &var_34, &var_80)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        j__free(var_64.d)
    
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    int32_t eax_9
    eax_9.b = eax_8 s>= 0
    result = (eax_9 << 1) + 3
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
