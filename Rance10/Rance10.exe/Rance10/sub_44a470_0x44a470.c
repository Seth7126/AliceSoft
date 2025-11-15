// 函数: sub_44a470
// 地址: 0x44a470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg1 + 8) + 4)

while (*(arg1 + 0x1c) != 0)
    void var_c
    int32_t* eax_2 = sub_44a580(arg1 + 0xc, &var_c)
    int32_t* edi_1 = *eax_2
    
    if (edi_1 != 0)
        edi_1 = *edi_1
    
    int32_t edx_1 = eax_2[2]
    int32_t* ecx_4 = *(*(edi_1[1] + ((edx_1 u>> 2 & (edi_1[2] - 1)) << 2)) + ((edx_1 & 3) << 2))
    
    if (ecx_4 != 0)
        (**ecx_4)(1)
    
    int32_t temp0_1 = *(arg1 + 0x1c)
    *(arg1 + 0x1c) -= 1
    
    if (temp0_1 != 1)
        *(arg1 + 0x18) += 1
    else
        *(arg1 + 0x18) = 0

return LeaveCriticalSection(*(arg1 + 8) + 4)
