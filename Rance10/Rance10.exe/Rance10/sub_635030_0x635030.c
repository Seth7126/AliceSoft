// 函数: sub_635030
// 地址: 0x635030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != arg2)
    char* ecx = *arg2
    int32_t eax_1 = arg2[1]
    
    if (ecx == eax_1)
        arg1[1] = *arg1
        return arg1
    
    char* edx_1 = *arg1
    int32_t esi_3 = (eax_1 - ecx) s>> 3
    int32_t ebp_3 = (arg1[1] - edx_1) s>> 3
    
    if (esi_3 u<= ebp_3)
        sub_6feca0(edx_1, ecx, eax_1 - ecx)
        arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 3 << 3)
        return arg1
    
    int32_t eax_10 = (arg1[2] - edx_1) s>> 3
    char* eax_13
    
    if (esi_3 u> eax_10)
        if (edx_1 != 0)
            sub_403160(edx_1, eax_10, 8)
        
        int32_t ecx_7
        eax_13, ecx_7 = sub_60edb0(arg1, (arg2[1] - *arg2) s>> 3)
        
        if (eax_13.b != 0)
            int32_t var_14_4 = ecx_7
            int32_t* var_18_5 = arg2
            int32_t var_1c_5 = ecx_7
            arg1[1] = sub_423080(eax_13, arg2[1], *arg2, *arg1)
    else
        void* esi_4 = &ecx[ebp_3 << 3]
        int32_t ecx_4
        eax_13, ecx_4 = sub_6feca0(edx_1, ecx, esi_4 - ecx)
        int32_t* var_18_3 = arg2
        int32_t var_1c_3 = ecx_4
        arg1[1] = sub_423080(eax_13, arg2[1], esi_4, arg1[1])

return arg1
