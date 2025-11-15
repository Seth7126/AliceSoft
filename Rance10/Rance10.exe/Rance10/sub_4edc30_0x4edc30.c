// 函数: sub_4edc30
// 地址: 0x4edc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x218) != 0)
    void* esi_1 = data_7fcbbc
    int32_t eax_1
    
    if (esi_1 != 0)
        if (sub_63c080(esi_1) != 0)
            eax_1 = (*(**(esi_1 + 0x2c) + 0x50))()
        else
            eax_1 = 0
    else
        eax_1 = 0
    
    long double x87_r0
    long double x87_r1
    float xmm1_1 = arg2 / sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_1)), x87_r0, x87_r1)
    void* esi_2 = data_7fcbbc
    char eax_4
    
    if (esi_2 != 0)
        eax_4 = sub_63c080(esi_2)
    
    int32_t eax_6
    
    if (esi_2 != 0 && eax_4 != 0)
        eax_6 = (*(**(esi_2 + 0x2c) + 0x54))()
    else
        eax_6 = 0
    
    int32_t eax
    float xmm0_6
    long double x87_r2
    eax, xmm0_6 = sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_6)), x87_r1, x87_r2)
    arg2 = xmm1_1
    arg3 = arg3 / xmm0_6

*(arg1 + 0x90) = arg2
*(arg1 + 0x94) = arg3
