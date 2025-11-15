// 函数: ?_TryAcquireWrite@_ReaderWriterLock@details@Concurrency@@QAE_NXZ
// 地址: 0x6eac10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if (0 == *arg1)
    *arg1 = 0xffffffff
else
    result = *arg1

if (result != 0)
    result.b = 0
    return result

arg1[1] += 1
result.b = 1
return result
