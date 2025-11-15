// 函数: ?ReleaseExternalContext@SchedulerBase@details@Concurrency@@AAEXPAVExternalContextBase@23@@Z
// 地址: 0x6f2149
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (zx.d(QueryDepthSList(arg1 + 0x1f0)) s>= *(arg1 + 0x14))
    return sub_6ef6ba(arg2)

void* esi_1 = arg2
Concurrency::details::ExternalContextBase::RemoveFromUse(esi_1)
return InterlockedPushEntrySList(arg1 + 0x1f0, esi_1 + 4)
