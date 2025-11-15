// 函数: ?GetUnrealizedChoreWithinGroup@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NW4SearchAffinity@123@2@Z
// 地址: 0x6fdb01
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
void* eax = *(arg3 + 0x100)

if (Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, arg3, 0, arg5, arg6) != 0)
label_6fdb47:
    void* esi_2
    
    if (arg5 == 0)
        esi_2 = *(eax + 0x10)
    else
        esi_2 = *(eax + 0xc)
    
    while (true)
        if (esi_2 == 0)
            return 0
        
        if (Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, esi_2, arg3, arg5, 
                arg6) == 0 &&
                Concurrency::details::WorkSearchContext::GetUnrealizedChore(arg2, esi_2, arg6, arg4) != 0)
            break
        
        esi_2 = *(esi_2 + 0x104)
else if (Concurrency::details::WorkSearchContext::GetUnrealizedChore(arg2, arg3, arg6, arg4) == 0)
    goto label_6fdb47

return 1
