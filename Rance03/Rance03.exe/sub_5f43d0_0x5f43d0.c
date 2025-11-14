// 函数: sub_5f43d0
// 地址: 0x5f43d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &thread::CRefCounter::`vftable'
int32_t* ecx = arg1[2]
arg1[1] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
