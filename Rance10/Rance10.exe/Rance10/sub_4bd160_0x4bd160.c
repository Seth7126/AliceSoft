// 函数: sub_4bd160
// 地址: 0x4bd160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg2
int32_t* ebx = arg1
int32_t* result_1 = result
int32_t* var_10 = ebx

if (ebx != result)
    int32_t* esi_1 = &ebx[1]
    int32_t* var_c_1 = &ebx[1]
    
    if (esi_1 != result)
        do
            int32_t* result_2 = *esi_1
            int32_t* ebx_1 = *ebx
            int32_t* var_18_1 = esi_1
            int32_t eax_1 = (*(*result_2 + 0x14))()
            int32_t ebp_1 = (*(*result_2 + 0x10))()
            int32_t eax_3 = (*(*ebx_1 + 0x14))()
            int32_t eax_4 = (*(*ebx_1 + 0x10))()
            
            if (eax_4 s< eax_3)
                eax_4 = eax_3
            
            if (ebp_1 s< eax_1)
                ebp_1 = eax_1
            
            if (ebp_1 s<= eax_4)
                void* var_14_2 = &esi_1[-1]
                int32_t* ebx_3 = esi_1[-1]
                int32_t eax_9 = (*(*result_2 + 0x14))()
                int32_t ebp_2 = (*(*result_2 + 0x10))()
                int32_t eax_11 = (*(*ebx_3 + 0x14))()
                int32_t eax_12 = (*(*ebx_3 + 0x10))()
                
                if (eax_12 s< eax_11)
                    eax_12 = eax_11
                
                if (ebp_2 s< eax_9)
                    ebp_2 = eax_9
                
                if (ebp_2 s> eax_12)
                    int32_t eax_18
                    int32_t ebp_3
                    
                    do
                        int32_t* edx_6 = var_18_1
                        var_18_1 = var_14_2
                        void* ecx_10 = var_14_2 - 4
                        *edx_6 = *var_14_2
                        var_14_2 = ecx_10
                        int32_t* ebx_4 = *ecx_10
                        int32_t eax_15 = (*(*result_2 + 0x14))()
                        ebp_3 = (*(*result_2 + 0x10))()
                        int32_t eax_17 = (*(*ebx_4 + 0x14))()
                        eax_18 = (*(*ebx_4 + 0x10))()
                        
                        if (eax_18 s< eax_17)
                            eax_18 = eax_17
                        
                        if (ebp_3 s< eax_15)
                            ebp_3 = eax_15
                    while (ebp_3 s> eax_18)
                    esi_1 = var_c_1
                
                result = result_2
                ebx = var_10
                *var_18_1 = result
            else
                ebx = var_10
                sub_6feca0(&ebx[1], ebx, esi_1 - ebx)
                result = result_2
                *ebx = result
            
            esi_1 = &esi_1[1]
            var_c_1 = esi_1
        while (esi_1 != result_1)

return result
