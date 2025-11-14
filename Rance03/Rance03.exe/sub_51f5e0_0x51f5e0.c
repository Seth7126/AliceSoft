// 函数: sub_51f5e0
// 地址: 0x51f5e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg6 s> 0x400)
    *arg3 = 0
    arg3[1] = 0
    arg3[2] = 0
    return arg3

int32_t* var_28 = arg3
int32_t var_18
sub_51f810(&var_18)
sub_51f4d0(&var_18, arg4, arg2, arg5, &var_18)
void* edi_1 = var_18
int32_t xmm6 = (zx.o(0)).d
void* ecx_2 = edi_1
int32_t i_1 = 0x3ff
int32_t i

do
    float xmm0_2 = *(ecx_2 + 0x10) f- *(ecx_2 + 4)
    float xmm1_2 = *(ecx_2 + 0xc) f- *ecx_2
    ecx_2 += 0xc
    float xmm0_4 = xmm0_2 * xmm0_2 + xmm1_2 * xmm1_2
    xmm6 = xmm6 f+ _mm_sqrt_ss(xmm0_4, xmm0_4)
    i = i_1
    i_1 -= 1
while (i != 1)
float xmm4 = (zx.o(0)).d
float xmm6_1 = xmm6 f* 0.0009765625f
int32_t edx_1 = 1
float xmm5_2 = _mm_cvtepi32_ps(zx.o(arg6)) * xmm6_1
int64_t* ecx_4 = edi_1

while (true)
    edx_1 += 1
    arg6 = 0f
    int32_t xmm3_1 = (zx.o(0)).d
    int32_t xmm7_1 = (zx.o(0)).d
    int32_t var_1c_1 = 0
    float var_14
    
    if (edx_1 s< 0x400)
        var_18.q = *ecx_4
        xmm7_1 = var_18
        xmm3_1 = ecx_4[1].d
        var_1c_1 = xmm3_1
        arg6 = var_14
    
    float xmm0_9 = ecx_4[2].d f- *(ecx_4 + 4)
    float xmm1_5 = *(ecx_4 + 0xc) f- *ecx_4
    float xmm0_11 = xmm0_9 * xmm0_9 + xmm1_5 * xmm1_5
    xmm4 = xmm4 + _mm_sqrt_ss(xmm0_11, xmm0_11)
    xmm5_2 - xmm4
    int32_t* eax_2
    eax_2:1.b = (xmm5_2 == xmm4 ? 1 : 0) << 6 | (is_unordered.d(xmm5_2, xmm4) ? 1 : 0) << 2
        | (xmm5_2 < xmm4 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        if (xmm4 > xmm5_2)
            xmm7_1 f- 0
            eax_2:1.b = (xmm7_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_1, 0f) ? 1 : 0) << 2
                | (xmm7_1 f< 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
            label_51f760:
                float xmm2_1 = ecx_4[2].d
                float xmm1_7 = *(ecx_4 + 0x14)
                float xmm7_2 = xmm7_1 f- *(ecx_4 + 0xc)
                float xmm5_4 = (xmm5_2 - xmm4) / xmm6_1
                var_18.q = _mm_unpacklo_ps(xmm7_2, arg6 - xmm2_1)
                *arg3 = *(ecx_4 + 0xc) + xmm7_2 * xmm5_4
                arg3[1] = xmm2_1 + var_14 * xmm5_4
                arg3[2] = xmm1_7 + xmm5_4 * (var_1c_1 f- xmm1_7)
                break
            
            arg6 f- 0
            eax_2:1.b = (arg6 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg6, 0f) ? 1 : 0) << 2
                | (arg6 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                goto label_51f760
            
            xmm3_1 f- 0
            eax_2:1.b = (xmm3_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
                | (xmm3_1 f< 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                goto label_51f760
        else
            ecx_4 += 0xc
            
            if (edx_1 s< 0x400)
                continue
            
            *arg3 = 0
            arg3[1] = 0
            arg3[2] = 0
            break
    
    int32_t eax_4 = *(ecx_4 + 0x14)
    *arg3 = *(ecx_4 + 0xc)
    arg3[2] = eax_4
    break

if (edi_1 != 0)
    j__free(edi_1)

return arg3
