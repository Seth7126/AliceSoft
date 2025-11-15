// 函数: ?QuickSearch@WorkSearchContext@details@Concurrency@@AAE_NPAVScheduleGroupSegmentBase@23@PAVWorkItem@23@_NK@Z
// 地址: 0x6fdc4b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg4.b & 1) == 0)
label_6fdc69:
    
    if ((arg4.b & 0xa) == 0)
    label_6fdc89:
        
        if ((arg4.b & 0x14) == 0)
            return 0
        
        if (Concurrency::details::WorkSearchContext::GetUnrealizedChore(arg2, arg1, arg3, 
                (arg4 u>> 2).b & 1) == 0)
            return 0
    else if (Concurrency::details::WorkSearchContext::GetRealizedChore(arg2, arg1, 
            (arg4 u>> 1).b & 1) == 0)
        goto label_6fdc89
else if (sub_6fd9f3(arg2, arg1) == 0)
    goto label_6fdc69

return 1
