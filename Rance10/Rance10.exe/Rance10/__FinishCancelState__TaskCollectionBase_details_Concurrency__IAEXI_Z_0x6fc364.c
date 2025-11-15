// 函数: ?_FinishCancelState@_TaskCollectionBase@details@Concurrency@@IAEXI@Z
// 地址: 0x6fc364
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_2 = *(arg1 + 0x18)
int32_t result_1 = result_2
int32_t result = result_2

while (true)
    if (result == *(arg1 + 0x18))
        *(arg1 + 0x18) = (result_1 & 0xfffffffc) | arg2
    else
        result = *(arg1 + 0x18)
    
    if (result == result_2)
        break
    
    result_2 = result
    result_1 = result

return result
