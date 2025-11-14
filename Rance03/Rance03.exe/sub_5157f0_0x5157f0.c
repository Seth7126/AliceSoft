// 函数: sub_5157f0
// 地址: 0x5157f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg2 += 0x18
void* result = *arg2

if (result == *(arg1 + 4))
    *arg2 -= 0x18
    return result

while (*(result + 0x10) == 2)
    int32_t edx_1 = *(result + 0x14)
    char* result_2
    
    if (edx_1 u< 0x10)
        result_2 = result
    else
        result_2 = *result
    
    if (*result_2 != 0x81)
        break
    
    void* result_1
    
    if (edx_1 u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    if (*(result_1 + 1) != 0x5c)
        break
    
    result += 0x18
    *arg2 = result
    
    if (result == *(arg1 + 4))
        break

*arg2 -= 0x18
return result
