// 函数: sub_447620
// 地址: 0x447620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x80000) != 0)
    if ((arg2 & 0x40000) == 0)
        int32_t edx_3 = arg2 & 0x20000
        int32_t edx_4 = neg.d(edx_3)
        *arg1 = (sbb.d(edx_4, edx_4, edx_3 != 0) & 0x4ff) + 0x603
        return 0xf
    
    *arg1 = ((arg2 & 0x20000) | 0x180400) u>> 9
    return 0xf

if ((arg2 & 0x40000) == 0)
    int32_t edx_13 = arg2 & 0x20000
    int32_t edx_14 = neg.d(edx_13)
    *arg1 = neg.d(sbb.d(edx_14, edx_14, edx_13 != 0)) + 0x10f
    return 0xf

int32_t edx_8 = arg2 & 0x20000
int32_t edx_9 = neg.d(edx_8)
*arg1 = neg.d(sbb.d(edx_9, edx_9, edx_8 != 0)) + 0x111
return 0xf
