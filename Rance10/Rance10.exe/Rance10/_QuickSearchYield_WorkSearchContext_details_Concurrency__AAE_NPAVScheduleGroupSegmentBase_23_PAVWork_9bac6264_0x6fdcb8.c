// 函数: ?QuickSearchYield@WorkSearchContext@details@Concurrency@@AAE_NPAVScheduleGroupSegmentBase@23@PAVWorkItem@23@_NK@Z
// 地址: 0x6fdcb8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg4.b & 0x14) == 0)
label_6fdce4:
    
    if ((arg4.b & 0xa) == 0)
    label_6fdd04:
        
        if ((arg4.b & 1) == 0)
            return 0
        
        if (sub_6fd9f3(arg2, arg1) == 0)
            return 0
    else if (Concurrency::details::WorkSearchContext::GetRealizedChore(arg2, arg1, 
            (arg4 u>> 1).b & 1) == 0)
        goto label_6fdd04
else if (Concurrency::details::WorkSearchContext::GetUnrealizedChore(arg2, arg1, arg3, 
        (arg4 u>> 2).b & 1) == 0)
    goto label_6fdce4

return 1
