// 函数: sub_484cd0
// 地址: 0x484cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (0f f>= arg2)
    return 

if (arg2 f>= 1f)
    return 

float eax
int32_t mxcsr
int80_t x87_r0

switch (arg1)
    case 1
        uint32_t eax_1
        float xmm0_1
        eax_1, xmm0_1 = ___libm_sse2_logf(1f f- arg2)
    case 2
        uint32_t eax_2
        float xmm0_4
        eax_2, xmm0_4 = ___libm_sse2_powf(mxcsr, 1f f- arg2, 2f)
    case 3
        uint32_t eax_3
        float xmm0_6
        eax_3, xmm0_6 = ___libm_sse2_powf(mxcsr, 0x42c80000, 1f f- arg2)
    case 4
        double* eax_4
        float xmm0_12
        eax_4, xmm0_12 = ___libm_sse2_sinf((1f f- arg2) * 1.57079637f, x87_r0)
    case 5
        float xmm0_15
        eax, xmm0_15 = ___libm_sse2_sinf(arg2 f* 3.14159274f + 1.57079637f, x87_r0)
    case 6
        float xmm0_18 = 1f f- arg2
        _mm_sqrt_ss(xmm0_18, xmm0_18)
    case 7
        if (not(0.0500000007f f<= arg2))
            uint32_t eax_5
            float xmm0_22
            eax_5, xmm0_22 = ___libm_sse2_powf(mxcsr, arg2.d, 4f)
            return 
        
        if (not(0.119999997f f< arg2))
            return 
        
        float xmm0_28
        eax, xmm0_28 = ___libm_sse2_expf((arg2.d - 0.0649999976f) * -5.61497307f)
