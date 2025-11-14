// 函数: sub_516d60
// 地址: 0x516d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t edx = 0
void* var_4 = arg1
int32_t* i = *arg2

while (i != arg2[1])
    uint128_t xmm1_1 = zx.o(*(arg1 + 0xec))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(edx))
    float xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
    int32_t esi_1 = int.d(xmm0_2 * arg5 + xmm1_2)
    float xmm1_3
    
    if (arg4 s> esi_1)
        if (int.d(_mm_cvtepi32_ps(zx.o(edx + 1)) * arg5 + xmm1_2) s> arg4)
            xmm1_3 = _mm_cvtepi32_ps(zx.o(arg4 - esi_1)) / arg5
        else
            xmm1_3 = 1f
    else
        xmm1_3 = (zx.o(0)).d
    
    void* esi_2 = *(*i + 4)
    
    if (esi_2 != 0)
        *(esi_2 + 0x20) = int.d(_mm_cvtepi32_ps(zx.o(arg3)) * xmm1_3)
    
    arg1 = var_4
    i = &i[1]
    edx += 1

return i
