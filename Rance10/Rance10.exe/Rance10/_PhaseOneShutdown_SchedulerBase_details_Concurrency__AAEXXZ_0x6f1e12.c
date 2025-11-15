// 函数: ?PhaseOneShutdown@SchedulerBase@details@Concurrency@@AAEXXZ
// 地址: 0x6f1e12
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fc2e4 == arg1)
    Concurrency::details::_NonReentrantLock::_Acquire(&data_7fc30c)
    void* edx_2 = data_7fc2e4 - arg1
    int32_t edx_3 = neg.d(edx_2)
    data_7fc2e4 &= sbb.d(edx_3, edx_3, edx_2 != 0)
    data_7fc30c = 0

if (arg1[0x62] s> 1)
    int32_t edx_5 = arg1[0x65]
    int32_t ecx = edx_5
    int32_t eax_1 = edx_5
    
    while (true)
        if (eax_1 == arg1[0x65])
            arg1[0x65] = ecx | 0x80000000
        else
            eax_1 = arg1[0x65]
        
        if (eax_1 == edx_5)
            break
        
        edx_5 = eax_1
        ecx = eax_1
    
    if ((edx_5 & 0x1fffffff) == 0)
        Concurrency::details::SchedulerBase::AttemptSchedulerSweep(arg1)

return sub_6f083c(arg1) __tailcall
