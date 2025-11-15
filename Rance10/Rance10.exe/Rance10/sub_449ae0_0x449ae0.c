// 函数: sub_449ae0
// 地址: 0x449ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s>= 0)
    *arg1 = (not.d(arg2 u>> 0x1d) & 2) | 0xc
    return 2

if ((arg2 & 0x40000000) == 0)
    *arg1 = (not.d(arg2 u>> 0x1c) & 2) | 4
    return 3

if ((arg2 & 0x20000000) == 0)
    *arg1 = (not.d(arg2 u>> 0x1b) & 2) | 8
    return 4

if ((arg2 & 0x10000000) == 0)
    int32_t edx = arg2 & 0x8000000
    int32_t edx_1 = neg.d(edx)
    *arg1 = (sbb.d(edx_1, edx_1, edx != 0) & 0x1d) + 1
    return 5

if ((arg2 & 0x8000000) == 0)
    int32_t edx_27 = arg2 & 0x4000000
    int32_t edx_28 = neg.d(edx_27)
    *arg1 = (sbb.d(edx_28, edx_28, edx_27 != 0) & 0xfffffffa) + 0x1c
    return 6

if ((arg2 & 0x4000000) == 0)
    int32_t edx_22 = arg2 & 0x2000000
    int32_t edx_23 = neg.d(edx_22)
    *arg1 = (sbb.d(edx_23, edx_23, edx_22 != 0) & 6) + 0x14
    return 7

int32_t edx_17 = arg2 & 0x2000000
int32_t edx_18 = neg.d(edx_17)
*arg1 = (sbb.d(edx_18, edx_18, edx_17 != 0) & 0xfffffff9) + 0x18
return 7
