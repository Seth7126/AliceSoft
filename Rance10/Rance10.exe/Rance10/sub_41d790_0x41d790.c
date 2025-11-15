// 函数: sub_41d790
// 地址: 0x41d790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = (*(**(*(arg1 + 4) + 8) + 4))(arg2)
int32_t eax_2

if (edi != 0 && arg3 s>= 0)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q((*(*edi + 0x14))())
    
    if (arg3 s< (eax_4 + (edx_2 & 3)) s>> 2)
        eax_2 = (*(*edi + 0x18))()
        
        if (eax_2 != 0)
            int32_t esi_2 = *(eax_2 + (arg3 << 2))
            
            if ((*(**(*(arg1 + 4) + 8) + 0x10))(esi_2) == 2)
                int32_t edi_1 = (*(**(*(arg1 + 4) + 8) + 4))(esi_2)
                
                if (edi_1 != 0)
                    void** esi_3 = arg4
                    
                    if ((*(*edi_1 + 8))((esi_3[4] + 4) & 0xfffffffc).b != 0)
                        int32_t eax_15 = esi_3[4]
                        
                        if (esi_3[5] u>= 0x10)
                            esi_3 = *esi_3
                        
                        sub_700660((*(*edi_1 + 0x18))(esi_3, eax_15 + 1))
                        char* eax_19
                        eax_19.b = 1
                        return eax_19

eax_2.b = 0
return eax_2
