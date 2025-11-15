// 函数: ?__CreateAutoResetEvent@platform@details@Concurrency@@YAPAX_N@Z
// 地址: 0x6eaf22
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = zx.d(arg1)
int32_t eax_1 = neg.d(eax)
HANDLE result = ___crtCreateEventExW(nullptr, nullptr, sbb.d(eax_1, eax_1, eax != 0) & 2, 0x1f0002)

if (result != 0)
    return result

enum WIN32_ERROR eax_4 = GetLastError()

if (eax_4 s> NO_ERROR)
    eax_4 = zx.d(eax_4.w) | 0x80070000

void var_14
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, 
    eax_4)
sub_70021b(&var_14, &data_7dd12c)
noreturn
