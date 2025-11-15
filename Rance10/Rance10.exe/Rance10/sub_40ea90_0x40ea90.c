// 函数: sub_40ea90
// 地址: 0x40ea90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
void** esi = arg2

if (esi[4] u< 3)
    @__security_check_cookie@4(eax_1 ^ &var_24)
    return 0

int32_t eax_3 = esi[5]
void** ecx_2

if (eax_3 u< 0x10)
    ecx_2 = esi
else
    ecx_2 = *esi

int32_t ebx
ebx.b = *(ecx_2 + 1)
void** eax_4

if (eax_3 u< 0x10)
    eax_4 = esi
else
    eax_4 = *esi

ebx:1.b = *(eax_4 + 2)

if (ebx.b == 0x5c)
    char var_21 = 0
    void* var_1c
    char* eax_5
    int32_t edx
    eax_5, edx = sub_405480(esi, &var_1c, 1, 0xffffffff)
    int32_t eax_6 = sub_40f180(eax_5, edx, &var_21, eax_5)
    int32_t var_8
    
    if (var_8 u>= 0x10)
        sub_403160(var_1c, var_8 + 1, 1)
    
    if (eax_6 s> 0 && eax_6 + 1 u< esi[4])
        void** eax_8
        
        if (esi[5] u< 0x10)
            eax_8 = esi
        else
            eax_8 = *esi
        
        if (*(eax_8 + eax_6 + 1) == 0x27)
            struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_9 =
                sub_6e810c(8)
            uint32_t ecx_7 = zx.d(var_21)
            struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** var_20 =
                eax_9
            *eax_9 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
            eax_9[1] = ecx_7
            *arg1 = eax_9
            @__security_check_cookie@4(eax_1 ^ &var_24)
            return eax_6 + 2

if (ebx:1.b == 0x27)
    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_11 =
        sub_6e810c(8)
    struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** var_20_1 = eax_11
    *eax_11 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
    eax_11[1] = zx.d(ebx.b)
    *arg1 = eax_11
    @__security_check_cookie@4(eax_1 ^ &var_24)
    return 3

if (esi[4] u>= 4 && ((ebx.b u>= 0x81 && ebx.b u<= 0x9f) || ebx.b + 0x20 u<= 0xf))
    if (esi[5] u>= 0x10)
        esi = *esi
    
    if (*(esi + 3) == 0x27)
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_14 =
            sub_6e810c(8)
        *eax_14 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
        eax_14[1] = (zx.d(ebx.b) << 8) + zx.d(ebx:1.b)
        *arg1 = eax_14
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** var_20_2 =
            eax_14
        @__security_check_cookie@4(eax_1 ^ &var_24)
        return 4

@__security_check_cookie@4(eax_1 ^ &var_24)
return 0
