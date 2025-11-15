// 函数: sub_6b9080
// 地址: 0x6b9080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_20 = 0xc88
int32_t var_24 = 1
uint32_t (* result)[0x4] = _calloc()
void* eax = *(arg1 + 0x1c)
_memset(result, 0, 0xc88)
void* eax_1 = sub_6b2ec0(arg2, 1)

if (eax_1 s>= 0)
    if (eax_1 == 0)
        *result = 1
    label_6b910a:
        void* eax_5 = sub_6b2ec0(arg2, 1)
        
        if (eax_5 s>= 0)
            if (eax_5 == 0)
            label_6b91d6:
                
                if (sub_6b2ec0(arg2, 2) == 0)
                    int32_t esi_2
                    
                    if (*result s> 1)
                        esi_2 = 0
                    
                    if (*result s<= 1 || *(arg1 + 4) s<= 0)
                    label_6b921d:
                        int32_t ebx_2 = 0
                        
                        if (*result s<= 0)
                            return result
                        
                        void** esi_3 = &(*result)[0x111]
                        
                        while (true)
                            sub_6b2ec0(arg2, 8)
                            void* eax_16 = sub_6b2ec0(arg2, 8)
                            esi_3[-0x10] = eax_16
                            
                            if (eax_16 s>= *(eax + 0x10))
                                break
                            
                            if (eax_16 s< 0)
                                break
                            
                            void* eax_17 = sub_6b2ec0(arg2, 8)
                            *esi_3 = eax_17
                            
                            if (eax_17 s>= *(eax + 0x14))
                                break
                            
                            if (eax_17 s< 0)
                                break
                            
                            ebx_2 += 1
                            esi_3 = &esi_3[1]
                            
                            if (ebx_2 s>= *result)
                                return result
                    else
                        uint32_t* ebx_1 = &(*result)[1]
                        
                        while (true)
                            uint32_t eax_14 = sub_6b2ec0(arg2, 4)
                            *ebx_1 = eax_14
                            
                            if (eax_14 s>= *result)
                                break
                            
                            if (eax_14 s< 0)
                                break
                            
                            esi_2 += 1
                            ebx_1 = &ebx_1[1]
                            
                            if (esi_2 s>= *(arg1 + 4))
                                goto label_6b921d
            else
                void* eax_7 = sub_6b2ec0(arg2, 8) + 1
                (*result)[0x121] = eax_7
                
                if (eax_7 s> 0)
                    int32_t var_8_1 = 0
                    uint32_t* var_c_1 = &(*result)[0x222]
                    
                    while (true)
                        int32_t eax_9 = *(arg1 + 4)
                        int32_t edx_1 = 0
                        
                        if (eax_9 != 0)
                            uint32_t i = eax_9 - 1
                            
                            if (eax_9 != 1)
                                do
                                    edx_1 += 1
                                    i u>>= 1
                                while (i != 0)
                        
                        void* eax_10 = sub_6b2ec0(arg2, edx_1)
                        int32_t edx_2 = 0
                        var_c_1[-0x100] = eax_10
                        int32_t ecx_5 = *(arg1 + 4)
                        
                        if (ecx_5 != 0)
                            uint32_t i_1 = ecx_5 - 1
                            
                            if (ecx_5 != 1)
                                do
                                    edx_2 += 1
                                    i_1 u>>= 1
                                while (i_1 != 0)
                        
                        uint32_t eax_12 = sub_6b2ec0(arg2, edx_2)
                        *var_c_1 = eax_12
                        
                        if (eax_10 s< 0)
                            break
                        
                        if (eax_12 s< 0)
                            break
                        
                        if (eax_10 == eax_12)
                            break
                        
                        int32_t ecx_7 = *(arg1 + 4)
                        
                        if (eax_10 s>= ecx_7)
                            break
                        
                        if (eax_12 s>= ecx_7)
                            break
                        
                        int32_t ecx_9 = var_8_1 + 1
                        var_c_1 = &var_c_1[1]
                        var_8_1 = ecx_9
                        
                        if (ecx_9 s>= (*result)[0x121])
                            goto label_6b91d6
    else
        void* eax_3 = sub_6b2ec0(arg2, 4) + 1
        *result = eax_3
        
        if (eax_3 s> 0)
            goto label_6b910a

if (result != 0)
    _memset(result, 0, 0xc88)
    _free(result)

return 0
