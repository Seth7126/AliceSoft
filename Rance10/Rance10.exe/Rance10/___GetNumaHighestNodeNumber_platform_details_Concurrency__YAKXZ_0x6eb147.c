// 函数: ?__GetNumaHighestNodeNumber@platform@details@Concurrency@@YAKXZ
// 地址: 0x6eb147
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t HighestNodeNumber

if (GetNumaHighestNodeNumber(&HighestNodeNumber) != 0)
    return HighestNodeNumber

enum WIN32_ERROR eax_1 = GetLastError()

if (eax_1 s> NO_ERROR)
    eax_1 = zx.d(eax_1.w) | 0x80070000

void var_18
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_18, 
    eax_1)
sub_70021b(&var_18, &data_7dd12c)
noreturn
