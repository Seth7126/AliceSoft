// 函数: sub_6f8202
// 地址: 0x6f8202
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x1f] != 0)
    int32_t var_c_1 = 0
    int32_t (* var_8_1)() = sub_6eb70e
    
    do
        void var_14
        Concurrency::details::_SpinWait<1>::_SpinOnce(&var_14)
    while (arg1[0x1f] != 0)

void* esi = arg3

if (esi == 0)
    esi = Concurrency::details::ScheduleGroupSegmentBase::GetInternalContext(arg2, 0, 0)
else if (*(esi + 0x1c) == 0)
    sub_6f981a(esi, arg2, 0, 0)

BOOL result

if (esi != 0)
    int32_t esi_1 = *(*arg1 + 0x10)
    j_sub_4033e0()
    esi_1(esi)
    int32_t var_24_2 = arg1[0x1f]
    int32_t esi_2 = *(*arg1[0x16] + 0x14)
    j_sub_4033e0()
    arg1[0x16]
    esi_2(var_24_2)
    result.b = 1
else
    Concurrency::details::VirtualProcessor::MakeAvailable(arg1, 4, 1)
    Concurrency::details::SchedulerBase::DeferredGetInternalContext(*arg1[0x14])
    result.b = 0

return result
