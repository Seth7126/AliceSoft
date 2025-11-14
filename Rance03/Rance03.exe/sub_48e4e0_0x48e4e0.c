// 函数: sub_48e4e0
// 地址: 0x48e4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 8) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x3c) = 0
sub_402110(arg1 + 0x24, 0x6da1ff, nullptr)
sub_402110(arg1 + 0xc, 0x6da205, nullptr)
int32_t* eax = *(arg1 + 0x58)
int32_t* i = *eax

if (i != eax)
    do
        (*(*i[5] + 4))()
        
        if (*(i + 0xd) == 0)
            int32_t* i_3 = i[2]
            
            if (*(i_3 + 0xd) != 0)
                int32_t* i_5 = i[1]
                
                if (*(i_5 + 0xd) == 0)
                    while (i == i_5[2])
                        i = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0xd) != 0)
                            break
                
                i = i_5
            else
                i = i_3
                int32_t* i_4 = *i
                
                while (*(i_4 + 0xd) == 0)
                    i = i_4
                    i_4 = *i
    while (i != *(arg1 + 0x58))

void** edi = *(*(arg1 + 0x58) + 4)
void** esi = edi

if (*(edi + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(edi)
        edi = esi
    while (*(esi + 0xd) == 0)

void* eax_3 = *(arg1 + 0x58)
*(eax_3 + 4) = eax_3
int32_t* eax_4 = *(arg1 + 0x58)
*eax_4 = eax_4
void* eax_5 = *(arg1 + 0x58)
*(eax_5 + 8) = eax_5
*(arg1 + 0x5c) = 0
int32_t* eax_6 = *(arg1 + 0x50)
int32_t* i_1 = *eax_6

if (i_1 != eax_6)
    do
        (*(*i_1[5] + 4))()
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_6 = i_1[2]
            
            if (*(i_6 + 0xd) != 0)
                int32_t* i_8 = i_1[1]
                
                if (*(i_8 + 0xd) == 0)
                    while (i_1 == i_8[2])
                        i_1 = i_8
                        i_8 = i_8[1]
                        
                        if (*(i_8 + 0xd) != 0)
                            break
                
                i_1 = i_8
            else
                i_1 = i_6
                int32_t* i_7 = *i_1
                
                while (*(i_7 + 0xd) == 0)
                    i_1 = i_7
                    i_7 = *i_1
    while (i_1 != *(arg1 + 0x50))

void** edi_1 = *(*(arg1 + 0x50) + 4)
void** esi_1 = edi_1

if (*(edi_1 + 0xd) == 0)
    do
        sub_420090(esi_1[2])
        esi_1 = *esi_1
        j__free(edi_1)
        edi_1 = esi_1
    while (*(esi_1 + 0xd) == 0)

void* eax_9 = *(arg1 + 0x50)
*(eax_9 + 4) = eax_9
int32_t* eax_10 = *(arg1 + 0x50)
*eax_10 = eax_10
void* eax_11 = *(arg1 + 0x50)
*(eax_11 + 8) = eax_11
*(arg1 + 0x54) = 0

for (int32_t* i_2 = *(arg1 + 0x44); i_2 != *(arg1 + 0x48); i_2 = &i_2[1])
    (*(**i_2 + 4))()

int32_t result = *(arg1 + 0x44)
*(arg1 + 0x48) = result
return result
