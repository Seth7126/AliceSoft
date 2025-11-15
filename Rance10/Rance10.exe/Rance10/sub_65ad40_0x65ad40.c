// 函数: sub_65ad40
// 地址: 0x65ad40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
void* result = *(arg1 + 0x19c)
void* result_1 = result

if (*(arg1 + 0x24) s> 0)
    void* ebx_1 = *(arg1 + 0xc4) + 0xc
    
    do
        uint32_t ecx_1 = *(ebx_1 + 0x1c) * *ebx_1
        int32_t temp0_1 = divs.dp.d(sx.q(ecx_1), *(arg1 + 0x124))
        uint32_t esi_1 = modu.dp.d(0:(*(ebx_1 + 0x24)), ecx_1)
        
        if (esi_1 == 0)
            esi_1 = ecx_1
        
        void* result_2
        
        if (i != 0)
            result_2 = result_1
        else
            result_2 = result_1
            *(result_2 + 0x48) = divs.dp.d(sx.q(esi_1 - 1), temp0_1) + 1
        
        int32_t j_1 = temp0_1 * 2
        result = *(*(result_2 + (*(result_2 + 0x40) << 2) + 0x38) + (i << 2))
        
        if (j_1 s> 0)
            result += esi_1 << 2
            void* esi_2 = result - 4
            int32_t j
            
            do
                result += 4
                *(result - 4) = *esi_2
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i += 1
        ebx_1 += 0x58
    while (i s< *(arg1 + 0x24))

return result
