// 函数: __wcsnicmp
// 地址: 0x720ade
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t result = data_7fc704
int32_t edi
int32_t var_c = edi

if (result != 0)
    return __wcsnicmp_l(arg1, arg2, arg3, nullptr)

int32_t edi_1 = arg3

if (edi_1 == 0)
    return result

if (arg1 != 0)
    int16_t* ecx_1 = arg2
    
    if (ecx_1 != 0)
        int16_t* edx_2 = arg1 - ecx_1
        int32_t var_8_1 = 0x5a
        int16_t eax_4
        int16_t esi_1
        
        do
            int16_t eax_1 = *(edx_2 + ecx_1)
            
            if (eax_1 u< 0x41 || eax_1 u> 0x5a)
                esi_1 = eax_1
            else
                esi_1 = eax_1 + 0x20
            
            eax_4 = *ecx_1
            
            if (eax_4 u>= 0x41 && eax_4 u<= 0x5a)
                eax_4 += 0x20
            
            ecx_1 = &ecx_1[1]
            int32_t temp0_1 = edi_1
            edi_1 -= 1
            
            if (temp0_1 == 1)
                break
            
            if (esi_1 == 0)
                break
        while (esi_1 == eax_4)
        
        return zx.d(esi_1) - zx.d(eax_4)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x7fffffff
