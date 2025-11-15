// 函数: sub_6f2ef2
// 地址: 0x6f2ef2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg2 == 0)
    int32_t ecx_6 = arg1[0x6c]
    arg1[0x6c] -= 1
    int32_t esi_2 = *(*arg1 + 0x44)
    j_sub_4033e0()
    esi_2(0, ecx_6 - 1)
    int32_t edi_1 = arg1[0x65]
    arg1[0x65] -= 1
    
    if (((edi_1 - 1) & 0x9fffffff) == 0x80000000)
        Concurrency::details::SchedulerBase::AttemptSchedulerSweep(arg1)
else
    result = arg1[0x65]
    int32_t result_1
    
    do
        result_1 = result
        
        if ((0x40000000 & result) != 0)
            result_1 = Concurrency::details::SpinUntilBitsReset(&arg1[0x65], 0x40000000)
        
        if ((result_1 & 0x20000000) != 0)
            result.b = 0
            goto label_6f2f9e
        
        result = result_1
        
        if (result == arg1[0x65])
            arg1[0x65] = result_1 + 1
        else
            result = arg1[0x65]
    while (result != result_1)
    int32_t ecx_2 = arg1[0x6c]
    arg1[0x6c] += 1
    int32_t esi_1 = *(*arg1 + 0x44)
    j_sub_4033e0()
    esi_1(arg2.d, ecx_2 + 1)

result.b = 1
label_6f2f9e:
return result
