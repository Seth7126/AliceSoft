// 函数: sub_64ae90
// 地址: 0x64ae90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL lpMem = arg1[1]
*arg1 = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_75dc38, HEAP_NONE, lpMem)
