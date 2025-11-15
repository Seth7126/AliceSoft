// 函数: ?NotifyAffinitizedWork@CacheLocalScheduleGroupSegment@details@Concurrency@@UAEXXZ
// 地址: 0x6fbb92
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(*(arg1 + 0x100) + 4)
Concurrency::details::SchedulerBase::PostAffinityMessage(edi, arg1 + 0x1c)
int32_t result = *(arg1 + 0xc) & 0xfffffff

if (result != 3)
    return result

return Concurrency::details::SchedulerBase::SetQuickCacheSlot(edi, *(arg1 + 0x24), arg1)
