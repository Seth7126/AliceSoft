// 函数: sub_447740
// 地址: 0x447740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x80000) == 0)
    if ((arg2 & 0x40000) == 0)
        *arg1 = ((arg2 & 0x20000) | &__dos_header) u>> 0x11
        return 0xf
    
    *arg1 = ((arg2 & 0x20000) | 0x440000) u>> 0x11
    return 0xf

if ((arg2 & 0x40000) == 0)
    *arg1 = ((arg2 & 0x20000) | 0x480000) u>> 0x11
    return 0xf

*arg1 = ((arg2 & 0x20000) | 0x4c0000) u>> 0x11
return 0xf
