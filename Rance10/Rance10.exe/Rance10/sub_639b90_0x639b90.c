// 函数: sub_639b90
// 地址: 0x639b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int16_t* i = arg2; i != arg3; i = &i[1])
    int16_t ebx_1 = *i
    int32_t eax_2 = arg1[1]
    
    if (*arg1 u<= eax_2)
        int32_t var_10_1 = (eax_2 + 0x10) * 2
        int32_t var_14_1 = arg1[2]
        int32_t eax_4 = _realloc()
        
        if (eax_4 == 0)
            sub_6d08ed()
            noreturn
        
        arg1[2] = eax_4
        *arg1 = eax_2 + 0x10
    
    *(arg1[2] + (arg1[1] << 1)) = ebx_1
    arg1[1] += 1
