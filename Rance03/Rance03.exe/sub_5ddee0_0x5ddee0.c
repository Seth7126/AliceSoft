// 函数: sub_5ddee0
// 地址: 0x5ddee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CVMStack::`vftable'
BOOL lpMem = arg1[2]
arg1[1] = &memory::CFastIntVector::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_75dc34, HEAP_NONE, lpMem)
