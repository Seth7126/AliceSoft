// 函数: sub_5db930
// 地址: 0x5db930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* var_24
int32_t eax_1 = __security_cookie ^ &var_24
char* result

if (*(arg1 + 0x14) == 4)
    char var_20
    char* eax_2 = sub_401f60(&var_20, arg3)
    var_24 = eax_2
    void** eax_3 = sub_417ed0(arg1 + 8, eax_2)
    char eax_5
    
    if (eax_3 != *(arg1 + 8))
        eax_5 = sub_40c3a0(var_24, &eax_3[4])
    
    if (eax_3 == *(arg1 + 8) || eax_5 != 0)
        var_24 = *(arg1 + 8)
    else
        var_24 = eax_3
    
    char* esi_2 = var_24
    int32_t var_c
    
    if (var_c u>= 0x10)
        j__free(var_20.d)
    
    int32_t var_c_1 = 0xf
    int32_t var_10_1 = 0
    var_20 = 0
    
    if (esi_2 != *(arg1 + 8))
        result = *(esi_2 + 0x28)
    label_5db9c8:
        *arg2 = result
        result.b = 1
        sub_69a5bc(eax_1 ^ &var_24)
        return result
    
    result = *(arg1 + 0x10)
    
    if (result != 0xffffffff)
        goto label_5db9c8

result.b = 0
sub_69a5bc(eax_1 ^ &var_24)
return result
