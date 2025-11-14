// 函数: sub_447bb0
// 地址: 0x447bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x20000000) == 0)
    if ((arg2 & 0x10000000) == 0)
        int32_t edx_15 = arg2 & 0x8000000
        int32_t edx_16 = neg.d(edx_15)
        *arg1 = (sbb.d(edx_16, edx_16, edx_15 != 0) & 0xc) + 0x1c
        return 5
    
    int32_t edx_10 = arg2 & 0x8000000
    int32_t edx_11 = neg.d(edx_10)
    *arg1 = (sbb.d(edx_11, edx_11, edx_10 != 0) & 4) + 0x2c
    return 5

if ((arg2 & 0x10000000) == 0)
    int32_t edx_5 = arg2 & 0x8000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = (sbb.d(edx_6, edx_6, edx_5 != 0) & 4) + 0x34
    return 5

int32_t edx = arg2 & 0x8000000
int32_t edx_1 = neg.d(edx)
*arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 0x3d
return 5
