// 函数: sub_5622f0
// 地址: 0x5622f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg6 s> 0x400)
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    return arg3

int64_t* var_1c
sub_562550(&var_1c, 0x400)
sub_5621e0(&var_1c, arg4, arg2, arg5, &var_1c)
int64_t* edi_1 = var_1c
int32_t xmm5 = (zx.o(0)).d
int32_t i_1 = 0x3ff
int32_t* eax_2 = &edi_1[2]
int32_t i

do
    float xmm0_2 = *eax_2 f- eax_2[-3]
    float xmm1_2 = eax_2[-1] f- eax_2[-4]
    eax_2 = &eax_2[3]
    xmm5 = xmm5 f+ sub_484cc0(xmm0_2 * xmm0_2 + xmm1_2 * xmm1_2)
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t edx_1 = i_1 + 1
float xmm5_1 = xmm5 f* 0.0009765625f
float xmm3 = (zx.o(0)).d
int64_t* ecx_2 = edi_1
float xmm4_2 = _mm_cvtepi32_ps(zx.o(arg6)) * xmm5_1

while (true)
    edx_1 += 1
    arg6 = nullptr
    int32_t xmm6_1 = (zx.o(0)).d
    int32_t xmm7_1 = (zx.o(0)).d
    
    if (edx_1 s< 0x400)
        int64_t xmm0_6 = *ecx_2
        xmm7_1 = xmm0_6:4.d
        xmm6_1 = xmm0_6.d
        arg6 = ecx_2[1].d
    
    float xmm0_9 = ecx_2[2].d f- *(ecx_2 + 4)
    float xmm1_5 = *(ecx_2 + 0xc) f- *ecx_2
    xmm3 = xmm3 + sub_484cc0(xmm0_9 * xmm0_9 + xmm1_5 * xmm1_5)
    xmm4_2 - xmm3
    eax_2:1.b = (xmm4_2 == xmm3 ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, xmm3) ? 1 : 0) << 2
        | (xmm4_2 < xmm3 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        if (xmm3 > xmm4_2)
            xmm6_1 f- 0
            eax_2:1.b = (xmm6_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_1, 0f) ? 1 : 0) << 2
                | (xmm6_1 f< 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
            label_56247b:
                float xmm0_14 = *(ecx_2 + 0x14)
                float xmm2_2 = arg6 f- xmm0_14
                float xmm4_4 = (xmm4_2 - xmm3) / xmm5_1
                arg6 = xmm2_2
                float xmm7_4 = (xmm7_1 f- ecx_2[2].d) * xmm4_4 f+ ecx_2[2].d
                *arg3 = (xmm6_1 f- *(ecx_2 + 0xc)) * xmm4_4 f+ *(ecx_2 + 0xc)
                arg3[1] = xmm7_4
                arg3[2] = xmm0_14 + xmm2_2 * xmm4_4
                break
            
            xmm7_1 f- 0
            eax_2:1.b = (xmm7_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_1, 0f) ? 1 : 0) << 2
                | (xmm7_1 f< 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                goto label_56247b
            
            arg6 f- 0
            eax_2:1.b = (arg6 f== 0f ? 1 : 0) << 6 | (is_unordered.d(arg6, 0f) ? 1 : 0) << 2
                | (arg6 f< 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                goto label_56247b
        else
            ecx_2 += 0xc
            
            if (edx_1 s< 0x400)
                continue
            
            *arg3 = 0
            arg3[1] = 0
            arg3[2] = 0
            break
    
    int32_t eax_3 = *(ecx_2 + 0x14)
    *arg3 = *(ecx_2 + 0xc)
    arg3[2] = eax_3
    break

int32_t var_14

if (edi_1 != 0)
    sub_403160(edi_1, (var_14 - edi_1) s/ 0xc, 0xc)
return arg3
