// 函数: sub_5cb9b0
// 地址: 0x5cb9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, arg2[1] - *arg2)
int32_t edx_1 = edx s>> 3
int32_t i_1 = (edx_1 u>> 0x1f) + edx_1
void* result = sub_6ca100(arg1, i_1)

if (i_1 s> 0)
    int32_t edi_1 = 2
    void* var_c_1 = nullptr
    int32_t var_10_1 = 2
    int32_t i
    
    do
        sub_6ca100(arg1, edi_1 - 2)
        sub_6ca100(arg1, var_10_1 - 1)
        sub_6ca100(arg1, var_10_1)
        sub_6ca100(arg1, 0)
        sub_6ca100(arg1, 0)
        sub_6ca100(arg1, 0)
        sub_6ca100(arg1, edi_1 - 2)
        sub_6ca100(arg1, var_10_1 - 1)
        sub_6ca100(arg1, var_10_1)
        float* esi_4 = var_c_1
        int32_t eax_2 = *arg2
        float xmm1_2 = *(esi_4 + eax_2 + 0x1c) f- *(esi_4 + eax_2 + 4)
        float xmm5_2 = *(esi_4 + eax_2 + 0x20) f- *(esi_4 + eax_2 + 8)
        float xmm3_2 = *(esi_4 + eax_2 + 0x10) f- *(esi_4 + eax_2 + 4)
        float xmm2_2 = *(esi_4 + eax_2 + 0x14) f- *(esi_4 + eax_2 + 8)
        float xmm6_2 = *(esi_4 + eax_2 + 0x18) f- *(esi_4 + eax_2)
        float xmm4_2 = *(esi_4 + eax_2 + 0xc) f- *(esi_4 + eax_2)
        float xmm7_3 = xmm1_2 * xmm2_2 - xmm5_2 * xmm3_2
        float xmm6_4 = xmm6_2 * xmm3_2 - xmm1_2 * xmm4_2
        float xmm5_4 = xmm5_2 * xmm4_2 - xmm6_2 * xmm2_2
        float xmm0_9 = sub_484cc0(xmm5_4 * xmm5_4 + xmm7_3 * xmm7_3 + xmm6_4 * xmm6_4)
        xmm0_9 f- 0
        eax_2:1.b = (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2
            | (xmm0_9 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            float xmm1_8 = 1f / xmm0_9
            xmm7_3 = xmm7_3 * xmm1_8
            xmm5_4 = xmm5_4 * xmm1_8
            xmm6_4 = xmm6_4 * xmm1_8
        
        sub_6ca100(arg1, xmm7_3)
        sub_6ca100(arg1, xmm5_4)
        sub_6ca100(arg1, xmm6_4)
        sub_6ca100(arg1, xmm7_3)
        sub_6ca100(arg1, xmm5_4)
        sub_6ca100(arg1, xmm6_4)
        sub_6ca100(arg1, xmm7_3)
        sub_6ca100(arg1, xmm5_4)
        sub_6ca100(arg1, xmm6_4)
        result = sub_6ca100(arg1, 0)
        edi_1 = var_10_1 + 3
        var_10_1 = edi_1
        var_c_1 = &esi_4[9]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
