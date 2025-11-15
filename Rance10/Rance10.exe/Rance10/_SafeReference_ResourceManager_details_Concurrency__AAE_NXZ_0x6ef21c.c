// 函数: ?SafeReference@ResourceManager@details@Concurrency@@AAE_NXZ
// 地址: 0x6ef21c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
int32_t result_1

do
    result_1 = *(arg1 + 4)
    
    if (result_1 == 0)
        result.b = 0
        return result
    
    result = result_1
    
    if (result == *(arg1 + 4))
        *(arg1 + 4) = result_1 + 1
    else
        result = *(arg1 + 4)
while (result != result_1)
result.b = 1
return result
