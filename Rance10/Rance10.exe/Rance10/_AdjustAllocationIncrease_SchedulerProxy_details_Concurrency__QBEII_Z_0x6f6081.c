// 函数: ?AdjustAllocationIncrease@SchedulerProxy@details@Concurrency@@QBEII@Z
// 地址: 0x6f6081
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ecx = 0
int32_t eax = *(arg1 + 0x8c)
int32_t edx = *(arg1 + 0x9c)

if (eax u> edx)
    int32_t esi_1 = *(arg1 + 0x90)
    int32_t eax_1 = eax - edx
    int32_t ebx_1 = *(arg1 + 0xa4)
    int32_t ecx_2 = esi_1 * ebx_1
    int32_t edx_1 = 0
    
    if (ecx_2 u< eax_1)
        ecx = ebx_1 + divu.dp.d(edx_1:(eax_1 - ecx_2), esi_1 - 1)
    else
        ecx = divu.dp.d(edx_1:eax_1, esi_1)

int32_t esi_3 = *(arg1 + 0xa0) + ecx

if (esi_3 u>= Concurrency::details::SchedulerProxy::DesiredHWThreads(arg1))
    esi_3 = Concurrency::details::SchedulerProxy::DesiredHWThreads(arg1)

if (esi_3 u< arg2)
    return esi_3

return arg2
