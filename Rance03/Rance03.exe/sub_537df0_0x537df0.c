// 函数: sub_537df0
// 地址: 0x537df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg6 = 0
int32_t esi = 0
int32_t result = arg3

if (result s> 0)
    result -= 1
    int32_t result_1 = result
    
    do
        float xmm0_1 = sub_537eb0(arg4, esi, result)
        int32_t ebx_1 = (arg2 + esi) * 9
        int32_t ebp_1 = *arg1
        struct sealengine::CEmitterPos::VTable* var_34
        struct sealengine::CEmitterPos::VTable** eax_3 =
            sub_5380f0(ebp_1 + 8 + (ebx_1 << 2), xmm0_1, &var_34)
        struct sealengine::CEmitterPos::VTable* var_1c
        
        if (esi != 0)
            eax_3 = sub_538010(arg5, &var_1c, eax_3)
        esi += 1
        *(arg5 + 4) = *(eax_3 + 4)
        *(arg5 + 0xc) = eax_3[3]
        *(arg5 + 0x10) = eax_3[4]
        *(arg5 + 0x14) = eax_3[5]
        *arg6 = _mm_cvtepi32_ps(zx.o(*(ebp_1 + (ebx_1 << 2)))) * xmm0_1 f+ *arg6
        result = result_1
    while (esi s< arg3)

return result
