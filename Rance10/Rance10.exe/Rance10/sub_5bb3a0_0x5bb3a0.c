// 函数: sub_5bb3a0
// 地址: 0x5bb3a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = ((*(arg1 + 0x64) - *(arg1 + 0x60)) s>> 2) - 1
int32_t j_2

if (i s> 0)
    int32_t j_1 = 1
    int32_t ebx_1 = 0
    j_2 = 1
    int32_t var_8_1 = 0
    
    do
        int32_t* ecx_1 = *(arg1 + 0x60) + ebx_1
        int32_t* var_c_1 = ecx_1
        
        if (*ecx_1 != 0)
            int32_t j = j_1
            
            if (j_1 s< (*(arg1 + 0x64) - *(arg1 + 0x60)) s>> 2)
                do
                    void** ebx_2 = *(arg1 + 0x60)
                    int32_t eax_6 = ebx_2[j]
                    
                    if (eax_6 != 0)
                        int32_t var_20_1 = *(arg1 + 0x44)
                        char eax_7 = sub_5c3530(*ecx_1, eax_6)
                        ecx_1 = var_c_1
                        
                        if (eax_7 != 0)
                            sub_5c3840(*ecx_1, ebx_2[j])
                            int32_t* eax_8 = *(arg1 + 0x60)
                            int32_t* ebx_3 = eax_8[j]
                            eax_8[j] = 0
                            
                            if (ebx_3 != 0)
                                sub_5bd030(ebx_3)
                                int32_t var_20_3 = 0x80
                                operator new(ebx_3)
                            
                            ecx_1 = var_c_1
                    
                    j += 1
                while (j s< (*(arg1 + 0x64) - *(arg1 + 0x60)) s>> 2)
                
                j_1 = j_2
                ebx_1 = var_8_1
        
        j_1 += 1
        ebx_1 += 4
        var_8_1 = ebx_1
        i = j_1 - 1
        j_2 = j_1
    while (i s< ((*(arg1 + 0x64) - *(arg1 + 0x60)) s>> 2) - 1)

int32_t* i_1 = *(arg1 + 0x60)

while (i_1 != *(arg1 + 0x64))
    if (*i_1 != 0)
        i_1 = &i_1[1]
    else
        j_2.b = 0
        int32_t var_20_4 = 0
        sub_5beb90(i, *(arg1 + 0x64), &i_1[1], i_1)
        void* edx_2 = *(arg1 + 0x64)
        i = sub_5be530(edx_2 - 4, edx_2)
        *(arg1 + 0x64) -= 4

return i
