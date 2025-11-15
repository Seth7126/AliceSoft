// 函数: sub_5ab760
// 地址: 0x5ab760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 != 0)
    if (arg2 u> 0xfffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    void* eax_1
    int32_t ecx
    eax_1, ecx = sub_4ac4a0(arg2)
    int32_t var_10_2 = arg2
    *arg1 = eax_1
    arg1[1] = eax_1
    int32_t esi_2 = arg2 << 4
    arg1[2] = *arg1 + esi_2
    int32_t var_14_1 = ecx
    sub_5ab8a0(*arg1, arg2)
    arg1[1] += esi_2

return arg1
