// 函数: sub_57a570
// 地址: 0x57a570
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_1 = arg2 - arg3
int32_t i = ebx_1 s/ 0x6c

if (i s> 1)
    int32_t ebp_1 = arg2 - 0x6c
    
    do
        void var_6c
        __builtin_memcpy(&var_6c, ebp_1, 0x6c)
        void* var_88_1 = &var_6c
        __builtin_memcpy(ebp_1, arg3, 0x6c)
        void* eax_7 = (ebx_1 - 0x6c) s/ 0x6c
        sub_57a780(eax_7, nullptr, arg3, eax_7, var_88_1, arg4)
        ebp_1 -= 0x6c
        ebx_1 = ebp_1 - arg3 + 0x6c
        i = ebx_1 s/ 0x6c
    while (i s> 1)

return i
