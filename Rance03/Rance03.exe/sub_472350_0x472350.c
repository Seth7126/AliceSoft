// 函数: sub_472350
// 地址: 0x472350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg1

if (0f f>= arg2)
    return 

if (arg2 f>= 1f)
    return 

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
        float xmm0_13
        eax_4, xmm0_13 = ___libm_sse2_sinf((1f f- arg2) * 3.14159274f * 0.5f, x87_r0)
    case 5
        double* eax_5
        float xmm0_16
        eax_5, xmm0_16 = ___libm_sse2_sinf((arg2 f+ 0.5f) * 3.14159274f, x87_r0)
    case 6
        float xmm0_20 = 1f f- arg2
        _mm_sqrt_ss(xmm0_20, xmm0_20)
    case 7
        if (not(0.0500000007f f<= arg2))
            uint32_t eax_6
            float xmm0_24
            eax_6, xmm0_24 = ___libm_sse2_powf(mxcsr, arg2.d, 4f)
            return 
        
        if (not(0.119999997f f< arg2))
            return 
        
        float eax
        float xmm0_31
        eax, xmm0_31 = ___libm_sse2_expf((arg2.d - 0.0649999976f) * -5.25f * 1.06951869f)
