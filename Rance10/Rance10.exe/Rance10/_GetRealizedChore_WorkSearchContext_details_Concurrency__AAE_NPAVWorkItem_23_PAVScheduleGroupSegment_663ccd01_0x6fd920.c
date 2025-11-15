// 函数: ?GetRealizedChore@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_N@Z
// 地址: 0x6fd920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
int32_t var_10_1

if (arg3 == 0)
    if (Concurrency::details::ContextBase::IsBlocked(arg2).b == 0)
        result.b = 0
    else
        var_10_1 = 8
    label_6fd949:
        result.b = 1
        void* var_c = arg2
        *arg1 = var_10_1
        void* edi_2 = &arg1[1]
        void** esi_1 = &var_c
        *edi_2 = *esi_1
        *(edi_2 + 4) = esi_1[1]
else
    result = Concurrency::details::ScheduleGroupSegmentBase::GetRealizedChore(arg2)
    
    if (result != 0)
        var_10_1 = 2
        int32_t result_1 = result
        goto label_6fd949
    
    result.b = 0
return result
