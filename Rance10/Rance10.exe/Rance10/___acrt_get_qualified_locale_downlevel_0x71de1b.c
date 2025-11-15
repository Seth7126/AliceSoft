// 函数: ___acrt_get_qualified_locale_downlevel
// 地址: 0x71de1b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_28 = edi
int32_t* var_18 = sub_714cce() + 0x50
int32_t var_14 = 0
uint32_t Locale
int32_t* edi_1 = &Locale
*edi_1 = 0
edi_1[1] = 0
*(sub_714cce() + 0x34c) = &var_14
int32_t* eax_6 = var_18
*eax_6 = arg1
void* edi_4 = &eax_6[1]
*edi_4 = arg1 + 0x80

if (arg1 != 0xffffff80 && *(arg1 + 0x80) != 0)
    _TranslateName(&data_7575b8, 0x16, edi_4)
    eax_6 = var_18

var_14 = 0
int16_t* eax_7 = *eax_6
int32_t result
uint32_t Locale_1
int32_t* ecx_1
int32_t edx

if (eax_7 == 0 || *eax_7 == 0)
    int16_t* eax_11 = *edi_4
    
    if (eax_11 == 0 || *eax_11 == 0)
        var_14 = 0x104
        uint32_t Locale_2
        Locale_2, ecx_1, edx = GetUserDefaultLCID()
        Locale_1 = Locale_2
        Locale = Locale_2
    else
        int32_t* var_2c_5 = &var_14
        edx = _GetLcidFromCountry(var_2c_5)
        ecx_1 = var_2c_5
    
label_71df35:
    
    if (var_14 != 0)
        goto label_71df5a
    
    result = 0
else
    int16_t* eax_8 = *edi_4
    int32_t* var_2c_2
    
    if (eax_8 == 0 || *eax_8 == 0)
        var_2c_2 = &var_14
        edx = _GetLcidFromLanguage(var_2c_2)
    else
        var_2c_2 = &var_14
        edx = _GetLcidFromLangCountry(var_2c_2)
    
    ecx_1 = var_2c_2
    
    if (var_14 == 0)
        char eax_9
        eax_9, ecx_1, edx = _TranslateName(&data_7572a8, 0x40, var_18)
        
        if (eax_9 != 0)
            int16_t* eax_10 = *edi_4
            int32_t* var_2c_4
            
            if (eax_10 == 0 || *eax_10 == 0)
                var_2c_4 = &var_14
                edx = _GetLcidFromLanguage(var_2c_4)
            else
                var_2c_4 = &var_14
                edx = _GetLcidFromLangCountry(var_2c_4)
            
            ecx_1 = var_2c_4
        
        goto label_71df35
    
label_71df5a:
    int32_t esi_1 = neg.d(arg1)
    int32_t eax_13 = _ProcessCodePage(arg1 + 0x100, edx, ecx_1, 
        sbb.d(esi_1, esi_1, arg1 != 0) & (arg1 + 0x100), &var_14)
    
    if (eax_13 == 0 || eax_13 == 0xfde8 || eax_13 == 0xfde9)
        result = 0
    else if (IsValidCodePage(zx.d(eax_13.w)) == 0)
        result = 0
    else if (IsValidLocale(Locale, LCID_INSTALLED) == 0)
        result = 0
    else
        if (arg2 != 0)
            *arg2 = eax_13
        
        ___acrt_LCIDToLocaleName@16(Locale, &var_18[0x94], 0x55, 0)
        
        if (arg3 == 0)
            result = 1
        else
            ___acrt_LCIDToLocaleName@16(Locale, &arg3[0x90], 0x55, 0)
            
            if (GetLocaleInfoW(Locale, 0x1001, arg3, 0x40) == 0)
                result = 0
            else if (GetLocaleInfoW(Locale_1, 0x1002, &arg3[0x40], 0x40) == 0)
                result = 0
            else
                __itow_s(eax_13, &arg3[0x80], 0x10, 0xa)
                result = 1
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
