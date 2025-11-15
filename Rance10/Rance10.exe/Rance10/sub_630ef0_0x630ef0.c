// 函数: sub_630ef0
// 地址: 0x630ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 8
float* esi = arg1

if (arg2 u> 8)
    do
        if (i u>= 0xfffffff)
            if (i u>= arg2)
                break
            
            sub_6d0947("invalid hash bucket count")
            noreturn
        
        i *= 2
    while (i u< arg2)

int32_t eax = esi[2]
float xmm1_1 =
    _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax)) f+ *((eax u>> 0x1f << 3) + &data_79aa70)) / *esi

if (not(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(i)) f+ *((i u>> 0x1f << 3) + &data_79aa70)) f> xmm1_1))
    while (i u< 0xfffffff)
        i *= 2
        
        if (not(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(i)) f+ *((i u>> 0x1f << 3) + &data_79aa70))
                f<= xmm1_1))
            break

int32_t i_1 = i
sub_490d70(arg1)
return sub_631960(esi)
