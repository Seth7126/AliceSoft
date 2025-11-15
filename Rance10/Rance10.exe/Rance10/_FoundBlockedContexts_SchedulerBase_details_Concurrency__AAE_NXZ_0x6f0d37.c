// 函数: ?FoundBlockedContexts@SchedulerBase@details@Concurrency@@AAE_NXZ
// 地址: 0x6f0d37
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** i = *(arg1 + 0xb4)
char edx = 0

for (; i != 0; i = *i)
    if (*(i[1] + 0xec) == 0 && *(i[1] + 0x2c) != 0)
        edx = 1
        break

void* result
result.b = edx
return result
