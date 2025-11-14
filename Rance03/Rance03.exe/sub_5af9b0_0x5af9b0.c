// 函数: sub_5af9b0
// 地址: 0x5af9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx_1 = arg4 - arg3
int32_t i_6 = (arg2 - arg3) s/ 0x1c
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x92492493, ecx_1)
int32_t i_3 = i_6
int32_t i_5 = ecx_1 s/ 0x1c
int32_t i_2 = i_5
int32_t i_4 = i_5

if (i_6 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        int32_t eax_1
        int32_t edx_6
        edx_6:eax_1 = sx.q(i_7)
        i = mods.dp.d(edx_6:eax_1, i_3)
        result = divs.dp.d(edx_6:eax_1, i_3)
        i_3 = i
    while (i != 0)
    i_2 = i_4

if (i_4 s< i_5 && i_4 s> 0)
    int32_t ebp_3 = i_6 * 0x1c
    int32_t result_5 = arg3
    int32_t var_4_1 = ebp_3
    int32_t result_2 = result_5 + i_4 * 0x1c
    int32_t i_1
    
    do
        int32_t result_4 = result_2 + ebp_3
        result = result_2
        int32_t result_1 = result
        
        if (result_4 == arg4)
            result_4 = result_5
        
        do
            int32_t xmm0_1 = *(result + 0xc)
            int32_t xmm1_1 = *(result + 0x10)
            int32_t xmm2_1 = *(result + 0x14)
            int32_t esi_4 = *result
            int32_t ecx_2 = *(result + 0x18)
            int32_t edx_8 = *(result + 4)
            int32_t result_3 = result_1
            result_1 = result_4
            *result_3 = *result_4
            *(result_3 + 4) = *(result_4 + 4)
            *(result_3 + 0xc) = *(result_4 + 0xc)
            *(result_3 + 0x10) = *(result_4 + 0x10)
            *(result_3 + 0x14) = *(result_4 + 0x14)
            *(result_3 + 0x18) = *(result_4 + 0x18)
            ebp_3 = var_4_1
            *(result_4 + 4) = edx_8
            *result_4 = esi_4
            *(result_4 + 0xc) = xmm0_1
            *(result_4 + 0x10) = xmm1_1
            *(result_4 + 0x14) = xmm2_1
            *(result_4 + 0x18) = ecx_2
            int32_t eax_13 = (arg4 - result_4) s/ 0x1c
            
            if (i_6 s>= eax_13)
                result_4 = arg3 + (i_6 - eax_13) * 0x1c
            else
                result_4 += ebp_3
            
            result = result_1
        while (result_4 != result_2)
        
        result_2 -= 0x1c
        i_1 = i_2 - 1
        i_2 = i_1
        result_5 = arg3
    while (i_1 s> 0)

return result
