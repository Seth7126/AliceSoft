// 函数: __fwrite_nolock
// 地址: 0x7064e7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_1c = edi

if (arg2 != 0 && arg3 != 0)
    if (arg4 != 0)
        void* ecx_1 = arg1
        
        if (ecx_1 != 0 && arg3 u<= divu.dp.d(0:0xffffffff, arg2))
            enum CONSOLE_MODE edx_3
            
            if ((arg4[3] & 0x4c0) == 0)
                edx_3 = 0x1000
            else
                edx_3 = arg4[6]
            
            enum CONSOLE_MODE esi_1 = arg2 * arg3
            enum CONSOLE_MODE var_8_1 = edx_3
            enum CONSOLE_MODE edi_3 = esi_1
            
            if (esi_1 != 0)
                while (true)
                    void* var_c_1
                    void* eax_8
                    
                    if (((arg4[3]).b & 0xc0) != 0)
                        eax_8 = arg4[2]
                        var_c_1 = eax_8
                    
                    if (((arg4[3]).b & 0xc0) != 0 && eax_8 != 0)
                        if (eax_8 s>= 0)
                            if (edi_3 u< eax_8)
                                eax_8 = edi_3
                                var_c_1 = edi_3
                            
                            sub_700660(*arg4, ecx_1, eax_8)
                            arg4[2] -= var_c_1
                            edi_3 -= var_c_1
                            *arg4 += var_c_1
                            ecx_1 = arg1 + var_c_1
                            arg1 = ecx_1
                            goto label_70660b
                        
                        arg4[3] |= 0x10
                    else if (edi_3 u< edx_3)
                        int32_t* var_20_4 = arg4
                        int32_t var_24_3 = sx.d(*ecx_1)
                        
                        if (sub_717745() != 0xffffffff)
                            edx_3 = arg4[6]
                            ecx_1 = arg1 + 1
                            edi_3 -= 1
                            arg1 = ecx_1
                            var_8_1 = edx_3
                            
                            if (edx_3 s<= 0)
                                edx_3 = ENABLE_PROCESSED_INPUT
                                var_8_1 = ENABLE_PROCESSED_INPUT
                            
                            goto label_706639
                    else
                        if (((arg4[3]).b & 0xc0) == 0)
                            goto label_7065bb
                        
                        if (___acrt_stdio_flush_nolock(arg4) == 0)
                            ecx_1 = arg1
                            edx_3 = var_8_1
                        label_7065bb:
                            enum CONSOLE_MODE eax_13 = edi_3
                            enum CONSOLE_MODE var_c_2
                            
                            if (edx_3 == 0)
                                var_c_2 = edi_3
                            else
                                eax_13 = edi_3 - modu.dp.d(0:eax_13, var_8_1)
                                var_c_2 = eax_13
                            
                            if (eax_13 u>= 0xffffffff)
                                eax_13 = 0xffffffff
                                var_c_2 = 0xffffffff
                            
                            enum CONSOLE_MODE eax_15 =
                                common_lseek<long>(__fileno(arg4), ecx_1, eax_13)
                            
                            if (eax_15 == 0xffffffff)
                                arg4[3] |= 0x10
                            else
                                enum CONSOLE_MODE edx_6 = var_c_2
                                
                                if (eax_15 u<= var_c_2)
                                    edx_6 = eax_15
                                
                                arg1 += edx_6
                                edi_3 -= edx_6
                                
                                if (eax_15 u< var_c_2)
                                    arg4[3] |= 0x10
                                else
                                    ecx_1 = arg1
                                label_70660b:
                                    edx_3 = var_8_1
                                label_706639:
                                    
                                    if (edi_3 == 0)
                                        break
                                    
                                    continue
                    
                    return divu.dp.d(0:(esi_1 - edi_3), arg2)
            
            return arg3
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0
