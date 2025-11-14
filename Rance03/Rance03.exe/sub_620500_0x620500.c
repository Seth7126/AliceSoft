// 函数: sub_620500
// 地址: 0x620500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &surfacefactory::CSurface::`vftable'{for `ISurface'}
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[3] = edi
__builtin_memset(&arg1[4], 0, 0x16)
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
return arg1
