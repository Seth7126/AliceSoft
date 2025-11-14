// 函数: __unlock_file2
// 地址: 0x69c2ff
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s>= 0x14)
    return LeaveCriticalSection(arg2 + 0x20)

*(arg2 + 0xc) &= 0xffff7fff
return __unlock(arg1 + 0x10)
