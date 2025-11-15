// 函数: sub_6222a0
// 地址: 0x6222a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int32_t i = *(arg1 + 0x10); i != 0; i = *(arg1 + 0x10))
    int32_t edx_3 = *(arg1 + 0xc) - 1 + i
    int32_t* ecx_3 =
        *(*(*(arg1 + 4) + ((edx_3 u>> 2 & (*(arg1 + 8) - 1)) << 2)) + ((edx_3 & 3) << 2))
    
    if (ecx_3 != 0)
        (**ecx_3)(1)
    
    int32_t temp0_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) -= 1
    
    if (temp0_1 == 1)
        *(arg1 + 0xc) = 0

int32_t i_1 = *(arg1 + 8)

while (i_1 != 0)
    i_1 -= 1
    void* eax_7 = *(*(arg1 + 4) + (i_1 << 2))
    
    if (eax_7 != 0)
        sub_403160(eax_7, 4, 4)

void* result = *(arg1 + 4)

if (result != 0)
    result = sub_403160(result, *(arg1 + 8), 4)

*(arg1 + 8) = 0
*(arg1 + 4) = 0
return result
