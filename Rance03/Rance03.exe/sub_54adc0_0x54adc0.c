// 函数: sub_54adc0
// 地址: 0x54adc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *arg1
int32_t ecx = arg1[1]

if (esi == ecx)
    arg3[1] = 0
    *arg3 = &sealengine::CFrameIndex::`vftable'
    return arg3

int32_t* eax_1 = esi
int32_t* edx_1

while (true)
    if (eax_1 == ecx)
        arg3[1] = esi[3]
        *arg3 = &sealengine::CFrameIndex::`vftable'
        return arg3
    
    if (_mm_cvtepi32_ps(zx.o(*eax_1)) f<= arg2)
        edx_1 = eax_1
        eax_1 = &eax_1[5]
        
        if (eax_1 == ecx)
            break
        
        if (not(arg2 f>= _mm_cvtepi32_ps(zx.o(*eax_1))))
            break
    else
        eax_1 = &eax_1[5]

arg3[1] = edx_1[3]
*arg3 = &sealengine::CFrameIndex::`vftable'
return arg3
