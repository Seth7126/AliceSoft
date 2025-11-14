// 函数: sub_534e10
// 地址: 0x534e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg6

if (arg5 != 0 && esi != 0)
    int32_t var_38
    int32_t var_14
    
    if (arg5 s<= esi && arg5 s<= sub_534650(arg7))
        int32_t* ecx_1 = *(arg7 + 0x10)
        ecx_1[1] = *ecx_1
        int32_t var_34
        sub_534c90(sub_5349d0(&var_38, arg7), arg3, &var_14, arg2, var_38, var_34)
        int32_t eax_3 = var_14
        
        if (eax_3 != 0)
            j__free(eax_3)
        
        _memcpy(arg3, arg2, (arg4 - arg2) & 0xfffffffc)
        int32_t* eax_7 = *(arg7 + 0x10)
        int32_t* edx_1 = *eax_7
        void* ecx_6 = (eax_7[1] - edx_1) & 0xfffffffc
        void* result = arg4 - ecx_6
        _memcpy(result, edx_1, ecx_6)
        return result
    
    int32_t eax_9 = sub_534650(arg7)
    
    if (esi s<= eax_9)
        int32_t* ecx_8 = *(arg7 + 0x10)
        ecx_8[1] = *ecx_8
        var_38 = 0
        int32_t var_30_3 = 0
        int32_t var_2c_2 = 0
        int32_t eax_11 = *(arg7 + 0x10)
        int32_t var_28_4 = eax_11
        sub_534c90(eax_11, arg2, &var_14, arg4, var_38, 0)
        int32_t eax_12 = var_14
        
        if (eax_12 != 0)
            j__free(eax_12)
        
        int32_t eax_13 = (arg2 - arg3) s>> 2 << 2
        _memcpy(arg4 - eax_13, arg3, eax_13)
        int32_t* eax_14 = *(arg7 + 0x10)
        int32_t* ecx_10 = *eax_14
        _memcpy(arg3, ecx_10, (eax_14[1] - ecx_10) s>> 2 << 2)
        return &arg3[(eax_14[1] - ecx_10) s>> 2]
    
    if (arg3 != arg2 && arg2 != arg4)
        sub_5353d0(eax_9, arg2, arg3, arg4)
    
    esi = (arg4 - arg2) s>> 2

return &arg3[esi]
