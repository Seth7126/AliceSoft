// 函数: sub_5b31e0
// 地址: 0x5b31e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = *(arg1 + 4)

if (&eax[2] u> *(arg1 + 8))
    eax.b = 0
    return eax

uint16_t i_3 = zx.w(eax[1]) << 8 | zx.w(*eax)
*(arg1 + 4) = &eax[2]
int32_t i_2 = sx.d(i_3)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x14) - *(arg2 + 0xc))
int32_t edx_2 = edx_1 s>> 1

if ((edx_2 u>> 0x1f) + edx_2 u< i_2)
    if (i_2 u> 0x15555555)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_574eb0(arg2 + 0xc, i_2)

if (*(arg1 + 4) + i_2 * 6 u> *(arg1 + 8))
    int32_t eax_8
    eax_8.b = 0
    return eax_8

if (i_2 s> 0)
    int32_t i
    
    do
        char* edx_3 = *(arg1 + 4)
        uint16_t ecx_4 = zx.w(edx_3[1]) << 8 | zx.w(*edx_3)
        *(arg1 + 4) = &edx_3[2]
        uint32_t ecx_11 =
            ((zx.d(edx_3[5]) << 8 | zx.d(edx_3[4])) << 8 | zx.d(edx_3[3])) << 8 | zx.d(edx_3[2])
        *(arg1 + 4) = &edx_3[6]
        
        if (*(arg2 + 0x10) == *(arg2 + 0x14))
            sub_574e20(arg2 + 0xc, 1)
        
        int32_t* eax_16 = *(arg2 + 0x10)
        
        if (eax_16 != 0)
            *eax_16 = sx.d(ecx_4)
            eax_16[1] = ecx_11
            eax_16[2] = 0xffffffff
        
        *(arg2 + 0x10) += 0xc
        i = i_2
        i_2 -= 1
    while (i != 1)

void* i_1 = *(arg2 + 0xc)

if (i_1 != *(arg2 + 0x10))
    int32_t ecx_13 = *(arg2 + 0x10)
    int32_t xmm1_1 = (zx.o(0)).d
    
    if (i_1 != ecx_13)
        do
            xmm1_1 = xmm1_1 f+ *(i_1 + 4)
            i_1 += 0xc
        while (i_1 != ecx_13)
        
        if (not(xmm1_1 f<= 0) && (0.949999988f f> xmm1_1 || not(xmm1_1 f<= 1.04999995f)))
            for (i_1 = *(arg2 + 0xc); i_1 != ecx_13; i_1 += 0xc)
                *(i_1 + 4) = 1f f/ xmm1_1 f* *(i_1 + 4)

i_1.b = 1
return i_1
