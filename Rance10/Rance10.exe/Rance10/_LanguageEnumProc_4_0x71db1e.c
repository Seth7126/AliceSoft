// 函数: _LanguageEnumProc@4
// 地址: 0x71db1e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_104 = edi
void* eax_2 = sub_714cce()
int32_t* edi_1 = *(sub_714cce() + 0x34c)
uint32_t Locale = _LcidFromHexString(arg1)
int32_t ecx = *(eax_2 + 0x60)
int32_t ecx_1 = neg.d(ecx)
void lCData
int32_t eax_4 =
    GetLocaleInfoW(Locale, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff002) + 0x1001, &lCData, 0x78)
int32_t result

if (eax_4 != 0)
    void* var_108_1 = &lCData
    uint32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = __wcsicmp(*(eax_2 + 0x50), var_108_1)
    void* ecx_5 = var_108_1
    uint32_t var_10c_2
    
    if (eax_5 != 0)
        if (*(eax_2 + 0x60) == 0 && *(eax_2 + 0x5c) != 0)
            void* var_108_3 = &lCData
            eax_5, edx_1 = __wcsicmp(*(eax_2 + 0x50), var_108_3)
            ecx_5 = var_108_3
            
            if (eax_5 == 0)
                int32_t* var_108_4 = edi_1
                var_10c_2 = eax_5
                goto label_71dbc4
    else if (*(eax_2 + 0x60) != eax_5)
    label_71dbd0:
        *edi_1 |= 4
        edi_1[1] = Locale
        edi_1[2] = Locale
    else
        int32_t* var_108_2 = edi_1
        var_10c_2 = 1
    label_71dbc4:
        
        if (_TestDefaultLanguage(eax_5, edx_1, ecx_5, Locale, var_10c_2) != 0)
            goto label_71dbd0
    result = not.d(*edi_1 u>> 2) & 1
else
    *edi_1 &= eax_4
    result = eax_4 + 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
