// 函数: sub_64ae50
// 地址: 0x64ae50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t lpMem = arg1[1]
*arg1 = &memory::CFastMemory::`vftable'

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
