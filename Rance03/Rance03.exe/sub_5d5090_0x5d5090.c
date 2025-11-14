// 函数: sub_5d5090
// 地址: 0x5d5090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s<= 0)
    int32_t eax
    eax.b = 1
    return eax

char eax_1 = sub_5d5100(arg1, arg2, arg3)

if (eax_1 == 0)
    return eax_1

char eax_4 = sub_64aeb0(arg1 + 4, *(arg1 + 0xc) + 0xc)

if (eax_4 == 0)
    return eax_4

int32_t edx = *(arg1 + 0xc)
int32_t ecx_1

if (edx != 0)
    ecx_1 = *(arg1 + 8)
else
    ecx_1 = 0

uint32_t edx_1 = edx u>> 2
*(ecx_1 + (edx_1 << 2) - 0xc) = arg2
*(ecx_1 + (edx_1 << 2) - 8) = arg3
*(ecx_1 + (edx_1 << 2) - 4) = arg4
int32_t eax_5
eax_5.b = 1
return eax_5
