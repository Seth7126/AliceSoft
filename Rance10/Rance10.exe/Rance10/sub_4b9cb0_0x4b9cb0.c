// 函数: sub_4b9cb0
// 地址: 0x4b9cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool eax

if (*(arg2 + 0x49) == 0)
    eax = *(arg1 + 0x49)
else
    eax = *(arg1 + 0x49) == 0

*(arg1 + 0x49) = eax
uint32_t eax_1

if (*(arg2 + 0x48) == 0)
    eax_1 = zx.d(*(arg1 + 0x48))
else
    eax_1.b = *(arg1 + 0x48) == 0

*(arg1 + 0x48) = eax_1.b
*(arg1 + 0x4c) = *(arg2 + 0x4c) f* *(arg1 + 0x4c)
*(arg1 + 0x50) = *(arg2 + 0x50) f* *(arg1 + 0x50)

if (*(arg2 + 0x54) != 0)
    *(arg1 + 0x54) = 1

float var_40[0x4][0x4]
float (* result)[0x4] = sub_6cb020(eax_1, arg2 + 8, &var_40, arg1 + 8)
*(arg1 + 8) = *result
*(arg1 + 0x18) = result[1]
*(arg1 + 0x28) = result[2]
*(arg1 + 0x38) = result[3]
return result
