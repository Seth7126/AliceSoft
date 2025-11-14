// 函数: sub_60cd50
// 地址: 0x60cd50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x70)
int32_t ebx = 0
void* var_18 = arg1
int32_t var_14 = 0
uint32_t edi_3 = (*(arg1 + 0x74) - eax + 3) u>> 2
int32_t esi = 0

if (eax u> *(arg1 + 0x74))
    edi_3 = 0

if (edi_3 != 0)
    do
        int32_t ecx_1 = *eax
        eax = &eax[1]
        esi += 1
        ebx += *(ecx_1 + 0x28)
    while (esi != edi_3)
    
    arg1 = var_18
    var_14 = ebx

int32_t* eax_1 = *(arg1 + 0x88)
int32_t ebp = 0
int32_t ecx_2 = *(arg1 + 0x8c)
int32_t var_8 = 0
int32_t esi_1 = 0
uint32_t edi_7 = (ecx_2 - eax_1 + 3) u>> 2

if (eax_1 u> ecx_2)
    edi_7 = 0

if (edi_7 != 0)
    do
        void* ecx_3 = *eax_1
        eax_1 = &eax_1[1]
        int32_t edx_1
        edx_1.b = *(ecx_3 + 0x20) != 0
        esi_1 += 1
        ebp += ((edx_1 << 1) + 2) * *(ecx_3 + 0x1c)
    while (esi_1 != edi_7)
    
    var_8 = ebp

int32_t edi_9 = 0
int32_t var_10 = 0
int32_t edx_4 = 0
int32_t* eax_2 = *(var_18 + 0xa0)
int32_t ecx_5 = *(var_18 + 0xa4)
uint32_t esi_5 = (ecx_5 - eax_2 + 3) u>> 2

if (eax_2 u> ecx_5)
    esi_5 = 0

if (esi_5 != 0)
    do
        int32_t ecx_6 = *eax_2
        eax_2 = &eax_2[1]
        edx_4 += 1
        edi_9 += *(ecx_6 + 0x24)
    while (edx_4 != esi_5)
    
    var_10 = edi_9

int32_t edx_5 = 0
int32_t ebp_1 = 0
int32_t* eax_3 = *(var_18 + 0xb8)
int32_t ecx_8 = *(var_18 + 0xbc)
uint32_t esi_9 = (ecx_8 - eax_3 + 3) u>> 2

if (eax_3 u> ecx_8)
    esi_9 = 0

if (esi_9 != 0)
    do
        int32_t ecx_9 = *eax_3
        eax_3 = &eax_3[1]
        edx_5 += 1
        ebp_1 += *(ecx_9 + 0x68)
    while (edx_5 != esi_9)

int32_t esi_10 = 0
int32_t var_c = 0
int32_t* eax_4 = *(var_18 + 0xe8)
int32_t ecx_11 = *(var_18 + 0xec)
uint32_t edx_9 = (ecx_11 - eax_4 + 3) u>> 2

if (eax_4 u> ecx_11)
    edx_9 = 0

if (edx_9 != 0)
    int32_t edi_10 = 0
    
    do
        void* edx_10 = *eax_4
        eax_4 = &eax_4[1]
        esi_10 += 1
        edi_10 += *(edx_10 + 0x14) - *(edx_10 + 0x10)
    while (esi_10 != edx_9)
    
    ebx = var_14
    var_c = edi_10
    edi_9 = var_10

int32_t edx_11 = 0
int32_t esi_11 = 0
int32_t* eax_5 = *(var_18 + 0x100)
int32_t ecx_15 = *(var_18 + 0x104)
uint32_t ecx_16 = (ecx_15 - eax_5 + 3) u>> 2

if (eax_5 u> ecx_15)
    ecx_16 = 0

if (ecx_16 != 0)
    int32_t ebx_2 = 0
    
    do
        void* edx_12 = *eax_5
        eax_5 = &eax_5[1]
        esi_11 += 1
        ebx_2 += *(edx_12 + 0x14) - *(edx_12 + 0x10)
    while (esi_11 != ecx_16)
    
    edi_9 = var_10
    ebx = var_14
    edx_11 = ebx_2

return var_c + edx_11 + ebp_1 + edi_9 + var_8 + ebx
