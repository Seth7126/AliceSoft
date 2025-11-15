// 函数: ?GetCurrentSubAllocator@ExternalContextBase@details@Concurrency@@QAEPAVSubAllocator@23@XZ
// 地址: 0x6fbec2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xa0) == 0)
    *(arg1 + 0xa0) = Concurrency::details::SchedulerBase::GetSubAllocator(1)

return *(arg1 + 0xa0)
