// 函数: sub_4648a0
// 地址: 0x4648a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_1c
char* result = sub_459160(&var_1c, arg2)

if (arg1 + 0x2c != result)
    if (*(arg1 + 0x40) u>= 0x10)
        j__free(*(arg1 + 0x2c))
    
    *(arg1 + 0x40) = 0xf
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x2c) = 0
    result = sub_4030b0(arg1 + 0x2c, result)

int32_t var_8

if (var_8 u>= 0x10)
    result = j__free(var_1c)

sub_69a5bc(eax_1 ^ &var_20)
return result
