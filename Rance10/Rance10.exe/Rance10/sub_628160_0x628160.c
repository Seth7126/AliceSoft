// 函数: sub_628160
// 地址: 0x628160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_625a00(arg1 + 0xc, arg2 + 0xc)
int32_t ecx_1 = *(arg1 + 0x34)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg2 + 0x34) = ecx_1
int32_t ecx_2 = *(arg1 + 0x2c)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg2 + 0x2c) = ecx_2
int32_t ecx_3 = *(arg1 + 0x30)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg2 + 0x30) = ecx_3
int32_t eax_2
eax_2.b = *(arg2 + 0x38)
ecx_3.b = *(arg1 + 0x38)
*(arg1 + 0x38) = eax_2.b
*(arg2 + 0x38) = ecx_3.b
int32_t result = *(arg1 + 0x2c)

if (result != 0x12 && result != 0x33 && result != 0x13 && result != 0x59 && result != 0x5d)
    *(arg1 + 0x3c) = 1
    return result

*(arg1 + 0x3c) = 2
return result
