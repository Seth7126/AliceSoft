// 函数: sub_4b9a40
// 地址: 0x4b9a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = arg2
void* eax = ecx[1]

if (eax != ecx[2])
    int32_t* ebx_1 = arg1
    
    if (ebx_1 s>= *(eax + 8))
        float xmm0 = sub_4bd690(ecx, ebx_1)
        arg2 = nullptr
        int32_t** ecx_1 = &arg1
        
        if (ebx_1 s<= 0)
            ecx_1 = &arg2
        
        int32_t eax_2
        int32_t edx
        edx:eax_2 = muls.dp.d(0x3e0f83e1, *ecx_1)
        int32_t edx_1 = edx s>> 3
        arg2 = nullptr
        int32_t esi = *arg3
        int32_t edi_2 = (edx_1 u>> 0x1f) + edx_1
        int32_t ecx_4 = (arg3[1] - esi) s>> 2
        int32_t** eax_5 = &arg1
        float xmm2 = *(esi + (modu.dp.d(0:edi_2, ecx_4) << 2))
        
        if (ebx_1 s<= 0)
            eax_5 = &arg2
        
        return int.d(((1f - _mm_cvtepi32_ps(zx.o(mods.dp.d(sx.q(*eax_5), 0x21))) * 0.0303030312f)
            * (*(esi + (modu.dp.d(0:(edi_2 + 1), ecx_4) << 2)) - xmm2) + xmm2 - 0.5f) * xmm0)

return 0
