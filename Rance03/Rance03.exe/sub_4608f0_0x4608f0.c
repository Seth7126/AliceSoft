// 函数: sub_4608f0
// 地址: 0x4608f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_1c
char* result = sub_459160(&var_1c, arg2)

if (arg1 + 0x14 != result)
    if (*(arg1 + 0x28) u>= 0x10)
        j__free(*(arg1 + 0x14))
    
    *(arg1 + 0x28) = 0xf
    *(arg1 + 0x24) = 0
    *(arg1 + 0x14) = 0
    result = sub_4030b0(arg1 + 0x14, result)

int32_t var_8

if (var_8 u>= 0x10)
    result = j__free(var_1c)

sub_69a5bc(eax_1 ^ &var_20)
return result
