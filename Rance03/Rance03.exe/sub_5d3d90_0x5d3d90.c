// 函数: sub_5d3d90
// 地址: 0x5d3d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx_1

if (*(arg2 + 0xc) != 0)
    edx_1 = *(arg2 + 8)

void* edx_2

if (*(arg2 + 0xc) == 0 || edx_1 == 0)
    edx_2 = nullptr
else
    char i
    
    do
        i = *edx_1
        edx_1 = &edx_1[1]
    while (i != 0)
    edx_2 = edx_1 - &edx_1[1]

if (edx_2 + 1 u> *(arg1 + 0xc))
    *(arg1 + 0xc) = 0
    char eax = sub_64aeb0(arg1 + 4, edx_2 + 1)
    
    if (eax == 0)
        return eax

int32_t* ecx_2

if (*(arg2 + 0xc) != 0)
    ecx_2 = *(arg2 + 8)
else
    ecx_2 = nullptr

if (*(arg1 + 0xc) != 0)
    sub_69d850(*(arg1 + 8), ecx_2, edx_2 + 1)
    int32_t* eax_3
    eax_3.b = 1
    return eax_3

sub_69d850(nullptr, ecx_2, edx_2 + 1)
int32_t* eax_1
eax_1.b = 1
return eax_1
