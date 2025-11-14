// 函数: sub_4932b0
// 地址: 0x4932b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_5 = *(arg1 + 0x20)
int32_t* i = *eax_5

if (i != eax_5)
    do
        int32_t* ecx = *(i[0xa] + 0x18)
        
        if (ecx != 0)
            (*(*ecx + 4))()
        
        int32_t* edi_1 = i[0xa]
        
        if (edi_1 != 0)
            if (edi_1[5] u>= 0x10)
                j__free(*edi_1)
            
            edi_1[5] = 0xf
            edi_1[4] = 0
            *edi_1 = 0
            j__free(edi_1)
        
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
    while (i != *(arg1 + 0x20))

sub_418220(*(*(arg1 + 0x20) + 4))
void* eax_3 = *(arg1 + 0x20)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x20)
*eax_4 = eax_4
void* result = *(arg1 + 0x20)
*(result + 8) = result
*(arg1 + 0x24) = 0
return result
