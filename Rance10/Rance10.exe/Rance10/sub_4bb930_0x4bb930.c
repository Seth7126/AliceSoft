// 函数: sub_4bb930
// 地址: 0x4bb930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2

if (arg1 != edi)
    int32_t ecx = edi[1]
    int32_t ebx_1 = *edi
    
    if (ebx_1 == ecx)
        arg1[1] = *arg1
        return arg1
    
    void* ebp_1 = *arg1
    int32_t eax_6 = (ecx - ebx_1) s/ 0x64
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = muls.dp.d(0x51eb851f, arg1[1] - ebp_1)
    int32_t edx_4 = edx_3 s>> 5
    int32_t eax_10 = (edx_4 u>> 0x1f) + edx_4
    
    if (eax_6 u<= eax_10)
        if (ebx_1 != ecx)
            do
                int32_t esi_1 = ebx_1
                void* edi_1 = ebp_1
                ebx_1 += 0x64
                ebp_1 += 0x64
                __builtin_memcpy(edi_1, esi_1, 0x64)
            while (ebx_1 != ecx)
            
            edi = arg2
        
        int32_t eax_12
        int32_t edx_5
        edx_5:eax_12 = muls.dp.d(0x51eb851f, edi[1] - *edi)
        int32_t edx_6 = edx_5 s>> 5
        arg1[1] = ((edx_6 u>> 0x1f) + edx_6) * 0x64 + *arg1
        return arg1
    
    void* ecx_7 = arg1[2] - ebp_1
    int32_t eax_22 = ecx_7 s/ 0x64
    int32_t eax_24
    
    if (eax_6 u> eax_22)
        if (ebp_1 != 0)
            sub_403160(ebp_1, eax_22, 0x64)
        
        int32_t eax_25
        int32_t edx_9
        edx_9:eax_25 = muls.dp.d(0x51eb851f, edi[1] - *edi)
        *arg1 = 0
        int32_t edx_10 = edx_9 s>> 5
        arg1[1] = 0
        uint32_t ebx_3 = edx_10 u>> 0x1f
        arg1[2] = 0
        int32_t ebx_4 = ebx_3 + edx_10
        
        if (ebx_3 != neg.d(edx_10))
            if (ebx_4 u> 0x28f5c28)
                sub_6d0927("vector<T> too long")
                noreturn
            
            void* eax_26
            int32_t ecx_11
            eax_26, ecx_11 = sub_4bb5c0(ebx_4)
            *arg1 = eax_26
            arg1[1] = eax_26
            int32_t var_24_3 = ecx_11
            int32_t var_28_3 = 0
            int32_t var_2c_3 = ecx_11
            eax_24 = ebx_4 * 0x64 + *arg1
            arg1[2] = eax_24
            arg1[1] = sub_4bb640(eax_24, edi[1], *edi, *arg1)
    else
        eax_24 = eax_10 * 0x64 + ebx_1
        
        if (ebx_1 != eax_24)
            do
                int32_t esi_2 = ebx_1
                void* edi_2 = ebp_1
                ebx_1 += 0x64
                ebp_1 += 0x64
                ecx_7 = __builtin_memcpy(edi_2, esi_2, 0x64)
            while (ebx_1 != eax_24)
            
            edi = arg2
        
        void* var_24_1 = ecx_7
        int32_t var_28_1 = 0
        void* var_2c_1 = ecx_7
        arg1[1] = sub_4bb640(eax_24, edi[1], eax_24, arg1[1])

return arg1
