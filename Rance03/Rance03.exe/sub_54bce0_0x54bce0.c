// 函数: sub_54bce0
// 地址: 0x54bce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CMotion::`vftable'
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[3] = edi
arg1[4] = 0
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
arg1[0xb] = 0
return arg1
