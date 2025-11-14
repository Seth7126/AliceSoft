// 函数: sub_56ef60
// 地址: 0x56ef60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_5c
int32_t eax_1 = __security_cookie ^ &var_5c
int32_t* edi = *arg1
int32_t ecx = arg1[1]

if (edi != ecx)
    int32_t* eax_2 = edi
    
    while (true)
        float* var_6c_1
        int128_t var_58
        void* ecx_1
        
        if (eax_2 == ecx)
            var_6c_1 = &var_58
            int32_t var_70_3 = ecx
            ecx_1 = &edi[2]
        else if (_mm_cvtepi32_ps(zx.o(*eax_2)) f<= arg2)
            int32_t* edx_1 = eax_2
            eax_2 = &eax_2[7]
            
            if (eax_2 != ecx)
                if (arg2 f>= _mm_cvtepi32_ps(zx.o(*eax_2)))
                    continue
                else
                    int32_t edi_2 = *eax_2 - *edx_1
                    
                    if (edi_2 s> 0)
                        int32_t ebx_1 = edx_1[1]
                        float xmm2_1
                        
                        if (ebx_1 == 0 || ebx_1 - 1 u> 1)
                            xmm2_1 = (zx.o(0)).d
                        else
                            xmm2_1 = (arg2 - _mm_cvtepi32_ps(zx.o(*edx_1)))
                                / _mm_cvtepi32_ps(zx.o(edi_2))
                        
                        sub_5382d0(&edx_1[2], xmm2_1, arg3, &eax_2[2], ebx_1)
                        break
            
            var_6c_1 = &var_58
            int32_t var_70_1 = ecx
            ecx_1 = &edx_1[2]
        else
            eax_2 = &eax_2[7]
            continue
        
        float var_48[0x11]
        sub_47c1a0(sub_5383e0(ecx_1, &var_48), var_6c_1)
        *arg3 = var_58
        break
else
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    arg3[3] = 0x3f800000

sub_69a5bc(eax_1 ^ &var_5c)
return arg3
