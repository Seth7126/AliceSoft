// 函数: sub_579d30
// 地址: 0x579d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx_3 = *arg1
int32_t ecx = arg1[1]

if (edx_3 == ecx)
    *arg3 = data_7fd4d8.q
    arg3[1].d = data_7fd4e0
    *(arg3 + 0xc) = 0
    arg3[2].d = 0
    return arg3

int32_t* eax_1 = edx_3
int32_t* esi_1

while (true)
    if (eax_1 == ecx)
        *arg3 = *(edx_3 + 8)
        arg3[2].d = edx_3[6]
        return arg3
    
    if (_mm_cvtepi32_ps(zx.o(*eax_1)) f<= arg2)
        esi_1 = eax_1
        eax_1 = &eax_1[7]
        
        if (eax_1 == ecx)
            break
        
        if (not(arg2 f>= _mm_cvtepi32_ps(zx.o(*eax_1))))
            int32_t edx_1 = *eax_1 - *esi_1
            
            if (edx_1 s<= 0)
                break
            
            int32_t edi = esi_1[1]
            float xmm2_1
            
            if (edi == 0 || edi - 1 u> 1)
                xmm2_1 = (zx.o(0)).d
            else
                xmm2_1 = (arg2 - _mm_cvtepi32_ps(zx.o(*esi_1))) / _mm_cvtepi32_ps(zx.o(edx_1))
            
            sub_57a8b0(&esi_1[2], xmm2_1, arg3, &eax_1[2], edi)
            return arg3
    else
        eax_1 = &eax_1[7]

*arg3 = *(esi_1 + 8)
arg3[2].d = esi_1[6]
return arg3
