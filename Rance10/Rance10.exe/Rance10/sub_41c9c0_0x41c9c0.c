// 函数: sub_41c9c0
// 地址: 0x41c9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg1
void* result = i

while (true)
    void* ecx_1 = data_7fcb6c
    void* ebx_1
    
    if (*(ecx_1 + 0x934) != 0)
        ebx_1 = (*(*(ecx_1 + 0x924) + 4))(i)
    else
        ebx_1 = 0xffffffff
    
    int32_t eax_11 = arg2[1]
    int32_t* ecx_3 = *arg2
    
    if (ecx_3 != eax_11)
        while (*ecx_3 != i)
            ecx_3 = &ecx_3[1]
            
            if (ecx_3 == eax_11)
                break
        
        if (ecx_3 != eax_11)
            arg1 = nullptr
            
            if (&arg1 u>= eax_11)
                goto label_41cb31
            
            int32_t ecx_13 = *arg2
            
            if (ecx_13 u> &arg1)
                goto label_41cb31
            
            if (eax_11 == arg2[2])
                sub_404610(arg2, 1)
            
            int32_t* ecx_15 = arg2[1]
            
            if (ecx_15 == 0)
                arg2[1] += 4
                return result
            
            *ecx_15 = *(*arg2 + ((&arg1 - ecx_13) s>> 2 << 2))
            arg2[1] += 4
            return result
    
    if (i == 0)
        if (ebx_1 != 0xffffffff)
            goto label_41ca93
        
    label_41ca47:
        int32_t ecx_5
        
        if (&arg1 u< eax_11)
            ecx_5 = *arg2
        
        if (&arg1 u>= eax_11 || ecx_5 u> &arg1)
            if (eax_11 == arg2[2])
                sub_404610(arg2, 1)
            
            void** eax_5 = arg2[1]
            
            if (eax_5 != 0)
                *eax_5 = i
        else
            if (eax_11 == arg2[2])
                sub_404610(arg2, 1)
            
            int32_t* ecx_7 = arg2[1]
            
            if (ecx_7 != 0)
                *ecx_7 = *(*arg2 + ((&arg1 - ecx_5) s>> 2 << 2))
        
        arg2[1] += 4
    label_41ca93:
        eax_11 = arg2[1]
        arg1 = nullptr
        
        if (&arg1 u>= eax_11)
        label_41cb31:
            
            if (eax_11 == arg2[2])
                sub_404610(arg2, 1)
            
            int32_t* eax_12 = arg2[1]
            
            if (eax_12 != 0)
                *eax_12 = 0
            
            arg2[1] += 4
            return result
        
        int32_t ecx_9 = *arg2
        
        if (ecx_9 u> &arg1)
            goto label_41cb31
        
        if (eax_11 == arg2[2])
            sub_404610(arg2, 1)
        
        int32_t* eax_6 = arg2[1]
        
        if (eax_6 == 0)
            arg2[1] += 4
            return result
        
        *eax_6 = *(*arg2 + ((&arg1 - ecx_9) s>> 2 << 2))
        arg2[1] += 4
        return result
    
    if (ebx_1 == 0xffffffff)
        goto label_41ca47
    
    sub_404370(arg2, &arg1)
    i = ebx_1
    arg1 = i
    
    if (result s> 5 && ebx_1 s<= 5)
        result = ebx_1
