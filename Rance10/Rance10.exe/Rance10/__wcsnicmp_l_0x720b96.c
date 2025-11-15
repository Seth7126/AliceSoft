// 函数: __wcsnicmp_l
// 地址: 0x720b96
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = 0
int32_t edi
int32_t var_24 = edi

if (arg3 != 0)
    wchar16* ebx_1 = arg1
    wchar16* edi_1
    
    if (ebx_1 != 0)
        edi_1 = arg2
    
    if (ebx_1 == 0 || edi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x7fffffff
    
    void* var_18
    _LocaleUpdate::_LocaleUpdate(&var_18, arg4)
    void* var_14
    wchar16 eax_7
    int16_t esi
    
    if (*(var_14 + 0xa8) != 0)
        do
            esi = __towlower_l(*ebx_1, &var_14)
            eax_7 = __towlower_l(*edi_1, &var_14)
            int32_t temp0_1 = arg3
            arg3 -= 1
            ebx_1 = &ebx_1[1]
            edi_1 = &edi_1[1]
            
            if (temp0_1 == 1)
                break
            
            if (esi == 0)
                break
        while (esi == eax_7)
    else
        int32_t ecx_2 = arg3
        int16_t* ebx_2 = ebx_1 - edi_1
        int32_t var_8_1 = 0x5a
        
        do
            int16_t eax_4 = *(ebx_2 + edi_1)
            
            if (eax_4 u< 0x41 || eax_4 u> 0x5a)
                esi = eax_4
            else
                esi = eax_4 + 0x20
            
            eax_7 = *edi_1
            
            if (eax_7 u>= 0x41 && eax_7 u<= 0x5a)
                eax_7 += 0x20
            
            edi_1 = &edi_1[1]
            int32_t temp1_1 = ecx_2
            ecx_2 -= 1
            
            if (temp1_1 == 1)
                break
            
            if (esi == 0)
                break
        while (esi == eax_7)
    
    result = zx.d(esi) - zx.d(eax_7)
    char var_c
    
    if (var_c != 0)
        void* ecx_3 = var_18
        *(ecx_3 + 0x350) &= 0xfffffffd

return result
