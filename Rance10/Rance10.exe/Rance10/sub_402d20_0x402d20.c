// 函数: sub_402d20
// 地址: 0x402d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_1 = ecx
struct thread::CCriticalSection::CImpl::VTable** eax = sub_6e810c(0x1c)
struct thread::CCriticalSection::CImpl::VTable** var_4 = eax
*eax = &thread::CCriticalSection::CImpl::`vftable'
InitializeCriticalSection(&eax[1])
data_7e70c4 = eax
return _atexit(sub_74d450)
