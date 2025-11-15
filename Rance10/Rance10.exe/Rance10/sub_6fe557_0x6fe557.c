// 函数: sub_6fe557
// 地址: 0x6fe557
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg4 == 0)
label_6fe593:
    int32_t var_8
    int32_t* var_20_2 = &var_8
    int32_t eax_1
    
    if (arg6 != 0)
        eax_1 = Concurrency::details::SchedulingRing::GetPseudoRRAffineScheduleGroupSegment(arg3, 
            var_20_2)
    else
        eax_1 = Concurrency::details::SchedulingRing::GetPseudoRRNonAffineScheduleGroupSegment(
            arg3, var_20_2)
    
    int32_t ebx_1 = eax_1
    int32_t var_10_1 = var_8
    
    while (true)
        if (ebx_1 == 0)
            result.b = 0
            break
        
        int32_t* eax_3 =
            Concurrency::details::SchedulerBase::AcquireQuickCacheSlot(arg1[1], arg1[2])
        
        if (eax_3 != 0)
            result = Concurrency::details::WorkSearchContext::QuickSearch(eax_3, arg2, arg8, arg7)
        
        if (eax_3 == 0 || result.b == 0)
            char eax_4 = Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, ebx_1, 
                arg4, arg6, arg8)
            char eax_5
            
            if (eax_4 == 0)
                eax_5 = Concurrency::details::WorkSearchContext::GetUnrealizedChore(arg2, ebx_1, 
                    arg8, arg5)
            
            if (eax_4 != 0 || eax_5 == 0)
                void* eax_6 = arg3 + 0x60
                
                if (arg6 != 0)
                    eax_6 = arg3 + 0x10
                
                ebx_1 = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, 
                    var_10_1, eax_6)
                continue
            else if (arg6 != 0)
                *(arg3 + 0xb0) = mods.dp.d(sx.q(var_8 + 1), *(arg3 + 0x50))
            else
                *(arg3 + 0xb4) = mods.dp.d(sx.q(var_8 + 1), *(arg3 + 0xa0))
        
        result.b = 1
        break
else
    result = Concurrency::details::WorkSearchContext::GetUnrealizedChoreWithinGroup(arg1, arg2, 
        arg4, arg5, arg6, arg8)
    
    if (result.b == 0)
        goto label_6fe593
    
    result.b = 1

return result
