// 函数: sub_630b60
// 地址: 0x630b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_20
int32_t eax_1 = __security_cookie ^ &var_20
int32_t eax_2
int32_t edx_2
edx_2:eax_2 = muls.dp.d(0x2aaaaaab, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 1
var_20 = 0

if (edx_3 u>> 0x1f != neg.d(edx_3))
    *(arg1 + 8)

void* var_1c
int16_t* eax_6 = sub_631720(&var_1c)
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0
sub_631d30(arg2, eax_6)
int32_t var_8

if (var_8 u>= 8)
    sub_403160(var_1c, var_8 + 1, 2)

@__security_check_cookie@4(eax_1 ^ &var_20)
return arg2
