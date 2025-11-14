// 函数: sub_48b870
// 地址: 0x48b870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float ebx = arg3
int32_t ebp = *(ebx i+ 0x128)

if (ebp == 0)
    float xmm0 = sub_48bd90(arg1, arg2, arg7, ebx)
    int32_t* eax = arg6
    float xmm1_2 = eax[2] f* xmm0
    *arg9 = _mm_unpacklo_ps(*eax * xmm0, eax[1] f* xmm0)
    arg9[1].d = xmm1_2
    return xmm1_2

int32_t esi = *(ebx i+ 0x34)
void* eax_2 = *(arg1 + 0x10)
float xmm0_1 = *(eax_2 + 0x20)
float xmm3_5 = _mm_cvtepi32_ps(zx.o(esi))
float xmm0_2 = *(eax_2 + 0x24)
float ecx_1
float xmm0_3
ecx_1, xmm0_3 = sub_48bd90(arg1, arg2, xmm3_5, ebx)
int32_t* eax_3 = arg6
float xmm6 = *(ebx i+ 0x12c)
float var_24 = xmm6
float xmm1_4 = *eax_3 * xmm0_3
float xmm1_6 = eax_3[1] f* xmm0_3
float xmm1_8 = eax_3[2] f* xmm0_3
float xmm0_4 = *(ebx i+ 0x130)
float var_20 = xmm0_4
float xmm0_5 = *(ebx i+ 0x134)

if (ebp == 2)
    int32_t* eax_5
    
    if (sub_493760(*(arg1 + 0x18), ebx i+ 0x138) == 0)
        eax_5, ecx_1 = sub_487610(*(arg1 + 0x10), ebx i+ 0x138)
    else
        eax_5, ecx_1 = sub_4937f0(*(arg1 + 0x18), ebx i+ 0x138)
    
    if (eax_5 != 0)
        int32_t eax_7 = (*(*eax_5 + 0x10))()
        double xmm1_9 = 2.3283064370807974e-10
        int32_t ebx_1 = 0
        uint128_t xmm3_6 = zx.o((*(*eax_5 + 0x14))())
        float xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_7))
        float xmm3_7 = _mm_cvtepi32_ps(xmm3_6)
        float var_48_1 = xmm2_3
        float var_44_1 = xmm3_7
        
        while (true)
            *(arg8 + 4) += 1
            
            if (*(arg8 + 4) s>= 0x209)
                sub_47cac0(arg8)
                *(arg8 + 4) = 0
            
            int32_t ecx_8 = *(arg8 + 4)
            int32_t eax_9 = *(arg8 + (ecx_8 << 2) + 8)
            int32_t eax_11 = int.d(_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_9)) f+
                *((eax_9 u>> 0x1f << 3) + &data_709480)) * xmm1_9) * xmm2_3)
            *(arg8 + 4) = ecx_8 + 1
            
            if (ecx_8 + 1 s>= 0x209)
                sub_47cac0(arg8)
                *(arg8 + 4) = 0
            
            int32_t eax_14 = *(arg8 + (*(arg8 + 4) << 2) + 8)
            double xmm0_14 =
                _mm_cvtepi32_pd(zx.q(eax_14)) f+ *((eax_14 u>> 0x1f << 3) + &data_709480)
            int32_t eax_16 = *eax_5
            int32_t ecx_10 = int.d(_mm_cvtpd_ps(xmm0_14 * xmm1_9) * xmm3_7)
            void* eax_17
            eax_17, ecx_1 = (*(eax_16 + 8))(eax_11, ecx_10)
            
            if (*(eax_17 + 3) != 0)
                ebx = arg3
                float xmm1_14 = _mm_cvtepi32_ps(zx.o(ecx_10))
                xmm6 = _mm_cvtepi32_ps(zx.o(eax_11)) * xmm0_2 + xmm6
                float var_20_1 = xmm1_14 * xmm0_2 + xmm0_4
                var_24 = xmm6
                break
            
            xmm1_9 = 2.3283064370807974e-10
            ebx_1 += 1
            xmm2_3 = var_48_1
            xmm3_7 = var_44_1
            
            if (ebx_1 s>= 0x64)
                ebx = arg3
                break

float xmm3_9 = *(ebx i+ 0xb4) * arg2
float xmm0_18 = *(*(arg1 + 0x10) + 0xc)
float xmm4_1 = *(ebx i+ 0x38) * arg7
float xmm1_12 = _mm_cvtepi32_ps(zx.o(esi)) * xmm0_18
float xmm2_5 = xmm1_12 * xmm1_12

if (not(xmm3_9 <= 0f))
    float xmm4_3 = xmm0_18 * arg7
    xmm4_1 = xmm4_3 * xmm4_3 * xmm3_9 * 0.5f / (xmm2_5 * xmm3_9 * 0.5f)
else if (not(0 f<= xmm3_9))
    float xmm1_17 = xmm1_12 - xmm0_18 * arg7
    xmm4_1 = 1f - xmm1_17 * xmm1_17 * xmm3_9 * 0.5f / (xmm2_5 * xmm3_9 * 0.5f)

float xmm1_23 = *arg4 * xmm0_1
bool cond:1 = *(*(arg1 + 0x14) + 0x88) != 1
float xmm5_2 = arg4[1] f* xmm0_1
float xmm7_1 = arg4[2] f* xmm0_1
int64_t var_30 = var_24.q

if (not(cond:1))
    var_30.d = *arg5 + xmm6
    var_30:4.d = arg5[1] f+ var_30:4.d
    float var_28_1 = arg5[2] f+ xmm0_5

float xmm3_11 = *arg5 + xmm1_23
float xmm2_18 = arg5[1] f+ xmm5_2
float xmm1_25 = arg5[2] f+ xmm7_1
float var_18 = xmm3_11
var_24 = xmm3_11 + xmm1_4 * xmm0_1
int32_t var_74_4 = int.d(xmm4_1 * 1024f)
float var_14 = xmm2_18
float var_20_2 = xmm2_18 + xmm1_6 * xmm0_1
float var_10_1 = xmm1_25
float var_1c_1 = xmm1_25 + xmm1_8 * xmm0_1
void var_c
int32_t* eax_24 = sub_51f5e0(&var_24, &var_18, &var_c, &var_24, &var_30, ecx_1)
*arg9 = *eax_24
int32_t eax_25 = eax_24[2]
arg9[1].d = eax_25
float xmm2_20 = *arg9 - xmm1_23
float xmm1_27 = *(arg9 + 4) - xmm5_2
float xmm0_37 = arg9[1].d f- xmm7_1
*arg9 = xmm2_20
*(arg9 + 4) = xmm1_27
arg9[1].d = xmm0_37
float xmm2_21 = xmm2_20 f- *arg5
*arg9 = xmm2_21
float xmm1_28 = xmm1_27 f- arg5[1]
*(arg9 + 4) = xmm1_28
float xmm0_38 = xmm0_37 f- arg5[2]
*arg9 = xmm2_21 * xmm0_2
*(arg9 + 4) = xmm1_28 * xmm0_2
arg9[1].d = xmm0_38 * xmm0_2
return eax_25
