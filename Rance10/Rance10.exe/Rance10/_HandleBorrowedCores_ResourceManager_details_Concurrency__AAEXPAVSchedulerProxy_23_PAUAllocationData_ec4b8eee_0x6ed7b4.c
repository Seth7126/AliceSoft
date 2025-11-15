// 函数: ?HandleBorrowedCores@ResourceManager@details@Concurrency@@AAEXPAVSchedulerProxy@23@PAUAllocationData@23@@Z
// 地址: 0x6ed7b4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
int32_t i = 0
void* var_c = edx
int32_t i_1 = 0

if (*(edx + 0x18) u> 0)
    int32_t ecx = 0
    int32_t* esi_2 = *(arg2 + 0x10) + 0x2c
    int32_t var_8_1 = 0
    
    do
        if (esi_2[-3] u> 0)
            int32_t j = 0
            
            if (esi_2[-0xa] u> 0)
                int32_t var_10_1 = 0
                int32_t eax = 0
                int32_t var_14_1 = 0
                
                do
                    int32_t* edi_2 = esi_2[1] + eax
                    
                    if (*edi_2 == 4)
                        eax.b = *(edi_2 + 0x31)
                        
                        if (eax.b != 0)
                            int32_t* eax_3 = *(ecx + *(edx + 0x48) + 0x20) + var_10_1
                            int32_t ecx_1 = eax_3[4]
                            
                            if (ecx_1 != 1)
                                int32_t eax_6
                                eax_6.b = edi_2[0xc].b == 0
                                
                                if (ecx_1 - eax_3[7] u> eax_6)
                                    eax_3[4] = ecx_1 - 1
                                    
                                    if (edi_2[0xc].b != 0)
                                        sub_6ef604(edx, &esi_2[-0xb], edi_2, 
                                            *(edx + 0x48) + var_8_1, eax_3, arg3)
                                    
                                    sub_6f6aac(arg2, &esi_2[-0xb], j)
                                    edx = var_c
                                
                                ecx = var_8_1
                            else
                                sub_6f6ccd(arg2, &esi_2[-0xb], j)
                                edx = var_c
                                ecx = var_8_1
                                
                                if (edi_2[0xc].b != 0)
                                    *esi_2 -= 1
                                    arg3[6] -= 1
                    
                    var_14_1 += 0x34
                    j += 1
                    var_10_1 += 0x24
                    eax = var_14_1
                while (j u< esi_2[-0xa])
                
                i = i_1
        
        i += 1
        ecx += 0x28
        esi_2 = &esi_2[0xd]
        i_1 = i
        var_8_1 = ecx
    while (i u< *(edx + 0x18))

return i
