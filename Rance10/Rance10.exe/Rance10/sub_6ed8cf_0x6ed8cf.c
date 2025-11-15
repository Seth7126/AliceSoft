// 函数: sub_6ed8cf
// 地址: 0x6ed8cf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg2 + 0xa0)
int32_t eax = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg2)
int32_t edi_1 = esi - *(arg2 + 0xa8)
int32_t* result
void* i

if (esi - arg3[6] - arg3[9] u>= edi_1 - (eax + *(arg2 + 0xb8)))
    result = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg2) + *(arg2 + 0xb8)
    i = edi_1 - result
else
    result = arg3
    i = esi - result[6] - result[9]

int32_t edx_2 = 0
int32_t var_20 = 0

if (i != 0)
    int32_t var_18_1 = 0
    int32_t* edi_3 = *(arg2 + 0x10) + 0x24
    
    do
        result = arg1
        
        if (edx_2 u>= result[6])
            break
        
        int32_t eax_5 = edi_3[-2]
        result = eax_5 - *edi_3
        
        if (eax_5 != *edi_3)
            int32_t j = 0
            int32_t j_1 = 0
            
            if (i != 0)
                int32_t* result_1 = nullptr
                int32_t edx_3 = 0
                result = nullptr
                int32_t var_14_1 = 0
                
                while (j u< edi_3[-8])
                    int32_t* ecx_6 = edi_3[3] + edx_3
                    
                    if (*ecx_6 == 4 && ecx_6[0xa] u<= 0)
                        result.b = *(ecx_6 + 0x31)
                        
                        if (result.b == 0)
                            void* eax_9 = *(arg1[0x12] + var_18_1 + 0x20) + result_1
                            int32_t* var_1c_1 = eax_9
                            int32_t eax_10 = *(eax_9 + 0x10)
                            
                            if (eax_10 u> 1)
                                var_1c_1[4] = eax_10 - 1
                                int32_t eax_11
                                eax_11.b = ecx_6[0xc].b
                                
                                if (eax_11.b != 0)
                                    sub_6ef604(arg1, &edi_3[-9], ecx_6, arg1[0x12] + var_18_1, 
                                        var_1c_1, arg3)
                                
                                sub_6f6aac(arg2, &edi_3[-9], j_1)
                                i -= 1
                            
                            edx_3 = var_14_1
                        
                        result = result_1
                    
                    edx_3 += 0x34
                    j = j_1 + 1
                    var_14_1 = edx_3
                    result = &result[9]
                    j_1 = j
                    result_1 = result
                    
                    if (i == 0)
                        break
                
                edx_2 = var_20
        
        var_18_1 += 0x28
        edx_2 += 1
        edi_3 = &edi_3[0xd]
        var_20 = edx_2
    while (i != 0)

return result
