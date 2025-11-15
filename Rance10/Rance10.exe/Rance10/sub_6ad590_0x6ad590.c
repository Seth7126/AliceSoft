// 函数: sub_6ad590
// 地址: 0x6ad590
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_28
int32_t eax_1 = __security_cookie ^ &var_28
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) != 0)
    sub_6a7750(arg3, "out of place")
    noreturn

if (arg4 != 0xd)
    sub_6a7750(arg3, "invalid")
    noreturn

*(arg3 + 0x74) = eax_2 | 1
int32_t eax_4 = *(arg3 + 0x5c)

if (eax_4 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

char var_14
sub_6a4030(eax_4(arg3, &var_14, 0xd), &var_14, arg3, 0xd)
sub_6ace40(arg3, nullptr)
char var_13
char var_12
char var_11
uint32_t edx_7 = (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)

if (edx_7 u> 0x7fffffff)
    sub_6a7500(arg3, "PNG unsigned integer out of range")
    noreturn

int32_t var_d
int16_t ebx = var_d.w
char var_10
char var_f
char var_e
uint32_t ecx_8 = (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(ebx.b)

if (ecx_8 u> 0x7fffffff)
    sub_6a7500(arg3, "PNG unsigned integer out of range")
    noreturn

char eax_12 = var_d:2.b
var_28 = zx.d(ebx:1.b)
char ebx_2 = var_d:3.b
*(arg3 + 0x158) = var_28.b
char var_8
*(arg3 + 0x154) = var_8
*(arg3 + 0x157) = eax_12
uint32_t eax_13 = zx.d(eax_12)
char var_9
*(arg3 + 0x26c) = var_9
*(arg3 + 0x100) = edx_7
*(arg3 + 0x104) = ecx_8
*(arg3 + 0x28c) = ebx_2

if (eax_13 == 2)
    *(arg3 + 0x15b) = 3
else if (eax_13 == 4)
    *(arg3 + 0x15b) = 2
else if (eax_13 == 6)
    *(arg3 + 0x15b) = 4
else
    *(arg3 + 0x15b) = 1

char ebx_11 = *(arg3 + 0x15b) * var_28.b
*(arg3 + 0x15a) = ebx_11
uint32_t eax_18 = zx.d(ebx_11)
uint32_t eax_20

if (ebx_11 u< 8)
    eax_20 = (eax_18 * edx_7 + 7) u>> 3
else
    eax_20 = (eax_18 u>> 3) * edx_7

*(arg3 + 0x110) = eax_20
uint32_t result =
    sub_6b19b0(eax_20, arg2, arg3, edx_7, ecx_8, var_28.b, eax_12, var_8, ebx_2, var_9)
@__security_check_cookie@4(eax_1 ^ &var_28)
return result
