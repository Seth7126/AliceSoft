// 函数: sub_6bd940
// 地址: 0x6bd940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1c = 0xb18
int32_t var_20 = 1
void* edi = nullptr
void** result = _calloc()
void* eax = *(arg1 + 0x1c)
*result = sub_6b2ec0(arg2, 0x18)
result[1] = sub_6b2ec0(arg2, 0x18)
result[2] = sub_6b2ec0(arg2, 0x18) + 1
result[3] = sub_6b2ec0(arg2, 6) + 1
void* eax_7 = sub_6b2ec0(arg2, 8)
result[5] = eax_7

if (eax_7 s>= 0)
    int32_t i_1 = 0
    
    if (result[3] s> 0)
        void* var_4_1 = &result[6]
        int32_t i
        
        do
            void* j = sub_6b2ec0(arg2, 3)
            void* eax_10 = sub_6b2ec0(arg2, 1)
            
            if (eax_10 s< 0)
                goto label_6bdad5
            
            if (eax_10 != 0)
                void* eax_11 = sub_6b2ec0(arg2, 5)
                
                if (eax_11 s< 0)
                    goto label_6bdad5
                
                j |= eax_11 << 3
            
            void* ecx_9 = nullptr
            *var_4_1 = j
            
            for (; j != 0; j u>>= 1)
                ecx_9 += j & 1
            
            i = i_1 + 1
            var_4_1 += 4
            edi += ecx_9
            i_1 = i
        while (i s< result[3])
    
    int32_t esi_1 = 0
    
    if (edi s> 0)
        void* ebx_1 = &result[0x46]
        
        do
            void* eax_16 = sub_6b2ec0(arg2, 8)
            
            if (eax_16 s< 0)
                goto label_6bdad5
            
            *ebx_1 = eax_16
            esi_1 += 1
            ebx_1 += 4
        while (esi_1 s< edi)
    
    void* eax_19 = eax
    int32_t ebx_2 = result[5]
    int32_t esi_2 = *(eax_19 + 0x18)
    
    if (ebx_2 s< esi_2)
        int32_t ecx_11 = 0
        
        if (edi s> 0)
            void* edx_3 = &result[0x46]
            
            do
                int32_t eax_17 = *edx_3
                
                if (eax_17 s>= esi_2)
                    goto label_6bdad5
                
                ebx_2 = result[5]
                
                if (*(*(eax + (eax_17 << 2) + 0x720) + 0xc) == 0)
                    goto label_6bdad5
                
                ecx_11 += 1
                edx_3 += 4
            while (ecx_11 s< edi)
            
            eax_19 = eax
        
        int32_t* eax_20 = *(eax_19 + (ebx_2 << 2) + 0x720)
        int32_t edx_4 = 1
        int32_t ecx_12 = *eax_20
        
        if (ecx_12 s>= 1)
            while (true)
                edx_4 *= result[3]
                
                if (edx_4 s> eax_20[1])
                    break
                
                ecx_12 -= 1
                
                if (ecx_12 s<= 0)
                    result[4] = edx_4
                    return result

label_6bdad5:
_memset(result, 0, 0xb18)
_free(result)
return 0
