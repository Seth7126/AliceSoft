// 函数: sub_620870
// 地址: 0x620870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &surfacefactory::CSurfaceFactory::`vftable'{for `ISurfaceFactory'}
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax = sub_69adc6(0x1c)

if (eax == 0)
    arg1[3] = 0
    return arg1

*eax = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax[1])
arg1[3] = eax
return arg1
