// 函数: ?FoundAvailableVirtualProcessor@SchedulingNode@details@Concurrency@@AAE_NAAVClaimTicket@VirtualProcessor@23@Vlocation@3@K@Z
// 地址: 0x6f880a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char ebx = 1
void* result

if ((arg3 & 0xfffffff) != 3)
label_6f8841:
    int32_t i = 0
    
    if (arg1[0x1e] s> 0)
        do
            result = sub_6efd4d(&arg1[0xe], i)
            
            if (result != 0 && Concurrency::details::VirtualProcessor::ClaimExclusiveOwnership(
                    result, arg2, arg4, 1).b != 0)
                goto label_6f8873
            
            i += 1
        while (i s< arg1[0x1e])
    
    ebx = 0
else
    result = Concurrency::details::SchedulingNode::FindVirtualProcessorByLocation(arg1, &arg3)
    
    if (result == 0)
        goto label_6f8841
    
    if (Concurrency::details::VirtualProcessor::ClaimExclusiveOwnership(result, arg2, arg4, 1).b
            == 0)
        goto label_6f8841

label_6f8873:
result.b = ebx
return result
