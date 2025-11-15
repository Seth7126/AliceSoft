// 函数: ?Resurrect@SchedulerBase@details@Concurrency@@AAEXXZ
// 地址: 0x6f26e4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = Concurrency::details::SpinUntilBitsSet(arg1 + 0x194, 0x80000000)
int32_t result_2 = result

if (result == *(arg1 + 0x194))
    *(arg1 + 0x194) = result_2 & 0x7fffffff
else
    result = *(arg1 + 0x194)

if (result != result_2)
    int32_t result_1
    
    do
        result_1 = result
        
        if (result == *(arg1 + 0x194))
            *(arg1 + 0x194) = result & 0x7fffffff
        else
            result = *(arg1 + 0x194)
    while (result != result_1)

*(arg1 + 0x188) += 1
return result
