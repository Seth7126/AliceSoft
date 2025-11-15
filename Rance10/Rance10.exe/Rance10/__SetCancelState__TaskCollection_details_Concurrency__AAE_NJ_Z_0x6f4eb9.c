// 函数: ?_SetCancelState@_TaskCollection@details@Concurrency@@AAE_NJ@Z
// 地址: 0x6f4eb9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1 = *(arg1 + 0x34)
int32_t result

if ((0x3fffffff & result_1) != 0)
label_6f4ee7:
    result.b = 0
else
    while (true)
        result = result_1
        
        if (result == *(arg1 + 0x34))
            *(arg1 + 0x34) = (result_1 & 0xc0000000) | arg2
        else
            result = *(arg1 + 0x34)
        
        if (result == result_1)
            result.b = 1
            break
        
        result_1 = result
        
        if ((0x3fffffff & result) != 0)
            goto label_6f4ee7

return result
