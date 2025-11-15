// 函数: ?GetRunnableContextWithinGroup@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@W4SearchAffinity@123@_N@Z
// 地址: 0x6fda31
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg3[0x40]

if (Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, arg3, 0, arg4, arg5) != 0)
label_6fda6b:
    int32_t* esi_1
    
    if (arg4 == 0)
        esi_1 = *(esi + 0x10)
    else
        esi_1 = *(esi + 0xc)
    
    while (true)
        if (esi_1 == 0)
            return 0
        
        if (Concurrency::details::WorkSearchContext::SkipSegmentSearch(arg1, esi_1, arg3, arg4, 
                arg5) == 0 && sub_6fd9f3(arg2, esi_1) != 0)
            break
        
        esi_1 = esi_1[0x41]
else if (sub_6fd9f3(arg2, arg3) == 0)
    goto label_6fda6b

return 1
