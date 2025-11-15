// 函数: sub_6acd20
// 地址: 0x6acd20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_c
int32_t eax_1 = __security_cookie ^ &var_c
*(arg1 + 0x2c4) = 0x21
int32_t eax_2 = *(arg1 + 0x5c)

if (eax_2 == 0)
    sub_6a7500(arg1, "Call to NULL read function")
    noreturn

eax_2(arg1, &var_c, 8)
char var_b
char var_a
char var_9
uint32_t result = (((((zx.d(var_c) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + zx.d(var_9)

if (result u> 0x7fffffff)
    sub_6a7500(arg1, "PNG unsigned integer out of range")
    noreturn

char var_5
int32_t eax_8 = zx.d(var_5)
char var_8
char var_7
char var_6
*(arg1 + 0x11c) = ((zx.d(var_8) << 8 | zx.d(var_7)) << 8 | zx.d(var_6)) << 8 | eax_8
*(arg1 + 0x140) = 0
sub_6a4030(eax_8, &var_8, arg1, 4)
uint32_t ebx = *(arg1 + 0x11c)

for (int32_t i = 1; i s<= 4; )
    uint32_t ecx_8 = zx.d(ebx.b)
    
    if (ecx_8 - 0x41 u> 0x39)
        sub_6a7750(arg1, "invalid chunk type")
        noreturn
    
    if (ecx_8 u> 0x5a && ecx_8 u< 0x61)
        sub_6a7750(arg1, "invalid chunk type")
        noreturn
    
    i += 1
    ebx u>>= 8

*(arg1 + 0x2c4) = 0x41
@__security_check_cookie@4(eax_1 ^ &var_c)
return result
