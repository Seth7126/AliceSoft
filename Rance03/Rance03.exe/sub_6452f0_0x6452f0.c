// 函数: sub_6452f0
// 地址: 0x6452f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_5 = arg2
void* var_20 = arg3
int32_t i_6 = i_5
int32_t edx_1 = arg3 * i_5
int32_t* result = arg3 * 2
int32_t* result_1 = result

if (i_5 s> 0)
    float* esi_1 = arg5
    result = arg4
    float* edx_2 = &arg4[edx_1]
    int32_t i_4 = i_6
    arg3 = var_20
    float* edi_3 = &arg5[result_1 - 1]
    int32_t i
    
    do
        *esi_1 = *result + *edx_2
        float xmm0_4 = *result - *edx_2
        esi_1 = &esi_1[arg3 * 2]
        result = &result[arg3]
        edx_2 = &edx_2[arg3]
        *edi_3 = xmm0_4
        edi_3 = &edi_3[arg3 * 2]
        i = i_4
        i_4 -= 1
    while (i != 1)
    i_5 = i_6

if (arg3 s>= 2)
    if (arg3 == 2)
    label_6454e7:
        
        if (i_5 s> 0)
            int32_t eax_20 = arg3 << 2
            void* ecx_4 = &arg5[arg3]
            void* edx_5 = &arg4[arg3 - 1]
            void* esi_7 = &arg4[arg3 - 1 + edx_1]
            int32_t i_1
            
            do
                int32_t xmm0_13 = *esi_7
                esi_7 += eax_20
                *ecx_4 = xmm0_13 ^ 0x80000000
                result = *edx_5
                edx_5 += eax_20
                *(ecx_4 - 4) = result
                ecx_4 += arg3 << 3
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    else
        if (i_5 s> 0)
            int32_t eax_2 = arg3 << 3
            int32_t eax_3 = arg3 << 2
            float* var_10_2 = arg5
            int32_t* var_8_1 = arg4
            int32_t* edx_3 = arg4
            int32_t i_3 = i_5
            void* esi_3 = &arg4[edx_1]
            void* var_c_2 = esi_3
            void* var_4_1 = &arg5[arg3 * 2]
            float* eax_8 = var_10_2
            void* edi_4 = var_4_1
            int32_t i_2
            
            do
                if (arg3 s> 2)
                    void* esi_4 = edi_4
                    float* edi_5 = eax_8
                    void* var_18_1 = arg6 + 4
                    int32_t* ecx_3 = var_c_2
                    int32_t j_1 = ((arg3 - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        int32_t* eax_14 = var_18_1
                        ecx_3 = &ecx_3[2]
                        edx_3 = &edx_3[2]
                        edi_5 = &edi_5[2]
                        esi_4 -= 8
                        float xmm5_1 = eax_14[-1]
                        float xmm2_1 = *eax_14
                        j = j_1
                        j_1 -= 1
                        var_18_1 = &eax_14[2]
                        float xmm4_3 = *ecx_3 * xmm2_1 + xmm5_1 f* ecx_3[-1]
                        float xmm5_3 = xmm5_1 f* *ecx_3 - xmm2_1 f* ecx_3[-1]
                        *edi_5 = *edx_3 + xmm5_3
                        *esi_4 = xmm5_3 f- *edx_3
                        edi_5[-1] = xmm4_3 f+ edx_3[-1]
                        *(esi_4 - 4) = edx_3[-1] f- xmm4_3
                    while (j != 1)
                    arg3 = var_20
                    eax_8 = var_10_2
                    edx_3 = var_8_1
                    esi_3 = var_c_2
                    edi_4 = var_4_1
                
                edi_4 += eax_2
                edx_3 = &edx_3[arg3]
                esi_3 += eax_3
                eax_8 = &eax_8[arg3 * 2]
                i_2 = i_3
                i_3 -= 1
                var_4_1 = edi_4
                var_8_1 = edx_3
                var_c_2 = esi_3
                var_10_2 = eax_8
            while (i_2 != 1)
            i_5 = i_6
        
        result = arg3 & 0x80000001
        
        if (result s< 0)
            result = ((result - 1) | 0xfffffffe) + 1
        
        if (result != 1)
            goto label_6454e7

return result
