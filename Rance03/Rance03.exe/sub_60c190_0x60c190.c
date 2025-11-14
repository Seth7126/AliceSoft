// 函数: sub_60c190
// 地址: 0x60c190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_14
int32_t var_4 = __security_cookie ^ &var_14
int32_t* esi = *(arg1 + 0x38)

if (esi != 0)
    int32_t edx_1 = *(arg1 + 0x48)
    
    if (edx_1 != 0)
        uint32_t eax_4 = zx.d((arg2 u>> 0x10).b)
        uint32_t eax_8 = zx.d((arg2 u>> 8).b)
        var_14 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        uint32_t eax_10 = zx.d(arg2.b)
        uint32_t ecx_3 = arg2 u>> 0x18
        float var_10 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        float var_c =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_10)) f+ *((eax_10 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        float var_8 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_3)) f+ *((ecx_3 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        (*(*esi + 0xc8))(esi, edx_1, &var_14)
        int32_t eax_13
        eax_13.b = 1
        sub_69a5bc(var_4 ^ &var_14)
        return eax_13

int32_t eax_1
eax_1.b = 0
sub_69a5bc(var_4 ^ &var_14)
return eax_1
