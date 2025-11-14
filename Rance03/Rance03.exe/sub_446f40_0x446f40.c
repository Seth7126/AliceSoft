// 函数: sub_446f40
// 地址: 0x446f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x20000000) == 0)
    *arg1 = 4
    return 3

if ((arg2 & 0x10000000) == 0)
    *arg1 = 5
    return 4

if ((arg2 & 0x8000000) == 0)
    *arg1 = 6
    return 5

int32_t edx = arg2 & 0x4000000
int32_t edx_1 = neg.d(edx)
*arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 7
return 6
