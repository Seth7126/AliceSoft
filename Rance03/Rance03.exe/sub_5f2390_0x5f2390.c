// 函数: sub_5f2390
// 地址: 0x5f2390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi
int32_t var_c = edi
int32_t* eax = *(arg1 + 4)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* ecx = i[0x12]
        
        if (ecx != 0)
            (**ecx)(1)
        
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
    while (i != *(arg1 + 4))

sub_5f2dd0(*(*(arg1 + 4) + 4))
void* eax_3 = *(arg1 + 4)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 4)
*eax_4 = eax_4
void* result = *(arg1 + 4)
*(result + 8) = result
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
return result
