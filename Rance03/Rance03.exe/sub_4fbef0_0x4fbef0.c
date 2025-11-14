// 函数: sub_4fbef0
// 地址: 0x4fbef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &partsengine::CRect::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t ecx = *(arg4 + 0xc)

if (ecx s<= 0 && *(arg4 + 0x10) s<= 0)
    arg1[3] = arg2
    arg1[1] = 0
    arg1[2] = 0
    arg1[4] = arg3
    return arg1

int32_t ebx = *(arg4 + 4)
int32_t esi = *(arg4 + 0x10)
int32_t edi = *(arg4 + 8)

if (ebx s< 0)
    ebx = 0

if (ecx + ebx s> arg2)
    ecx = arg2 - ebx

if (edi s< 0)
    edi = 0

if (esi + edi s> arg3)
    esi = arg3 - edi

arg1[2] = edi
arg1[4] = esi
arg1[1] = ebx
arg1[3] = ecx
return arg1
