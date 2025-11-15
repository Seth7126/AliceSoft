// 函数: sub_5b2f40
// 地址: 0x5b2f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)

if (&esi[4] u> *(arg2 + 8))
    int32_t result
    result.b = 0
    return result

uint32_t edx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
*(arg2 + 4) = &esi[4]
sub_5b4720(arg3 + 0x1c, edx_6)
uint32_t* i = *(arg3 + 0x1c)

for (int32_t edi_1 = *(arg3 + 0x20); i != edi_1; i = &i[6])
    if (sub_57d0d0(arg2, i) == 0)
        return 0
    
    float xmm1_1 = *arg1
    float xmm2_2 = xmm1_1 f* i[1]
    float xmm0_2 = *i f* xmm1_1
    float xmm1_2 = xmm1_1 f* i[2]
    i[1] = xmm2_2
    *i = xmm0_2
    i[2] = xmm1_2
    float xmm0_4 = arg1[0xb]
    float xmm2_5 = xmm2_2 * xmm2_2 + xmm0_2 * xmm0_2 + xmm1_2 * xmm1_2
    float xmm0_5
    
    xmm0_5 = xmm2_5 > xmm0_4 ? xmm2_5 : xmm0_4
    
    bool cond:0_1 = arg1[1] s> 1
    arg1[0xb] = xmm0_5
    char eax_4
    
    if (cond:0_1)
        eax_4 = sub_5b31e0(arg2, i)
    else
        eax_4 = sub_5b3040(arg2, i)
    
    if (eax_4 == 0)
        return 0

return 1
