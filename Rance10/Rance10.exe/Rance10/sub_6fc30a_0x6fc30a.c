// 函数: sub_6fc30a
// 地址: 0x6fc30a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = TlsAlloc()
data_7fc358 = result

if (result != 0xffffffff)
    return result

enum WIN32_ERROR eax = GetLastError()

if (eax s> NO_ERROR)
    eax = zx.d(eax.w) | 0x80070000

void var_14
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, eax)
sub_70021b(&var_14, &data_7dd12c)
noreturn
