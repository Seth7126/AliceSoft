// 函数: sub_62aad0
// 地址: 0x62aad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &sys43vm::CWriteFile::`vftable'
BOOL lpMem = arg1[2]
arg1[1] = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_7fcbf4, HEAP_NONE, lpMem)
