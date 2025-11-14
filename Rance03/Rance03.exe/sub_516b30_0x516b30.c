// 函数: sub_516b30
// 地址: 0x516b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg2 + 1

if (*(arg1 + 0xd4) == *(arg1 + 0xd8))
    esi = arg2

int32_t eax_1 = *(arg1 + 0xb4)
int32_t edx = 0
int32_t* ecx = *(arg1 + 0xb0)
uint32_t edi_3 = (eax_1 - ecx + 3) u>> 2

if (ecx u> eax_1)
    edi_3 = 0

if (edi_3 != 0)
    do
        void* eax_3 = *(*ecx + 4)
        
        if (eax_3 != 0)
            *(eax_3 + 0x14) = esi
        
        edx += 1
        ecx = &ecx[1]
    while (edx != edi_3)

int32_t eax_4 = *(arg1 + 0xc0)
int32_t edx_1 = 0
int32_t* ecx_1 = *(arg1 + 0xbc)
uint32_t edi_8 = (eax_4 - ecx_1 + 3) u>> 2

if (ecx_1 u> eax_4)
    edi_8 = 0

if (edi_8 != 0)
    do
        void* eax_6 = *(*ecx_1 + 4)
        
        if (eax_6 != 0)
            *(eax_6 + 0x14) = esi
        
        edx_1 += 1
        ecx_1 = &ecx_1[1]
    while (edx_1 != edi_8)

void* result = *(arg1 + 0xd8)
int32_t* ecx_2 = *(arg1 + 0xd4)
int32_t edx_2 = 0
uint32_t esi_4 = (result - ecx_2 + 3) u>> 2

if (ecx_2 u> result)
    esi_4 = 0

if (esi_4 != 0)
    int32_t* ecx_3 = ecx_2
    
    do
        result = *(*ecx_3 + 4)
        
        if (result != 0)
            *(result + 0x14) = arg2
        
        edx_2 += 1
        ecx_3 = &ecx_3[1]
    while (edx_2 != esi_4)

return result
