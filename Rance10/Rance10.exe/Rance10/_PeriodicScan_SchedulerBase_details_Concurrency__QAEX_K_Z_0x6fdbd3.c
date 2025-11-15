// 函数: ?PeriodicScan@SchedulerBase@details@Concurrency@@QAEX_K@Z
// 地址: 0x6fdbd3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax = *(arg1 + 0x1a0)
void* result = sbb.d(arg3, *(arg1 + 0x1a4), arg2 u< eax)
void* result_1 = result

if (result == 0 && arg2 - eax u<= 0x7d0)
    return result

return Concurrency::details::SchedulerBase::PerformServiceScan(arg1, arg2, arg3)
