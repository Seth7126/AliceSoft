// 函数: sub_570c60
// 地址: 0x570c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x30c30c31, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t result = (arg2[1] - *arg2) s>> 6

if ((edx_3 u>> 0x1f) + edx_3 == result)
    result = sub_570e00(&arg1[3], arg2)
    int32_t edi_1 = arg1[4]
    int32_t ebx_1 = 0
    int128_t* esi_2 = arg1[3]
    
    if (esi_2 != edi_1)
        int32_t var_d4_1 = 0
        int32_t var_d8_1 = 0
        
        do
            int32_t edx_7
            
            if (ebx_1 s>= 0)
                int32_t ecx_5 = *(arg3 + 0x58) - *(arg3 + 0x54)
                int32_t eax_3
                int32_t edx_5
                edx_5:eax_3 = muls.dp.d(0x88888889, ecx_5)
                edx_7 = (edx_5 + ecx_5) s>> 5
            
            int32_t xmm0_1
            
            if (ebx_1 s< 0 || ebx_1 s>= (edx_7 u>> 0x1f) + edx_7)
                xmm0_1 = (zx.o(0)).d
            else
                xmm0_1 = *(var_d8_1 + *(arg3 + 0x54) + 0x1c)
            
            int32_t var_cc = xmm0_1
            int32_t var_c8_1 = xmm0_1
            int32_t var_c4_1 = xmm0_1
            void var_c0
            float var_80[0x4][0x4]
            int128_t* eax_9 = sub_6cb020(sub_6cae40(&var_c0, &var_cc), &var_c0, &var_80, esi_2)
            float var_40[0x4][0x4]
            result = sub_6cb020(eax_9, eax_9, &var_40, arg4)
            esi_2 = &esi_2[4]
            var_d8_1 += 0x3c
            ebx_1 += 1
            int32_t ecx_11 = *arg1
            *(var_d4_1 + ecx_11 + 0x14) = *result
            *(var_d4_1 + ecx_11 + 0x24) = *(result + 0x10)
            *(var_d4_1 + ecx_11 + 0x34) = *(result + 0x20)
            *(var_d4_1 + ecx_11 + 0x44) = *(result + 0x30)
            var_d4_1 += 0x54
        while (esi_2 != edi_1)

return result
