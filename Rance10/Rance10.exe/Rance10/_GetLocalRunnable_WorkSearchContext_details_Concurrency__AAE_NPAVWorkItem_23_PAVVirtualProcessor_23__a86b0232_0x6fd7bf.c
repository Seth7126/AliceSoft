// 函数: ?GetLocalRunnable@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVVirtualProcessor@23@_N@Z
// 地址: 0x6fd7bf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (arg4 == 0)
    if (*(arg1 + 0xc) u< 0x65)
        if (*(arg3 + 0x14) - *(arg3 + 0x10) s<= 0)
            result = nullptr
        else
            result = Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::InternalContextBase,class Concurrency::details::_HyperNonReentrantLock>::Pop(
                arg3 + 0x10)
        
        goto label_6fd82f
    
    if (*(arg1 + 0xc) u>= 0x7f)
        *(arg1 + 0xc) = 0
        result.b = 0
    else
        result = Concurrency::details::VirtualProcessor::StealLocalRunnableContext(arg3)
    label_6fd82f:
        
        if (result == 0)
            *(arg1 + 0xc) = 0
            result.b = 0
        else
            void var_1c
            result = Concurrency::details::WorkItem::WorkItem(&var_1c, result)
            *arg2 = *result
            void* edi_6 = &arg2[1]
            void* esi_6 = &result[1]
            *edi_6 = *esi_6
            *(edi_6 + 4) = *(esi_6 + 4)
            *(arg1 + 0xc) += 1
            result.b = 1
else
    if (*(arg3 + 0x14) - *(arg3 + 0x10) s<= 0)
        result = nullptr
    else
        result = Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::InternalContextBase,class Concurrency::details::_HyperNonReentrantLock>::Pop(
            arg3 + 0x10)
    
    if (result == 0)
        result.b = 0
    else
        void var_10
        result = Concurrency::details::WorkItem::WorkItem(&var_10, result)
        *arg2 = *result
        void* edi_2 = &arg2[1]
        void* esi_2 = &result[1]
        *edi_2 = *esi_2
        *(edi_2 + 4) = *(esi_2 + 4)
        result.b = 1

return result
