// 函数: __wcsicmp
// 地址: 0x71aaa1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fc704 != 0)
    return __wcsicmp_l(arg1, arg2, nullptr)

if (arg1 != 0)
    int16_t* ecx_1 = arg2
    
    if (ecx_1 != 0)
        int32_t edi
        int32_t var_10 = edi
        int16_t* edx_1 = arg1 - ecx_1
        int16_t eax_6
        int16_t esi_1
        
        do
            int16_t eax_3 = *(edx_1 + ecx_1)
            
            if (eax_3 u< 0x41 || eax_3 u> 0x5a)
                esi_1 = eax_3
            else
                esi_1 = eax_3 + 0x20
            
            eax_6 = *ecx_1
            
            if (eax_6 u>= 0x41 && eax_6 u<= 0x5a)
                eax_6 += 0x20
            
            ecx_1 = &ecx_1[1]
            
            if (esi_1 == 0)
                break
        while (esi_1 == eax_6)
        
        return zx.d(esi_1) - zx.d(eax_6)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0x7fffffff
