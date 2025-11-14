// 函数: sub_56f930
// 地址: 0x56f930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
*arg6 = 0

if (arg3 s<= 0)
    return 

int32_t* eax_2 = *arg1
int32_t* eax = arg3 - 1
arg1 = eax

do
    float xmm0_1 = sub_537eb0(arg4, esi, eax)
    
    if (esi != 0)
        struct sealengine::CEmitterRotate::VTable* var_14
        struct sealengine::CEmitterRotate::VTable** eax_9 =
            sub_538290(&eax_2[(esi + arg2) * 7 + 2], xmm0_1, &var_14)
        *(arg5 + 4) = eax_9[1] f+ *(arg5 + 4)
        *(arg5 + 8) = eax_9[2] f+ *(arg5 + 8)
        float xmm0_7 = eax_9[3] f+ *(arg5 + 0xc)
        var_14 = &sealengine::CEmitterRotate::`vftable'
        *(arg5 + 0xc) = xmm0_7
    else
        struct sealengine::CEmitterRotate::VTable* var_24
        struct sealengine::CEmitterRotate::VTable** eax_5 =
            sub_538290(&eax_2[arg2 * 7 + 2], xmm0_1, &var_24)
        *(arg5 + 4) = eax_5[1]
        *(arg5 + 8) = eax_5[2]
        *(arg5 + 0xc) = eax_5[3]
        var_24 = &sealengine::CEmitterRotate::`vftable'
    
    int32_t ecx_9 = esi + arg2
    esi += 1
    eax = arg1
    *arg6 = _mm_cvtepi32_ps(zx.o(eax_2[ecx_9 * 7])) * xmm0_1 f+ *arg6
while (esi s< arg3)
