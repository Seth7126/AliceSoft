// 函数: ?Release@SchedulerBase@details@Concurrency@@UAEIXZ
// 地址: 0x6f2131
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg1[0x60]
arg1[0x60] -= 1

if (esi == 1)
    Concurrency::details::SchedulerBase::PhaseOneShutdown(arg1)

return esi - 1
