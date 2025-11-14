// 函数: sub_4258e0
// 地址: 0x4258e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = (*(**(arg4 + 8) + 0x2c))() - 1
int32_t edi_1 = 0
void* esi = edi
int32_t var_10 = 0
void* const eax_1

if (esi s> 0)
    do
        if (edi_1 s>= 0 && edi_1 s< (*(**(arg4 + 8) + 0x2c))())
            void* const ebp_1 = (*(**(arg4 + 8) + 0x3c))((*(**(arg4 + 8) + 0x30))(
                (*(**(arg4 + 8) + 0x2c))() - 1 - edi_1 - 1))
            
            if (ebp_1 != 0xffffffff)
                if (ebp_1 == arg5)
                    *arg3 = edi_1
                    *arg2 = arg6
                    int32_t eax_19
                    eax_19.b = 1
                    return eax_19
                
                eax_1 = (*(**(arg4 + 0xc) + 0x20))((*(**(arg4 + 8) + 0x1c))(ebp_1))
                int32_t esi_1 = 0
                void* const var_4_1 = eax_1
                
                if (eax_1 s> 0)
                    do
                        int32_t eax_9 =
                            (*(**(arg4 + 0xc) + 0x24))((*(**(arg4 + 8) + 0x1c))(ebp_1), esi_1)
                        
                        if (eax_9 == 0xc || eax_9 == 0xd || eax_9 == 0x3f || eax_9 - 0xe u<= 3
                                || eax_9 - 0x16 u<= 3 || eax_9 == 0x1e || eax_9 == 0x20
                                || eax_9 == 0x32 || eax_9 == 0x34)
                            int32_t* eax_11 = (*(**(arg4 + 8) + 4))(ebp_1)
                            
                            if (eax_11 == 0 || esi_1 s< 0)
                                eax_1 = 0xffffffff
                            else
                                int32_t eax_13
                                int32_t edx_9
                                edx_9:eax_13 = sx.q((*(*eax_11 + 0x14))())
                                
                                if (esi_1 s>= (eax_13 + (edx_9 & 3)) s>> 2)
                                    eax_1 = 0xffffffff
                                else
                                    int32_t eax_17 = (*(*eax_11 + 0x18))()
                                    
                                    if (eax_17 == 0)
                                        eax_1 = 0xffffffff
                                    else
                                        eax_1 = *(eax_17 + (esi_1 << 2))
                        else
                            eax_1 = 0xffffffff
                        
                        if (arg5 == eax_1)
                            *arg3 = var_10
                            int32_t eax_18
                            eax_18.b = 1
                            *arg2 = esi_1
                            return eax_18
                        
                        esi_1 += 1
                    while (esi_1 s< var_4_1)
                    
                    edi_1 = var_10
                
                esi = edi
        
        edi_1 += 1
        var_10 = edi_1
    while (edi_1 s< esi)

eax_1.b = 0
return eax_1
