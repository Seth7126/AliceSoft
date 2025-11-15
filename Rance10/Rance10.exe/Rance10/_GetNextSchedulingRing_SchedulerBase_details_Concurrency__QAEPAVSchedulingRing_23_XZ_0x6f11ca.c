// 函数: ?GetNextSchedulingRing@SchedulerBase@details@Concurrency@@QAEPAVSchedulingRing@23@XZ
// 地址: 0x6f11ca
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x178)
int32_t result = *(*(arg1 + 0x24) + (edx << 2))
*(arg1 + 0x178) = Concurrency::details::SchedulerBase::GetNextValidSchedulingRingIndex(arg1, edx)
return result
