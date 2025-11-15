// 函数: sub_605300
// 地址: 0x605300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg3 + 0x10)

if (eax s>= 0 && eax s< *(arg2 + 0xc))
    *(arg2 + 0x14) = eax

int32_t eax_1 = *(arg3 + 0x14)

if (eax_1 == 0)
    eax_1.b = 1
    return eax_1

sub_606240(arg1 + 4, eax_1)
int32_t* esi = *(arg1 + 4)
int32_t edi_1 = *(arg1 + 8)
int32_t* eax_2

if (esi != edi_1)
    while (true)
        if (*(arg2 + 0xc) s>= *(arg2 + 0x14) + 4)
            int32_t* ecx_1
            
            if (*(arg2 + 0xc) != 0)
                ecx_1 = *(arg2 + 8)
            else
                ecx_1 = nullptr
            
            *esi = *(ecx_1 + *(arg2 + 0x14))
            *(arg2 + 0x14) += 4
            int32_t* ecx_2 = *(arg2 + 0x14)
            
            if (*(arg2 + 0xc) s>= &ecx_2[1])
                int32_t eax_5
                
                if (*(arg2 + 0xc) != 0)
                    eax_5 = *(arg2 + 8)
                else
                    eax_5 = 0
                
                eax_2 = *(ecx_2 + eax_5)
                *(arg2 + 0x14) = &ecx_2[1]
                
                if (eax_2 s> 0)
                    sub_42c9c0(&esi[1], eax_2)
                    eax_2 = esi[1]
                    int32_t ecx_4 = esi[2]
                    
                    while (eax_2 != ecx_4)
                        if (*(arg2 + 0xc) s< *(arg2 + 0x14) + 4)
                            goto label_6053e2
                        
                        int32_t ebp_1
                        
                        if (*(arg2 + 0xc) != 0)
                            ebp_1 = *(arg2 + 8)
                        else
                            ebp_1 = 0
                        
                        *eax_2 = *(*(arg2 + 0x14) + ebp_1)
                        eax_2 = &eax_2[1]
                        *(arg2 + 0x14) += 4
                
                esi = &esi[4]
                
                if (esi == edi_1)
                    break
                
                continue
        
    label_6053e2:
        eax_2.b = 0
        return eax_2

eax_2.b = 1
return eax_2
