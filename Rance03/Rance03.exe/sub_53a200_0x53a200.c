// 函数: sub_53a200
// 地址: 0x53a200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CGameTexture::`vftable'
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
arg1[5] = 0
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
arg1[0xe] = arg2
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xf] = 0
return arg1
