// 函数: sub_71d4e3
// 地址: 0x71d4e3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
int32_t var_c_1 = 0
int32_t* esi = sub_714cce() + 0x50
esi[2] = 0
esi[0x94].w = 0
*esi = arg1
esi[1] = arg1 + 0x80

if (*(arg1 + 0x80) != 0)
    _TranslateName(&data_7575b8, 0x16, &esi[1])

int32_t ecx_1
int32_t edx

if (**esi == 0)
    edx = _GetLocaleNameFromDefault(esi)
    ecx_1 = esi
else
    if (*esi[1] == 0)
        edx = _GetLocaleNameFromLanguage(esi)
    else
        edx = _GetLocaleNameFromLangCountry(esi)
    
    ecx_1 = esi
    
    if (esi[2] == 0)
        int32_t eax_5
        eax_5, ecx_1, edx = _TranslateName(&data_7572a8, 0x40, esi)
        
        if (eax_5 != 0)
            if (*esi[1] == 0)
                edx = _GetLocaleNameFromLanguage(esi)
            else
                edx = _GetLocaleNameFromLangCountry(esi)
            
            ecx_1 = esi

if (esi[2] != 0)
    int32_t eax_8 = _ProcessCodePage(arg1 + 0x100, edx, ecx_1, arg1 + 0x100, esi)
    
    if (eax_8 != 0 && eax_8 != 0xfde8 && eax_8 != 0xfde9 && IsValidCodePage(zx.d(eax_8.w)) != 0)
        if (arg2 != 0)
            *arg2 = eax_8
        
        if (arg3 == 0)
            return 1
        
        int16_t* ecx_3 = &esi[0x94]
        arg3[0x90] = 0
        int16_t i
        
        do
            i = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i != 0)
        int32_t var_1c_6 = ((ecx_3 - &ecx_3[1]) s>> 1) + 1
        int16_t* var_20_2 = &esi[0x94]
        int32_t var_24_1 = 0x55
        void* var_28_1 = &arg3[0x90]
        
        if (sub_713d17() != 0)
            int32_t var_2c
            __builtin_memset(&var_2c, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (___acrt_GetLocaleInfoEx@16(&arg3[0x90], 0x1001, arg3, 0x40) != 0
                && ___acrt_GetLocaleInfoEx@16(&arg3[0x90], 0x1002, &arg3[0x40], 0x40) != 0)
            int16_t (* eax_17)[0x8] = sub_721ed7(&arg3[0x40], 0x5f)
            int16_t (* eax_18)[0x8]
            
            if (eax_17 == 0)
                eax_18 = sub_721ed7(&arg3[0x40], 0x2e)
            
            int32_t eax_20
            
            if (eax_17 != 0 || eax_18 != 0)
                eax_20 = ___acrt_GetLocaleInfoEx@16(&arg3[0x90], 7, &arg3[0x40], 0x40)
            
            if ((eax_17 == 0 && eax_18 == 0) || eax_20 != 0)
                __itow_s(eax_8, &arg3[0x80], 0x10, 0xa)
                return 1

return 0
