// 函数: sub_6f0c3d
// 地址: 0x6f0c3d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
void* eax_1 = arg3 & 0xfffffff
char ebx = 1
int32_t var_2c
int32_t var_28
void* result

if (eax_1 == 1)
    int32_t i = 0
    result = (arg4 << 4) + *(arg1 + 0x1c)
    void* result_1 = result
    
    if (*(arg1 + 0x2c) s> 0)
        do
            if ((*(*(result + 4) + (i u>> 5 << 2)) & 1 << (i.b & 0x1f)) != 0)
                int32_t var_1c_3 = arg5
                Concurrency::location::_Assign(&var_2c, &arg3)
                
                if (Concurrency::details::SchedulingNode::FoundAvailableVirtualProcessor(
                        *(*(arg1 + 0x20) + (i << 2)), arg2, var_2c, var_28).b != 0)
                    goto label_6f0d2e
            
            result = result_1
            i += 1
        while (i s< *(arg1 + 0x2c))
    
    goto label_6f0cea

if (eax_1 - 2 u> 1)
label_6f0cea:
    int32_t i_1 = 0
    
    if (*(arg1 + 0x2c) s> 0)
        do
            int32_t* ecx_9 = *(*(arg1 + 0x20) + (i_1 << 2))
            
            if (ecx_9 != 0 && ecx_9[7] s> 0)
                int32_t var_1c_4 = arg5
                var_2c = 0
                int32_t var_24_1 = 0
                int32_t var_20_1 = 0
                
                if (Concurrency::details::SchedulingNode::FoundAvailableVirtualProcessor(ecx_9, 
                        arg2, var_2c, 0).b != 0)
                    goto label_6f0d2e
            
            i_1 += 1
        while (i_1 s< *(arg1 + 0x2c))
    
    ebx = 0
else
    result = Concurrency::details::SchedulerBase::FindNodeByLocation(arg1, &arg3)
    
    if (result == 0)
        goto label_6f0cea
    
    int32_t var_1c_2 = arg5
    Concurrency::location::_Assign(&var_2c, &arg3)
    
    if (Concurrency::details::SchedulingNode::FoundAvailableVirtualProcessor(result, arg2, var_2c, 
            var_28).b == 0)
        goto label_6f0cea

label_6f0d2e:
result.b = ebx
return result
