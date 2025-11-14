// 函数: sub_447ce0
// 地址: 0x447ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x8000000) == 0)
    if ((arg2 & 0x4000000) == 0)
        *arg1 = 4
        return 6
    
    int32_t edx_3 = arg2 & 0x2000000
    int32_t edx_4 = neg.d(edx_3)
    *arg1 = neg.d(sbb.d(edx_4, edx_4, edx_3 != 0)) + 5
    return 7

if ((arg2 & 0x4000000) == 0)
    if ((arg2 & 0x2000000) == 0)
        *arg1 = 7
        return 7
    
    *arg1 = ((arg2 & 0x1000000) | 0x8000000) u>> 0x18
    return 8

if ((arg2 & 0x2000000) == 0)
    if ((arg2 & 0x1000000) == 0)
        *arg1 = 0xa
        return 8
    
    int32_t edx_18 = arg2 & 0x800000
    int32_t edx_19 = neg.d(edx_18)
    *arg1 = neg.d(sbb.d(edx_19, edx_19, edx_18 != 0)) + 0xb
    return 9

if ((arg2 & 0x1000000) == 0)
    int32_t edx_13 = arg2 & 0x800000
    int32_t edx_14 = neg.d(edx_13)
    *arg1 = neg.d(sbb.d(edx_14, edx_14, edx_13 != 0)) + 0xd
    return 9

int32_t edx_8 = arg2 & 0x800000
int32_t edx_9 = neg.d(edx_8)
*arg1 = neg.d(sbb.d(edx_9, edx_9, edx_8 != 0)) + 0xf
return 9
