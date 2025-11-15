// 函数: sub_47e110
// 地址: 0x47e110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
