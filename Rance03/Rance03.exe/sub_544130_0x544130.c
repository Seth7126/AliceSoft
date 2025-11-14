// 函数: sub_544130
// 地址: 0x544130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &thread::CCriticalObject<struct sealengine::S3D>::`vftable'
*(arg1 + 4) = *arg2
arg1[3] = arg2[1].d
arg1[4] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_1 = sub_69adc6(0x1c)

if (eax_1 == 0)
    arg1[5] = 0
    return arg1

*eax_1 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_1[1])
arg1[5] = eax_1
return arg1
