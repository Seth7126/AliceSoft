// 函数: ?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z
// 地址: 0x716777
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_40 = edi
void* i = arg6

if (i s< 0)
    i = nullptr

char* esi = arg2
*esi = 0
void* var_34
_LocaleUpdate::_LocaleUpdate(&var_34, arg9)
int32_t result

if (arg3 u> i + 0xb)
    int32_t* edx_1 = arg1
    int32_t ecx_1 = edx_1[1]
    int32_t var_24_1 = *edx_1
    
    if ((ecx_1 u>> 0x14 & 0x7ff) != 0x7ff)
        if ((ecx_1 & 0x80000000) != 0)
            *esi = 0x2d
            esi = &esi[1]
        
        int32_t ebx_1
        ebx_1.b = arg7 == 0
        int32_t var_10_1 = 0x3ff
        char var_20_1 = (((ebx_1 - 1) & 0xffffffe0) + 0x27).b
        void* esi_1
        
        if ((edx_1[1] & 0x7ff00000) != 0)
            *esi = 0x31
            esi_1 = &esi[1]
        else
            *esi = 0x30
            esi_1 = &esi[1]
            int32_t ecx_7 = *edx_1 | (edx_1[1] & 0xfffff)
            
            if (ecx_7 != 0)
                var_10_1 = 0x3fe
            else
                var_10_1 &= ecx_7
        
        void* esi_2 = esi_1 + 1
        
        if (i != 0)
            void* var_30
            char* eax_14
            eax_14.b = ***(var_30 + 0x88)
            *esi_1 = eax_14.b
        else
            *esi_1 = 0
        
        int32_t eax_16 = edx_1[1] & 0xfffff
        int32_t var_14_1 = eax_16
        void* ecx_8
        
        if (eax_16 u> 0 || *edx_1 u> 0)
            int32_t var_8_1 = 0
            ecx_8 = 0xf0000
            int32_t eax_17 = 0x30
            int32_t var_c_1 = 0x30
            void* var_14_2 = 0xf0000
            
            while (i s> 0)
                uint32_t eax_21 =
                    zx.d(__aullshr(*edx_1 & var_8_1, edx_1[1] & ecx_8 & 0xfffff, var_c_1.b) + 0x30)
                
                if (eax_21 u> 0x39)
                    eax_21 += ((ebx_1 - 1) & 0xffffffe0) + 0x27
                
                edx_1 = arg1
                *esi_2 = eax_21.b
                esi_2 += 1
                var_8_1 = var_8_1 u>> 4 | var_14_2 << 0x1c
                ecx_8 = var_14_2 u>> 4
                eax_17 = var_c_1 - 4
                i -= 1
                var_14_2 = ecx_8
                var_c_1 = eax_17
                
                if (eax_17.w s< 0)
                    break
            
            if (eax_17.w s>= 0)
                int16_t eax_27
                eax_27, ecx_8 = __aullshr(*edx_1 & var_8_1, edx_1[1] & ecx_8 & 0xfffff, var_c_1.b)
                
                if (eax_27 u> 8)
                    void* eax_28 = esi_2 - 1
                    
                    while (true)
                        ecx_8.b = *eax_28
                        
                        if (ecx_8.b != 0x66 && ecx_8.b != 0x46)
                            break
                        
                        *eax_28 = 0x30
                        eax_28 -= 1
                    
                    if (eax_28 == esi_1)
                        *(eax_28 - 1) += 1
                    else
                        ecx_8.b = *eax_28
                        
                        if (ecx_8.b != 0x39)
                            ecx_8.b += 1
                            *eax_28 = ecx_8.b
                        else
                            *eax_28 = var_20_1 + 0x3a
        
        if (i s> 0)
            _memset(esi_2, 0x30, i)
            esi_2 += i
        
        if (*esi_1 == 0)
            esi_2 = esi_1
        
        ecx_8.b = 0x34
        void* eax_29
        eax_29.b = arg7 == 0
        eax_29.b -= 1
        eax_29.b &= 0xe0
        eax_29.b += 0x70
        *esi_2 = eax_29.b
        int32_t ecx_15 = __aullshr(*arg1, arg1[1], ecx_8.b) & 0x7ff
        int32_t ecx_16 = ecx_15 - var_10_1
        bool c_1 = ecx_15 u< var_10_1
        uint32_t ebx_6 = sbb.d(0, 0, c_1)
        bool s_1 = sbb.d(0, 0, c_1) s< 0
        bool o_1 = unimplemented  {sbb ebx, ebx}
        void* esi_3
        
        if (s_1 || ((sbb.d(0, 0, c_1) == 0 || s_1 != o_1) && ecx_16 u< 0))
            *(esi_2 + 1) = 0x2d
            esi_3 = esi_2 + 2
            int32_t temp4_1 = ecx_16
            ecx_16 = neg.d(ecx_16)
            ebx_6 = neg.d(adc.d(ebx_6, 0, temp4_1 != 0))
        else
            *(esi_2 + 1) = 0x2b
            esi_3 = esi_2 + 2
        
        void* edi_1 = esi_3
        *esi_3 = 0x30
        
        if (ebx_6 s>= 0)
            if (ebx_6 s> 0 || ecx_16 u>= 0x3e8)
                char eax_32
                int32_t edx_10
                eax_32, ecx_16, edx_10 = __alldvrm(ecx_16, ebx_6, 0x3e8, 0)
                int32_t var_20_2 = edx_10
                *esi_3 = eax_32 + 0x30
                esi_3 += 1
                
                if (esi_3 == edi_1)
                    goto label_716a14
                
            label_716a25:
                char eax_33
                int32_t edx_11
                eax_33, ecx_16, edx_11 = __alldvrm(ecx_16, ebx_6, 0x64, 0)
                int32_t var_20_3 = edx_11
                *esi_3 = eax_33 + 0x30
                esi_3 += 1
            else
            label_716a14:
                
                if (ebx_6 s>= 0 && (ebx_6 s> 0 || ecx_16 u>= 0x64))
                    goto label_716a25
        
        if (esi_3 != edi_1)
        label_716a47:
            char eax_34
            int32_t edx_12
            eax_34, ecx_16, edx_12 = __alldvrm(ecx_16, ebx_6, 0xa, 0)
            int32_t var_20_4 = edx_12
            *esi_3 = eax_34 + 0x30
            esi_3 += 1
        else if (ebx_6 s>= 0 && (ebx_6 s> 0 || ecx_16 u>= 0xa))
            goto label_716a47
        
        ecx_16.b += 0x30
        result = 0
        *esi_3 = ecx_16.b
        *(esi_3 + 1) = 0
    else
        result = fp_format_e(edx_1, esi, arg3, arg4, arg5, i, 0, arg8, nullptr)
        
        if (result == 0)
            void* eax_7 = _strrchr(esi, 0x65)
            
            if (eax_7 != 0)
                *eax_7 = (((arg7 == 0) - 1) & 0xe0) + 0x70
                *(eax_7 + 3) = 0
            
            result = 0
        else
            *esi = 0
else
    result = 0x22
    *__errno() = 0x22
    __invalid_parameter_noinfo()

char var_28

if (var_28 != 0)
    void* ecx_17 = var_34
    *(ecx_17 + 0x350) &= 0xfffffffd

return result
