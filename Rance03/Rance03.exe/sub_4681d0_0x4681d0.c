// 函数: sub_4681d0
// 地址: 0x4681d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t var_1c
char* result = sub_459160(&var_1c, arg2)

if (arg1 + 4 != result)
    if (*(arg1 + 0x18) u>= 0x10)
        j__free(*(arg1 + 4))
    
    *(arg1 + 0x18) = 0xf
    *(arg1 + 0x14) = 0
    *(arg1 + 4) = 0
    result = sub_4030b0(arg1 + 4, result)

int32_t var_8

if (var_8 u>= 0x10)
    result = j__free(var_1c)

sub_69a5bc(eax_1 ^ &var_20)
return result
