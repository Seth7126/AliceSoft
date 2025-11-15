// 函数: sub_6a3540
// 地址: 0x6a3540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg3 + 0x16bc)

if (ecx s<= 0xd)
    *(arg3 + 0x16b8) |= arg5 << ecx.b
    *(arg3 + 0x16bc) = ecx + 3
else
    char* edx = *(arg3 + 8)
    int32_t ecx_1 = *(arg3 + 0x14)
    *(arg3 + 0x16b8) |= arg5 << ecx.b
    edx[ecx_1] = *(arg3 + 0x16b8)
    *(arg3 + 0x14) += 1
    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
    int32_t ecx_2
    ecx_2.b = 0x10
    ecx_2.b = 0x10 - *(arg3 + 0x16bc)
    *(arg3 + 0x14) += 1
    *(arg3 + 0x16bc) -= 0xd
    *(arg3 + 0x16b8) = arg5 u>> ecx_2.b

sub_6a3e10(arg3)
(*(arg3 + 8))[*(arg3 + 0x14)] = arg4.b
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = (arg4 u>> 8).b
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = not.b(arg4.b)
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = (not.d(arg4) u>> 8).b
int32_t eax_7 = *(arg3 + 8)
*(arg3 + 0x14) += 1
char* result = sub_700660(eax_7 + *(arg3 + 0x14), arg2, arg4)
*(arg3 + 0x14) += arg4
return result
