// 函数: sub_5d3e20
// 地址: 0x5d3e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi_1

if (*(arg1 + 0xc) != 0)
    esi_1 = *(arg1 + 8)

char i
void* esi_2

if (*(arg1 + 0xc) == 0 || esi_1 == 0)
    esi_2 = nullptr
else
    do
        i = *esi_1
        esi_1 = &esi_1[1]
    while (i != 0)
    
    esi_2 = esi_1 - &esi_1[1]

char* edi_1

if (*(arg2 + 0xc) != 0)
    edi_1 = *(arg2 + 8)

void* edi_2

if (*(arg2 + 0xc) == 0 || edi_1 == 0)
    edi_2 = nullptr
else
    do
        i = *edi_1
        edi_1 = &edi_1[1]
    while (i != 0)
    
    edi_2 = edi_1 - &edi_1[1]

char eax_2 = sub_64aeb0(arg1 + 4, esi_2 + 1 + edi_2)

if (eax_2 == 0)
    return eax_2

int32_t* edx

if (*(arg2 + 0xc) != 0)
    edx = *(arg2 + 8)
else
    edx = nullptr

void* const ecx_3

if (*(arg1 + 0xc) != 0)
    ecx_3 = *(arg1 + 8)
else
    ecx_3 = nullptr

sub_69d850(ecx_3 + esi_2, edx, edi_2 + 1)
int32_t* eax_5
eax_5.b = 1
return eax_5
