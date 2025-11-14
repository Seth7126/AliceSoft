// 函数: sub_410020
// 地址: 0x410020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *(arg1 + 4)

if ((result s< 0x12 || result s> 0x19) && result != 0x1f && result != 0x20 && result != 0x33
        && result != 0x34)
    result.b = 0
else if (*(arg3 + 4) != 0x23)
    void var_3c
    int32_t* eax_5 = sub_420ed0(arg3 + 4, &var_3c)
    int32_t var_c_1 = 0
    void var_5c
    int32_t* eax_6 = sub_420ed0(arg1 + 4, &var_5c)
    bool var_65_1
    
    if (*eax_6 == *eax_5)
        if (sub_40d280(&eax_6[2], &eax_5[2]).b == 0)
            var_65_1 = eax_6[1] != eax_5[1]
        else
            var_65_1 = true
    else
        var_65_1 = true
    
    int32_t var_40
    char var_54
    
    if (var_40 u>= 0x10)
        j__free(var_54.d)
    int32_t var_40_1 = 0xf
    int32_t var_44_1 = 0
    char var_54_1 = 0
    int32_t var_20
    int32_t var_34
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    if (var_65_1 != 0)
        result.b = 0
    else if (*(arg1 + 0x70) == 0)
        result.b = *(arg3 + 0x70) == 0
        *arg2 = result.b
        result.b = 1
    else if (*(arg3 + 0x70) == 0)
        result.b = 0
    else
        char eax_8 = sub_410000(arg1)
        char eax_9
        
        if (eax_8 == 0)
            eax_9 = sub_410000(arg3)
        
        if (eax_8 == 0 && eax_9 == 0)
            result.b = *(arg1 + 0x3c) == *(arg3 + 0x3c)
        else if (*(arg1 + 0x3c) != *(arg3 + 0x3c) || *(arg1 + 0x40) != *(arg3 + 0x40))
            result = nullptr
        else
            result = 1
        
        *arg2 = result.b
        result.b = 1
else
    result.b = *(arg1 + 0x70) == 0
    *arg2 = result.b
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
