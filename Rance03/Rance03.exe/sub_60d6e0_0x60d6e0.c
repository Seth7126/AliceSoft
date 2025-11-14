// 函数: sub_60d6e0
// 地址: 0x60d6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x14) == 0)
    return 

int32_t* eax = *(arg1 + 0x10)
int32_t* i = *eax

if (i != eax)
    do
        (**i[4])()
        
        if ((*(*i[4] + 4))() == 1)
            int32_t eax_4 = *(arg1 + 8)
            int32_t* edi_1 = *(arg1 + 4)
            
            if (edi_1 != eax_4)
                while (*edi_1 != i[4])
                    edi_1 = &edi_1[1]
                    
                    if (edi_1 == eax_4)
                        break
                
                if (edi_1 != eax_4)
                    (*(**edi_1 + 4))()
                    _memcpy(edi_1, &edi_1[1], (*(arg1 + 8) - &edi_1[1]) & 0xfffffffc)
                    *(arg1 + 8) -= 4
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != *(arg1 + 0x10))

return sub_41fff0(arg1 + 0x10) __tailcall
