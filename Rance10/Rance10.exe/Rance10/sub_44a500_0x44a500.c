// 函数: sub_44a500
// 地址: 0x44a500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (*(arg1 + 0x10) != 0)
    int32_t temp0_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) -= 1
    
    if (temp0_1 == 1)
        *(arg1 + 0xc) = 0

int32_t i = *(arg1 + 8)

while (i != 0)
    i -= 1
    void* eax_2 = *(*(arg1 + 4) + (i << 2))
    
    if (eax_2 != 0)
        sub_403160(eax_2, 4, 4)

void* result = *(arg1 + 4)

if (result != 0)
    result = sub_403160(result, *(arg1 + 8), 4)

*(arg1 + 8) = 0
*(arg1 + 4) = 0
return result
