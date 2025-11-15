// 函数: ?PopulateCommonAllocationData@ResourceManager@details@Concurrency@@AAEXIPAVSchedulerProxy@23@PAUAllocationData@23@@Z
// 地址: 0x6ee023
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_14 = arg1
*arg4 = arg2
void* result = arg3
*(arg4 + 8) = fconvert.d(float.t(0))
arg4[4] = result
void* esi = *(result + 0x10)

if (esi != 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(arg1 + 0x18) u> 0)
        result = nullptr
        int32_t* esi_1 = esi + 0x2c
        void* result_1 = nullptr
        
        do
            esi_1[-1] = 0
            *esi_1 = 0
            
            if (esi_1[-4] u> 0)
                int32_t j_1 = 0
                
                if (esi_1[-0xa] u> 0)
                    int32_t j = 0
                    int32_t var_10_1 = 0
                    int32_t var_c_1 = 0
                    
                    do
                        void* edx_2 = esi_1[1] + var_c_1
                        bool cond:0_1 = *edx_2 != 4
                        *(edx_2 + 0x30) = 0
                        
                        if (not(cond:0_1) && *(edx_2 + 0x18) == 0)
                            void* ecx_1 = *(var_14 + 0x48) + result
                            sub_6ef604(var_14, &esi_1[-0xb], edx_2, ecx_1, 
                                *(ecx_1 + 0x20) + var_10_1, arg4)
                            result = result_1
                            j = j_1
                        
                        var_c_1 += 0x34
                        j += 1
                        var_10_1 += 0x24
                        j_1 = j
                    while (j u< esi_1[-0xa])
                    
                    i = i_1
                    arg1 = var_14
            
            i += 1
            result += 0x28
            esi_1 = &esi_1[0xd]
            i_1 = i
            result_1 = result
        while (i u< *(arg1 + 0x18))

return result
