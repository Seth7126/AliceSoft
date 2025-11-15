// 函数: ?_TryAcquire@_NonReentrantLock@details@Concurrency@@QAE_NXZ
// 地址: 0x6eb737
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx_1
int32_t temp0_1

if (*arg1 == 0)
    edx_1 = 1
    temp0_1 = *arg1
    *arg1 = 1

if (*arg1 != 0 || temp0_1 != 0)
    edx_1 = 0

int32_t result
result.b = edx_1
return result
