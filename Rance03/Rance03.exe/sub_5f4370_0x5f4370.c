// 函数: sub_5f4370
// 地址: 0x5f4370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &thread::CRefCounter::`vftable'
arg1[1] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax = sub_69adc6(0x1c)

if (eax == 0)
    arg1[2] = 0
    arg1[3] = 1
    return arg1

*eax = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax[1])
arg1[2] = eax
arg1[3] = 1
return arg1
