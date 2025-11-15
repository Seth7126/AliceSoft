// 函数: sub_4ff6b0
// 地址: 0x4ff6b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
float xmm1 = arg2

if (*(arg1 + 0x50) != 0)
    void* edi_1 = data_7fcbbc
    int32_t eax
    
    if (edi_1 != 0)
        if (sub_63c080(edi_1) != 0)
            eax = (*(**(edi_1 + 0x2c) + 0x50))()
        else
            eax = 0
    else
        eax = 0
    
    long double x87_r0
    long double x87_r1
    xmm1 = xmm1 / sub_63ce00(_mm_cvtepi32_ps(zx.o(eax)), x87_r0, x87_r1)

char result = arg3

if (*(arg1 + 0x48) != result)
label_4ff717:
    *(arg1 + 0x48) = result
    *(arg1 + 0x4c) = xmm1
    *(arg1 + 0x68) = 1
else
    float xmm0_4 = *(arg1 + 0x4c)
    xmm0_4 - xmm1
    result = (xmm0_4 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, xmm1) ? 1 : 0) << 2
        | (xmm0_4 < xmm1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        goto label_4ff717

return result
