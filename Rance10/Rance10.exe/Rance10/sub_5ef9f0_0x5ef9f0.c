// 函数: sub_5ef9f0
// 地址: 0x5ef9f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1
int32_t edx = arg1[1]
int32_t var_14

if (eax == edx)
    var_14 = arg2
    int32_t var_4 = 0
    int32_t var_10 = 1
    int64_t var_c = _mm_unpacklo_ps(zx.o(0), 0)
    return sub_5a76b0(arg1, &var_14)

int32_t ecx = arg2

if (ecx s< *eax)
    var_14 = ecx
    int32_t var_4_1 = 0
    int32_t* __saved_esi_1 = &var_14
    int32_t var_10_1 = 1
    int64_t var_c_1 = _mm_unpacklo_ps(zx.o(0), 0)
    return sub_5f0940(arg1, &arg2, eax)

int32_t eax_4
int64_t xmm0_3

if (eax == edx)
label_5eface:
    eax_4 = 0
    int32_t var_10_2 = 1
    xmm0_3 = _mm_unpacklo_ps(zx.o(0), 0)
else
    while (true)
        if (ecx s< *eax)
            eax = &eax[5]
        else
            int32_t* esi_1 = eax
            eax = &eax[5]
            
            if (eax == edx)
                xmm0_3 = *(esi_1 + 8)
                int32_t var_10_3 = esi_1[1]
                eax_4 = esi_1[4]
                break
            
            if (ecx s< *eax)
                int32_t edx_2 = *eax - *esi_1
                int32_t var_28
                void* ecx_3
                
                if (edx_2 s> 0)
                    int32_t ecx_5 = ecx - *esi_1
                    float xmm0_5 = _mm_cvtepi32_ps(zx.o(edx_2))
                    float xmm3_2 = _mm_cvtepi32_ps(zx.o(ecx_5))
                    var_28 = esi_1[1]
                    float var_20
                    ecx_3 = &var_20
                    float xmm3_3 = xmm3_2 / xmm0_5
                    float xmm1_3 = (eax[3] f- esi_1[3]) * xmm3_3
                    float xmm2_3 = (eax[4] f- esi_1[4]) * xmm3_3
                    var_20 = (eax[2] f- esi_1[2]) * xmm3_3 f+ esi_1[2]
                    float var_1c_1 = esi_1[3] f+ xmm1_3
                    float var_18_1 = esi_1[4] f+ xmm2_3
                else
                    var_28 = esi_1[1]
                    ecx_3 = &esi_1[2]
                
                void* var_34_2 = ecx_3
                void var_24
                return sub_5f0710(arg1, &var_24, eax, &arg2, &var_28)
        
        if (eax == edx)
            goto label_5eface

int32_t var_4_2 = eax_4
var_14 = ecx
int64_t var_c_2 = xmm0_3
return sub_5a76b0(arg1, &var_14)
