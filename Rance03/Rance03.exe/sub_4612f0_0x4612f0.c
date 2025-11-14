// 函数: sub_4612f0
// 地址: 0x4612f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3568
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 1
char var_54 = 0x2e
void* result

if (sub_4294e0(arg2, &var_54, arg1) == 0xffffffff)
    int32_t var_c_1 = 0
    int32_t var_4c
    int32_t var_34
    sub_459160(&var_4c, sub_461190(&var_34, arg2))
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    void** eax_7 = sub_417ed0(arg1 + 0x1c, &var_4c)
    char eax_9
    
    if (eax_7 != *(arg1 + 0x1c))
        eax_9 = sub_40c3a0(&var_4c, &eax_7[4])
    
    void** var_50_1
    
    if (eax_7 == *(arg1 + 0x1c) || eax_9 != 0)
        var_50_1 = *(arg1 + 0x1c)
    else
        var_50_1 = eax_7
    
    void* result_1
    
    if (var_50_1 != *(arg1 + 0x1c))
        result_1 = var_50_1[0xa]
    else
        result_1 = nullptr
    
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    result = result_1
else
    result = sub_460d20(arg1, arg2)
    
    if (result != 0)
        result = *(result + 0x1c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
