// 函数: ?GetNextVirtualProcessor@SchedulingNode@details@Concurrency@@QAEPAVVirtualProcessor@23@PAHH@Z
// 地址: 0x6f120d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = *arg2 + 1

if (edx_1 s> arg3)
    int32_t result = Concurrency::details::SchedulingNode::FindVirtualProcessor(arg1, edx_1, 
        *(arg1 + 0x78), arg2)
    edx_1 = 0
    
    if (result != 0)
        return result

return Concurrency::details::SchedulingNode::FindVirtualProcessor(arg1, edx_1, arg3, arg2)
