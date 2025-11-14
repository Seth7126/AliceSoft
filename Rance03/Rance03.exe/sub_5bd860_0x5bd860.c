// 函数: sub_5bd860
// 地址: 0x5bd860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1

if (arg2 u>= (*(arg1 + 0x40) - *(arg1 + 0x3c)) s>> 2)
    eax_1.b = 0
    return eax_1

int32_t edx = *(arg1 + 0x3c)
char* edx_1

if (edx != *(arg1 + 0x40))
    eax_1 = *(arg1 + 0x48)
    
    if (eax_1 != *(arg1 + 0x4c))
        edx_1 = *(edx + (arg2 << 2)) + eax_1
    else
        edx_1 = nullptr
else
    edx_1 = nullptr

if (*edx_1 == 0)
    sub_402110(arg3, edx_1, nullptr)
    int32_t* eax_2
    eax_2.b = 1
    return eax_2

char* ecx_1 = edx_1

do
    eax_1.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_1.b != 0)

sub_402110(arg3, edx_1, ecx_1 - &ecx_1[1])
int32_t* eax_3
eax_3.b = 1
return eax_3
