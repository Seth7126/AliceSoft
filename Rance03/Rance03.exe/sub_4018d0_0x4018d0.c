// 函数: sub_4018d0
// 地址: 0x4018d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct thread::CCriticalSection::CImpl::VTable** esi = sub_69adc6(0x1c)

if (esi == 0)
    esi = nullptr
else
    *esi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&esi[1])

data_74f990 = esi
return _atexit(sub_6d2e00)
