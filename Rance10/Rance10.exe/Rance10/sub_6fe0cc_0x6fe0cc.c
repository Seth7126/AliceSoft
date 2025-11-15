// 函数: sub_6fe0cc
// 地址: 0x6fe0cc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_15 = 0
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
                    if (Concurrency::details::WorkSearchContext::QuickSearchYield(&eax_8[-0x44], 
                            arg2, arg4, arg5.d) != 0)
                        var_15 = 1
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
                        var_15 = 1
                        break
                
                ecx_2 = arg1[1]
        
        *(*arg1 + 0x62) = 1
    
    void* ecx_6 = *arg1
    int32_t* var_24_1 = *(ecx_6 + 0x54)
    
    if (var_15 != 0)
    label_6fe301:
        void* ecx_14 = arg2[1]
        int32_t esi_5 = *(ecx_14 + 8)
        Concurrency::details::ScheduleGroupSegmentBase::ServiceMark(ecx_14, arg1[4], arg1[5])
        int32_t edx_4 = *(arg2[1] + 0xc) & 0xfffffff
        char edx_5 = (neg.d(edx_4)).b
        Concurrency::details::VirtualProcessor::UpdateWorkState(*arg1, 
            sbb.b(edx_5, edx_5, edx_4 != 0) + 1, esi_5 == var_24_1)
        result.b = var_15
    else
        int32_t var_10_1 = 0
        bool cond:2_1 = *(ecx_6 + 0x60) != 0
        var_14 = 1
        int32_t var_c_1 = 2
        
        if (not(cond:2_1))
            result = Concurrency::details::VirtualProcessor::CheckAffinityNotification(ecx_6)
        
        int32_t i
        
        if (cond:2_1 || result.b != 0 || arg4 != result.b)
            i = 0
        else
            i = 1
        
        result.b = var_15
        char var_2c_1 = 1
        
        while (i s<= 2)
            int32_t* ecx_7 = var_24_1
            int32_t* edx_2 = arg3
            int32_t* var_20_1 = edx_2
            int32_t* var_1c_1 = ecx_7
            
            if (ecx_7 != 0)
                int32_t eax_12 = arg5.d & 0x14
                int32_t var_34_1 = eax_12
                
                while (true)
                    if (eax_12 == 0)
                        goto label_6fe231
                    
                    if (sub_6fe557(arg1, arg2, ecx_7, edx_2, (arg5.d u>> 2).b & 1, (&var_14)[i], 
                            arg5.d, arg4).b == 0)
                        ecx_7 = var_1c_1
                        edx_2 = var_20_1
                    label_6fe231:
                        
                        if ((arg5 & 0xa) == 0)
                        label_6fe261:
                            int32_t eax_20 = arg5.d & 1
                            
                            if (eax_20 == 0)
                            label_6fe2a5:
                                
                                if (var_2c_1 == 0 || eax_20 == 0)
                                label_6fe2ca:
                                    var_2c_1 = 0
                                    var_20_1 = nullptr
                                    ecx_7 = sub_6f119d(arg1[1], var_24_1, var_1c_1)
                                    var_1c_1 = ecx_7
                                    
                                    if (ecx_7 == 0)
                                        result.b = var_15
                                        break
                                    
                                    edx_2 = nullptr
                                    eax_12 = var_34_1
                                    continue
                                else if (Concurrency::details::WorkSearchContext::GetLocalRunnable(
                                        arg1, arg2, *arg1, 1).b == 0)
                                    goto label_6fe2ca
                            else if (sub_6fe44c(arg1, arg2, var_1c_1, var_20_1, var_2c_1, 
                                    (&var_14)[i], arg5.d, arg4).b == 0)
                                if (i != 2)
                                    goto label_6fe2a5
                                
                                if (Concurrency::details::WorkSearchContext::StealLocalRunnable(
                                        arg1, arg2, var_1c_1[1], *arg1).b == 0)
                                    goto label_6fe2a5
                        else if (sub_6fe34f(arg1, arg2, ecx_7, edx_2, (arg5.d u>> 1).b & 1, 
                                (&var_14)[i], arg5.d, arg4).b == 0)
                            goto label_6fe261
                    
                    result.b = 1
                    var_15 = 1
                    break
            
            i += 1
            
            if (result.b != 0)
                break
        
        if (result.b != 0)
            goto label_6fe301
else
    result.b = 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
