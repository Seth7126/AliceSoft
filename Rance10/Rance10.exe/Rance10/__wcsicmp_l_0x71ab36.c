// 函数: __wcsicmp_l
// 地址: 0x71ab36
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_14
_LocaleUpdate::_LocaleUpdate(&var_14, arg3)
wchar16* ebx = arg1
int16_t* esi_1

if (ebx != 0)
    esi_1 = arg2

uint32_t result

if (ebx != 0 && esi_1 != 0)
    int32_t edi
    int32_t var_20_1 = edi
    void* var_10
    int16_t eax_5
    int16_t edi_1
    
    if (*(var_10 + 0xa8) != 0)
        do
            edi_1 = __towlower_l(*ebx, &var_10)
            ebx = &ebx[1]
            eax_5 = __towlower_l(*esi_1, &var_10)
            esi_1 = &esi_1[1]
            
            if (edi_1 == 0)
                break
        while (edi_1 == eax_5)
    else
        int16_t* ebx_1 = ebx - esi_1
        
        do
            int16_t eax_2 = *(ebx_1 + esi_1)
            
            if (eax_2 u< 0x41 || eax_2 u> 0x5a)
                edi_1 = eax_2
            else
                edi_1 = eax_2 + 0x20
            
            eax_5 = *esi_1
            
            if (eax_5 u>= 0x41 && eax_5 u<= 0x5a)
                eax_5 += 0x20
            
            esi_1 = &esi_1[1]
            
            if (edi_1 == 0)
                break
        while (edi_1 == eax_5)
    
    result = zx.d(edi_1) - zx.d(eax_5)
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x7fffffff

char var_8

if (var_8 != 0)
    void* ecx_1 = var_14
    *(ecx_1 + 0x350) &= 0xfffffffd

return result
