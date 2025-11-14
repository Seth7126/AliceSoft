// 函数: sub_5d3590
// 地址: 0x5d3590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 + 1 u>= *(arg1 + 0xc) u>> 2)
    int32_t eax
    eax.b = 0
    return eax

int32_t ecx

if (*(arg1 + 0xc) != 0)
    ecx = *(arg1 + 8)
else
    ecx = 0

bool cond:0 = *(arg1 + 0xc) != 0
*arg3 = *(ecx + (arg2 << 2))

if (cond:0)
    *arg4 = *(*(arg1 + 8) + (arg2 << 2) + 4)
    int32_t* eax_3
    eax_3.b = 1
    return eax_3

*arg4 = *((arg2 << 2) + 4)
int32_t* eax_2
eax_2.b = 1
return eax_2
