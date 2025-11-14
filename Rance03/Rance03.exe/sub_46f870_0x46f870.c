// 函数: sub_46f870
// 地址: 0x46f870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
int32_t edi
int32_t var_c = edi
int32_t* eax = *(ebx + 0x10)
int32_t* i = *eax

if (i != eax)
    do
        ebx, i = sub_4731a0(*(ebx + 4), i[0xa])
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(ebx + 0x10))

sub_418220(*(*(ebx + 0x10) + 4))
void* eax_2 = *(ebx + 0x10)
void* edi_2 = ebx + 0x18
*(eax_2 + 4) = eax_2
int32_t* eax_3 = *(ebx + 0x10)
*eax_3 = eax_3
void* eax_4 = *(ebx + 0x10)
*(eax_4 + 8) = eax_4
*(ebx + 0x14) = 0
int32_t* eax_5 = *edi_2
int32_t* i_1 = *eax_5

if (i_1 != eax_5)
    do
        ebx, i_1, edi_2 = sub_4731a0(*(ebx + 4), i_1[5])
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0xd) != 0)
                int32_t* i_7 = i_1[1]
                
                if (*(i_7 + 0xd) == 0)
                    while (i_1 == i_7[2])
                        i_1 = i_7
                        i_7 = i_7[1]
                        
                        if (*(i_7 + 0xd) != 0)
                            break
                
                i_1 = i_7
            else
                i_1 = i_5
                int32_t* i_6 = *i_1
                
                while (*(i_6 + 0xd) == 0)
                    i_1 = i_6
                    i_6 = *i_1
    while (i_1 != *edi_2)

void** ebx_1 = *(*edi_2 + 4)
void** esi = ebx_1

if (*(ebx_1 + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(ebx_1)
        ebx_1 = esi
    while (*(esi + 0xd) == 0)

void* eax_7 = *edi_2
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *edi_2
*eax_8 = eax_8
void* result = *edi_2
*(result + 8) = result
*(edi_2 + 4) = 0
return result
