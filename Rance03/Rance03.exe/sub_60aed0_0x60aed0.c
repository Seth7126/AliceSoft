// 函数: sub_60aed0
// 地址: 0x60aed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 0x1b8))(ecx)

int32_t ebx = *(arg1 + 0x34)

for (int32_t* i = *(arg1 + 0x30); i != ebx; i = &i[2])
    (**i)(0)

*(arg1 + 0x34) = *(arg1 + 0x30)
int32_t* eax_4 = *(arg1 + 0x24)
int32_t* i_1 = *eax_4

if (i_1 != eax_4)
    do
        int32_t* eax_5 = i_1[5]
        (*(*eax_5 + 8))(eax_5)
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_2 = i_1[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i_1[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i_1 == i_4[2])
                        i_1 = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i_1 = i_4
            else
                i_1 = i_2
                int32_t* i_3 = *i_1
                
                while (*(i_3 + 0xd) == 0)
                    i_1 = i_3
                    i_3 = *i_1
    while (i_1 != *(arg1 + 0x24))

void** ebx_1 = *(*(arg1 + 0x24) + 4)
void** esi = ebx_1

if (*(ebx_1 + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(ebx_1)
        ebx_1 = esi
    while (*(esi + 0xd) == 0)

void* eax_7 = *(arg1 + 0x24)
*(eax_7 + 4) = eax_7
int32_t* eax_8 = *(arg1 + 0x24)
*eax_8 = eax_8
void* result = *(arg1 + 0x24)
*(result + 8) = result
*(arg1 + 0x28) = 0
int32_t* ecx_4 = *(arg1 + 0x18)
*(arg1 + 0x2c) = 0

if (ecx_4 != 0)
    result = (*(*ecx_4 + 8))(ecx_4)
    *(arg1 + 0x18) = 0

int32_t* ecx_5 = *(arg1 + 0x14)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 8))(ecx_5)
    *(arg1 + 0x14) = 0

int32_t* ecx_6 = *(arg1 + 0x10)

if (ecx_6 != 0)
    result = (*(*ecx_6 + 8))(ecx_6)
    *(arg1 + 0x10) = 0

int32_t* ecx_7 = *(arg1 + 4)

if (ecx_7 != 0)
    result = (*(*ecx_7 + 8))(ecx_7)
    *(arg1 + 4) = 0

int32_t* ecx_8 = *(arg1 + 0xc)

if (ecx_8 != 0)
    result = (*(*ecx_8 + 8))(ecx_8)
    *(arg1 + 0xc) = 0

int32_t* ecx_9 = *(arg1 + 8)

if (ecx_9 != 0)
    result = (*(*ecx_9 + 8))(ecx_9)
    *(arg1 + 8) = 0

*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x3c) = 0
return result
