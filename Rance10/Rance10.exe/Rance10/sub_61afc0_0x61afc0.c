// 函数: sub_61afc0
// 地址: 0x61afc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result

switch (arg2)
    case 0
        result.b = 1
        return result
    case 0xa, 0xb, 0xc, 0xd, 0x14, 0x15, 0x2f, 0x3f, 0x43, 0x4f, 0x50, 0x5c
        goto label_61aff9
    case 0x12, 0x13, 0x33, 0x59, 0x5d
        int32_t ecx = *(arg1 + 0x1fc)
        int32_t edx_1 = *(*(arg1 + 0x1f8) + (ecx << 2) - 4)
        *(arg1 + 0x1fc) = ecx - 1
        *arg4 = edx_1
    label_61aff9:
        int32_t ecx_1 = *(arg1 + 0x1fc)
        int32_t edx_2 = *(*(arg1 + 0x1f8) + (ecx_1 << 2) - 4)
        *(arg1 + 0x1fc) = ecx_1 - 1
        *arg3 = edx_2
        result.b = 1
        return result

result.b = 0
return result
