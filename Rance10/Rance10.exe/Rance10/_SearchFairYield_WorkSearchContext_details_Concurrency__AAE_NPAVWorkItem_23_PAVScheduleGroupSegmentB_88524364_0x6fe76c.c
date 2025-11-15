// 函数: ?SearchFairYield@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NK@Z
// 地址: 0x6fe76c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t ebx
ebx.b = 0
int32_t* result

if (sub_6fdc0e(arg1, arg2).b == 0)
    int32_t* i_8 = Concurrency::details::SchedulerBase::GetNextSchedulingRing(arg1[1])
    int32_t* i_9
    void* ecx_2
    
    if ((arg3 & 0x14) != 0)
        int32_t* i = i_8
        int32_t* i_3 = i
        
        if (i_8 != 0)
            result = arg3.d u>> 2
            int32_t* result_1 = result
            
            do
                result.b &= 1
                char eax_2 = Concurrency::details::WorkSearchContext::SearchFair_Unrealized(arg2, 
                    i, result.b)
                i_9 = i_3
                ecx_2 = arg1[1]
                ebx.b = eax_2
                
                if (ebx.b != 0)
                label_6fe875:
                    Concurrency::details::SchedulerBase::SetNextSchedulingRing(ecx_2, i_9)
                    goto label_6fe86a
                
                int32_t* i_6 = sub_6f119d(ecx_2, i_8, i_9)
                i = i_6
                i_3 = i_6
                result = result_1
            while (i != 0)
    
    if ((arg3 & 0xa) != 0)
        int32_t* i_1 = i_8
        int32_t* i_4 = i_1
        
        if (i_8 != 0)
            result = arg3.d u>> 1
            int32_t* result_2 = result
            
            do
                result.b &= 1
                char eax_5 = Concurrency::details::WorkSearchContext::SearchFair_Realized(arg2, 
                    i_1, result.b)
                i_9 = i_4
                ecx_2 = arg1[1]
                ebx.b = eax_5
                
                if (ebx.b != 0)
                    goto label_6fe875
                
                int32_t* i_7 = sub_6f119d(ecx_2, i_8, i_9)
                i_1 = i_7
                i_4 = i_7
                result = result_2
            while (i_1 != 0)
    
    if ((arg3 & 1) != 0)
        int32_t* i_5 = i_8
        int32_t* i_2 = i_8
        
        if (i_8 != 0)
            do
                char eax_6 =
                    Concurrency::details::WorkSearchContext::SearchFair_Runnables(arg2, i_2)
                i_9 = i_5
                ecx_2 = arg1[1]
                ebx.b = eax_6
                
                if (ebx.b != 0)
                    goto label_6fe875
                
                i_2 = sub_6f119d(ecx_2, i_8, i_9)
                i_5 = i_2
            while (i_2 != 0)
        
        ebx.b = Concurrency::details::WorkSearchContext::StealForeignLocalRunnable(arg1, arg2, 
            *(*arg1 + 0x50)).b
    
label_6fe86a:
    result.b = ebx.b
else
    result.b = 1

return result
