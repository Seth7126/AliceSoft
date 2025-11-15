// 函数: ?StealLocalRunnable@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVSchedulingNode@23@PAVVirtualProcessor@23@@Z
// 地址: 0x6feb4a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_8
int32_t* result =
    Concurrency::details::SchedulingNode::FindVirtualProcessor(arg3, 0, *(arg3 + 0x78), &var_8)

while (true)
    if (result == 0)
        result.b = 0
        break
    
    if (result != arg4)
        Concurrency::details::VirtualProcessor::ServiceMark(result, *(arg1 + 0x10), *(arg1 + 0x14))
        void* eax_1 = Concurrency::details::VirtualProcessor::StealLocalRunnableContext(result)
        
        if (eax_1 != 0)
            void var_14
            int32_t* esi_2 = Concurrency::details::WorkItem::WorkItem(&var_14, eax_1)
            result.b = 1
            *arg2 = *esi_2
            void* edi_2 = &arg2[1]
            void* esi_3 = &esi_2[1]
            *edi_2 = *esi_3
            *(edi_2 + 4) = *(esi_3 + 4)
            break
    
    result = Concurrency::details::SchedulingNode::GetNextVirtualProcessor(arg3, &var_8, 0)

return result
