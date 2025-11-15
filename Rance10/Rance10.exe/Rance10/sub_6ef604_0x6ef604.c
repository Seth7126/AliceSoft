// 函数: sub_6ef604
// 地址: 0x6ef604
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (*(arg3 + 0x30) == 0)
    *(arg3 + 0x30) = 1
    arg6[5] += 1
    *(arg2 + 0x28) += 1
    
    if (*(arg3 + 0x31) != 0)
        arg6[6] += 1
        *(arg2 + 0x2c) += 1
    
    result = arg5
    result[7] += 1
else
    result = arg6
    *(arg3 + 0x30) = 0
    result[5] -= 1
    *(arg2 + 0x28) -= 1
    
    if (*(arg3 + 0x31) != 0)
        result[6] -= 1
        *(arg2 + 0x2c) -= 1
    
    if (*arg5 == 6)
        result = arg4
        *arg5 = 0
        result[7] -= 1
        *(arg1 + 0x20) -= 1
    
    arg5[7] -= 1

return result
