// 函数: sub_517380
// 地址: 0x517380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t ebx
ebx.b = arg3
int32_t* edx = *(arg1 + 0xb0)
int32_t esi = 0
int32_t eax_1 = *(arg1 + 0xb4)
uint32_t edi_3 = (eax_1 - edx + 3) u>> 2

if (edx u> eax_1)
    edi_3 = 0

if (edi_3 != 0)
    do
        void* ecx = *edx
        void* eax_2 = *(ecx + 4)
        
        if (eax_2 != 0)
            *(eax_2 + 0xbc) = arg2
        
        void* eax_3 = *(ecx + 4)
        
        if (eax_3 != 0)
            *(eax_3 + 0xc1) = ebx.b
        
        esi += 1
        edx = &edx[1]
    while (esi != edi_3)

void* esi_2 = arg1
int32_t edx_1 = 0
int32_t eax_4 = *(esi_2 + 0xc0)
int32_t* ecx_1 = *(esi_2 + 0xbc)
uint32_t edi_7 = (eax_4 - ecx_1 + 3) u>> 2

if (ecx_1 u> eax_4)
    edi_7 = 0

if (edi_7 != 0)
    do
        void* esi_1 = *ecx_1
        void* eax_5 = *(esi_1 + 4)
        
        if (eax_5 != 0)
            *(eax_5 + 0xbc) = arg2
        
        void* eax_6 = *(esi_1 + 4)
        
        if (eax_6 != 0)
            *(eax_6 + 0xc1) = ebx.b
        
        edx_1 += 1
        ecx_1 = &ecx_1[1]
    while (edx_1 != edi_7)
    
    esi_2 = arg1

void* result = *(esi_2 + 0xd8)
int32_t edx_2 = 0
int32_t* ecx_2 = *(esi_2 + 0xd4)
uint32_t edi_11 = (result - ecx_2 + 3) u>> 2

if (ecx_2 u> result)
    edi_11 = 0

if (edi_11 != 0)
    do
        void* esi_3 = *ecx_2
        void* eax_7 = *(esi_3 + 4)
        
        if (eax_7 != 0)
            *(eax_7 + 0xbc) = arg2
        
        result = *(esi_3 + 4)
        
        if (result != 0)
            *(result + 0xc1) = ebx.b
        
        edx_2 += 1
        ecx_2 = &ecx_2[1]
    while (edx_2 != edi_11)

return result
