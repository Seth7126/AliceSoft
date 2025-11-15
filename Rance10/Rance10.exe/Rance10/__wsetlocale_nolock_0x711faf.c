// 函数: __wsetlocale_nolock
// 地址: 0x711faf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* esi = arg3
int32_t edi
int32_t var_1e0 = edi
void* edi_1 = arg1
void* var_1cc = edi_1
int16_t* result

if (arg2 == 0)
    int32_t var_1c4_1 = 1
    int32_t var_1d0_1 = 0
    int32_t ebx_1 = 0
    int32_t var_1c0_1 = 0
    
    if (esi == 0)
        result = sub_711e16(edi_1)
    else
        int16_t var_110[0x84]
        bool cond:1_1
        
        if (*esi == 0x4c && esi[1] == 0x43 && esi[2] == 0x5f)
            while (true)
                int16_t* eax_5 = _wcspbrk(esi, &data_755a28)
                
                if (eax_5 != 0)
                    int32_t eax_7 = (eax_5 - esi) s>> 1
                    
                    if (eax_7 != 0 && *eax_5 != 0x3b)
                        int16_t** i = &data_7558ec
                        int32_t var_1c8_1 = 1
                        
                        do
                            if (_wcsncmp(*i, esi, eax_7) == 0)
                                int16_t* ecx_2 = *i
                                uint32_t eax_8
                                
                                do
                                    eax_8.w = *ecx_2
                                    ecx_2 = &ecx_2[1]
                                while (eax_8.w != 0)
                                
                                if (eax_7 == (ecx_2 - &ecx_2[1]) s>> 1)
                                    break
                            
                            var_1c8_1 += 1
                            i = &i[3]
                        while (i s<= &data_75591c)
                        
                        int32_t eax_9 = _wcscspn(&eax_5[1], &data_755a30)
                        edi_1 = var_1cc
                        
                        if (eax_9 != 0 || eax_5[1] == 0x3b)
                            int32_t eax_13
                            
                            if (var_1c8_1 s> 5)
                                eax_13 = var_1c0_1
                            else
                                int32_t var_1e4_3 = eax_9
                                void* var_1e8_5 = &eax_5[1]
                                int32_t var_1ec_3 = 0x83
                                int16_t (* var_1f0_1)[0x84] = &var_110
                                
                                if (sub_713d17() != 0)
                                    int32_t var_1f4_2
                                    __builtin_memset(&var_1f4_2, 0, 0x14)
                                    __invoke_watson()
                                    noreturn
                                
                                if (eax_9 * 2 u>= 0x106)
                                    ___report_rangecheckfailure()
                                    noreturn
                                
                                var_110[eax_9] = 0
                                eax_13 = var_1c0_1
                                
                                if (sub_712294(edi_1, var_1c8_1, &var_110) != 0)
                                    eax_13 += 1
                                    var_1c0_1 = eax_13
                            
                            void* esi_2 = &eax_5[1 + eax_9]
                            
                            if (*esi_2 != 0)
                                esi = esi_2 + 2
                                
                                if (*esi != 0)
                                    continue
                            
                            cond:1_1 = eax_13 != 0
                            break
                
                result = nullptr
                goto label_712279
            
            goto label_712264
        
        int16_t var_1bc[0x56]
        result = sub_7119de(esi, &var_110, 0x83, &var_1bc, 0x55, nullptr)
        
        if (result != 0)
            void* edx_2 = edi_1 + 0x20
            int32_t esi_3 = 0
            void* var_1c0_2 = edx_2
            int32_t eax_18
            
            while (true)
                if (esi_3 == 0)
                    eax_18 = var_1c4_1
                else
                    int16_t* ecx_6 = *edx_2
                    int16_t* eax_14 = &var_110
                    int32_t eax_16
                    
                    while (true)
                        edi_1.w = *eax_14
                        int16_t temp0_1 = *ecx_6
                        bool c_1 = edi_1.w u< temp0_1
                        bool z_1 = edi_1.w == temp0_1
                        edi_1 = var_1cc
                        
                        if (z_1)
                            if (*eax_14 == 0)
                                eax_16 = 0
                                break
                            
                            edx_2.w = eax_14[1]
                            int16_t temp1_1 = ecx_6[1]
                            c_1 = edx_2.w u< temp1_1
                            bool z_2 = edx_2.w == temp1_1
                            int32_t var_1c8
                            var_1c8:2.w = edx_2.w
                            edx_2 = var_1c0_2
                            
                            if (z_2)
                                eax_14 = &eax_14[2]
                                ecx_6 = &ecx_6[2]
                                
                                if (var_1c8:2.w != 0)
                                    continue
                                
                                eax_16 = 0
                                break
                        
                        eax_16 = sbb.d(eax_14, eax_14, c_1) | 1
                        break
                    
                    if (eax_16 == 0)
                        ebx_1 += 1
                        eax_18 = var_1c4_1
                    else
                        edx_2 = var_1c0_2
                        
                        if (sub_712294(edi_1, esi_3, &var_110) == 0)
                            eax_18 = 0
                            var_1c4_1 = 0
                        else
                            ebx_1 += 1
                            eax_18 = var_1c4_1
                
                esi_3 += 1
                edx_2 += 0x10
                var_1c0_2 = edx_2
                
                if (esi_3 s> 5)
                    break
            
            if (eax_18 != 0)
                result = sub_711e16(edi_1)
            else
                cond:1_1 = ebx_1 != 0
            label_712264:
                
                if (cond:1_1)
                    result = sub_711e16(edi_1)
                else
                    result = nullptr
else if (esi == 0)
    result = *(edi_1 + (arg2 + 2) * 0x10)
else
    result = sub_712294(edi_1, arg2, esi)

label_712279:
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
