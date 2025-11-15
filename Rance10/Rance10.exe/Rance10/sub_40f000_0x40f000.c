// 函数: sub_40f000
// 地址: 0x40f000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg2[4]
void* ebp = nullptr
void** var_8 = arg1
int32_t edi = 0

if (ebx != 0)
    int32_t esi_1 = arg2[5]
    
    do
        char* eax_1
        
        if (esi_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        arg1.b = eax_1[edi]
        
        if (sub_40f280(arg1.b) != 0)
            break
        
        char* eax_3
        
        if (esi_1 u< 0x10)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        eax_3.b = eax_3[edi]
        eax_3.b -= 0x30
        
        if (eax_3.b u> 9)
            return 0
        
        int32_t* eax_4
        
        if (esi_1 u< 0x10)
            eax_4 = arg2
        else
            eax_4 = *arg2
        
        int32_t ebp_1 = sx.d(*(eax_4 + edi))
        edi += 1
        ebp = ebp_1 - 0x30 + ebp * 0xa
    while (edi u< ebx)

int32_t esi_2 = arg2[5]
char* eax_5

if (esi_2 u< 0x10)
    eax_5 = arg2
else
    eax_5 = *arg2

if (eax_5[edi] != 0x2e)
    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_7 =
        sub_6e810c(8)
    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** var_c_1 = eax_7
    eax_7[1] = ebp
    *eax_7 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
    *var_8 = eax_7
    return edi

void* ebx_1 = nullptr
int32_t i = edi + 1
int32_t var_c_2 = 0

while (i u< arg2[4])
    char* eax_9
    
    if (esi_2 u< 0x10)
        eax_9 = arg2
    else
        eax_9 = *arg2
    
    arg1.b = eax_9[i]
    
    if (sub_40f280(arg1.b) != 0)
        break
    
    int32_t* eax_11
    
    if (esi_2 u< 0x10)
        eax_11 = arg2
    else
        eax_11 = *arg2
    
    eax_11.b = *(eax_11 + i)
    eax_11.b -= 0x30
    
    if (eax_11.b u> 9)
        return 0
    
    int32_t* eax_12
    
    if (esi_2 u< 0x10)
        eax_12 = arg2
    else
        eax_12 = *arg2
    
    int32_t ebx_2 = sx.d(*(eax_12 + i))
    i += 1
    var_c_2 += 1
    ebx_1 = ebx_2 - 0x30 + ebx_1 * 0xa

struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<float>::VTable** eax_13
int32_t ecx_4
eax_13, ecx_4 = sub_6e810c(8)
float xmm0_1 = _mm_cvtepi32_ps(zx.o(var_c_2))
struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<float>::VTable** var_4 = eax_13
*eax_13 = &dpanalysis::CValueLiteralToken<float>::`vftable'{for `dpanalysis::IToken'}
int32_t var_24 = ecx_4
long double st0 = sub_40d0b0(0x41200000, xmm0_1)
eax_13[1] = fconvert.s(fconvert.t(_mm_cvtepi32_ps(zx.o(ebx_1))) / st0
    + fconvert.t(_mm_cvtepi32_ps(zx.o(ebp))))
*var_8 = eax_13
return i
