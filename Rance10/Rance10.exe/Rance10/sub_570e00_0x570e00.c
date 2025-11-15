// 函数: sub_570e00
// 地址: 0x570e00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != arg2)
    char* ecx = *arg2
    int32_t eax_1 = arg2[1]
    
    if (ecx == eax_1)
        arg1[1] = *arg1
        return arg1
    
    char* edx_1 = *arg1
    int32_t ebp_3 = (eax_1 - ecx) s>> 6
    int32_t ebx_3 = (arg1[1] - edx_1) s>> 6
    
    if (ebp_3 u<= ebx_3)
        sub_6feca0(edx_1, ecx, eax_1 - ecx)
        arg1[1] = ((arg2[1] - *arg2) & 0xffffffc0) + *arg1
        return arg1
    
    int32_t eax_12 = (arg1[2] - edx_1) s>> 6
    char* eax_15
    
    if (ebp_3 u> eax_12)
        if (edx_1 != 0)
            sub_403160(edx_1, eax_12, 0x40)
        
        int32_t ecx_4
        eax_15, ecx_4 = sub_56e2d0(arg1, (arg2[1] - *arg2) s>> 6)
        
        if (eax_15.b != 0)
            int32_t var_14_4 = ecx_4
            int32_t* var_18_5 = arg2
            int32_t var_1c_5 = ecx_4
            arg1[1] = sub_56e470(eax_15, arg2[1], *arg2, *arg1)
    else
        void* ebx_5 = &ecx[ebx_3 << 6]
        int32_t ecx_1
        eax_15, ecx_1 = sub_6feca0(edx_1, ecx, ebx_5 - ecx)
        int32_t* var_18_3 = arg2
        int32_t var_1c_3 = ecx_1
        arg1[1] = sub_56e470(eax_15, arg2[1], ebx_5, arg1[1])

return arg1
