// 函数: sub_610e00
// 地址: 0x610e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* ecx = *(arg1 + 0x4c)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x4c) = 0

int32_t* ecx_1 = *(arg1 + 0x48)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x48) = 0

sub_6093d0(arg1 + 0x50)
int32_t* ecx_3 = *(arg1 + 0xc4)

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)
    *(arg1 + 0xc4) = 0

int32_t* ecx_4 = *(arg1 + 0xbc)

if (ecx_4 != 0)
    (*(*ecx_4 + 8))(ecx_4)
    *(arg1 + 0xbc) = 0

int32_t* ecx_5 = *(arg1 + 0xb4)

if (ecx_5 != 0)
    (*(*ecx_5 + 8))(ecx_5)
    *(arg1 + 0xb4) = 0

int32_t* ecx_6 = *(arg1 + 0xac)

if (ecx_6 != 0)
    (*(*ecx_6 + 8))(ecx_6)
    *(arg1 + 0xac) = 0

int32_t* ecx_7 = *(arg1 + 0xa4)

if (ecx_7 != 0)
    (*(*ecx_7 + 8))(ecx_7)
    *(arg1 + 0xa4) = 0

int32_t* ecx_8 = *(arg1 + 0x9c)

if (ecx_8 != 0)
    (*(*ecx_8 + 8))(ecx_8)
    *(arg1 + 0x9c) = 0

int32_t* eax_9 = *(arg1 + 0x90)
void* ebx = arg1 + 0x90
int32_t* i = *eax_9

if (i != eax_9)
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
    while (i != *ebx)

void** ebp = *(*ebx + 4)
void** esi = ebp

if (*(ebp + 0xd) == 0)
    do
        sub_420090(esi[2])
        esi = *esi
        j__free(ebp)
        ebp = esi
    while (*(esi + 0xd) == 0)

void* eax_12 = *ebx
*(eax_12 + 4) = eax_12
int32_t* eax_13 = *ebx
*eax_13 = eax_13
void* eax_14 = *ebx
*(eax_14 + 8) = eax_14
*(ebx + 4) = 0
int32_t* eax_15 = *(arg1 + 0x88)
int32_t* i_1 = *eax_15

if (i_1 != eax_15)
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
    while (i_1 != *(arg1 + 0x88))

void** ebx_1 = *(*(arg1 + 0x88) + 4)
void** esi_1 = ebx_1

if (*(ebx_1 + 0xd) == 0)
    do
        sub_420090(esi_1[2])
        esi_1 = *esi_1
        j__free(ebx_1)
        ebx_1 = esi_1
    while (*(esi_1 + 0xd) == 0)

void* eax_18 = *(arg1 + 0x88)
*(eax_18 + 4) = eax_18
int32_t* eax_19 = *(arg1 + 0x88)
*eax_19 = eax_19
void* eax_20 = *(arg1 + 0x88)
*(eax_20 + 8) = eax_20
*(arg1 + 0x8c) = 0
*(arg1 + 0x34) = *(arg1 + 0x30)
void* eax_22 = arg1 + 0x18
bool cond:0 = *(eax_22 + 0x14) u< 0x10
*(eax_22 + 0x10) = 0

if (not(cond:0))
    eax_22 = *eax_22

*eax_22 = 0
void** ebx_2 = *(*(arg1 + 0x3c) + 4)
void** esi_2 = ebx_2

if (*(ebx_2 + 0xd) == 0)
    do
        sub_420090(esi_2[2])
        esi_2 = *esi_2
        j__free(ebx_2)
        ebx_2 = esi_2
    while (*(esi_2 + 0xd) == 0)

void* eax_24 = *(arg1 + 0x3c)
*(eax_24 + 4) = eax_24
int32_t* eax_25 = *(arg1 + 0x3c)
*eax_25 = eax_25
void* result = *(arg1 + 0x3c)
*(result + 8) = result
*(arg1 + 0x40) = 0
int32_t* ecx_14 = *(arg1 + 0x44)

if (ecx_14 != 0)
    result = (*(*ecx_14 + 4))()
    *(arg1 + 0x44) = 0

*(arg1 + 0x14) = 0
return result
