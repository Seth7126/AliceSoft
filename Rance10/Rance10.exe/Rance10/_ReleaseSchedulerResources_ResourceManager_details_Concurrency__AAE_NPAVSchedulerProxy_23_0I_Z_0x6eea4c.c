// 函数: ?ReleaseSchedulerResources@ResourceManager@details@Concurrency@@AAE_NPAVSchedulerProxy@23@0I@Z
// 地址: 0x6eea4c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_2 = arg4
void* var_14 = arg1
int32_t* result

if (result_2 != 0xfffffffe)
    if (result_2 == 0xffffffff)
        int32_t eax_1 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg3)
        int32_t ecx_1 = *(arg3 + 0xa8)
        result_2 = *(arg3 + 0xa0) - *(arg3 + 0x6c) - ecx_1 - (eax_1 + *(arg3 + 0xb8)) + ecx_1
        arg1 = var_14
    
    result = nullptr
else
    result = *(arg3 + 0xa8)
    result_2 = result

void* ebx_1 = result_2 - result
int32_t var_1c_1
int32_t* result_1
int32_t eax_4
int32_t edi_1

if (result_2 != 0)
    edi_1 = *(arg3 + 0x10)
    var_1c_1 = edi_1
    eax_4 = *(arg2 + 0x14)
    result = nullptr
    result_1 = nullptr

if (result_2 == 0 || *(arg1 + 0x18) u<= 0)
label_6eeb35:
    result.b = 0
else
    while (true)
        void* ecx_4 = *(eax_4 + (result << 2)) * 0x34 + edi_1
        *(ecx_4 + 0x24)
        
        if (*(ecx_4 + 0x1c) != *(ecx_4 + 0x24))
            int32_t eax_7 = 0
            int32_t var_8_1 = 0
            
            if (*(ecx_4 + 4) u> 0)
                int32_t var_c_1 = 0
                
                while (true)
                    int32_t* edi_3 = *(ecx_4 + 0x30) + var_c_1
                    
                    if (*edi_3 == 4 && edi_3[0xa] u<= 0)
                        eax_7.b = *(edi_3 + 0x31)
                        
                        if (eax_7.b != 0 || ebx_1 != 0)
                            *edi_3 = 5
                            *(arg3 + 0x6c) += 1
                            result = edi_3[5]
                            *result -= 1
                            result.b = *(edi_3 + 0x31)
                            
                            if (result.b == 0)
                                ebx_1 -= 1
                            
                            int32_t* result_3 = result_2
                            result_2 -= 1
                            
                            if (result_3 == 1)
                                result.b = 1
                                break
                        
                        eax_7 = var_8_1
                    
                    var_c_1 += 0x34
                    eax_7 += 1
                    var_8_1 = eax_7
                    
                    if (eax_7 u>= *(ecx_4 + 4))
                        edi_1 = var_1c_1
                        goto label_6eeb2c
                
                break
        
    label_6eeb2c:
        result = result_1 + 1
        result_1 = result
        
        if (result u>= *(var_14 + 0x18))
            goto label_6eeb35

return result
