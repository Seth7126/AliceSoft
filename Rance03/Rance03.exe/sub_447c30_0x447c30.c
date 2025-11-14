// 函数: sub_447c30
// 地址: 0x447c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x20000000) == 0)
    int32_t edx_10 = arg2 & 0x10000000
    int32_t edx_11 = neg.d(edx_10)
    *arg1 = (sbb.d(edx_11, edx_11, edx_10 != 0) & 0x10) + 0x10
    return 4

if ((arg2 & 0x10000000) == 0)
    int32_t edx_5 = arg2 & 0x8000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = neg.d(sbb.d(edx_6, edx_6, edx_5 != 0)) + 1
    return 5

int32_t edx = arg2 & 0x8000000
int32_t edx_1 = neg.d(edx)
*arg1 = (sbb.d(edx_1, edx_1, edx != 0) & 8) + 0xc
return 5
