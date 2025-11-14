// 函数: sub_407830
// 地址: 0x407830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t* esi = arg2

if (esi[4] u>= 3)
    int32_t eax_2 = esi[5]
    int32_t* ecx
    
    if (eax_2 u< 0x10)
        ecx = esi
    else
        ecx = *esi
    
    int32_t ebx
    ebx.b = *(ecx + 1)
    int32_t* eax_3
    
    if (eax_2 u< 0x10)
        eax_3 = esi
    else
        eax_3 = *esi
    
    eax_3.b = *(eax_3 + 2)
    char var_22_1 = eax_3.b
    
    if (ebx.b == 0x5c)
        ebx:1.b = 0
        char var_21 = 0
        int32_t var_20
        eax_3 = sub_403070(esi, &var_20, 1, 0xffffffff)
        int32_t* edi_1
        
        if (eax_3[4] u< 2)
            edi_1 = nullptr
        else
            eax_3 = sub_407fd0(&var_21, eax_3)
            ebx:1.b = var_21
            edi_1 = eax_3
        
        int32_t var_c
        
        if (var_c u>= 0x10)
            j__free(var_20)
        
        if (edi_1 s> 0 && edi_1 + 1 u< esi[4])
            if (esi[5] u< 0x10)
                eax_3 = esi
            else
                eax_3 = *esi
            
            if (*(eax_3 + edi_1 + 1) == 0x27)
                struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** 
                    eax_4 = sub_69adc6(8)
                
                if (eax_4 == 0)
                    *arg1 = nullptr
                    sub_69a5bc(eax_1 ^ &var_24)
                    return edi_1 + 2
                
                *eax_4 =
                    &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
                eax_4[1] = zx.d(ebx:1.b)
                *arg1 = eax_4
                sub_69a5bc(eax_1 ^ &var_24)
                return edi_1 + 2
        
        eax_3.b = var_22_1
    
    if (eax_3.b == 0x27)
        struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_7 =
            sub_69adc6(8)
        
        if (eax_7 == 0)
            *arg1 = nullptr
            sub_69a5bc(eax_1 ^ &var_24)
            return 3
        
        *eax_7 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
        eax_7[1] = zx.d(ebx.b)
        *arg1 = eax_7
        sub_69a5bc(eax_1 ^ &var_24)
        return 3
    
    if (esi[4] u>= 4 && ((ebx.b u>= 0x81 && ebx.b u<= 0x9f) || ebx.b + 0x20 u<= 0xf))
        if (esi[5] u>= 0x10)
            esi = *esi
        
        if (*(esi + 3) == 0x27)
            struct dpanalysis::IToken::dpanalysis::CValueLiteralToken<int32_t>::VTable** eax_11 =
                sub_69adc6(8)
            
            if (eax_11 == 0)
                *arg1 = nullptr
                sub_69a5bc(eax_1 ^ &var_24)
                return 4
            
            *eax_11 = &dpanalysis::CValueLiteralToken<int32_t>::`vftable'{for `dpanalysis::IToken'}
            eax_11[1] = (zx.d(ebx.b) << 8) + zx.d(var_22_1)
            *arg1 = eax_11
            sub_69a5bc(eax_1 ^ &var_24)
            return 4

sub_69a5bc(eax_1 ^ &var_24)
return 0
