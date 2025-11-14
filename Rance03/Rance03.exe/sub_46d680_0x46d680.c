// 函数: sub_46d680
// 地址: 0x46d680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg4
int32_t esi = 0
uint32_t edi_3 = (arg5 - edx + 3) u>> 2

if (edx u> arg5)
    edi_3 = 0

if (edi_3 == 0)
    return 

do
    edx += 4
    esi += 1
    *(edx - 4) = *arg3
while (esi != edi_3)
