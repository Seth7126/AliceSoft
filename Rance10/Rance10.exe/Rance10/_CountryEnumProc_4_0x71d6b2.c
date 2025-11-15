// 函数: _CountryEnumProc@4
// 地址: 0x71d6b2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_104 = edi
void* eax_2 = sub_714cce()
int32_t* edi_1 = *(sub_714cce() + 0x34c)
uint32_t Locale = _LcidFromHexString(arg1)
int32_t ecx = *(eax_2 + 0x64)
int32_t ecx_1 = neg.d(ecx)
void lCData
int32_t eax_4 =
    GetLocaleInfoW(Locale, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff005) + 0x1002, &lCData, 0x78)
int32_t result

if (eax_4 != 0)
    if (__wcsicmp(*(eax_2 + 0x54), &lCData) == 0 && _TestDefaultCountry(Locale.w) != 0)
        *edi_1 |= 4
        edi_1[2] = Locale
        edi_1[1] = Locale
    
    result = not.d(*edi_1 u>> 2) & 1
else
    *edi_1 &= eax_4
    result = eax_4 + 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
