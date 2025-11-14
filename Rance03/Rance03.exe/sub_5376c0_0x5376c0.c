// 函数: sub_5376c0
// 地址: 0x5376c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *arg1
int32_t ecx = arg1[1]

if (esi == ecx)
    *arg3 = &sealengine::CEmitterPos::`vftable'
    __builtin_memset(&arg3[1], 0, 0x14)
    return arg3

int32_t* eax_1 = esi
int32_t* edx_1

while (true)
    if (eax_1 == ecx)
        *arg3 = &sealengine::CEmitterPos::`vftable'
        *(arg3 + 4) = *(esi + 0xc)
        arg3[3] = esi[5]
        arg3[4] = esi[6]
        arg3[5] = esi[7]
        return arg3
    
    if (_mm_cvtepi32_ps(zx.o(*eax_1)) f<= arg2)
        edx_1 = eax_1
        eax_1 = &eax_1[9]
        
        if (eax_1 == ecx)
            break
        
        if (not(arg2 f>= _mm_cvtepi32_ps(zx.o(*eax_1))))
            int32_t esi_2 = *eax_1 - *edx_1
            
            if (esi_2 s<= 0)
                break
            
            int32_t edi = edx_1[1]
            float xmm2_1
            
            if (edi == 0 || edi - 1 u> 1)
                xmm2_1 = (zx.o(0)).d
            else
                xmm2_1 = (arg2 - _mm_cvtepi32_ps(zx.o(*edx_1))) / _mm_cvtepi32_ps(zx.o(esi_2))
            
            sub_538160(&edx_1[2], xmm2_1, arg3, &eax_1[2], edi)
            return arg3
    else
        eax_1 = &eax_1[9]

*arg3 = &sealengine::CEmitterPos::`vftable'
*(arg3 + 4) = *(edx_1 + 0xc)
arg3[3] = edx_1[5]
arg3[4] = edx_1[6]
arg3[5] = edx_1[7]
return arg3
