// 函数: sub_629bc0
// 地址: 0x629bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x2c)
void* result = *(arg1 + 0x30)

if (result != edx)
    while (*(result - 4) != arg2)
        result -= 4
        
        if (result == edx)
            break
    
    if (result != edx)
        result = sub_6feca0(result - 4, result, *(arg1 + 0x30) - result)
        *(arg1 + 0x30) -= 4

return result
