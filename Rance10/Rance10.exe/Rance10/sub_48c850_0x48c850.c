// 函数: sub_48c850
// 地址: 0x48c850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
char* eax = arg3
int32_t edx = *arg1

if (arg4 != 0)
    int32_t esi_1 = arg1[2]
    char* ebx_1 = arg1[1]
    
    if ((esi_1 - ebx_1) s>> 2 u< arg4)
        int32_t ebx_3 = (ebx_1 - edx) s>> 2
        
        if (0x3fffffff - ebx_3 u< arg4)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t ebx_4 = ebx_3 + arg4
        int32_t esi_3 = (esi_1 - edx) s>> 2
        uint32_t eax_3 = esi_3 u>> 1
        int32_t ecx_4 = 0
        
        if (0x3fffffff - eax_3 u>= esi_3)
            ecx_4 = eax_3 + esi_3
        
        if (ecx_4 u>= ebx_4)
            ebx_4 = ecx_4
        
        char* eax_5
        int32_t ecx_5
        eax_5, ecx_5 = sub_4046d0(ebx_4)
        void* var_18_2 = arg3
        int32_t esi_6 = (arg3 - *arg1) s>> 2
        int32_t var_1c_1 = ecx_5
        sub_404760(eax_5, arg4, &eax_5[esi_6 << 2], arg5)
        char* ecx_7 = *arg1
        sub_6feca0(eax_5, ecx_7, arg3 - ecx_7)
        sub_6feca0(&eax_5[(esi_6 + arg4) << 2], arg3, arg1[1] - arg3)
        void* ecx_10 = *arg1
        int32_t edi_4 = arg4 + ((arg1[1] - ecx_10) s>> 2)
        
        if (ecx_10 != 0)
            sub_403160(ecx_10, (arg1[2] - ecx_10) s>> 2, 4)
        
        arg1[2] = &eax_5[ebx_4 << 2]
        arg1[1] = &eax_5[edi_4 << 2]
        *arg1 = eax_5
    else if ((ebx_1 - eax) s>> 2 u>= arg4)
        int32_t edi_6 = arg4 << 2
        char* esi_9 = ebx_1 - edi_6
        arg5 = *arg5
        sub_6feca0(ebx_1, esi_9, edi_6)
        arg1[1] = &ebx_1[edi_6]
        void* esi_10 = esi_9 - arg3
        sub_6feca0(ebx_1 - esi_10, arg3, esi_10)
        sub_404730(&arg5, edi_6 + arg3, arg3, &arg5)
    else
        int32_t esi_7 = arg4 << 2
        arg5 = *arg5
        sub_6feca0(&eax[esi_7], eax, ebx_1 - eax)
        int32_t* ecx_16 = arg1[1]
        void* var_18_4 = arg3
        int32_t* var_1c_4 = ecx_16
        int32_t eax_22 = (ecx_16 - arg3) s>> 2
        sub_404760(eax_22, arg4 - eax_22, ecx_16, &arg5)
        arg1[1] += esi_7
        sub_404730(&arg5, arg1[1] - esi_7, arg3, &arg5)

*arg2 = *arg1 + ((eax - edx) s>> 2 << 2)
return arg2
