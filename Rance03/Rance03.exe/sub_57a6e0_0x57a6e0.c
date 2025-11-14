// 函数: sub_57a6e0
// 地址: 0x57a6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
