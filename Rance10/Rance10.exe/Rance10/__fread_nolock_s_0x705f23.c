// 函数: __fread_nolock_s
// 地址: 0x705f23
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_24 = edi

if (arg3 != 0 && arg4 != 0)
    if (arg1 != 0)
        int32_t* ecx_1 = arg5
        
        if (ecx_1 == 0 || arg4 u> divu.dp.d(0:0xffffffff, arg3))
            if (arg2 != 0xffffffff)
                _memset(arg1, 0, arg2)
                ecx_1 = arg5
            
            if (ecx_1 != 0 && arg4 u<= divu.dp.d(0:0xffffffff, arg3))
                goto label_705f95
            
            *__errno() = 0x16
        else
        label_705f95:
            int32_t* eax_7 = &ecx_1[3]
            int32_t var_10_1
            
            if ((*eax_7 & 0x4c0) == 0)
                var_10_1 = 0x1000
            else
                var_10_1 = ecx_1[6]
            
            uint32_t esi_1 = arg3 * arg4
            void* edx_5 = arg2
            uint32_t (* var_8_1)[0x4] = arg1
            uint32_t edi_3 = esi_1
            bool cond:0_1 = esi_1 != 0
            
            while (true)
                void* var_c_1 = edx_5
                
                if (not(cond:0_1))
                    return arg4
                
                void* var_18_1
                void* eax_11
                
                if ((ecx_1[3] & 0x4c0) != 0)
                    eax_11 = ecx_1[2]
                    var_18_1 = eax_11
                
                if ((ecx_1[3] & 0x4c0) == 0 || eax_11 == 0)
                    if (edi_3 u< var_10_1)
                        int32_t* var_28_4 = ecx_1
                        int32_t eax_17 = sub_717311()
                        
                        if (eax_17 != 0xffffffff)
                            if (var_c_1 == 0)
                                break
                            
                            *var_8_1 = eax_17.b
                            ecx_1 = arg5
                            edi_3 -= 1
                            var_8_1 += 1
                            edx_5 = var_c_1 - 1
                            var_10_1 = ecx_1[6]
                            cond:0_1 = edi_3 != 0
                            continue
                    else
                        uint32_t eax_13 = 0x7fffffff
                        uint32_t var_18_2
                        
                        if (edi_3 u<= 0x7fffffff)
                            eax_13 = edi_3
                            var_18_2 = edi_3
                        else
                            var_18_2 = 0x7fffffff
                        
                        if (var_10_1 != 0)
                            eax_13 = var_18_2 - modu.dp.d(0:eax_13, var_10_1)
                            edx_5 = var_c_1
                        
                        if (eax_13 u> edx_5)
                            break
                        
                        int32_t eax_16 = __read_nolock(__fileno(ecx_1), var_8_1, eax_13)
                        
                        if (eax_16 == 0)
                            *eax_7 |= 8
                        else if (eax_16 s< 0)
                            *eax_7 |= 0x10
                        else
                            edi_3 -= eax_16
                            var_8_1 += eax_16
                            edx_5 = var_c_1 - eax_16
                            ecx_1 = arg5
                            cond:0_1 = edi_3 != 0
                            continue
                else if (eax_11 s< 0)
                    *eax_7 |= 0x10
                else
                    if (edi_3 u< eax_11)
                        eax_11 = edi_3
                        var_18_1 = edi_3
                    
                    if (eax_11 u> edx_5)
                        break
                    
                    _memcpy_s(var_8_1, edx_5, *ecx_1, eax_11)
                    ecx_1 = arg5
                    edi_3 -= var_18_1
                    var_8_1 += var_18_1
                    ecx_1[2] -= var_18_1
                    *ecx_1 += var_18_1
                    edx_5 = var_c_1 - var_18_1
                    cond:0_1 = edi_3 != 0
                    continue
                
                return divu.dp.d(0:(esi_1 - edi_3), arg3)
            
            if (arg2 != 0xffffffff)
                _memset(arg1, 0, arg2)
            
            *__errno() = 0x22
    else
        *__errno() = 0x16
    
    __invalid_parameter_noinfo()

return 0
