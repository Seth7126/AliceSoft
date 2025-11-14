// 函数: sub_441030
// 地址: 0x441030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *arg3
*arg3 = edx + 1
*(arg1 + 4) = *(*arg2 + (edx << 2))

if (sub_440750(arg2, arg3, arg1 + 8) != 0 && sub_441240(arg2, arg3, arg1 + 0x20) != 0)
    int32_t ecx = *arg3
    *arg3 = ecx + 1
    *(arg1 + 0x2c) = *(*arg2 + (ecx << 2))
    int32_t ecx_1 = *arg3
    *arg3 = ecx_1 + 1
    *(arg1 + 0x30) = *(*arg2 + (ecx_1 << 2))
    int32_t ecx_2 = *arg3
    *arg3 = ecx_2 + 1
    *(arg1 + 0x34) = *(*arg2 + (ecx_2 << 2))
    int32_t ecx_3 = *arg3
    *arg3 = ecx_3 + 1
    *(arg1 + 0x38) = *(*arg2 + (ecx_3 << 2))
    int32_t ecx_4 = *arg3
    *arg3 = ecx_4 + 1
    *(arg1 + 0x3c) = *(*arg2 + (ecx_4 << 2))
    
    if (sub_4411e0(arg2, arg3, arg1 + 0x40) != 0)
        return sub_4411e0(arg2, arg3, arg1 + 0x4c) != 0

return 0
