// 函数: sub_5756d0
// 地址: 0x5756d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg1

while (result != arg2)
    arg2 -= 0x5c
    
    if (result == arg2)
        break
    
    void var_68
    __builtin_memcpy(&var_68, result, 0x5c)
    int32_t result_1 = result
    result += 0x5c
    __builtin_memcpy(result_1, arg2, 0x5c)
    __builtin_memcpy(arg2, &var_68, 0x5c)

return result
