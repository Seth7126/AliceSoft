// 函数: sub_451c50
// 地址: 0x451c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
void** var_8 = __security_cookie ^ &var_24

if (data_75d4d4 != 0)
    int32_t var_20
    sub_401f60(&var_20, (**arg1)())
    char var_21
    int32_t ebx
    ebx.b = sub_450a00(&var_20, &var_21).b == 0
    int32_t var_c
    
    if (var_c u>= 0x10)
        j__free(var_20)
    
    if (ebx.b == 0)
        int32_t eax_4
        eax_4.b = var_21 != 0
        *arg2 = eax_4
        eax_4.b = 1
        sub_69a5bc(var_8 ^ &var_24)
        return eax_4

void** eax_1
eax_1.b = 0
sub_69a5bc(var_8 ^ &var_24)
return eax_1
