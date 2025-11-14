// 函数: sub_447520
// 地址: 0x447520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((arg2 & 0x100000) == 0)
    if ((arg2 & 0x80000) == 0)
        *arg1 = ((arg2 & 0x40000) | &__dos_header) u>> 0x12
        return 0xe
    
    *arg1 = ((arg2 & 0x40000) | 0x480000) u>> 0x12
    return 0xe

if ((arg2 & 0x80000) == 0)
    *arg1 = ((arg2 & 0x40000) | 0x500000) u>> 0x12
    return 0xe

*arg1 = ((arg2 & 0x40000) | 0x580000) u>> 0x12
return 0xe
