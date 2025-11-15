// 函数: sub_6fe44c
// 地址: 0x6fe44c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (arg4 == 0)
label_6fe479:
    
    if (arg5 == 0)
    label_6fe49c:
        int32_t var_8
        int32_t* var_20_3 = &var_8
        
        if (arg6 != 0)
            result = Concurrency::details::SchedulingRing::GetPseudoRRAffineScheduleGroupSegment(
                arg3, var_20_3)
        else
            result = Concurrency::details::SchedulingRing::GetPseudoRRNonAffineScheduleGroupSegment(
                arg3, var_20_3)
        
        int32_t ecx_2 = var_8
        
        while (true)
            int32_t* result_1 = result
            
            if (result == 0)
                result.b = 0
                break
            
            int32_t* eax_2 =
                Concurrency::details::SchedulerBase::AcquireQuickCacheSlot(arg1[1], arg1[2])
            
            if (eax_2 != 0)
                result =
                    Concurrency::details::WorkSearchContext::QuickSearch(eax_2, arg2, arg8, arg7)
            
            if (eax_2 == 0 || result.b == 0)
                char eax_3 = Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, 
                    result_1, arg4, arg6, arg8)
                char eax_4
                
                if (eax_3 == 0)
                    eax_4 = sub_6fd9f3(arg2, result_1)
                
                if (eax_3 != 0 || eax_4 == 0)
                    void* eax_5 = arg3 + 0x60
                    
                    if (arg6 != 0)
                        eax_5 = arg3 + 0x10
                    
                    result = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(
                        &var_8, ecx_2, eax_5)
                    continue
                else if (arg6 != 0)
                    *(arg3 + 0xb0) = mods.dp.d(sx.q(var_8 + 1), *(arg3 + 0x50))
                else
                    *(arg3 + 0xb4) = mods.dp.d(sx.q(var_8 + 1), *(arg3 + 0xa0))
            
            result.b = 1
            break
    else
        void* eax_1 = *arg1
        
        if (Concurrency::details::WorkSearchContext::StealLocalRunnable(arg1, arg2, 
                *(eax_1 + 0x50), eax_1).b == 0)
            goto label_6fe49c
        
        result.b = 1
else
    if (Concurrency::details::WorkSearchContext::GetRunnableContextWithinGroup(arg1, arg2, arg4, 
            arg6, arg8).b == 0)
        goto label_6fe479
    
    result.b = 1

return result
