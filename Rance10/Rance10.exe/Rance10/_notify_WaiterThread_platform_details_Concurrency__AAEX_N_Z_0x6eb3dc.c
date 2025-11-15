// 函数: ?notify@WaiterThread@platform@details@Concurrency@@AAEX_N@Z
// 地址: 0x6eb3dc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL result

if (arg2 == 0)
    result = arg1[0x140] - arg1[0x141]
else
    int32_t eax = arg1[0x142]
    arg1[0x142] += 1
    result = eax + 1

if (result != 1)
    return result

return SetEvent(*arg1)
