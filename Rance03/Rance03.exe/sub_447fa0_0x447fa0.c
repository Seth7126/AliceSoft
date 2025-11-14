// 函数: sub_447fa0
// 地址: 0x447fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x4000000) == 0)
    int32_t edx_10 = arg2 & 0x2000000
    int32_t edx_11 = neg.d(edx_10)
    *arg1 = neg.d(sbb.d(edx_11, edx_11, edx_10 != 0)) + 7
    return 7

if ((arg2 & 0x2000000) == 0)
    int32_t edx_5 = arg2 & 0x1000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = neg.d(sbb.d(edx_6, edx_6, edx_5 != 0)) + 9
    return 8

int32_t edx = arg2 & 0x1000000
int32_t edx_1 = neg.d(edx)
*arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 0xb
return 8
