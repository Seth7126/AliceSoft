// 函数: sub_447060
// 地址: 0x447060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x8000000) == 0)
    int32_t edx_5 = arg2 & 0x4000000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = (sbb.d(edx_6, edx_6, edx_5 != 0) & 0x100) + 0x501
    return 6

if ((arg2 & 0x4000000) == 0)
    *arg1 = 0x701
    return 6

int32_t edx = arg2 & 0x2000000
int32_t edx_1 = neg.d(edx)
*arg1 = (sbb.d(edx_1, edx_1, edx != 0) & 0x1fe) + 4
return 7
