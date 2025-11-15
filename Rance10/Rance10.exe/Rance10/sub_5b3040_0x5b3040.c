// 函数: sub_5b3040
// 地址: 0x5b3040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = *(arg1 + 4)

if (&ecx[4] u> *(arg1 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t edi_4 = (zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])
uint32_t eax_3 = zx.d(*ecx)
*(arg1 + 4) = &ecx[4]
uint32_t i_2 = edi_4 << 8 | eax_3
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x2aaaaaab, *(arg2 + 0x14) - *(arg2 + 0xc))
int32_t edx_2 = edx_1 s>> 1

if ((edx_2 u>> 0x1f) + edx_2 u< i_2)
    if (i_2 u> 0x15555555)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_574eb0(arg2 + 0xc, i_2)

if (*(arg1 + 4) + (i_2 << 3) u> *(arg1 + 8))
    int32_t eax_9
    eax_9.b = 0
    return eax_9

if (i_2 s> 0)
    uint32_t i
    
    do
        char* ecx_4 = *(arg1 + 4)
        uint32_t eax_12 = zx.d(*ecx_4)
        uint32_t ebx_6 = ((zx.d(ecx_4[3]) << 8 | zx.d(ecx_4[2])) << 8 | zx.d(ecx_4[1])) << 8
        *(arg1 + 4) = &ecx_4[4]
        uint32_t edx_9 =
            ((zx.d(ecx_4[7]) << 8 | zx.d(ecx_4[6])) << 8 | zx.d(ecx_4[5])) << 8 | zx.d(ecx_4[4])
        *(arg1 + 4) = &ecx_4[8]
        
        if (*(arg2 + 0x10) == *(arg2 + 0x14))
            sub_574e20(arg2 + 0xc, 1)
        
        uint32_t* eax_18 = *(arg2 + 0x10)
        
        if (eax_18 != 0)
            *eax_18 = ebx_6 | eax_12
            eax_18[1] = edx_9
            eax_18[2] = 0xffffffff
        
        *(arg2 + 0x10) += 0xc
        i = i_2
        i_2 -= 1
    while (i != 1)

void* i_1 = *(arg2 + 0xc)

if (i_1 != *(arg2 + 0x10))
    int32_t ecx_7 = *(arg2 + 0x10)
    int32_t xmm1_1 = (zx.o(0)).d
    
    if (i_1 != ecx_7)
        do
            xmm1_1 = xmm1_1 f+ *(i_1 + 4)
            i_1 += 0xc
        while (i_1 != ecx_7)
        
        if (not(xmm1_1 f<= 0) && (0.949999988f f> xmm1_1 || not(xmm1_1 f<= 1.04999995f)))
            for (i_1 = *(arg2 + 0xc); i_1 != ecx_7; i_1 += 0xc)
                *(i_1 + 4) = 1f f/ xmm1_1 f* *(i_1 + 4)

i_1.b = 1
return i_1
