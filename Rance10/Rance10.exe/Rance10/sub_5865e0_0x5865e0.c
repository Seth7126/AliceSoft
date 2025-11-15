// 函数: sub_5865e0
// 地址: 0x5865e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct thread::CCriticalObject<struct math3d::S3D>::VTable** var_4_3 = arg1
struct thread::CCriticalObject<struct math3d::S3D>::VTable** var_4 = arg1
*arg1 = &thread::CCriticalObject<struct math3d::S3D>::`vftable'
*(arg1 + 4) = data_7fd4d8.q
arg1[3] = data_7fd4e0
struct thread::CCriticalSection::VTable** var_4_1 = &arg1[4]
arg1[4] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** eax_1 = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_4_2 = eax_1
*eax_1 = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax_1[1])
arg1[5] = eax_1
return arg1
