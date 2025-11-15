// 函数: ?GetUnrealizedChore@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_N2@Z
// 地址: 0x6fdaac
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result
int32_t var_10_1

if (arg4 == 0)
    result = Concurrency::details::ScheduleGroupSegmentBase::LocateUnrealizedChores(arg2)
    
    if (result == 0)
        result.b = 0
    else
        var_10_1 = 0x10
    label_6fdad5:
        void* var_c = arg2
        void* result_1 = result
        result.b = 1
        *arg1 = var_10_1
        void* edi_2 = &arg1[1]
        int32_t* esi_1 = &var_c
        *edi_2 = *esi_1
        *(edi_2 + 4) = esi_1[1]
else
    result = Concurrency::details::ScheduleGroupSegmentBase::StealUnrealizedChore(arg2, arg3)
    
    if (result != 0)
        var_10_1 = 4
        goto label_6fdad5
    
    result.b = 0
return result
