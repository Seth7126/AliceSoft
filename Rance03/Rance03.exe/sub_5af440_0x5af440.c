// 函数: sub_5af440
// 地址: 0x5af440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_6 = (arg2 - arg3) s/ 0x14
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x66666667, arg4 - arg3)
int32_t i_3 = i_6
int32_t i_5 = (arg4 - arg3) s/ 0x14
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
    int32_t* ecx_2 = arg3
    int32_t edx_8 = i_6 * 0x14
    int32_t var_8_1 = edx_8
    void* ebx_3 = &ecx_2[i_4 * 5]
    int32_t i_1
    
    do
        int32_t* edi = ebx_3 + edx_8
        int32_t* ebp_1 = ebx_3
        
        if (edi == arg4)
            edi = ecx_2
        
        do
            int32_t esi_2 = *ebp_1
            int32_t edx_9 = ebp_1[1]
            int32_t xmm0_1 = ebp_1[3]
            int32_t ecx_3 = ebp_1[4]
            *ebp_1 = *edi
            ebp_1[1] = edi[1]
            ebp_1[3] = edi[3]
            ebp_1[4] = edi[4]
            edi[1] = edx_9
            ebp_1 = edi
            *edi = esi_2
            edi[3] = xmm0_1
            edi[4] = ecx_3
            int32_t edx_10
            edx_10:result = muls.dp.d(0x66666667, arg4 - edi)
            int32_t ecx_8 = (arg4 - edi) s/ 0x14
            edx_8 = var_8_1
            
            if (i_6 s>= ecx_8)
                result = (i_6 - ecx_8) * 5
                edi = &arg3[result]
            else
                edi += edx_8
        while (edi != ebx_3)
        
        ebx_3 -= 0x14
        i_1 = i_2 - 1
        i_2 = i_1
        ecx_2 = arg3
    while (i_1 s> 0)

return result
