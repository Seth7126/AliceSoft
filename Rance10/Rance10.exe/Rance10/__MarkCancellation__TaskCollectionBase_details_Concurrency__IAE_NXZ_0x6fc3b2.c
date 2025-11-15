// 函数: ?_MarkCancellation@_TaskCollectionBase@details@Concurrency@@IAE_NXZ
// 地址: 0x6fc3b2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1 = *(arg1 + 0x18)
int32_t result

if ((result_1.b & 3) == 0)
    do
        result = result_1
        
        if (result == *(arg1 + 0x18))
            *(arg1 + 0x18) = result_1 | 1
        else
            result = *(arg1 + 0x18)
        
        if (result == result_1)
            result.b = 1
            return result
        
        result_1 = result
    while ((result.b & 3) == 0)

result.b = 0
return result
