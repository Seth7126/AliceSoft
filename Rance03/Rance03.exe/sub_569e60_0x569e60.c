// 函数: sub_569e60
// 地址: 0x569e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sealengine::CParticleEffectView::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[3] = edi
arg1[4].b = 0
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
arg1[0xb] = 0xffffffff
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = &sealengine::CParticleBillboardDrawer::`vftable'
__builtin_memset(&arg1[0x10], 0, 0x20)
arg1[0x18] = 0x7f7fffff
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
return arg1
