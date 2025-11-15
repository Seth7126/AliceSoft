// 函数: ?_GetTokenState@_TaskCollectionBase@details@Concurrency@@QAEPAV_CancellationTokenState@23@PAPAV_CancellationTokenRegistration@23@@Z
// 地址: 0x6fc38a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 8)
void* ecx = nullptr

if ((result.b & 1) != 0)
    ecx = result & 0xfffffffe
    
    if (ecx == 0)
        result = 2
    else
        result = *(ecx + 0x68)

if (arg2 != 0)
    *arg2 = ecx

return result
