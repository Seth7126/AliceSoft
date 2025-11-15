// 函数: sub_65aa60
// 地址: 0x65aa60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = *(arg1 + 0x19c)
int32_t edi = *(arg1 + 0x124)
int32_t eax_3 = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 3)
*(ebx + 0x38) = eax_3
int32_t i = 0
int32_t result = eax_3 + (*(arg1 + 0x24) << 2)
*(ebx + 0x3c) = result

if (*(arg1 + 0x24) s> 0)
    int32_t ecx_2 = edi + 4
    void* ebx_2 = *(arg1 + 0xc4) + 0xc
    int32_t var_4_1 = ecx_2
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(*(ebx_2 + 0x1c) * *ebx_2), *(arg1 + 0x124))
        ebx_2 += 0x58
        int32_t edx_3 = (**(arg1 + 4))(arg1, 1, (ecx_2 * temp0_1) << 3) + (temp0_1 << 2)
        *(*(ebx + 0x38) + (i << 2)) = edx_3
        result = *(ebx + 0x3c)
        *(result + (i << 2)) = ((edi << 2) + 0x10) * temp0_1 + edx_3
        i += 1
        ecx_2 = var_4_1
    while (i s< *(arg1 + 0x24))

return result
