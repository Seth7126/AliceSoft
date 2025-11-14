// 函数: sub_59c3b0
// 地址: 0x59c3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CSurfaceTexture::`vftable'
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax = sub_69adc6(0x1c)

if (eax == 0)
    arg1[3] = 0
    arg1[4] = 0
    return arg1

*eax = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax[1])
arg1[3] = eax
arg1[4] = 0
return arg1
