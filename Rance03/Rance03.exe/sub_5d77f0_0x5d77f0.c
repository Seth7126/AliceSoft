// 函数: sub_5d77f0
// 地址: 0x5d77f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CReadFile::`vftable'
int32_t lpMem = arg1[2]
arg1[1] = &memory::CFastMemory::`vftable'

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
