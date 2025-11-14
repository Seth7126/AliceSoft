// 函数: sub_407e20
// 地址: 0x407e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2[4]
void* ebx = nullptr
int32_t esi = 0
int32_t* var_4 = arg1
void* var_8 = nullptr

if (ebp != 0)
    int32_t edi_1 = arg2[5]
    
    do
        char* eax_1
        
        if (edi_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        arg1.b = eax_1[esi]
        
        if (sub_4080c0(arg1.b) != 0)
            break
        
        char* eax_3
        
        if (edi_1 u< 0x10)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        char* eax_4
        
        if (eax_3[esi] u>= 0x30)
            if (edi_1 u< 0x10)
                eax_4 = arg2
            else
                eax_4 = *arg2
        
        if (eax_3[esi] u< 0x30 || eax_4[esi] u> 0x39)
            return 0
        
        int32_t* eax_5
        
        if (edi_1 u< 0x10)
            eax_5 = arg2
        else
            eax_5 = *arg2
        
        int32_t ebx_1 = sx.d(*(eax_5 + esi))
        esi += 1
        ebx = ebx_1 - 0x30 + ebx * 0xa
        var_8 = ebx
    while (esi u< ebp)

int32_t edi_2 = arg2[5]
char* eax_6

if (edi_2 u< 0x10)
    eax_6 = arg2
else
    eax_6 = *arg2

if (eax_6[esi] != 0x2e)
    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_8 =
        sub_69adc6(8)
    
    if (eax_8 == 0)
        *var_4 = 0
        return esi
    
    eax_8[1] = ebx
    *eax_8 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
    *var_4 = eax_8
    return esi

int32_t i = esi + 1
void* ebx_3 = nullptr
int32_t ebp_1 = 0

while (i u< arg2[4])
    char* eax_11
    
    if (edi_2 u< 0x10)
        eax_11 = arg2
    else
        eax_11 = *arg2
    
    arg1.b = eax_11[i]
    
    if (sub_4080c0(arg1.b) != 0)
        break
    
    char* eax_13
    
    if (edi_2 u< 0x10)
        eax_13 = arg2
    else
        eax_13 = *arg2
    
    if (eax_13[i] u< 0x30)
        return 0
    
    int32_t* eax_14
    
    if (edi_2 u< 0x10)
        eax_14 = arg2
    else
        eax_14 = *arg2
    
    if (*(eax_14 + i) u> 0x39)
        return 0
    
    int32_t* eax_15
    
    if (edi_2 u< 0x10)
        eax_15 = arg2
    else
        eax_15 = *arg2
    
    ebp_1 += 1
    void* ebx_5 = sx.d(*(eax_15 + i)) - 0x30
    i += 1
    ebx_3 = ebx_5 + ebx_3 * 0xa

struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<float>::VTable** eax_16 = sub_69adc6(8)

if (eax_16 == 0)
    *var_4 = 0
    return i

float xmm1_1 = _mm_cvtepi32_ps(zx.o(ebp_1))
*eax_16 = &dpanalysis::CValueLiteralToken<float>::`vftable'{for `dpanalysis::IToken'}
int32_t mxcsr
float xmm0 = ___libm_sse2_powf(mxcsr, 0x41200000, xmm1_1)
eax_16[1] = _mm_cvtepi32_ps(zx.o(ebx_3)) / xmm0 + _mm_cvtepi32_ps(zx.o(var_8))
*var_4 = eax_16
return i
