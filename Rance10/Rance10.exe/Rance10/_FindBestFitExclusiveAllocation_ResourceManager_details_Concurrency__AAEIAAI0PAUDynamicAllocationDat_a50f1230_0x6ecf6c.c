// 函数: ?FindBestFitExclusiveAllocation@ResourceManager@details@Concurrency@@AAEIAAI0PAUDynamicAllocationData@23@II@Z
// 地址: 0x6ecf6c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg4
int32_t* eax = *(ecx + 0x10)
int32_t* var_58 = eax
int32_t ebx = eax[4]
int32_t esi = eax[5]
int32_t ebx_1 = 0
int32_t var_14 = esi
int32_t var_40 = 0
char var_5

if (arg5 != 1)
    eax.b = *(ecx + 0x20)
    var_5 = eax.b
else
    var_5 = 0

int32_t eax_20 = *(ecx + 0x2c)
int32_t edx_1 = *(arg1 + 0x18)
int32_t result = 0
int32_t var_38 = 0xffffffff
int32_t result_2 = 0
int32_t var_30 = 0
int32_t var_34 = eax_20

if (eax_20 u>= edx_1)
    *(ecx + 0x20) = 0
else
    int32_t result_1
    
    do
        int32_t eax_1 = *(esi + (eax_20 << 2))
        int32_t edx_2 = eax_1 * 0x34
        result_1 = result_2
        
        if (*(edx_2 + ebx + 0x1c) == 0)
            int32_t esi_1 = *(ecx + 4)
            int32_t var_2c_1 = esi_1
            
            if (esi_1 u>= *(edx_2 + ebx + 4))
                var_2c_1 = *(edx_2 + ebx + 4)
            
            int32_t* esi_3 = arg2
            int32_t edx_4 = 0
            result_1 = result_2
            int32_t var_28_1 = 0
            int32_t var_c_1 = 0
            
            if (*esi_3 u> 0)
                int32_t eax_4 = *(eax_1 * 0x28 + *(arg1 + 0x48) + 8)
                
                if (eax_4 != 0)
                    if (*esi_3 u< eax_4)
                        eax_4 = *esi_3
                    
                    var_28_1 = eax_4
                    edx_4 = 1
                    var_c_1 = 1
                
                ecx = arg4
            
            int32_t* eax_5 = arg3
            int32_t i = 0
            int32_t i_1 = 0
            
            if (*eax_5 u> 0)
                int32_t var_24_1 = 0
                
                if (arg6 u> 0)
                    while (i u< *eax_5)
                        void* esi_5 = *(*(arg1 + 0x58) + (var_24_1 << 2))
                        void* edx_5 = *(esi_5 + 0x10)
                        int32_t eax_8
                        int32_t edx_6
                        
                        if (*(edx_5 + 0xa0) u> *(esi_5 + 0x24))
                            eax_8 = *(edx_5 + 0x10)
                            edx_6 = *(edx_2 + eax_8 + 0x1c)
                        
                        if (*(edx_5 + 0xa0) u<= *(esi_5 + 0x24) || edx_6 == *(edx_2 + eax_8 + 0x24))
                            i = i_1
                            edx_4 = var_c_1
                        else
                            int32_t ebx_2 = *(esi_5 + 0x28)
                            int32_t edx_8 = *(edx_2 + eax_8 + 0x2c)
                            int32_t var_3c_2 = ebx_2
                            
                            if (edx_8 u< ebx_2)
                                var_3c_2 = edx_8
                            
                            int32_t eax_9 = *(edx_2 + eax_8 + 0x20)
                            int32_t eax_10 = eax_9 - edx_8
                            int32_t edx_9 = eax_10
                            int32_t var_48_1 = eax_10
                            
                            if (eax_10 u>= *(esi_5 + 0x2c))
                                edx_9 = *(esi_5 + 0x2c)
                            
                            int32_t eax_12 = edx_6 - *(edx_2 + eax_8 + 0x24) - eax_9
                            
                            if (eax_12 u>= *(esi_5 + 0x30))
                                eax_12 = *(esi_5 + 0x30)
                            
                            i = i_1
                            int32_t edx_10 = edx_9 + eax_12
                            int32_t edx_11 = edx_10 + var_3c_2
                            
                            if (edx_10 == neg.d(var_3c_2))
                                edx_4 = var_c_1
                            else
                                int32_t eax_15 = *arg3 - i
                                
                                if (eax_15 u>= edx_11)
                                    eax_15 = edx_11
                                
                                i += eax_15
                                edx_4 = var_c_1 + 1
                                i_1 = i
                                var_c_1 = edx_4
                        
                        bool cond:5_1 = var_24_1 + 1 u< arg6
                        var_24_1 += 1
                        eax_5 = arg3
                        
                        if (not(cond:5_1))
                            break
                    
                    result_1 = result_2
                    ebx_1 = 0
                    ecx = arg4
            
            int32_t result_3 = var_28_1 + i
            bool cond:3_1
            
            if (var_5 == 0)
                if (result_1 u>= var_2c_1 || result_3 u<= result_1)
                    cond:3_1 = result_3 != result_1
                    goto label_6ed10b
                
            label_6ed115:
                var_38 = var_34
                result_1 = result_3
                result_2 = result_1
                var_30 = edx_4
            else
                cond:3_1 = result_3 != var_2c_1
            label_6ed10b:
                
                if (not(cond:3_1) && edx_4 u> var_30)
                    goto label_6ed115
            esi = var_14
        
        eax_20 = var_34 + 1
        var_34 = eax_20
    while (eax_20 u< edx_1)
    
    if (var_38 == 0xffffffff)
        *(ecx + 0x20) = 0
    else
        int32_t edx_13 = *(esi + (var_38 << 2))
        int32_t result_4 = *(ecx + 4)
        
        if (result_4 u< result_1)
            result_1 = result_4
        
        *(ecx + 4) = result_4 - result_1
        result = result_1
        int32_t result_5 = *arg2
        
        if (result_5 != 0)
            int32_t result_7 = *(edx_13 * 0x28 + *(arg1 + 0x48) + 8)
            
            if (result_7 != 0)
                int32_t result_9 = result_5
                
                if (result_5 u>= result_7)
                    result_9 = result_7
                
                if (result_9 u>= result_1)
                    result_5 = result_1
                else if (result_5 u>= result_7)
                    result_5 = result_7
                
                Concurrency::details::ResourceManager::DynamicAssignCores(arg1, var_58, edx_13, 
                    result_5, 0)
                *arg2 -= result_5
                result_1 -= result_5
        
        if (result_1 != 0)
            int32_t* eax_26 = arg3
            
            if (*eax_26 u> 0)
                while (ebx_1 u< arg6)
                    int32_t result_6 = *eax_26
                    
                    if (result_6 == 0)
                        break
                    
                    int32_t* edx_14 = *(*(arg1 + 0x58) + (ebx_1 << 2))
                    
                    if (*(edx_14[4] + 0xa0) u<= edx_14[9])
                        eax_26 = arg3
                    else
                        void* ecx_6 = edx_13 * 0x34 + *(edx_14[4] + 0x10)
                        int32_t eax_32 = *(ecx_6 + 0x1c)
                        
                        if (eax_32 == *(ecx_6 + 0x24))
                            eax_26 = arg3
                        else
                            int32_t ebx_3 = edx_14[0xa]
                            int32_t var_3c_3 = ebx_3
                            
                            if (*(ecx_6 + 0x2c) u< ebx_3)
                                var_3c_3 = *(ecx_6 + 0x2c)
                            
                            int32_t ebx_5 = *(ecx_6 + 0x20)
                            int32_t ecx_8 = ebx_5 - *(ecx_6 + 0x2c)
                            
                            if (ecx_8 u>= edx_14[0xb])
                                ecx_8 = edx_14[0xb]
                            
                            int32_t eax_34 = eax_32 - *(ecx_6 + 0x24) - ebx_5
                            
                            if (eax_34 u>= edx_14[0xc])
                                eax_34 = edx_14[0xc]
                            
                            ebx_1 = var_40
                            int32_t eax_35 = eax_34 + ecx_8
                            int32_t result_8 = eax_35 + var_3c_3
                            
                            if (eax_35 == neg.d(var_3c_3))
                                eax_26 = arg3
                            else
                                int32_t result_10 = result_6
                                
                                if (result_6 u>= result_8)
                                    result_10 = result_8
                                
                                if (result_10 u>= result_1)
                                    result_6 = result_1
                                else if (result_6 u>= result_8)
                                    result_6 = result_8
                                
                                sub_6ecce8(arg1, edx_14, *(arg4 + 0x10), edx_13, result_6)
                                eax_26 = arg3
                                *eax_26 -= result_6
                                result_1 -= result_6
                    
                    ebx_1 += 1
                    var_40 = ebx_1
                    
                    if (result_1 == 0)
                        break
        
        int32_t edx_17 = *(arg4 + 0x2c)
        int32_t ecx_10 = *(var_14 + (edx_17 << 2))
        *(var_14 + (edx_17 << 2)) = *(var_14 + (var_38 << 2))
        *(var_14 + (var_38 << 2)) = ecx_10
        *(arg4 + 0x2c) += 1
        *(arg4 + 0x20) = 1

return result
