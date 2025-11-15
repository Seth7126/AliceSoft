// 函数: sub_579910
// 地址: 0x579910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *arg1
int32_t edx = arg1[1]

if (edi == edx)
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    arg3[3] = 0x3f800000
    return arg3

int32_t ecx = 0
int32_t esi_2 = (edx - edi) s/ 0x14
float xmm1
float xmm2
float xmm3

if (esi_2 s<= 0)
label_5799d5:
    xmm3 = *(edi + 0x10)
    xmm2 = *(edi + 8)
    xmm1 = *(edi + 0xc)
else
    while (true)
        int32_t eax_2 = ecx * 5
        int32_t* edx_4 = edi + (eax_2 << 2)
        
        if (_mm_cvtepi32_ps(zx.o(*(edi + (eax_2 << 2)))) f> arg2)
            goto label_5799d5
        
        if (ecx + 1 s< esi_2)
            int32_t eax_4
            
            if (edx_4[1] != 0)
                if (ecx + 2 s>= esi_2)
                    float* esi_5 = arg3
                    sub_579e10(arg2, esi_5, edx_4, edi + (ecx + 1) * 0x14)
                    return esi_5
                
                int32_t eax_7
                
                if (ecx + 3 s< esi_2)
                    eax_7 = (ecx + 3) * 5
                    
                    if (arg2 f< _mm_cvtepi32_ps(zx.o(*(edi + (eax_7 << 2)))))
                        int32_t var_9c_2 = ecx
                        sub_579ef0(eax_7, arg1, arg3, ecx, 4, arg2)
                        return arg3
                    
                    eax_4 = 3
                    goto label_5799cf
                
                eax_7 = ecx * 5
                
                if (not(arg2 f< _mm_cvtepi32_ps(zx.o(*(edi + (eax_7 << 2) + 0x28)))))
                    float* esi_4 = arg3
                    sub_57ab50(edi + ((eax_7 + 0xc) << 2), esi_4)
                    return esi_4
                
                int32_t var_9c_5 = ecx
                sub_579ef0(eax_7, arg1, arg3, ecx, 3, arg2)
                return arg3
            
            if (not(_mm_cvtepi32_ps(zx.o(edx_4[5])) f> arg2))
                eax_4 = 1
            label_5799cf:
                ecx += eax_4
                
                if (ecx s>= esi_2)
                    goto label_5799d5
                
                continue
        
        xmm3 = edx_4[4]
        xmm2 = edx_4[2]
        xmm1 = edx_4[3]
        break

int32_t var_a0 = ecx
void var_88
float var_48[0x10]
sub_4ba000(sub_57a9b0(&var_48, xmm1, xmm2, xmm3), &var_88)
sub_6cb8c0(&var_88, arg3)
return arg3
