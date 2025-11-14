// 函数: sub_48c900
// 地址: 0x48c900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 4) = 0

int32_t* eax_2 = *(arg1 + 0xc)
int32_t* i = *eax_2

if (i != eax_2)
    do
        (*(*i[0xa] + 4))()
        
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
    while (i != *(arg1 + 0xc))

sub_418220(*(*(arg1 + 0xc) + 4))
void* eax_5 = *(arg1 + 0xc)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(arg1 + 0xc)
*eax_6 = eax_6
void* result = *(arg1 + 0xc)
*(result + 8) = result
*(arg1 + 0x10) = 0
return result
