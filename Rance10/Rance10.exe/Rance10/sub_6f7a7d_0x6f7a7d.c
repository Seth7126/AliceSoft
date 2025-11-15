// 函数: sub_6f7a7d
// 地址: 0x6f7a7d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1[0x14]
void* result

if (arg2 == 1 || arg2 == 4)
    if (sub_6f2ef2(esi, 1) != 0)
        int32_t eax_6 = arg3
        
        if (eax_6 == 0)
            eax_6 = Concurrency::details::SchedulerBase::GetAnonymousScheduleGroupSegment()
        
        int32_t esi_2 = *(*arg1 + 0x1c)
        j_sub_4033e0()
        return esi_2(eax_6, arg4)
    
    if (arg4 != 0)
        sub_6f21a9(esi, arg4, 1)
    
    Concurrency::details::VirtualProcessor::MakeAvailable(arg1, arg2, 0)
    result.b = 0
else
    int32_t var_14_1 = arg1[0x20]
    int32_t esi_1 = *(*arg1[0x16] + 0x14)
    j_sub_4033e0()
    esi_1(var_14_1)
    result.b = 1

return result
