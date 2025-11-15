// 函数: sub_5b61f0
// 地址: 0x5b61f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_78

if (not(*(arg3 + 0x68) f<= *(arg2 + 0x68)))
    __builtin_memcpy(&var_78, arg2, 0x6c)
    __builtin_memcpy(arg2, arg3, 0x6c)
    __builtin_memcpy(arg3, &var_78, 0x6c)

if (not(*(arg2 + 0x68) f<= *(arg4 + 0x68)))
    __builtin_memcpy(&var_78, arg4, 0x6c)
    __builtin_memcpy(arg4, arg2, 0x6c)
    __builtin_memcpy(arg2, &var_78, 0x6c)
    
    if (not(*(arg3 + 0x68) f<= *(arg2 + 0x68)))
        __builtin_memcpy(arg2, arg3, 0x6c)
        __builtin_memcpy(arg3, &var_78, 0x6c)

return arg3
