// 函数: sub_4481b0
// 地址: 0x4481b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x1000000) == 0)
    if ((arg2 & 0x800000) == 0)
        void* edx_15 = arg2 & &__dos_header
        int32_t edx_16 = neg.d(edx_15)
        *arg1 = neg.d(sbb.d(edx_16, edx_16, edx_15 != 0)) + 0xf
        return 0xa
    
    void* edx_10 = arg2 & &__dos_header
    int32_t edx_11 = neg.d(edx_10)
    *arg1 = neg.d(sbb.d(edx_11, edx_11, edx_10 != 0)) + 0x11
    return 0xa

if ((arg2 & 0x800000) == 0)
    void* edx_5 = arg2 & &__dos_header
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = neg.d(sbb.d(edx_6, edx_6, edx_5 != 0)) + 0x13
    return 0xa

void* edx = arg2 & &__dos_header
int32_t edx_1 = neg.d(edx)
*arg1 = neg.d(sbb.d(edx_1, edx_1, edx != 0)) + 0x15
return 0xa
