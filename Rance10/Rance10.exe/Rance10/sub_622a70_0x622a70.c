// 函数: sub_622a70
// 地址: 0x622a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &sys43vm::CReadFile::`vftable'
BOOL lpMem = arg1[2]
arg1[1] = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_7fcbf4, HEAP_NONE, lpMem)
