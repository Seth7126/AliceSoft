// 函数: sub_629530
// 地址: 0x629530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x38) == 0)
    int32_t result
    result.b = 0
    return result

if (sub_62ab60(arg2, 4) != 0 && sub_62ab60(arg2, *(arg1 + 0x1c)) != 0
        && sub_62ab60(arg2, (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2) != 0)
    int32_t* i = *(arg1 + 0x2c)
    
    for (int32_t edi = *(arg1 + 0x30); i != edi; i = &i[1])
        if (sub_62ab60(arg2, *i) == 0)
            return 0
    
    void** ecx_4 = *(arg1 + 0x38)
    void* eax_5 = ecx_4[4]
    
    if (ecx_4[5] u>= 0x10)
        ecx_4 = *ecx_4
    
    if (sub_62ab00(arg2, ecx_4, eax_5 + 1) != 0)
        char eax_4 = sub_62ab60(arg2, *(arg1 + 0x14))
        
        if (eax_4 != 0)
            void* ecx_7 = *(arg1 + 0x14)
            
            if (ecx_7 != 0)
                eax_4 = sub_62ab00(arg2, *(arg1 + 0x10), ecx_7)
            
            if (ecx_7 == 0 || eax_4 != 0)
                return 1

return 0
