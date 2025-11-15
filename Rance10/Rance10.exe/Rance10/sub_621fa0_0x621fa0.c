// 函数: sub_621fa0
// 地址: 0x621fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u< *(arg1 + 0x14))
    void var_18
    void var_c
    int32_t* eax_1 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
    int32_t* esi_1 = *eax_1
    
    if (esi_1 != 0)
        esi_1 = *esi_1
    
    int32_t edx_1 = eax_1[2]
    void* ecx_5 = *(*(esi_1[1] + ((edx_1 u>> 2 & (esi_1[2] - 1)) << 2)) + ((edx_1 & 3) << 2))
    
    if (ecx_5 != 0)
        switch (*(ecx_5 + 4))
            case 0
                return sub_628f50(ecx_5)
            case 1
                void* result = *(ecx_5 + 0x24)
                
                if (result == 0)
                    return result
                
                return (*(result + 0x64) - *(result + 0x60)) s/ 0x70
            case 3
                return (*(*(ecx_5 + 0x20) + 8))()
            case 4
                return sub_629cd0(ecx_5)

return 0xffffffff
