// 函数: sub_625410
// 地址: 0x625410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = 2
arg1[2] = 0
arg1[3] = &memory::CFastMemory::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 1
arg1[8] = &IString::`vftable'
*arg1 = &sys43vm::CStringPage::`vftable'{for `sys43vm::CPage'}
arg1[8] = &sys43vm::CStringPage::`vftable'{for `IString'}
int32_t eax = arg1[6]

if (eax u> 1)
label_625496:
    arg1[5] = 1
    
    if (arg1[5] == 0)
        *0 = 0
        return arg1
    
    arg1[4]->__offset(0x0).d = 0
else
    arg1[6] = eax + 1
    
    if (eax == 0xffffffff)
        goto label_625496
    
    int32_t lpMem = arg1[4]
    int32_t eax_2
    
    if (lpMem == 0)
        eax_2 = HeapAlloc(data_7fcbf4, HEAP_NONE, eax + 1)
    else
        eax_2 = HeapReAlloc(data_7fcbf4, HEAP_NONE, lpMem, eax + 1)
    
    arg1[4] = eax_2
    
    if (eax_2 != 0)
        goto label_625496

return arg1
