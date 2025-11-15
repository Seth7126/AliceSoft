// 函数: ?__DeleteTimerQueueTimer@platform@details@Concurrency@@YAXPAX00@Z
// 地址: 0x6eafb6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL result

for (int32_t i = 0x10; i s> 0; i -= 1)
    result = DeleteTimerQueueTimer(arg1, arg2, arg3)
    
    if (result != 0)
        break
    
    result = GetLastError()
    
    if (result == 0x3e5)
        break

return result
