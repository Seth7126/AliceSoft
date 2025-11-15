// 函数: sub_5efc70
// 地址: 0x5efc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1
int32_t edx = arg1[1]
float var_18
int32_t var_c

if (eax == edx)
    var_c = arg2
    var_18 = 1f
    float var_4 = var_18
    int32_t var_8 = 1
    return sub_592380(arg1, &var_c)

int32_t ecx = arg2

if (ecx s< *eax)
    var_c = ecx
    arg2 = 0x3f800000
    int32_t var_4_1 = arg2
    int32_t* __saved_esi_1 = &var_c
    int32_t var_8_1 = 1
    return sub_5f09c0(arg1, &arg2, eax)

int32_t eax_6

if (eax == edx)
label_5efd40:
    arg2 = 0x3f800000
    eax_6 = arg2
    int32_t var_8_2 = 1
else
    while (true)
        if (ecx s< *eax)
            eax = &eax[3]
        else
            int32_t* esi_1 = eax
            eax = &eax[3]
            
            if (eax == edx)
                int32_t var_8_3 = esi_1[1]
                eax_6 = esi_1[2]
                break
            
            if (ecx s< *eax)
                int32_t edx_2 = *eax - *esi_1
                int32_t var_14
                
                if (edx_2 s<= 0)
                    var_18 = esi_1[1]
                    void* var_24_1 = &esi_1[2]
                    return sub_5f07a0(arg1, &var_14, eax, &arg2, &var_18)
                
                int32_t ecx_7 = ecx - *esi_1
                float xmm0_1 = _mm_cvtepi32_ps(zx.o(edx_2))
                float xmm1_1 = _mm_cvtepi32_ps(zx.o(ecx_7))
                var_14 = esi_1[1]
                int32_t* var_24_3 = &var_18
                var_18 = xmm1_1 / xmm0_1 * (eax[2] f- esi_1[2]) f+ esi_1[2]
                void var_10
                return sub_5f07a0(arg1, &var_10, eax, &arg2, &var_14)
        
        if (eax == edx)
            goto label_5efd40

int32_t var_4_2 = eax_6
var_c = ecx
return sub_592380(arg1, &var_c)
