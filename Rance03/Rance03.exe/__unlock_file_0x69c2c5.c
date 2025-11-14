// 函数: __unlock_file
// 地址: 0x69c2c5
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 u< 0x74a178 || arg1 u> 0x74a3d8)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - 0x74a178) s>> 5) + 0x10)
