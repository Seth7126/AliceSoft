// 函数: ?DetachExternalContext@SchedulerBase@details@Concurrency@@AAEXPAVExternalContextBase@23@_N@Z
// 地址: 0x6f096e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = nullptr

if (arg3 != 0)
    esi = Concurrency::details::ContextBase::PopContextFromTls(arg2)

Concurrency::details::SchedulerBase::ReleaseExternalContext(arg1, arg2)
char result = sub_6f218b(arg1)

if (esi != 0)
    result = *(esi + 0x4c)
    
    if (result == 0)
        return Concurrency::details::InternalContextBase::RejoinScheduler(esi - 4)

return result
