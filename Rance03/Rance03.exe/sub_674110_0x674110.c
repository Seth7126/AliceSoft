// 函数: sub_674110
// 地址: 0x674110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax

if (arg1 s> 0)
    int32_t var_10_1 = arg1
    int32_t* esi_1 = data_75d4fc + 0x178
    
    if (sub_4a55e0(esi_1).b != 0)
        int32_t var_10_2 = arg1
        
        if (sub_4a55e0(esi_1).b != 0)
            eax.b = sub_4f0040(arg1, arg2) == 0xd
            
            if (eax.b != 0)
                eax = sub_4a8b80(data_75d4fc + 0x174, arg1)
                
                if (eax != 0)
                    eax = sub_51dc70(sub_510260(eax[0xd], arg2))
                
                if (eax[1] s> arg3)
                    eax = *eax
                    
                    for (int32_t* i = *eax; i != eax; i = *i)
                        if (arg3 s<= 0)
                            if (i == eax)
                                break
                            
                            void* edx_2 = i[2]
                            *arg4 = *(edx_2 + 0xc)
                            *arg5 = *(edx_2 + 0x10)
                            *arg6 = *(edx_2 + 0x14)
                            *arg7 = *(edx_2 + 0x18)
                            *arg8 = *(edx_2 + 0x1c)
                            *arg9 = *(edx_2 + 0x24)
                            *arg10 = *(edx_2 + 0x28)
                            *arg11 = *(edx_2 + 0x2c)
                            *arg12 = *(edx_2 + 0x2c)
                            *arg13 = *(edx_2 + 0x2c)
                            void* eax_13 = sub_4a8b80(data_75d4fc + 0x174, arg1)
                            int32_t ecx_21
                            
                            if (eax_13 != 0)
                                ecx_21 = *(sub_510260(*(eax_13 + 0x34), arg2) + 0x40)
                            else
                                ecx_21 = 0
                            
                            *arg14 = ecx_21
                            void* eax_16 = sub_4a8b80(data_75d4fc + 0x174, arg1)
                            int32_t ecx_25
                            
                            if (eax_16 != 0)
                                ecx_25 = *(sub_510260(*(eax_16 + 0x34), arg2) + 0x44)
                            else
                                ecx_25 = 0
                            
                            *arg15 = ecx_25
                            int32_t* eax_20 = i[2] + 0x44
                            
                            if (arg16 != eax_20)
                                sub_401ff0(arg16, eax_20, 0, 0xffffffff)
                            
                            eax_20.b = 1
                            return eax_20

eax.b = 0
return eax
