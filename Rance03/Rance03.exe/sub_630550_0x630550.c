// 函数: sub_630550
// 地址: 0x630550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) != 0)
    sub_62a740(arg3, "out of place")
    noreturn

if (arg4 != 0xd)
    sub_62a740(arg3, "invalid")
    noreturn

*(arg3 + 0x74) = eax_2 | 1
int32_t eax_4 = *(arg3 + 0x5c)

if (eax_4 == 0)
    sub_62a520(arg3, "Call to NULL read function")
    noreturn

char var_14
sub_627190(eax_4(arg3, &var_14, 0xd), &var_14, arg3, 0xd)
sub_62fcc0(arg3, nullptr)
char var_13
char var_12
char var_11
uint32_t edx_7 = (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)

if (edx_7 u> 0x7fffffff)
    sub_62a520(arg3, "PNG unsigned integer out of range")
    noreturn

char var_10
char var_f
char var_e
char var_d
uint32_t ecx_8 = (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)

if (ecx_8 u> 0x7fffffff)
    sub_62a520(arg3, "PNG unsigned integer out of range")
    noreturn

char var_b
var_24 = zx.d(var_b)
char var_8
*(arg3 + 0x154) = var_8
*(arg3 + 0x157) = var_24.b
char var_9
*(arg3 + 0x26c) = var_9
char var_a
*(arg3 + 0x28c) = var_a
uint32_t eax_20 = zx.d(var_24.b)
*(arg3 + 0x100) = edx_7
*(arg3 + 0x104) = ecx_8
char var_c
*(arg3 + 0x158) = var_c

if (eax_20 == 2)
    *(arg3 + 0x15b) = 3
else if (eax_20 == 4)
    *(arg3 + 0x15b) = 2
else if (eax_20 == 6)
    *(arg3 + 0x15b) = 4
else
    *(arg3 + 0x15b) = 1

int32_t eax_21
eax_21.b = *(arg3 + 0x15b)
eax_21.w = muls.dp.b(eax_21.b, var_c)
*(arg3 + 0x15a) = eax_21.b
uint32_t eax_22 = zx.d(eax_21.b)
uint32_t eax_24

if (eax_21.b u< 8)
    eax_24 = (eax_22 * edx_7 + 7) u>> 3
else
    eax_24 = (eax_22 u>> 3) * edx_7

*(arg3 + 0x110) = eax_24
uint32_t result = sub_634050(eax_24, arg2, arg3, edx_7, ecx_8, var_c, var_24.b, var_8, var_a, var_9)
sub_69a5bc(eax_1 ^ &var_24)
return result
