// 函数: sub_5f01e0
// 地址: 0x5f01e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1
float var_18
int128_t xmm0_2
int32_t var_14_2

if (eax != arg1[1])
    float edx_1 = arg2
    
    if (edx_1 s< *eax)
        int128_t xmm0_1 = data_7fd4f4
        var_18 = edx_1
        int32_t* var_2c = &var_18
        int32_t var_14_1 = 1
        int128_t var_10_1 = xmm0_1
        return sub_5f0ae0(arg1, &arg2, eax)
    
    int32_t ecx_1 = arg1[1]
    
    if (eax == ecx_1)
    label_5f028e:
        var_18 = edx_1
        xmm0_2 = data_7fd4f4
        var_14_2 = 1
    else
        while (true)
            if (edx_1 s< *eax)
                eax = &eax[6]
            else
                int32_t* edi_1 = eax
                eax = &eax[6]
                
                if (eax == ecx_1)
                    int32_t eax_5 = edi_1[1]
                    xmm0_2 = *(edi_1 + 8)
                    var_18 = edx_1
                    int32_t var_14_4 = eax_5
                    break
                
                if (edx_1 s< *eax)
                    int32_t ecx_3 = *eax - *edi_1
                    int32_t var_20
                    void* ecx_5
                    
                    if (ecx_3 s> 0)
                        int32_t edx_2 = edx_1 i- *edi_1
                        float xmm0_4 = _mm_cvtepi32_ps(zx.o(ecx_3))
                        var_20 = edi_1[1]
                        ecx_5 = &var_18
                        float xmm5_3 = _mm_cvtepi32_ps(zx.o(edx_2)) / xmm0_4
                        float xmm2_3 = (eax[3] f- edi_1[3]) * xmm5_3
                        float xmm3_3 = (eax[4] f- edi_1[4]) * xmm5_3
                        float xmm4_3 = (eax[5] f- edi_1[5]) * xmm5_3
                        var_18 = edi_1[2] f+ (eax[2] f- edi_1[2]) * xmm5_3
                        float var_14_3 = edi_1[3] f+ xmm2_3
                        int128_t var_10
                        var_10.d = edi_1[4] f+ xmm3_3
                        var_10:4.d = edi_1[5] f+ xmm4_3
                        var_18.o = var_18.o
                    else
                        var_20 = edi_1[1]
                        ecx_5 = &edi_1[2]
                    
                    void* var_2c_1 = ecx_5
                    void var_1c
                    return sub_5f08c0(arg1, &var_1c, eax, &arg2, &var_20)
            
            if (eax == ecx_1)
                goto label_5f028e
else
    var_18 = arg2
    xmm0_2 = data_7fd4f4
    var_14_2 = 1
int128_t var_10_2 = xmm0_2
return sub_592490(arg1, &var_18)
