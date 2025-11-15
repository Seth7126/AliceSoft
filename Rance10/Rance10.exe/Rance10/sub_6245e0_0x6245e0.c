// 函数: sub_6245e0
// 地址: 0x6245e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result

if (sub_6249e0(arg1, arg2) != 0)
    int32_t esi_1 = *(arg3 + 0x14)
    void** var_18
    sub_624e00(arg1 + 0x1c, &var_18, arg2)
    sub_405950(&var_18[0xa], esi_1)
    sub_624e00(arg1 + 0x1c, &var_18, arg2)
    void** ecx_4 = var_18
    
    if (ecx_4[0xa] != ecx_4[0xb])
        bool cond:1_1 = *(arg3 + 0xc) != 0
        var_18 = *(arg3 + 0x14)
        char* esi_2
        
        if (cond:1_1)
            esi_2 = *(arg3 + 8)
        else
            esi_2 = nullptr
        
        void** var_10
        sub_624e00(arg1 + 0x1c, &var_10, arg2)
        sub_700660(var_10[0xa], esi_2, var_18)
else if (arg4 == 0)
    result = sub_62ac10(arg3, arg2)
    
    if (result.b == 0)
        return result
else
    int32_t eax_6
    
    if (*(arg3 + 0xc) != 0)
        eax_6 = *(arg3 + 8)
    else
        eax_6 = 0
    
    result = sub_61eb40(*(arg1 + 0x24), arg2, eax_6, *(arg3 + 0x14))
    
    if (result.b == 0)
        return result

result.b = 1
return result
