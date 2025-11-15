// 函数: ?Reset@WaitAllBlock@details@Concurrency@@UAE_NXZ
// 地址: 0x6e9973
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0x1c)
int32_t result_1 = *(arg1 + 0x20)
int32_t result

if (result_1 == esi)
    Concurrency::details::MultiWaitBlock::NotifyCompletedNode(arg1)
    result.b = 0
else
    do
        result = result_1
        
        if (result == *(arg1 + 0x20))
            *(arg1 + 0x20) = result_1 - 1
        else
            result = *(arg1 + 0x20)
        
        if (result == result_1)
            break
        
        result_1 = result
    while (result != esi)
    
    if (result_1 == esi)
        Concurrency::details::MultiWaitBlock::NotifyCompletedNode(arg1)
        result.b = 0
    else
        result.b = 1

return result
