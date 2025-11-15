// 函数: sub_526a90
// 地址: 0x526a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5].q = arg2[5].q
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg1[6].d = arg2[6].d
*(arg1 + 0x64) = *(arg2 + 0x64)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
arg1[7].d = arg2[7].d
*(arg1 + 0x74) = *(arg2 + 0x74)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[8].d = arg2[8].d
*(arg1 + 0x84) = *(arg2 + 0x84)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x8c) = *(arg2 + 0x8c)
arg1[9].d = arg2[9].d
*(arg1 + 0x94) = *(arg2 + 0x94)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0x9c) = *(arg2 + 0x9c)
arg1[0xa].d = arg2[0xa].d
*(arg1 + 0xa4) = *(arg2 + 0xa4)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xa9) = *(arg2 + 0xa9)
*(arg1 + 0xac) = *(arg2 + 0xac)
arg1[0xb].d = arg2[0xb].d
int32_t* ecx = *(arg2 + 0xb4)
*(arg1 + 0xb4) = ecx
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xbc) = *(arg2 + 0xbc)

if (ecx != 0)
    (**ecx)()

void* ecx_1 = *(arg1 + 0xb8)

if (ecx_1 != 0)
    *(ecx_1 + 4)
    *(ecx_1 + 4) += 1

void* eax_28 = *(arg1 + 0xbc)

if (eax_28 != 0)
    *(eax_28 + 4)
    *(eax_28 + 4) += 1

return arg1
