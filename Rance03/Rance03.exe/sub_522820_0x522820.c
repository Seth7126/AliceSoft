// 函数: sub_522820
// 地址: 0x522820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 4)
int32_t* i = *eax

if (i != eax)
    do
        int32_t* ecx = i[5]
        
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

void** edi = *(*(arg1 + 4) + 4)
void** esi = edi

if (*(edi + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(edi)
        edi = esi
    while (*(esi + 0xd) == 0)

void* eax_3 = *(arg1 + 4)
int32_t edi_1 = 0
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 4)
*eax_4 = eax_4
void* eax_5 = *(arg1 + 4)
*(eax_5 + 8) = eax_5
*(arg1 + 8) = 0
int32_t* esi_1 = *(arg1 + 0x18)
uint32_t ebx_3 = (*(arg1 + 0x1c) - esi_1 + 3) u>> 2

if (esi_1 u> *(arg1 + 0x1c))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        (*(**esi_1 + 4))()
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_3)

int32_t result = *(arg1 + 0x18)
*(arg1 + 0x1c) = result
return result
