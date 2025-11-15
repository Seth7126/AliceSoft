// 函数: sub_600a10
// 地址: 0x600a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result

switch (*(arg2 + 0x34))
    case 0, 0xa, 0xb, 0x2f, 0x52, 0x5c
        *arg3 = 0
        result.b = 1
        return result
    case 0xc
        int32_t eax_5 = sub_621120(arg4)
        *arg3 = eax_5
        return not.d(eax_5) u>> 0x1f
    case 0xd
        int32_t var_10_1 = arg5
        int32_t eax_8 = sub_6219f0(arg4, *(arg2 + 0x38))
        *arg3 = eax_8
        return not.d(eax_8) u>> 0x1f
    case 0x12, 0x13, 0x14, 0x15, 0x33, 0x43, 0x50, 0x59, 0x5d
        *arg3 = 0xffffffff
        result.b = 1
        return result
    case 0x3f
        int32_t eax_11 = sub_621320(arg4)
        *arg3 = eax_11
        return not.d(eax_11) u>> 0x1f
    case 0x4f
        int32_t esi = *(arg2 + 0x38)
        int32_t eax = sub_5ffb90(arg2 + 0x30)
        int32_t eax_2 = sub_6211e0(arg4, sub_5ffb50(arg2 + 0x30), esi, eax)
        *arg3 = eax_2
        return not.d(eax_2) u>> 0x1f

result.b = 0
return result
