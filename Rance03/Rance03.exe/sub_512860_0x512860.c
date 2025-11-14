// 函数: sub_512860
// 地址: 0x512860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg3 = 0
arg3[1] = 0
int32_t edx = *(arg4 + 0xc)

if (edx s<= 0 && *(arg4 + 0x10) s<= 0)
    *arg3 = arg1
    arg3[1] = arg2
    return arg3

int32_t ebx = *(arg4 + 4)
int32_t edi = *(arg4 + 8)

if (ebx s< 0)
    ebx = 0

int32_t esi_1 = *(arg4 + 0x10)

if (not(_mm_cvtepi32_ps(zx.o(edx + ebx)) f<= arg1))
    edx = int.d(arg1) - ebx

if (edi s< 0)
    edi = 0

if (not(_mm_cvtepi32_ps(zx.o(esi_1 + edi)) f<= arg2))
    esi_1 = int.d(arg2) - edi

*arg3 = _mm_cvtepi32_ps(zx.o(edx))
arg3[1] = _mm_cvtepi32_ps(zx.o(esi_1))
return arg3
