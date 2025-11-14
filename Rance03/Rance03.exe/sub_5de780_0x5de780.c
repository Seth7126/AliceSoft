// 函数: sub_5de780
// 地址: 0x5de780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CWriteFile::`vftable'
arg1[1] = &sys43vm::CMemoryFile::`vftable'
int32_t lpMem = arg1[3]
arg1[2] = &memory::CFastMemory::`vftable'

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
