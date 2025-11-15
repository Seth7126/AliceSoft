// 函数: ?GetReservedContext@SchedulerBase@details@Concurrency@@QAEPAVInternalContextBase@23@XZ
// 地址: 0x6f12be
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SLIST_ENTRY* eax = InterlockedPopEntrySList(arg1 + 0x200)
int32_t eax_1 = neg.d(eax)
return sbb.d(eax_1, eax_1, eax != 0) & &eax[-2]
