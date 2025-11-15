// 函数: sub_405dd0
// 地址: 0x405dd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL lpMem = arg1[1]
*arg1 = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_7fcbf4, HEAP_NONE, lpMem)
