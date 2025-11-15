// 函数: ?SaveRetiredVirtualProcessorStatistics@SchedulerBase@details@Concurrency@@QAEXPAVVirtualProcessor@23@@Z
// 地址: 0x6f8134
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg2 + 0x68)
int32_t edx_1 = eax - *(arg2 + 0x70)
*(arg2 + 0x70) = eax
*(arg1 + 0x1bc)
*(arg1 + 0x1bc) += edx_1
int32_t eax_2 = *(arg2 + 0x6c)
int32_t ecx_1 = eax_2 - *(arg2 + 0x74)
*(arg2 + 0x74) = eax_2
*(arg1 + 0x1c0)
*(arg1 + 0x1c0) += ecx_1
return arg1 + 0x1c0
