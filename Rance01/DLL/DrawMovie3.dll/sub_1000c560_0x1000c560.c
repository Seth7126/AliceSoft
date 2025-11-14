// 函数: sub_1000c560
// 地址: 0x1000c560
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 != 0)
    int32_t var_10
    void var_8
    int32_t eax_1 = (*(*arg1 + 0x58))(arg2, &var_10, &var_8)
    
    if (eax_1 s>= 0)
        if (eax_1 == 0)
            SetEvent(arg1[0x15])
            return 1
        
        int32_t* eax_4 = arg1[6]
        int32_t var_c
        int32_t result
        result.b =
            (*(*eax_4 + 0x10))(eax_4, arg1[8], arg1[9], var_10, var_c, arg1[0x15], &arg1[0x1a])
            s>= 0
        return result

return 0
