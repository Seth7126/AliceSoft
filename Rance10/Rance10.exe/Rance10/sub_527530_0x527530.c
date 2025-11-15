// 函数: sub_527530
// 地址: 0x527530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x68) == 0)
    *(arg1 + 0x68) = 1
    *(arg1 + 0x6c) = *(arg2 + 8)
    *(arg1 + 0x70) = *(arg2 + 0xc)
    *(arg1 + 0x74) = *(arg2 + 0x14)
    *(arg1 + 0x78) = *(arg2 + 0x18)
    return arg1

int32_t edx_1 = *(arg1 + 0x70)
int32_t ebx = *(arg1 + 0x6c)
int32_t eax_5 = *(arg2 + 8)

if (ebx s< eax_5)
    ebx = eax_5

int32_t esi_1 = *(arg1 + 0x74) + *(arg1 + 0x6c)
int32_t edi_1 = *(arg2 + 0x14) + eax_5
int32_t eax_6 = *(arg2 + 0xc)
int32_t ecx_1 = *(arg2 + 0x18)
*(arg1 + 0x6c) = ebx

if (edx_1 s< eax_6)
    edx_1 = eax_6

int32_t ecx_2 = ecx_1 + eax_6
int32_t eax_8 = *(arg1 + 0x70) + *(arg1 + 0x78)
*(arg1 + 0x70) = edx_1

if (edi_1 s< esi_1)
    esi_1 = edi_1

if (ecx_2 s< eax_8)
    eax_8 = ecx_2

*(arg1 + 0x74) = esi_1 - ebx
*(arg1 + 0x78) = eax_8 - edx_1
return arg1
