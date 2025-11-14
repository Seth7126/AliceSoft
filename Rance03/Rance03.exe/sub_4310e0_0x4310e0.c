// 函数: sub_4310e0
// 地址: 0x4310e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t var_8 = 0xf
int32_t result = 0
var_1c = 0
sub_402110(&var_1c, 0x6db170, 3)
SetTextColor(arg2, 0)
char* eax_2 = &var_1c

if (var_8 u>= 0x10)
    eax_2 = var_1c.d

sub_42c0d0(arg1, arg2, *arg3, arg4, eax_2)
int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(*(arg1 + 0xc8) * result)
*arg3 += (eax_5 - edx) s>> 1

if (var_8 u>= 0x10)
    j__free(var_1c.d)

sub_69a5bc(eax_1 ^ &var_1c)
return result
