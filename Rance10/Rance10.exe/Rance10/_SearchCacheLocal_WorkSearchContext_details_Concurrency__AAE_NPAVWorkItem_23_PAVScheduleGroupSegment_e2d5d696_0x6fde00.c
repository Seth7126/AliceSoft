// 函数: ?SearchCacheLocal@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NK@Z
// 地址: 0x6fde00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_19 = 0
int32_t* result = sub_6fdc0e(arg1, arg2)

if (result.b == 0)
    uint32_t eax_3
    int32_t edx_1
    eax_3, edx_1 = j____crtGetTickCount64()
    void* ecx = arg1[1]
    arg1[4] = eax_3
    arg1[5] = edx_1
    Concurrency::details::SchedulerBase::PeriodicScan(ecx, eax_3, edx_1)
    int32_t var_14
    
    if (Concurrency::details::WorkSearchContext::CheckPriorityList(arg1, arg1[4], arg1[5]) != 0)
        void* ecx_2 = arg1[1]
        
        if (*(ecx_2 + 0x130) != 0)
            while (true)
                int32_t* eax_8 = Concurrency::details::SchedulerBase::GetNextPriorityObject(ecx_2)
                
                if (eax_8 == 0)
                    break
                
                if (*eax_8 == 0)
                    if (Concurrency::details::WorkSearchContext::QuickSearch(&eax_8[-0x44], arg2, 
                            arg4, arg5.d) != 0)
                        var_19 = 1
                        break
                else if ((arg5 & 1) != 0)
                    void* eax_7 = Concurrency::details::VirtualProcessor::StealLocalRunnableContext(
                        &eax_8[-0x35])
                    
                    if (eax_7 != 0)
                        int32_t* eax_9 = Concurrency::details::WorkItem::WorkItem(&var_14, eax_7)
                        *arg2 = *eax_9
                        void* edi_1 = &arg2[1]
                        void* esi_2 = &eax_9[1]
                        *edi_1 = *esi_2
                        *(edi_1 + 4) = *(esi_2 + 4)
                        var_19 = 1
                        break
                
                ecx_2 = arg1[1]
        
        *(*arg1 + 0x62) = 1
    
    void* ecx_6 = *arg1
    int32_t* result_2 = *(ecx_6 + 0x54)
    
    if (var_19 != 0)
    label_6fe055:
        void* esi_5 = arg2[1]
        int32_t edi_4 = *(esi_5 + 8)
        Concurrency::details::ScheduleGroupSegmentBase::ServiceMark(esi_5, arg1[4], arg1[5])
        char var_24_2 = 0
        
        if ((*(esi_5 + 0xc) & 0xfffffff) != 0)
            void var_18
            Concurrency::location::_Assign(&var_18, *arg1 + 0x94)
            
            if (Concurrency::location::_FastVPIntersects(&var_18, esi_5 + 0xc) != 0)
                var_24_2 = 1
        
        Concurrency::details::VirtualProcessor::UpdateWorkState(*arg1, var_24_2, edi_4 == result_2)
        result.b = var_19
    else
        int32_t var_10_1 = 0
        bool cond:1_1 = *(ecx_6 + 0x60) != 0
        var_14 = 1
        int32_t var_c_1 = 2
        
        if (not(cond:1_1))
            result = Concurrency::details::VirtualProcessor::CheckAffinityNotification(ecx_6)
        
        int32_t i
        
        if (cond:1_1 || result.b != 0 || arg4 != result.b)
            i = 0
        else
            i = 1
        
        result.b = var_19
        char var_24_1 = 1
        
        while (i s<= 2)
            int32_t* var_2c_1 = arg3
            int32_t* result_1 = result_2
            
            if (result_2 != 0)
                while (true)
                    int32_t* eax_11 =
                        Concurrency::details::SchedulerBase::AcquireQuickCacheSlot(arg1[1], arg1[2])
                    
                    if (eax_11 != 0)
                        result = Concurrency::details::WorkSearchContext::QuickSearch(eax_11, arg2, 
                            arg4, arg5.d)
                    
                    if (eax_11 == 0 || result.b == 0)
                        if (var_24_1 == 0 || (arg5 & 1) == 0)
                        label_6fdf73:
                            int32_t eax_13 = arg5.d & 1
                            
                            if (eax_13 != 0)
                                result = sub_6fe44c(arg1, arg2, result_1, var_2c_1, var_24_1, 
                                    (&var_14)[i], arg5.d, arg4)
                            
                            if (eax_13 == 0 || result.b == 0)
                                if ((arg5 & 0xa) == 0)
                                label_6fdfcf:
                                    
                                    if ((arg5 & 0x14) == 0)
                                    label_6fe00a:
                                        
                                        if (eax_13 != 0 && i == 2)
                                            result = Concurrency::details::WorkSearchContext::StealLocalRunnable(
                                                arg1, arg2, result_1[1], *arg1)
                                        
                                        if (eax_13 == 0 || i != 2 || result.b == 0)
                                            var_2c_1 = nullptr
                                            var_24_1 = 0
                                            result = sub_6f119d(arg1[1], result_2, result_1)
                                            result_1 = result
                                            
                                            if (result != 0)
                                                continue
                                            
                                            result.b = var_19
                                            break
                                    else
                                        result = sub_6fe557(arg1, arg2, result_1, var_2c_1, 
                                            (arg5.d u>> 2).b & 1, (&var_14)[i], arg5.d, arg4)
                                        
                                        if (result.b == 0)
                                            goto label_6fe00a
                                else
                                    result = sub_6fe34f(arg1, arg2, result_1, var_2c_1, 
                                        (arg5.d u>> 1).b & 1, (&var_14)[i], arg5.d, arg4)
                                    
                                    if (result.b == 0)
                                        goto label_6fdfcf
                        else
                            result = Concurrency::details::WorkSearchContext::GetLocalRunnable(
                                arg1, arg2, *arg1, 0)
                            
                            if (result.b == 0)
                                goto label_6fdf73
                    
                    result.b = 1
                    var_19 = 1
                    break
            
            i += 1
            
            if (result.b != 0)
                break
        
        if (result.b != 0)
            goto label_6fe055
else
    result.b = 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
