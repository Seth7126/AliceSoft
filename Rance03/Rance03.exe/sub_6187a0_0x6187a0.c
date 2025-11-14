// 函数: sub_6187a0
// 地址: 0x6187a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x5c)

if (ecx != 0)
    (*(*ecx + 8))(ecx)
    *(arg1 + 0x5c) = 0

int32_t* ecx_1 = *(arg1 + 0x54)

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    *(arg1 + 0x54) = 0

int32_t* eax_3 = *(arg1 + 0x48)
int32_t* i = *eax_3

if (i != eax_3)
    do
        (*(*i[5] + 4))()
        
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
    while (i != *(arg1 + 0x48))

void** ebx = *(*(arg1 + 0x48) + 4)
void** esi = ebx

if (*(ebx + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(ebx)
        ebx = esi
    while (*(esi + 0xd) == 0)

void* eax_6 = *(arg1 + 0x48)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 0x48)
*eax_7 = eax_7
void* eax_8 = *(arg1 + 0x48)
*(eax_8 + 8) = eax_8
*(arg1 + 0x4c) = 0
int32_t* eax_9 = *(arg1 + 0x40)
int32_t* i_1 = *eax_9

if (i_1 != eax_9)
    do
        (*(*i_1[5] + 4))()
        
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
    while (i_1 != *(arg1 + 0x40))

void** edi = *(*(arg1 + 0x40) + 4)
void** esi_1 = edi

if (*(edi + 0xd) == 0)
    do
        sub_420090(esi_1[2])
        esi_1 = *esi_1
        j__free(edi)
        edi = esi_1
    while (*(esi_1 + 0xd) == 0)

void* eax_12 = *(arg1 + 0x40)
*(eax_12 + 4) = eax_12
int32_t* eax_13 = *(arg1 + 0x40)
*eax_13 = eax_13
void* eax_14 = *(arg1 + 0x40)
*(eax_14 + 8) = eax_14
*(arg1 + 0x44) = 0
*(arg1 + 0x2c) = *(arg1 + 0x28)
void* eax_16 = arg1 + 0x10
bool cond:0 = *(eax_16 + 0x14) u< 0x10
*(eax_16 + 0x10) = 0

if (not(cond:0))
    eax_16 = *eax_16

*eax_16 = 0
void** edi_1 = *(*(arg1 + 0x34) + 4)
void** esi_2 = edi_1

if (*(edi_1 + 0xd) == 0)
    do
        sub_420090(esi_2[2])
        esi_2 = *esi_2
        j__free(edi_1)
        edi_1 = esi_2
    while (*(esi_2 + 0xd) == 0)

void* eax_18 = *(arg1 + 0x34)
*(eax_18 + 4) = eax_18
int32_t* eax_19 = *(arg1 + 0x34)
*eax_19 = eax_19
void* result = *(arg1 + 0x34)
*(result + 8) = result
*(arg1 + 0x38) = 0
int32_t* ecx_9 = *(arg1 + 0x3c)

if (ecx_9 != 0)
    result = (*(*ecx_9 + 4))()
    *(arg1 + 0x3c) = 0

*(arg1 + 0xc) = 0
*(arg1 + 4) = 0
return result
