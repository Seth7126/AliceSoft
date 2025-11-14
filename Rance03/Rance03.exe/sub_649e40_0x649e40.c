// 函数: sub_649e40
// 地址: 0x649e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &encodecg::CApp::`vftable'{for `IEncodeCG'}
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
