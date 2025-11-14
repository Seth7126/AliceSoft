// 函数: sub_425770
// 地址: 0x425770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = (*(**(arg4 + 8) + 0x2c))() - 1
int32_t ebp_1 = 0
void* esi = ebp
void* const eax_1

if (esi s> 0)
    do
        if (ebp_1 s>= 0 && ebp_1 s< (*(**(arg4 + 8) + 0x2c))())
            int32_t edi_1 = (*(**(arg4 + 8) + 0x30))((*(**(arg4 + 8) + 0x2c))() - 1 - ebp_1 - 1)
            int32_t var_10_1 = edi_1
            
            if (edi_1 == arg5)
                *arg3 = ebp_1
                *arg2 = arg6
                int32_t eax_20
                eax_20.b = 1
                return eax_20
            
            eax_1 = (*(**(arg4 + 0xc) + 8))((*(**(arg4 + 8) + 0x18))(edi_1))
            int32_t esi_1 = 0
            void* const var_4_1 = eax_1
            
            if (eax_1 s> 0)
                do
                    int32_t eax_9 =
                        (*(**(arg4 + 0xc) + 0xc))((*(**(arg4 + 8) + 0x18))(edi_1), esi_1)
                    
                    if (eax_9 == 0xc || eax_9 == 0xd || eax_9 == 0x3f || eax_9 - 0xe u<= 3
                            || eax_9 - 0x16 u<= 3 || eax_9 == 0x1e || eax_9 == 0x20
                            || eax_9 == 0x32 || eax_9 == 0x34)
                        int32_t* eax_11 = (*(**(arg4 + 8) + 4))(edi_1)
                        
                        if (eax_11 == 0 || esi_1 s< 0)
                            edi_1 = var_10_1
                            eax_1 = 0xffffffff
                        else
                            int32_t eax_13
                            int32_t edx_8
                            edx_8:eax_13 = sx.q((*(*eax_11 + 0x14))())
                            
                            if (esi_1 s>= (eax_13 + (edx_8 & 3)) s>> 2)
                                edi_1 = var_10_1
                                eax_1 = 0xffffffff
                            else
                                int32_t eax_17 = (*(*eax_11 + 0x18))()
                                
                                if (eax_17 == 0)
                                    edi_1 = var_10_1
                                    eax_1 = 0xffffffff
                                else
                                    eax_1 = *(eax_17 + (esi_1 << 2))
                                    edi_1 = var_10_1
                    else
                        eax_1 = 0xffffffff
                    
                    if (arg5 == eax_1)
                        *arg2 = esi_1
                        *arg3 = ebp_1
                        int32_t* eax_18
                        eax_18.b = 1
                        return eax_18
                    
                    esi_1 += 1
                while (esi_1 s< var_4_1)
            
            esi = ebp
        
        ebp_1 += 1
    while (ebp_1 s< esi)

eax_1.b = 0
return eax_1
