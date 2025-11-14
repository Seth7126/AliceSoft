// 函数: sub_4033b0
// 地址: 0x4033b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &common::CIMemory::`vftable'{for `IMemory'}
int32_t eax = arg1[5]

if (eax != 0)
    j__free(eax)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

arg1[1] = &thread::CRefCounter::`vftable'
int32_t* ecx = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
