// 函数: sub_447e20
// 地址: 0x447e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x4000000) != 0)
    if ((arg2 & 0x2000000) == 0)
        int32_t edx_3 = arg2 & 0x1000000
        int32_t edx_4 = neg.d(edx_3)
        *arg1 = (sbb.d(edx_4, edx_4, edx_3 != 0) & 3) + 0x2e
        return 8
    
    *arg1 = ((arg2 & 0x1000000) | 0x32000000) u>> 0x18
    return 8

if ((arg2 & 0x2000000) == 0)
    int32_t edx_13 = arg2 & 0x1000000
    int32_t edx_14 = neg.d(edx_13)
    *arg1 = neg.d(sbb.d(edx_14, edx_14, edx_13 != 0)) + 0x29
    return 8

int32_t edx_8 = arg2 & 0x1000000
int32_t edx_9 = neg.d(edx_8)
*arg1 = (sbb.d(edx_9, edx_9, edx_8 != 0) & 2) + 0x2b
return 8
