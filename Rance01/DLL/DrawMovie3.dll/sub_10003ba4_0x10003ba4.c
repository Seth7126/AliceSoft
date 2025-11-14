// 函数: sub_10003ba4
// 地址: 0x10003ba4
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

*(arg6 + (arg3 << 2) + 0x1c) = *(arg5 + (arg3 << 2) + 0x1c)
*(arg6 + (arg3 << 2) + 0x18) = *(arg5 + (arg3 << 2) + 0x18)
*(arg6 + (arg3 << 2) + 0x14) = *(arg5 + (arg3 << 2) + 0x14)
*(arg6 + (arg3 << 2) + 0x10) = *(arg5 + (arg3 << 2) + 0x10)
*(arg6 + (arg3 << 2) + 0xc) = *(arg5 + (arg3 << 2) + 0xc)
*(arg6 + (arg3 << 2) + 8) = *(arg5 + (arg3 << 2) + 8)
*(arg6 + (arg3 << 2) + 4) = *(arg5 + (arg3 << 2) + 4)
int32_t eax_6 = arg3 << 2
void* esi = arg5 + eax_6
void* edi = arg6 + eax_6

switch (arg2)
    case 0
        *arg4
        return *(arg4 + 8)
    case 1
        eax_6.b = *(esi + 3)
        *(edi + 3) = eax_6.b
        *arg4
        return *(arg4 + 8)
    case 2
        eax_6.b = *(esi + 3)
        *(edi + 3) = eax_6.b
        eax_6.b = *(esi + 2)
        *(edi + 2) = eax_6.b
        *arg4
        return *(arg4 + 8)
    case 3
        eax_6.b = *(esi + 3)
        *(edi + 3) = eax_6.b
        eax_6.b = *(esi + 2)
        *(edi + 2) = eax_6.b
        eax_6.b = *(esi + 1)
        *(edi + 1) = eax_6.b
        *arg4
        return *(arg4 + 8)
