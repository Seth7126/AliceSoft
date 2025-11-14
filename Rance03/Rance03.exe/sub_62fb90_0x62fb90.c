// 函数: sub_62fb90
// 地址: 0x62fb90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_c
int32_t eax_1 = __security_cookie ^ &var_c
int32_t eax_2 = *(arg1 + 0x5c)
*(arg1 + 0x2c4) = 0x21

if (eax_2 == 0)
    sub_62a520(arg1, "Call to NULL read function")
    noreturn

eax_2(arg1, &var_c, 8)
char var_b
char var_a
char var_9
uint32_t result = (((((zx.d(var_c) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + zx.d(var_9)

if (result u> 0x7fffffff)
    sub_62a520(arg1, "PNG unsigned integer out of range")
    noreturn

char var_8
char var_7
uint32_t ecx_2 = zx.d(var_8) << 8 | zx.d(var_7)
*(arg1 + 0x140) = 0
char var_5
int32_t eax_8 = zx.d(var_5)
char var_6
*(arg1 + 0x11c) = (ecx_2 << 8 | zx.d(var_6)) << 8 | eax_8
sub_627190(eax_8, &var_8, arg1, 4)
sub_632c90(arg1, *(arg1 + 0x11c))
*(arg1 + 0x2c4) = 0x41
sub_69a5bc(eax_1 ^ &var_c)
return result
