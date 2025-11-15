// 函数: _LangCountryEnumProc@4
// 地址: 0x71d8ce
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_10c = edi
void* eax_2 = sub_714cce()
int32_t* edi_1 = *(sub_714cce() + 0x34c)
uint32_t Locale = _LcidFromHexString(arg1)
int32_t ecx = *(eax_2 + 0x64)
int32_t ecx_1 = neg.d(ecx)
void lCData
int32_t result

if (GetLocaleInfoW(Locale, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff005) + 0x1002, &lCData, 0x78)
        != 0)
    int32_t var_fc_1 = 0
    
    if (__wcsicmp(*(eax_2 + 0x54), &lCData) != 0)
    label_71da0d:
        
        if ((*edi_1 & 0x300) == 0x300)
            result = not.d(*edi_1 u>> 2) & 1
        else
            int32_t ecx_11 = *(eax_2 + 0x60)
            int32_t ecx_12 = neg.d(ecx_11)
            int32_t eax_17 = GetLocaleInfoW(Locale, 
                (sbb.d(ecx_12, ecx_12, ecx_11 != 0) & 0xfffff002) + 0x1001, &lCData, 0x78)
            
            if (eax_17 != 0)
                uint32_t eax_18 = __wcsicmp(*(eax_2 + 0x50), &lCData)
                bool cond:0_1
                
                if (eax_18 == 0)
                    *edi_1 |= 0x200
                    int32_t edx_4 = *edi_1
                    
                    if (*(eax_2 + 0x60) != eax_18 || *(eax_2 + 0x5c) == eax_18)
                        goto label_71da6c
                    
                    int16_t* ecx_17 = *(eax_2 + 0x50)
                    void* eax_19
                    
                    do
                        eax_19.w = *ecx_17
                        ecx_17 = &ecx_17[1]
                    while (eax_19.w != 0)
                    
                    int32_t ecx_19 = (ecx_17 - &ecx_17[1]) s>> 1
                    
                    if (ecx_19 != *(eax_2 + 0x5c))
                        eax_18 = 0
                    label_71da6c:
                        *edi_1 = edx_4 | 0x100
                    label_71da6e:
                        cond:0_1 = edi_1[1] != eax_18
                    label_71dafc:
                        
                        if (not(cond:0_1))
                            edi_1[1] = Locale
                    else
                        int32_t* var_110_6 = edi_1
                        
                        if (_TestDefaultLanguage(eax_19, edx_4, ecx_19, Locale, 1) != 0)
                            *edi_1 |= 0x100
                            eax_18 = 0
                            goto label_71da6e
                else if (*(eax_2 + 0x60) == 0 && *(eax_2 + 0x5c) != 0)
                    void* var_110_7 = &lCData
                    uint32_t eax_21
                    int32_t edx_6
                    eax_21, edx_6 = __wcsicmp(*(eax_2 + 0x50), var_110_7)
                    
                    if (eax_21 == 0)
                        int32_t* var_110_8 = edi_1
                        
                        if (_TestDefaultLanguage(eax_21, edx_6, var_110_7, Locale, 0) != 0)
                            *edi_1 |= 0x100
                            cond:0_1 = edi_1[1] != 0
                            goto label_71dafc
                result = not.d(*edi_1 u>> 2) & 1
            else
                *edi_1 = eax_17
                result = 1
    else
        int32_t eax_6 = *(eax_2 + 0x60)
        int32_t eax_7 = neg.d(eax_6)
        
        if (GetLocaleInfoW(Locale, (sbb.d(eax_7, eax_7, eax_6 != 0) & 0xfffff002) + 0x1001, 
                &lCData, 0x78) != 0)
            if (__wcsicmp(*(eax_2 + 0x50), &lCData) == 0)
                *edi_1 |= 0x304
                edi_1[1] = Locale
                edi_1[2] = Locale
            else if ((*edi_1 & 2) == 0)
                uint32_t eax_13
                
                if (*(eax_2 + 0x5c) != 0)
                    eax_13 = __wcsnicmp(*(eax_2 + 0x50), &lCData, *(eax_2 + 0x5c))
                
                if (*(eax_2 + 0x5c) == 0 || eax_13 != 0)
                    int32_t edx_2 = *edi_1
                    
                    if ((edx_2.b & 1) == 0 && _TestDefaultCountry(Locale.w) != 0)
                        *edi_1 = edx_2 | 1
                        edi_1[2] = Locale
                else
                    *edi_1 |= 2
                    edi_1[2] = Locale
                    int16_t* ecx_7 = *(eax_2 + 0x50)
                    
                    do
                        eax_13.w = *ecx_7
                        ecx_7 = &ecx_7[1]
                    while (eax_13.w != 0)
                    
                    if ((ecx_7 - &ecx_7[1]) s>> 1 == *(eax_2 + 0x5c))
                        edi_1[1] = Locale
            
            goto label_71da0d
        
        *edi_1 = 0
        result = 1
else
    *edi_1 = 0
    result = 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
