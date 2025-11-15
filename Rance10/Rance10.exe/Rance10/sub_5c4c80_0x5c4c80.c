// 函数: sub_5c4c80
// 地址: 0x5c4c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1c0) == 0)
    int32_t* var_4
    int32_t** eax_1 = sub_5c5b70(arg1 + 0x1cc, arg1 + 0x1c8, &var_4, arg1 + 0x1cc, *(arg1 + 0x1e0))
    
    if (arg1 + 0x1c0 != eax_1)
        int32_t* ecx_1 = *eax_1
        *eax_1 = nullptr
        int32_t* ebx_1 = *(arg1 + 0x1c0)
        *(arg1 + 0x1c0) = ecx_1
        
        if (ebx_1 != 0)
            sub_5c51f0(ebx_1)
            int32_t var_18_2 = 0x5dc
            operator new(ebx_1)
    
    int32_t* ebx_2 = var_4
    
    if (ebx_2 != 0)
        sub_5c51f0(ebx_2)
        int32_t var_18_3 = 0x5dc
        operator new(ebx_2)
    
    int32_t* ecx_4 = *(arg1 + 0x1c0)
    eax_1.b = *(arg1 + 0x1e4)
    var_4.b = eax_1.b
    ecx_4[0x171].b = eax_1.b
    sub_58a5a0(&ecx_4[0x8a], var_4.b)
    char result = sub_5c7510(*(arg1 + 0x1c0), arg1, arg1 + 0x1b8)
    
    if (result == 0)
        return result

return 1
