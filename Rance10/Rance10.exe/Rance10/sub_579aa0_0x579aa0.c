// 函数: sub_579aa0
// 地址: 0x579aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1
int32_t ecx = arg1[1]

if (esi == ecx)
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    arg3[3] = 0x3f800000
    return arg3

int32_t* eax_1 = esi
float xmm1
float xmm2
float xmm3

while (true)
    if (eax_1 == ecx)
        xmm3 = esi[4]
        xmm2 = esi[2]
        xmm1 = esi[3]
        break
    
    if (_mm_cvtepi32_ps(zx.o(*eax_1)) f<= arg2)
        int32_t* edx_1 = eax_1
        eax_1 = &eax_1[5]
        
        if (eax_1 != ecx)
            if (arg2 f>= _mm_cvtepi32_ps(zx.o(*eax_1)))
                continue
            else
                int32_t esi_2 = *eax_1 - *edx_1
                
                if (esi_2 s> 0)
                    int32_t edi = edx_1[1]
                    float xmm2_2
                    
                    if (edi == 0 || edi - 1 u> 1)
                        xmm2_2 = (zx.o(0)).d
                    else
                        xmm2_2 =
                            (arg2 - _mm_cvtepi32_ps(zx.o(*edx_1))) / _mm_cvtepi32_ps(zx.o(esi_2))
                    
                    sub_57aba0(&edx_1[2], xmm2_2, arg3, &eax_1[2], edi)
                    return arg3
        
        xmm3 = edx_1[4]
        xmm2 = edx_1[2]
        xmm1 = edx_1[3]
        break
    
    eax_1 = &eax_1[5]

int32_t var_98_1 = ecx
void var_88
float var_48[0x10]
sub_4ba000(sub_57a9b0(&var_48, xmm1, xmm2, xmm3), &var_88)
sub_6cb8c0(&var_88, arg3)
return arg3
