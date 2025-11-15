// 函数: sub_404730
// 地址: 0x404730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
int32_t esi = 0
uint32_t edi_3 = (arg2 - arg3 + 3) u>> 2

if (arg3 u> arg2)
    edi_3 = 0

if (edi_3 != 0)
    do
        result = *arg4
        arg3 += 4
        esi += 1
        *(arg3 - 4) = result
    while (esi != edi_3)

return result
