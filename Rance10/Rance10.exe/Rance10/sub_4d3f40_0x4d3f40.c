// 函数: sub_4d3f40
// 地址: 0x4d3f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm4 = arg2[1]
float xmm3 = *arg2
float xmm5 = arg2[2]
float xmm0_4 = sub_484cc0(xmm3 * xmm3 + xmm4 * xmm4 + xmm5 * xmm5)
xmm0_4 f- 0
int32_t eax
eax:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float var_10
float eax_1
int64_t xmm0_5

if (not(p_1))
    xmm0_5 = *arg2
    eax_1 = arg2[2]
else
    float xmm1_4 = 1f / xmm0_4
    var_10 = xmm3 * xmm1_4
    float var_c_1 = xmm4 * xmm1_4
    xmm0_5 = var_10.q
    eax_1 = xmm5 * xmm1_4

*arg2 = xmm0_5
arg2[2] = eax_1
int32_t* edi = *(arg3 + 8)
int32_t xmm0_6

if (edi != 0)
    *edi += 1
    
    if (*edi s>= 0x209)
        sub_4a7690(edi)
        *edi = 0
    
    int32_t eax_3 = edi[*edi + 1]
    eax_1 = eax_3 u>> 0x1f
    xmm0_6 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_1 << 3) + &data_79aa70))
        * 2.3283064370807974e-10)
else
    xmm0_6 = (zx.o(0)).d

if (not(0 f>= xmm0_6 f* arg1 * 0.00872664619f))
    int32_t* xmm0_13 = sub_48ca30()
    int32_t edi_1 = 0
    var_10 = 0f
    float var_c_2 = 0f
    float var_8_2 = 0f
    
    while (true)
        float eax_4 = sub_4d40c0(arg3, &var_10)
        
        if (*arg2 * var_10 + var_c_2 f* arg2[1] + var_8_2 f* arg2[2] f>= xmm0_13)
            eax_1 = var_8_2
            *arg2 = var_10.q
            arg2[2] = eax_1
            break
        
        edi_1 += 1
        
        if (edi_1 s>= 0x3e8)
            return eax_4

return eax_1
