// 函数: sub_4a5510
// 地址: 0x4a5510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_4a62e0(arg1, j_sub_4e7a90)
sub_4a62e0(arg1, j_sub_4e7a00)
int32_t* eax = *(arg1 + 0x1c)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* ecx_1 = i[5]
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
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
    while (i != *(arg1 + 0x1c))

void** ebx = *(*(arg1 + 0x1c) + 4)
void** esi_1 = ebx

if (*(ebx + 0xd) == 0)
    do
        sub_420090(esi_1[2])
        esi_1 = *esi_1
        j__free(ebx)
        ebx = esi_1
    while (*(esi_1 + 0xd) == 0)

void* eax_3 = *(arg1 + 0x1c)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x1c)
*eax_4 = eax_4
void* result = *(arg1 + 0x1c)
*(result + 8) = result
*(arg1 + 0x20) = 0
return result
