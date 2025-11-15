// 函数: sub_690640
// 地址: 0x690640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_4 = arg4

if (arg2 != 0)
    int32_t i_6 = 0
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q((i_4 << 1) + 0xffffffff)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(i_4)
    int32_t i_3 = (eax_6 - edx_1) s>> 1
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(neg.d((eax_1 - edx) s>> 1))) + 0.5f
    
    if (i_3 s> 0)
        void* eax_8 = arg3 + 8
        i_6 = i_3
        float xmm4_1 = 1f / _mm_cvtepi32_ps(zx.o(arg5))
        int32_t i
        
        do
            *eax_8 = 0x40000000
            float xmm0_4 = xmm4_1 * xmm1_3
            xmm1_3 = xmm1_3 + 2f
            *(eax_8 - 4) = xmm0_4
            eax_8 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    *(arg3 + i_6 * 0x10 + 8) = 0x3f800000
    float xmm1_5 = xmm1_3 - 0.5f + 1.5f
    
    if (i_6 + 1 s< i_4)
        void* eax_13 = ((i_6 + 1) << 4) + 8 + arg3
        int32_t i_5 = i_4 - (i_6 + 1)
        float xmm3 = 1f / _mm_cvtepi32_ps(zx.o(arg5))
        int32_t i_1
        
        do
            *eax_13 = 0x40000000
            float xmm0_8 = xmm3 * xmm1_5
            xmm1_5 = xmm1_5 + 2f
            *(eax_13 - 4) = xmm0_8
            eax_13 += 0x10
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else if (i_4 s> 0)
    void* ecx_1 = arg3 + 4
    int32_t eax_15
    int32_t edx_3
    edx_3:eax_15 = sx.q(i_4)
    arg1 = neg.d((eax_15 - edx_3) s>> 1)
    float xmm1_6 = 1f / _mm_cvtepi32_ps(zx.o(arg5))
    int32_t i_2
    
    do
        ecx_1 += 0x10
        float xmm0_12 = _mm_cvtepi32_ps(zx.o(arg1))
        arg1 += 1
        *(ecx_1 - 0x10) = xmm0_12 * xmm1_6
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
