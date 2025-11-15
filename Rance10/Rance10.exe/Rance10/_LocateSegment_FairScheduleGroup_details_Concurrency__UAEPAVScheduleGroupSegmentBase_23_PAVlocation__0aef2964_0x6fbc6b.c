// 函数: ?LocateSegment@FairScheduleGroup@details@Concurrency@@UAEPAVScheduleGroupSegmentBase@23@PAVlocation@3@_N@Z
// 地址: 0x6fbc6b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0

if ((arg1[0xc].b & 4) != 0)
    return sub_6fb353(arg1, &var_14, arg2)

void* result = arg1[0xe]

if (arg2 != 0 && result == 0)
    Concurrency::details::_NonReentrantLock::_Acquire(&arg1[2])
    result = arg1[0xe]
    
    if (result == 0)
        result = sub_6fae1d(arg1, &var_14, 
            Concurrency::details::SchedulerBase::GetNextSchedulingRing(arg1[1]))
        arg1[0xe] = result
    
    arg1[2] = 0

return result
