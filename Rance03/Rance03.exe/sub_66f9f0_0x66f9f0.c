// 函数: sub_66f9f0
// 地址: 0x66f9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result_4 = arg3
int32_t result_5 = result_4
int32_t i_6 = (arg2 - result_4) s/ 0x28
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x66666667, arg4 - result_4)
int32_t i_3 = i_6
int32_t i_5 = (arg4 - result_4) s/ 0x28
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
    int32_t ebp_3 = i_6 * 0x28
    int32_t result_2 = result_4 + i_4 * 0x28
    int32_t i_1
    
    do
        int32_t edx_7 = arg4
        int32_t result_3 = result_2 + ebp_3
        result = result_2
        
        if (result_3 == edx_7)
            result_3 = result_4
        
        do
            int32_t result_1 = result_3
            int128_t xmm1_1 = *result
            int128_t xmm2_1 = *(result + 0x10)
            int64_t xmm3_1 = *(result + 0x20)
            *result = *result_3
            *(result + 0x10) = *(result_3 + 0x10)
            *(result + 0x20) = *(result_3 + 0x20)
            *result_3 = xmm1_1
            *(result_3 + 0x10) = xmm2_1
            *(result_3 + 0x20) = xmm3_1
            int32_t edi_2 = (edx_7 - result_3) s/ 0x28
            
            if (i_6 s>= edi_2)
                result_4 = result_5
                result_3 = result_4 + (i_6 - edi_2) * 0x28
            else
                result_4 = result_5
                result_3 += ebp_3
            
            result = result_1
            edx_7 = arg4
        while (result_3 != result_2)
        
        result_2 -= 0x28
        i_1 = i_2 - 1
        i_2 = i_1
    while (i_1 s> 0)

return result
