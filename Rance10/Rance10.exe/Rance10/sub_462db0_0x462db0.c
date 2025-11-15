// 函数: sub_462db0
// 地址: 0x462db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t var_28 = 0
var_2c = arg1
int32_t var_10 = 0xf
int32_t var_14 = 0
char var_24 = 0
sub_403590(&var_24, arg2, 0, 0xffffffff)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(var_14)
char* eax_4 = &var_24
int32_t edx_3 = ((edx & 3) + eax_3) s>> 2

if (var_10 u>= 0x10)
    eax_4 = var_24.d

int32_t i = 0

if (edx_3 s> 0)
    if (edx_3 u>= 8)
        int32_t ecx_2 = edx_3 & 0x80000007
        
        if (ecx_2 s< 0)
            ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1
        
        int128_t xmm2_1 = *"eeeeeeeeeeeeeeee"
        
        do
            i += 8
            *eax_4 ^= xmm2_1
            *(eax_4 + 0x10) ^= xmm2_1
            eax_4 = &eax_4[0x20]
        while (i s< edx_3 - ecx_2)
    
    if (i s< edx_3)
        int32_t i_2 = edx_3 - i
        int32_t i_1
        
        do
            *eax_4 ^= 0x65656565
            eax_4 = &eax_4[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_4056a0(arg1, &var_24)

if (var_10 u>= 0x10)
    sub_403160(var_24.d, var_10 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_2c)
return arg1
