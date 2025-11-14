// 函数: sub_642f70
// 地址: 0x642f70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = nullptr
int32_t eax
int32_t ecx
int32_t edx
void** result = sub_69cb1c(eax, edx, ecx, 1, 0xb18)
void* eax_1 = *(arg1 + 0x1c)
*result = sub_638110(arg2, 0x18)
result[1] = sub_638110(arg2, 0x18)
result[2] = sub_638110(arg2, 0x18) + 1
result[3] = sub_638110(arg2, 6) + 1
void* eax_8 = sub_638110(arg2, 8)
result[5] = eax_8

if (eax_8 s>= 0)
    int32_t i_1 = 0
    
    if (result[3] s> 0)
        void* var_4_1 = &result[6]
        int32_t i
        
        do
            void* j = sub_638110(arg2, 3)
            void* eax_11 = sub_638110(arg2, 1)
            
            if (eax_11 s< 0)
                goto label_643105
            
            if (eax_11 != 0)
                void* eax_12 = sub_638110(arg2, 5)
                
                if (eax_12 s< 0)
                    goto label_643105
                
                j |= eax_12 << 3
            
            void* ecx_10 = nullptr
            *var_4_1 = j
            
            if (j != 0)
                ecx_10 = nullptr
                
                do
                    ecx_10 += j & 1
                    j u>>= 1
                while (j != 0)
            
            i = i_1 + 1
            var_4_1 += 4
            edi += ecx_10
            i_1 = i
        while (i s< result[3])
    
    int32_t esi_1 = 0
    
    if (edi s> 0)
        void* ebx_1 = &result[0x46]
        
        do
            void* eax_17 = sub_638110(arg2, 8)
            
            if (eax_17 s< 0)
                goto label_643105
            
            *ebx_1 = eax_17
            esi_1 += 1
            ebx_1 += 4
        while (esi_1 s< edi)
    
    void* eax_20 = eax_1
    int32_t ebx_2 = result[5]
    int32_t esi_2 = *(eax_20 + 0x18)
    
    if (ebx_2 s< esi_2)
        int32_t ecx_12 = 0
        
        if (edi s> 0)
            void* edx_3 = &result[0x46]
            
            do
                int32_t eax_18 = *edx_3
                
                if (eax_18 s>= esi_2)
                    goto label_643105
                
                ebx_2 = result[5]
                
                if (*(*(eax_1 + (eax_18 << 2) + 0x720) + 0xc) == 0)
                    goto label_643105
                
                ecx_12 += 1
                edx_3 += 4
            while (ecx_12 s< edi)
            
            eax_20 = eax_1
        
        int32_t* eax_21 = *(eax_20 + (ebx_2 << 2) + 0x720)
        int32_t edx_4 = 1
        int32_t ecx_13 = *eax_21
        
        if (ecx_13 s>= 1)
            while (true)
                edx_4 *= result[3]
                
                if (edx_4 s> eax_21[1])
                    break
                
                ecx_13 -= 1
                
                if (ecx_13 s<= 0)
                    result[4] = edx_4
                    return result

label_643105:
_memset(result, 0, 0xb18)
_free(result)
return 0
