// 函数: sub_405cb0
// 地址: 0x405cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL lpMem = arg1[1]
*arg1 = &memory::CFastIntVector::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_7fcbf0, HEAP_NONE, lpMem)
