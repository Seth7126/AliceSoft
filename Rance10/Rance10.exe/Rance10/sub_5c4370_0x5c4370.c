// 函数: sub_5c4370
// 地址: 0x5c4370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
int32_t* edx = *(arg1 + 0x64)
uint32_t edi_3 = (*(arg1 + 0x68) - edx + 3) u>> 2

if (edx u> *(arg1 + 0x68))
    edi_3 = 0

void* eax

if (edi_3 != 0)
    do
        eax = *edx
        edx = &edx[1]
        esi += 1
        *(eax + 0x3c) = *arg2
    while (esi != edi_3)

void** ecx = *(arg1 + 0x64)
int32_t edx_1 = 0
uint32_t esi_4 = (*(arg1 + 0x68) - ecx + 3) u>> 2

if (ecx u> *(arg1 + 0x68))
    esi_4 = 0

if (esi_4 != 0)
    do
        eax = *ecx
        ecx = &ecx[1]
        edx_1 += 1
        *(eax + 0x4c) = arg2[1]
    while (edx_1 != esi_4)

void** ecx_1 = *(arg1 + 0x64)
int32_t edx_2 = 0
int32_t xmm0_3 = arg2[2].d
uint32_t esi_8 = (*(arg1 + 0x68) - ecx_1 + 3) u>> 2

if (ecx_1 u> *(arg1 + 0x68))
    esi_8 = 0

if (esi_8 != 0)
    do
        eax = *ecx_1
        ecx_1 = &ecx_1[1]
        edx_2 += 1
        *(eax + 0x5c) = xmm0_3
    while (edx_2 != esi_8)

void** ecx_2 = *(arg1 + 0x64)
int32_t edx_3 = 0
int32_t xmm0_4 = *(arg2 + 0x24)
uint32_t esi_12 = (*(arg1 + 0x68) - ecx_2 + 3) u>> 2

if (ecx_2 u> *(arg1 + 0x68))
    esi_12 = 0

if (esi_12 == 0)
    return 

do
    eax = *ecx_2
    ecx_2 = &ecx_2[1]
    edx_3 += 1
    *(eax + 0x60) = xmm0_4
while (edx_3 != esi_12)
