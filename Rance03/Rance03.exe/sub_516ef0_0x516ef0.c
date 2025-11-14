// 函数: sub_516ef0
// 地址: 0x516ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = 0
int32_t eax = *(arg1 + 0xb4)
int32_t* edx = *(arg1 + 0xb0)
uint32_t ecx_3 = (eax - edx + 3) u>> 2

if (edx u> eax)
    ecx_3 = 0

if (ecx_3 != 0)
    do
        void* eax_2 = *(*edx + 4)
        
        if (eax_2 != 0)
            *(eax_2 + 0x28) = arg2
        
        esi += 1
        edx = &edx[1]
    while (esi != ecx_3)

int32_t eax_3 = *(arg1 + 0xc0)
int32_t edx_1 = 0
int32_t* ecx_4 = *(arg1 + 0xbc)
uint32_t esi_4 = (eax_3 - ecx_4 + 3) u>> 2

if (ecx_4 u> eax_3)
    esi_4 = 0

if (esi_4 != 0)
    do
        void* eax_5 = *(*ecx_4 + 4)
        
        if (eax_5 != 0)
            *(eax_5 + 0x28) = arg2
        
        edx_1 += 1
        ecx_4 = &ecx_4[1]
    while (edx_1 != esi_4)

void* result = *(arg1 + 0xd8)
int32_t edx_2 = 0
int32_t* ecx_5 = *(arg1 + 0xd4)
uint32_t esi_8 = (result - ecx_5 + 3) u>> 2

if (ecx_5 u> result)
    esi_8 = 0

if (esi_8 != 0)
    do
        result = *(*ecx_5 + 4)
        
        if (result != 0)
            *(result + 0x28) = arg2
        
        edx_2 += 1
        ecx_5 = &ecx_5[1]
    while (edx_2 != esi_8)

return result
