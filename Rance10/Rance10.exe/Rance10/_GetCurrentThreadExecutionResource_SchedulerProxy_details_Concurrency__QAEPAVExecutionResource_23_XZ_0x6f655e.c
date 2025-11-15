// 函数: ?GetCurrentThreadExecutionResource@SchedulerProxy@details@Concurrency@@QAEPAVExecutionResource@23@XZ
// 地址: 0x6f655e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = Concurrency::details::platform::__TlsGetValue(*(*(arg1 + 0xc) + 0x70))

if (result != 0 && (result.b & 3) == 0)
    return result

return 0
