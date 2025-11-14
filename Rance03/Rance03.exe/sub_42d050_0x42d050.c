// 函数: sub_42d050
// 地址: 0x42d050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax_2 = (*(**(arg1 + 0xc) + 0x10))((*(**(arg1 + 8) + 0x18))(arg2), arg3)
char* edx_1 = eax_2

if (edx_1 == 0)
    eax_2.b = 0
    return eax_2

if (*edx_1 == 0)
    sub_402110(arg4, edx_1, nullptr)
    int32_t* eax_3
    eax_3.b = 1
    return eax_3

char i

do
    i = *eax_2
    eax_2 = &eax_2[1]
while (i != 0)
sub_402110(arg4, edx_1, eax_2 - &eax_2[1])
int32_t* eax_5
eax_5.b = 1
return eax_5
