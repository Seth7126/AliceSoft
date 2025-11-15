// 函数: sub_5da230
// 地址: 0x5da230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 6
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        int32_t ecx = *arg1
        
        if (*(esi_1 + ecx + 0x7c) != 0)
            float xmm3_1 = 1f / arg2
            float xmm4_2 = xmm3_1 * (*(esi_1 + ecx + 0x6c) f- *(esi_1 + ecx + 0xcc))
            float xmm5_2 = xmm3_1 * (*(esi_1 + ecx + 0x70) f- *(esi_1 + ecx + 0xd0))
            float xmm3_2 = xmm3_1 * (*(esi_1 + ecx + 0x74) f- *(esi_1 + ecx + 0xd4))
            float var_c_1 = xmm4_2
            float var_8_1 = xmm5_2
            float var_4_1 = xmm3_2
            
            if (*(esi_1 + ecx + 0xc4) != 0)
                float xmm0_3 = *(esi_1 + ecx + 0xc8)
                var_c_1 = xmm4_2 * xmm0_3
                float var_8_2 = xmm5_2 * xmm0_3
                var_4_1 = xmm3_2 * xmm0_3
            
            *(esi_1 + ecx + 0xb8) = var_c_1.q
            *(esi_1 + ecx + 0xc0) = var_4_1
        
        ebx += 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
        esi_1 += 0xd8
        int32_t edx_5 = edx_4 s>> 6
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
