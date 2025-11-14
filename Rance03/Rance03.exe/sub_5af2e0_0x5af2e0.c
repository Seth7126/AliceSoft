// 函数: sub_5af2e0
// 地址: 0x5af2e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result_6 = arg3
int32_t result_7 = result_6
int32_t i_6 = (arg2 - result_6) s/ 0x24
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x38e38e39, arg4 - result_6)
int32_t i_3 = i_6
int32_t i_5 = (arg4 - result_6) s/ 0x24
int32_t i_2 = i_5
int32_t i_4 = i_5

if (i_6 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        int32_t eax_1
        int32_t edx_5
        edx_5:eax_1 = sx.q(i_7)
        i = mods.dp.d(edx_5:eax_1, i_3)
        result = divs.dp.d(edx_5:eax_1, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_4

if (i_4 s< i_5 && i_4 s> 0)
    int32_t edx_8 = i_6 * 0x24
    int32_t result_2 = result_6 + i_4 * 0x24
    int32_t var_c_1 = edx_8
    int32_t result_3 = result_2
    int32_t i_1
    
    do
        int32_t result_4 = edx_8 + result_2
        result = result_2
        int32_t result_1 = result
        
        if (result_4 == arg4)
            result_4 = result_6
        
        do
            int32_t esi_2 = *(result + 0x14)
            int64_t xmm1_1 = *(result + 0xc)
            int32_t xmm2_1 = *(result + 0x18)
            int32_t xmm3_1 = *(result + 0x1c)
            int32_t edi = *result
            int32_t ecx_2 = *(result + 0x20)
            int32_t edx_9 = *(result + 4)
            int32_t result_5 = result_1
            result_1 = result_4
            *result_5 = *result_4
            *(result_5 + 4) = *(result_4 + 4)
            *(result_5 + 0xc) = *(result_4 + 0xc)
            *(result_5 + 0x14) = *(result_4 + 0x14)
            *(result_5 + 0x18) = *(result_4 + 0x18)
            *(result_5 + 0x1c) = *(result_4 + 0x1c)
            *(result_5 + 0x20) = *(result_4 + 0x20)
            *(result_4 + 4) = edx_9
            *result_4 = edi
            result_6 = result_7
            *(result_4 + 0xc) = xmm1_1
            *(result_4 + 0x14) = esi_2
            *(result_4 + 0x18) = xmm2_1
            *(result_4 + 0x1c) = xmm3_1
            *(result_4 + 0x20) = ecx_2
            int32_t ecx_7 = (arg4 - result_4) s/ 0x24
            edx_8 = var_c_1
            
            if (i_6 s>= ecx_7)
                result_4 = result_6 + (i_6 - ecx_7) * 0x24
            else
                result_4 += edx_8
            
            result = result_1
        while (result_4 != result_3)
        
        result_2 = result_3 - 0x24
        i_1 = i_2 - 1
        result_3 = result_2
        i_2 = i_1
    while (i_1 s> 0)

return result
