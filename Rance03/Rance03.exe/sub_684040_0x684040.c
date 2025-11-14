// 函数: sub_684040
// 地址: 0x684040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_17 = arg2

if (eax_17 s>= 0)
    void* esi_1 = data_75d4cc
    arg2 = eax_17
    int32_t* var_4
    sub_42f3d0(esi_1 + 0x2a0, &var_4, &arg2)
    int32_t* eax = var_4
    
    if (eax != *(esi_1 + 0x2a0))
        void* edi_1 = eax[5]
        
        if (edi_1 != 0)
            int32_t* edi_2 = *(edi_1 + 0xd8)
            arg2 = edi_2
            
            if (edi_2 != 0)
                void* esi_2 = (*(*edi_2 + 8))(0, 0)
                int32_t eax_4 = (*(*edi_2 + 0x10))()
                int32_t eax_5 = (*(*edi_2 + 0x14))()
                int32_t eax_6 = (*(*edi_2 + 0x18))()
                int32_t eax_7 = (*(*edi_2 + 0x10))()
                int32_t* eax_9 = (*(*arg2 + 0x1c))() - ((eax_7 * eax_6) u>> 3)
                __builtin_memset(arg1 + 0x58, 0, 0x11)
                var_4 = eax_9
                *(arg1 + 0x50) = *(arg1 + 0x4c)
                
                if (eax_4 != 0 && eax_5 != 0)
                    *(arg1 + 0x68) = 1
                    void* eax_12 = ((eax_4 << 2) + 0xf) & 0xfffffff0
                    *(arg1 + 0x58) = eax_4
                    *(arg1 + 0x60) = eax_12
                    *(arg1 + 0x5c) = eax_5
                    *(arg1 + 0x64) = 4
                    sub_67d840(arg1 + 0x4c, eax_12 * eax_5)
                
                int32_t eax_14 = eax_5
                int32_t edi_7 = 0
                
                if (eax_14 != 0)
                    int32_t* ecx_8 = var_4
                    
                    do
                        int32_t edx_4 = 0
                        
                        if (eax_4 != 0)
                            do
                                eax_14.b = *esi_2
                                char var_d_1 = eax_14.b
                                eax_14.b = *(esi_2 + 1)
                                char var_e_1 = eax_14.b
                                eax_14.b = *(esi_2 + 2)
                                esi_2 += 3
                                char var_f_1 = eax_14.b
                                arg2.b = 0xff
                                
                                if (eax_6 == 0x20)
                                    eax_14.b = *esi_2
                                    esi_2 += 1
                                    arg2.b = eax_14.b
                                
                                if (*(arg1 + 0x68) != 0 && edi_7 u< *(arg1 + 0x5c)
                                        && edx_4 u< *(arg1 + 0x58))
                                    eax_14.b = var_f_1
                                    char* ecx_12 = *(arg1 + 0x64) * edx_4 + *(arg1 + 0x60) * edi_7
                                        + *(arg1 + 0x4c)
                                    *ecx_12 = eax_14.b
                                    eax_14.b = var_e_1
                                    ecx_12[1] = eax_14.b
                                    eax_14.b = var_d_1
                                    ecx_12[2] = eax_14.b
                                    eax_14.b = arg2.b
                                    ecx_12[3] = eax_14.b
                                
                                edx_4 += 1
                            while (edx_4 u< eax_4)
                            
                            eax_14 = eax_5
                            ecx_8 = var_4
                        
                        edi_7 += 1
                        esi_2 += ecx_8
                    while (edi_7 u< eax_14)
                
                eax_14.b = 1
                return eax_14

__builtin_memset(arg1 + 0x58, 0, 0x11)
*(arg1 + 0x50) = *(arg1 + 0x4c)
int32_t eax_16
eax_16.b = 0
return eax_16
