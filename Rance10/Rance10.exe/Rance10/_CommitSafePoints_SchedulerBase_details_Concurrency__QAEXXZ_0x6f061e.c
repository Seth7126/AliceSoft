// 函数: ?CommitSafePoints@SchedulerBase@details@Concurrency@@QAEXXZ
// 地址: 0x6f061e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(arg1 + 0x144)
int32_t eax = Concurrency::details::SchedulerBase::UpdatePendingVersion(arg1)
int32_t result

while (true)
    result = sub_6eb703(arg1 + 0x144)
    
    if (eax == 0)
        break
    
    Concurrency::details::SchedulerBase::CommitToVersion(arg1, eax)
    std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(arg1 + 0x144)
    eax = Concurrency::details::SchedulerBase::UpdateCommitVersion(arg1, eax)

return result
