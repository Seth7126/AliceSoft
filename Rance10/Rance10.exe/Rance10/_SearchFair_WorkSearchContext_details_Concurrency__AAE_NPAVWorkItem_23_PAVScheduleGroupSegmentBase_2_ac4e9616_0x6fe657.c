// 函数: ?SearchFair@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NK@Z
// 地址: 0x6fe657
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t ebx
ebx.b = 0
int32_t* result

if (sub_6fdc0e(arg1, arg2).b == 0)
    void* i_2 = Concurrency::details::SchedulerBase::GetNextSchedulingRing(arg1[1])
    result = arg3
    
    if ((result.b & 1) == 0)
        goto label_6fe6d6
    
    void* i_5 = i_2
    void* i_6 = i_2
    void* i_4
    void* ecx_2
    
    if (i_2 == 0)
    label_6fe6c7:
        ebx.b = Concurrency::details::WorkSearchContext::StealForeignLocalRunnable(arg1, arg2, 
            *(*arg1 + 0x50)).b
        
        if (ebx.b == 0)
            result = arg3
        label_6fe6d6:
            
            if ((result.b & 0xa) != 0)
                void* i = i_2
                void* i_1 = i
                
                if (i_2 != 0)
                    uint32_t eax_2 = result u>> 1
                    uint32_t var_c_1 = eax_2
                    
                    do
                        eax_2.b &= 1
                        char eax_4 = Concurrency::details::WorkSearchContext::SearchFair_Realized(
                            arg2, i, eax_2.b)
                        i_4 = i_1
                        ecx_2 = arg1[1]
                        ebx.b = eax_4
                        
                        if (ebx.b != 0)
                            goto label_6fe75c_1
                        
                        void* i_3 = sub_6f119d(ecx_2, i_2, i_4)
                        i = i_3
                        i_1 = i_3
                        eax_2 = var_c_1
                    while (i != 0)
                    
                    result = arg3
            
            if ((result.b & 0x14) != 0)
                void* i_7 = i_2
                void* i_8 = i_7
                
                if (i_2 != 0)
                    result u>>= 2
                    arg3 = result
                    
                    while (true)
                        result.b &= 1
                        char eax_6 = Concurrency::details::WorkSearchContext::SearchFair_Unrealized(
                            arg2, i_7, result.b)
                        ecx_2 = arg1[1]
                        ebx.b = eax_6
                        
                        if (ebx.b != 0)
                            break
                        
                        void* i_9 = sub_6f119d(ecx_2, i_2, i_8)
                        i_7 = i_9
                        i_8 = i_9
                        result = arg3
                        
                        if (i_7 == 0)
                            goto label_6fe761
                    
                label_6fe75c:
                    Concurrency::details::SchedulerBase::SetNextSchedulingRing(ecx_2, i_8)
    else
        while (true)
            char eax = Concurrency::details::WorkSearchContext::SearchFair_Runnables(arg2, i_6)
            i_4 = i_5
            ecx_2 = arg1[1]
            ebx.b = eax
            
            if (ebx.b != 0)
                break
            
            i_6 = sub_6f119d(ecx_2, i_2, i_4)
            i_5 = i_6
            
            if (i_6 == 0)
                goto label_6fe6c7
        
    label_6fe75c_1:
        Concurrency::details::SchedulerBase::SetNextSchedulingRing(ecx_2, i_4)
label_6fe761:
    result.b = ebx.b
else
    result.b = 1

return result
