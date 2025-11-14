// 函数: sub_5d0fb0
// 地址: 0x5d0fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CMemoryFile::`vftable'
BOOL lpMem = arg1[2]
arg1[1] = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_75dc38, HEAP_NONE, lpMem)
