// 函数: ?GetRealizedChoreWithinGroup@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NW4SearchAffinity@123@2@Z
// 地址: 0x6fd972
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg3 + 0x100)

if (Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, arg3, 0, arg5, arg6) != 0)
label_6fd9af:
    void* esi_1
    
    if (arg5 == 0)
        esi_1 = *(esi + 0x10)
    else
        esi_1 = *(esi + 0xc)
    
    while (true)
        if (esi_1 == 0)
            return 0
        
        if (Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, esi_1, arg3, arg5, 
                arg6) == 0 && Concurrency::details::WorkSearchContext::GetRealizedChore(arg2, esi_1, arg4)
                != 0)
            break
        
        esi_1 = *(esi_1 + 0x104)
else if (Concurrency::details::WorkSearchContext::GetRealizedChore(arg2, arg3, arg4) == 0)
    goto label_6fd9af

return 1
