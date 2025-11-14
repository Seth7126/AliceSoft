// 函数: sub_52e4f0
// 地址: 0x52e4f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax

for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
    eax = *i
    
    if (*(eax + 4) == arg2)
        int32_t eax_2 = (*(**(eax + 4) + 0x10))()
        float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
        *arg3 = _mm_cvtepi32_ps(zx.o(eax_2)) / xmm0_1
        *arg4 = _mm_cvtepi32_ps(zx.o(*(eax + 0xc))) / _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
        int32_t eax_7 = (*(**(*i + 4) + 0x14))()
        float xmm0_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
        *arg5 = _mm_cvtepi32_ps(zx.o(eax_7)) / xmm0_5
        *arg6 = _mm_cvtepi32_ps(zx.o(*(eax + 0x10))) / _mm_cvtepi32_ps(zx.o(*(arg1 + 8)))
        float* eax_9
        eax_9.b = 1
        return eax_9

eax.b = 0
return eax
