// 函数: sub_459e00
// 地址: 0x459e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
char* eax_2 = sub_456bd0(arg1 + 0x4c, &var_1c)

if (arg2 != eax_2)
    if (arg2[5] u>= 0x10)
        j__free(*arg2)
    
    arg2[5] = 0xf
    arg2[4] = 0
    *arg2 = 0
    eax_2 = sub_4030b0(arg2, eax_2)

int32_t var_8

if (var_8 u>= 0x10)
    eax_2 = j__free(var_1c)

bool cond:0 = *(arg1 + 0x64) u< 0x10
*(arg1 + 0x60) = 0

if (cond:0)
    *(arg1 + 0x50) = 0
    sub_69a5bc(eax_1 ^ &var_1c)
    return eax_2

char* eax_3 = *(arg1 + 0x50)
*eax_3 = 0
sub_69a5bc(eax_1 ^ &var_1c)
return eax_3
