// 函数: sub_628a20
// 地址: 0x628a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[8] = &sys43vm::CGlobalPage::`vftable'{for `IVMGlobal'}
*arg1 = &sys43vm::CPage::`vftable'
int32_t lpMem = arg1[4]
arg1[3] = &memory::CFastMemory::`vftable'

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

int32_t eax = arg1[2]

if (eax != 0)
    int32_t var_8_2 = 4
    operator new(eax)

if ((arg2 & 1) != 0)
    int32_t var_8_3 = 0x2c
    operator new(arg1)

return arg1
