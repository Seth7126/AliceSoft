// 函数: sub_687680
// 地址: 0x687680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x84)
int32_t* edx = *(arg1 + 0x80)
int32_t ebx = 0
int32_t var_14 = 0
uint32_t edi_3 = (eax - edx + 3) u>> 2
int32_t esi = 0

if (edx u> eax)
    edi_3 = 0

if (edi_3 != 0)
    do
        int32_t eax_1 = *edx
        edx = &edx[1]
        esi += 1
        ebx += *(eax_1 + 0x28)
    while (esi != edi_3)
    
    var_14 = ebx

int32_t ebp = 0
int32_t* ecx = *(arg1 + 0x98)
int32_t esi_1 = 0
int32_t var_8 = 0
int32_t eax_3 = *(arg1 + 0x9c)
uint32_t edi_7 = (eax_3 - ecx + 3) u>> 2

if (ecx u> eax_3)
    edi_7 = 0

if (edi_7 != 0)
    do
        void* eax_4 = *ecx
        ecx = &ecx[1]
        int32_t edx_1
        edx_1.b = *(eax_4 + 0x20) != 0
        esi_1 += 1
        ebp += ((edx_1 << 1) + 2) * *(eax_4 + 0x1c)
    while (esi_1 != edi_7)
    
    var_8 = ebp

int32_t edi_8 = 0
int32_t var_10 = 0
int32_t edx_4 = 0
int32_t* ecx_1 = *(arg1 + 0xb0)
int32_t eax_6 = *(arg1 + 0xb4)
uint32_t esi_5 = (eax_6 - ecx_1 + 3) u>> 2

if (ecx_1 u> eax_6)
    esi_5 = 0

if (esi_5 != 0)
    do
        int32_t eax_7 = *ecx_1
        ecx_1 = &ecx_1[1]
        edx_4 += 1
        edi_8 += *(eax_7 + 0x24)
    while (edx_4 != esi_5)
    
    var_10 = edi_8

int32_t edx_5 = 0
int32_t ebp_1 = 0
int32_t* ecx_2 = *(arg1 + 0xc8)
int32_t eax_9 = *(arg1 + 0xcc)
uint32_t esi_9 = (eax_9 - ecx_2 + 3) u>> 2

if (ecx_2 u> eax_9)
    esi_9 = 0

if (esi_9 != 0)
    do
        int32_t eax_10 = *ecx_2
        ecx_2 = &ecx_2[1]
        edx_5 += 1
        ebp_1 += *(eax_10 + 0x58)
    while (edx_5 != esi_9)

int32_t esi_10 = 0
int32_t var_c = 0
int32_t* ecx_3 = *(arg1 + 0xf8)
int32_t eax_12 = *(arg1 + 0xfc)
uint32_t edx_9 = (eax_12 - ecx_3 + 3) u>> 2

if (ecx_3 u> eax_12)
    edx_9 = 0

if (edx_9 != 0)
    int32_t edi_9 = 0
    
    do
        void* edx_10 = *ecx_3
        ecx_3 = &ecx_3[1]
        esi_10 += 1
        edi_9 += *(edx_10 + 0x14) - *(edx_10 + 0x10)
    while (esi_10 != edx_9)
    
    ebx = var_14
    var_c = edi_9
    edi_8 = var_10

int32_t edx_11 = 0
int32_t esi_11 = 0
int32_t* ecx_4 = *(arg1 + 0x110)
int32_t eax_16 = *(arg1 + 0x114)
uint32_t eax_17 = (eax_16 - ecx_4 + 3) u>> 2

if (ecx_4 u> eax_16)
    eax_17 = 0

if (eax_17 != 0)
    int32_t ebx_2 = 0
    
    do
        void* edx_12 = *ecx_4
        ecx_4 = &ecx_4[1]
        esi_11 += 1
        ebx_2 += *(edx_12 + 0x14) - *(edx_12 + 0x10)
    while (esi_11 != eax_17)
    
    edi_8 = var_10
    ebx = var_14
    edx_11 = ebx_2

return var_c + edx_11 + ebp_1 + edi_8 + var_8 + ebx
