// 函数: sub_653400
// 地址: 0x653400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 0x180)
int32_t j_2 = *(arg1 + 0x104)
int32_t i = 0
int32_t ebx = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x4c) * j_2 * 0x14)
void* result = *(arg1 + 0x54)
int32_t var_20 = ebx
int32_t i_1 = 0

if (*(arg1 + 0x4c) s> 0)
    int32_t edx_1 = j_2 * 3
    int32_t ecx_2 = j_2 << 2
    void* esi = result + 8
    int32_t var_4_1 = edx_1
    void* var_14_1 = esi
    void* result_1 = eax + 8
    
    do
        *esi
        char* esi_1 = (*(*(arg1 + 4) + 8))(arg1, 1, 
            divs.dp.d(sx.q(*(esi + 0x14) * *(arg1 + 0x100) * *(arg1 + 0x108)), *esi), edx_1)
        sub_700660(ecx_2 + ebx, esi_1, j_2 * 0xc)
        
        if (j_2 s> 0)
            void* edx_4 = &esi_1[j_2 << 3]
            int32_t j_1 = j_2
            void* ecx_8 = (j_2 << 4) + ebx
            int32_t* ebx_1 = ebx - esi_1
            int32_t j
            
            do
                int32_t eax_19 = *edx_4
                edx_4 += 4
                *(ebx_1 + esi_1) = eax_19
                esi_1 = &esi_1[4]
                ecx_8 += 4
                *(ecx_8 - 4) = *(esi_1 - 4)
                j = j_1
                j_1 -= 1
            while (j != 1)
            ebx = var_20
            i = i_1
        
        int32_t* result_2 = result_1
        i += 1
        int32_t ecx_10 = ecx_2 + ebx
        ebx += j_2 * 0x14
        esi = var_14_1 + 0x58
        edx_1 = var_4_1
        *result_2 = ecx_10
        result = &result_2[1]
        var_20 = ebx
        i_1 = i
        result_1 = result
        var_14_1 = esi
    while (i s< *(arg1 + 0x4c))

return result
