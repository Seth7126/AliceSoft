// 函数: sub_447300
// 地址: 0x447300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & &__dos_header) == 0)
    if ((arg2 & 0x200000) == 0)
        *arg1 = ((arg2 & 0x100000) | 0x800000) u>> 0x14
        return 0xc
    
    *arg1 = ((arg2 & 0x100000) | 0xa00000) u>> 0x14
    return 0xc

if ((arg2 & 0x200000) == 0)
    int32_t edx_5 = arg2 & 0x100000
    int32_t edx_6 = neg.d(edx_5)
    *arg1 = zx.d((sbb.d(edx_6, edx_6, edx_5 != 0)).b) + 0x105
    return 0xc

int32_t edx = arg2 & 0x100000
int32_t edx_1 = neg.d(edx)
*arg1 = (sbb.d(edx_1, edx_1, edx != 0) & 0x100) + 0x303
return 0xc
