// 函数: sub_447000
// 地址: 0x447000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x10000000) == 0)
    int32_t edx_5 = arg2 & 0x8000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = (sbb.d(edx_6, edx_6, edx_5 != 0) & 0x2fe) + 3
    return 5

if ((arg2 & 0x8000000) == 0)
    *arg1 = 0x401
    return 5

int32_t edx = arg2 & 0x4000000
int32_t edx_1 = neg.d(edx)
*arg1 = (sbb.d(edx_1, edx_1, edx != 0) & 0x104) - 2
return 6
