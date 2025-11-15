// 函数: sub_6bfca0
// 地址: 0x6bfca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_5 = arg2
int32_t var_24 = arg3
int32_t i_6 = i_5
int32_t edx_1 = arg3 * i_5
int32_t var_34 = edx_1

if (i_5 s> 0)
    float* esi_1 = arg5
    arg1 = arg4
    int32_t* edx_2 = &arg4[edx_1]
    float* edi_1 = &esi_1[-1 + arg3 * 2]
    int32_t i_4 = i_6
    arg3 = var_24
    int32_t i
    
    do
        *esi_1 = *edx_2 + *arg1
        float xmm0_4 = *arg1 f- *edx_2
        arg1 = &arg1[arg3]
        edx_2 = &edx_2[arg3]
        esi_1 = &esi_1[arg3 * 2]
        *edi_1 = xmm0_4
        edi_1 = &edi_1[arg3 * 2]
        i = i_4
        i_4 -= 1
    while (i != 1)
    i_5 = i_6
    edx_1 = var_34

if (arg3 s< 2)
    return 

if (arg3 == 2)
label_6bfea6:
    
    if (i_5 s> 0)
        void* ecx_5 = &arg5[arg3]
        float** edx_8 = &arg4[arg3 - 1]
        int32_t* esi_6 = &arg4[arg3 - 1 + var_34]
        int32_t i_1
        
        do
            int32_t xmm0_13 = *esi_6
            esi_6 = &esi_6[arg3]
            *ecx_5 = xmm0_13 ^ 0x80000000
            arg1 = *edx_8
            edx_8 = &edx_8[arg3]
            *(ecx_5 - 4) = arg1
            ecx_5 += arg3 << 3
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    return 

int32_t var_18_1 = 0

if (i_5 s> 0)
    float* esi_2 = arg4
    int32_t i_3 = i_6
    float* var_14_2 = &esi_2[edx_1]
    float* var_4_1 = arg5
    float* var_c_1 = &arg5[arg3 * 2]
    float* eax_6 = var_14_2
    float* edi_3 = var_c_1
    float* var_10_2 = esi_2
    int32_t i_2
    
    do
        var_18_1 += arg3
        float* edx_4 = var_4_1
        
        if (arg3 s> 2)
            float* edx_5 = var_10_2
            float* esi_3 = edi_3
            float* edi_4 = var_4_1
            float* var_1c_1 = arg6 + 4
            float* ecx_4 = eax_6
            int32_t j_1 = ((arg3 - 3) u>> 1) + 1
            int32_t j
            
            do
                ecx_4 = &ecx_4[2]
                edx_5 = &edx_5[2]
                edi_4 = &edi_4[2]
                esi_3 -= 8
                float xmm5_1 = var_1c_1[-1]
                float xmm2_1 = *var_1c_1
                j = j_1
                j_1 -= 1
                var_1c_1 = &var_1c_1[2]
                float xmm4_3 = xmm5_1 * ecx_4[-1] + *ecx_4 * xmm2_1
                float xmm5_3 = xmm5_1 * *ecx_4 - xmm2_1 * ecx_4[-1]
                *edi_4 = xmm5_3 + *edx_5
                *esi_3 = xmm5_3 - *edx_5
                edi_4[-1] = edx_5[-1] + xmm4_3
                esi_3[-1] = edx_5[-1] - xmm4_3
            while (j != 1)
            arg3 = var_24
            eax_6 = var_14_2
            edx_4 = var_4_1
            esi_2 = var_10_2
            edi_3 = var_c_1
        
        edi_3 = &edi_3[arg3 * 2]
        esi_2 = &esi_2[arg3]
        eax_6 = &eax_6[arg3]
        i_2 = i_3
        i_3 -= 1
        var_c_1 = edi_3
        var_10_2 = esi_2
        var_4_1 = &edx_4[arg3 * 2]
        var_14_2 = eax_6
    while (i_2 != 1)
    i_5 = i_6

arg1 = arg3 & 0x80000001

if (arg1 s< 0)
    arg1 = ((arg1 - 1) | 0xfffffffe) + 1

if (arg1 != 1)
    goto label_6bfea6
