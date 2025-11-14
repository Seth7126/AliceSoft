// 函数: sub_460b40
// 地址: 0x460b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_4 = *(arg1 + 0x1c)
void* edi = arg1 + 0x1c
int32_t* i = *eax_4

if (i != eax_4)
    do
        int32_t* ecx = i[0xa]
        
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
    while (i != *edi)

sub_418220(*(*edi + 4))
void* eax_2 = *edi
*(eax_2 + 4) = eax_2
int32_t* eax_3 = *edi
*eax_3 = eax_3
void* result = *edi
*(result + 8) = result
*(edi + 4) = 0
return result
