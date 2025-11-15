// 函数: sub_625520
// 地址: 0x625520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = arg2
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
void* ebp_1 = edi[4] + 1

if (sub_405df0(&arg1[3], ebp_1) != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    if (arg1[5] == 0)
        sub_700660(nullptr, edi, ebp_1)
        return arg1
    
    sub_700660(arg1[4], edi, ebp_1)

return arg1
