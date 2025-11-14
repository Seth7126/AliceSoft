// 函数: sub_4480e0
// 地址: 0x4480e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x1000000) != 0)
    *arg1 = 0xffffffff
    return 8

if ((arg2 & 0x800000) == 0)
    void* edx_5 = arg2 & &__dos_header
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = neg.d(sbb.d(edx_6, edx_6, edx_5 != 0)) + 0x1f
    return 0xa

void* edx = arg2 & &__dos_header
int32_t edx_1 = neg.d(edx)
*arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 0x21
return 0xa
