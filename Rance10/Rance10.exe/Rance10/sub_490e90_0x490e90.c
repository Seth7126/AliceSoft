// 函数: sub_490e90
// 地址: 0x490e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_2 = arg1
int32_t esi = *arg1
int32_t ebp_2 = (arg3 - esi) s>> 2

if (arg4 != 0)
    int32_t* edx_1 = arg1[1]
    
    if ((arg1[2] - edx_1) s>> 2 u< arg4)
        int32_t edx_3 = (edx_1 - esi) s>> 2
        
        if (0x3fffffff - edx_3 u< arg4)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_6 = (arg1[2] - esi) s>> 2
        uint32_t eax_7 = edx_6 u>> 1
        int32_t ecx_2 = 0
        
        if (0x3fffffff - eax_7 u>= edx_6)
            ecx_2 = eax_7 + edx_6
        
        int32_t eax_9 = edx_3 + arg4
        
        if (ecx_2 u>= eax_9)
            eax_9 = ecx_2
        
        int32_t* eax_10
        int32_t ecx_3
        eax_10, ecx_3 = sub_4046d0(eax_9)
        void* var_18_2 = arg3
        int32_t esi_3 = (arg3 - *arg1) s>> 2
        int32_t var_1c_1 = ecx_3
        int32_t eax_11
        int32_t ecx_5
        eax_11, ecx_5 = sub_404760(eax_10, arg4, &eax_10[esi_3], arg5)
        void* var_1c_2 = arg3
        int32_t var_20_2 = ecx_5
        void* var_1c_3 = arg3
        void* eax_13 = &eax_10[esi_3 + arg4]
        int32_t var_20_3 = sub_491470(eax_11, arg3, *arg1, eax_10)
        sub_491470(eax_13, arg1[1], arg3, eax_13)
        void* ecx_9 = *arg1
        int32_t edi_1 = arg4 + ((arg1[1] - ecx_9) s>> 2)
        
        if (ecx_9 != 0)
            sub_403160(ecx_9, (arg1[2] - ecx_9) s>> 2, 4)
        
        arg1[2] = &eax_10[eax_9]
        arg1[1] = &eax_10[edi_1]
        *arg1 = eax_10
        *arg2 = &eax_10[ebp_2]
        return arg2
    
    void* var_18_3 = arg3
    void* var_1c_5 = arg3
    int32_t* eax_29 = *arg5
    void* var_20_5 = arg3
    arg5 = eax_29
    
    if ((edx_1 - arg3) s>> 2 u< arg4)
        int32_t esi_5 = arg4 << 2
        int32_t* eax_30 = esi_5 + arg3
        sub_491470(eax_30, edx_1, arg3, eax_30)
        int32_t* ecx_12 = arg1[1]
        void* var_18_4 = arg3
        int32_t* var_1c_6 = ecx_12
        int32_t eax_33 = (ecx_12 - arg3) s>> 2
        sub_404760(eax_33, arg4 - eax_33, ecx_12, &arg5)
        arg1[1] += esi_5
        sub_404730(&arg5, arg1[1] - esi_5, arg3, &arg5)
        *arg2 = *arg1 + (ebp_2 << 2)
        return arg2
    
    int32_t edi_3 = arg4 << 2
    void* esi_7 = edx_1 - edi_3
    arg1[1] = sub_491470(eax_29, edx_1, esi_7, edx_1)
    void* esi_8 = esi_7 - arg3
    sub_6feca0(edx_1 - esi_8, arg3, esi_8)
    sub_404730(&arg5, edi_3 + arg3, arg3, &arg5)

*arg2 = *arg1 + (ebp_2 << 2)
return arg2
