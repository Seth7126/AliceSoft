// 函数: sub_545fb0
// 地址: 0x545fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = &common::CPoint::`vftable'
arg1[2] = 0
arg1[3] = 0
arg1[4] = &common::CSize::`vftable'
arg1[5] = 0
arg1[6] = 0
*arg1 = &common::CRect::`vftable'
int32_t ecx = *(arg4 + 0x14)

if (ecx s<= 0 && *(arg4 + 0x18) s<= 0)
    arg1[2] = 0
    arg1[3] = 0
    arg1[5] = arg2
    arg1[6] = arg3
    return arg1

int32_t ebx = *(arg4 + 8)
int32_t esi = *(arg4 + 0x18)
int32_t edi = *(arg4 + 0xc)

if (ebx s< 0)
    ebx = 0

if (ecx + ebx s> arg2)
    ecx = arg2 - ebx

if (edi s< 0)
    edi = 0

if (esi + edi s> arg3)
    esi = arg3 - edi

arg1[3] = edi
arg1[2] = ebx
arg1[6] = esi
arg1[5] = ecx
return arg1
