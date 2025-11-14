// 函数: sub_5d7a10
// 地址: 0x5d7a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0xc)
void* ecx = *(arg1 + 0x14)

if (edx s<= ecx)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_1

if (edx != 0)
    eax_1 = *(arg1 + 8)
else
    eax_1 = 0

char* esi = ecx + eax_1

do
    eax_1.b = *esi
    esi = &esi[1]
while (eax_1.b != 0)

void* esi_1 = esi - &esi[1]

if (edx s< ecx + 1 + esi_1)
    void* eax_3
    eax_3.b = 0
    return eax_3

int32_t eax_4

if (edx != 0)
    eax_4 = *(arg1 + 8)
else
    eax_4 = 0

void* edx_1 = ecx + eax_4
void* ecx_1

if (*(ecx + eax_4) != 0)
    void* ecx_3 = edx_1
    
    do
        eax_4.b = *ecx_3
        ecx_3 += 1
    while (eax_4.b != 0)
    
    ecx_1 = ecx_3 - (edx_1 + 1)
else
    ecx_1 = nullptr

sub_402110(arg2, edx_1, ecx_1)
*(arg1 + 0x14) += esi_1 + 1
void* eax_5
eax_5.b = 1
return eax_5
