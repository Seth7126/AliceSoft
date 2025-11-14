// 函数: sub_6208c0
// 地址: 0x6208c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &surfacefactory::CSurfaceFactory::`vftable'{for `ISurfaceFactory'}
int32_t* ecx = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
