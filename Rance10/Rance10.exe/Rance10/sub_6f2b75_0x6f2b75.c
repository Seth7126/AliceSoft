// 函数: sub_6f2b75
// 地址: 0x6f2b75
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL result = 0

if (arg1[0x79] s> 0)
    char var_5_1 = 0
    char var_6_1 = 0
    void* eax = sub_6f0fe5(arg1, 0)
    char edx_1
    
    while (true)
        if (eax == 0)
            edx_1 = var_5_1
            eax.b = 1
            var_6_1 = 1
            break
        
        edx_1 = var_5_1 | Concurrency::details::SchedulerBase::NotifyThrottledContext(arg1, eax).b
        var_5_1 = edx_1
        
        if (arg1[0x6e] s> 0)
            if (Concurrency::details::SchedulerBase::ThrottlingTime(arg1, 1) != 0)
                edx_1 = var_5_1
            else
                eax = sub_6f0fe5(arg1, 0)
                continue
        
        eax.b = var_6_1
        break
    
    if (arg1[0x66] == 0 && (eax.b != 0 || arg1[0x6e] s> 0))
    label_6f2c49:
        arg1[0x79]
        arg1[0x79] = 1
    label_6f2c4f:
        int32_t eax_5 = Concurrency::details::SchedulerBase::ThrottlingTime(arg1, 1)
        int32_t eax_7 = j____crtGetTickCount64() - arg1[0x74]
        uint32_t eax_9 = sbb.d(eax_7, eax_7, eax_7 u< eax_5) & (eax_5 - eax_7)
        int32_t ecx_9
        ecx_9.b = var_6_1
        
        if (ecx_9.b != 0 && eax_9 u< 0x1f4)
            eax_9 = 0x1f4
        
        return sub_6f0419(arg1, eax_9)
    
    int32_t ecx_3 = arg1[0x79]
    result = arg1[0x79]
    arg1[0x79] += neg.d(ecx_3)
    result.b = result != ecx_3
    
    if (result.b != 0)
        goto label_6f2c4f
    
    if (arg1[0x66] != 0 && edx_1 == 0)
        int32_t var_20 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_14_1 = 0
        int32_t var_30_5 = 0xb
        int32_t esi_1 = *(Concurrency::details::SchedulerBase::GetNextSchedulingRing(arg1) + 8)
        void var_40
        Concurrency::location::_Assign(&var_40, &var_20)
        result = Concurrency::details::SchedulerBase::StartupVirtualProcessor(arg1, esi_1, var_40)
        
        if (result.b == 0)
            goto label_6f2c49

return result
