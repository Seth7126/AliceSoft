// 函数: ?PerformServiceScan@SchedulerBase@details@Concurrency@@AAEX_K@Z
// 地址: 0x6f1c67
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

while (true)
    int32_t esi_1 = *(arg1 + 0x1a0)
    int32_t eax_1 = esi_1
    int32_t ecx = *(arg1 + 0x1a4)
    int32_t edx_1 = ecx
    
    if (edx_1:eax_1 == *(arg1 + 0x1a0))
        *(arg1 + 0x1a0) = arg3:arg2
    else
        edx_1:eax_1 = *(arg1 + 0x1a0)
    
    if (eax_1 == esi_1)
        if (edx_1 == ecx)
            break

void* j_2 = Concurrency::details::_ReaderWriterLock::_AcquireWrite(arg1 + 0x134)
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x2c) s> 0)
    do
        void* ebx_2 = *(*(arg1 + 0x24) + (i << 2))
        void* eax_5 = *(*(arg1 + 0x20) + (i << 2))
        void var_8
        void* j = Concurrency::details::SchedulingRing::FindScheduleGroupSegment(0, 
            *(ebx_2 + 0x50), &var_8, ebx_2 + 0x10)
        
        if (j != 0)
            do
                if (arg2 - *(j + 0x108) u> 0x7d0 && *(j + 0x11c) == 1)
                    *(j + 0x11c) = 2
                    Concurrency::details::List<struct Concurrency::details::BoostedObject,class Concurrency::details::CollectionTypes::NoCount>::AddHead(
                        arg1 + 0x130, j + 0x110)
                
                j = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, 0, 
                    ebx_2 + 0x10)
            while (j != 0)
            
            i = i_1
        
        void* j_1 = Concurrency::details::SchedulingRing::FindScheduleGroupSegment(0, 
            *(ebx_2 + 0xa0), &var_8, ebx_2 + 0x60)
        
        if (j_1 != 0)
            do
                if (arg2 - *(j_1 + 0x108) u> 0x7d0 && *(j_1 + 0x11c) == 1)
                    *(j_1 + 0x11c) = 2
                    Concurrency::details::List<struct Concurrency::details::BoostedObject,class Concurrency::details::CollectionTypes::NoCount>::AddHead(
                        arg1 + 0x130, j_1 + 0x110)
                
                j_1 = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, 0, 
                    ebx_2 + 0x60)
            while (j_1 != 0)
            
            i = i_1
        
        void var_14
        
        for (j_2 = Concurrency::details::SchedulingNode::FindVirtualProcessor(eax_5, 0, 
                *(eax_5 + 0x78), &var_14); j_2 != 0; j_2 =
                Concurrency::details::SchedulingNode::GetNextVirtualProcessor(eax_5, &var_14, 0))
            if (arg2 - *(j_2 + 0xc8) u> 0x7d0 && *(j_2 + 0xe0) == 1)
                *(j_2 + 0xe0) = 2
                Concurrency::details::List<struct Concurrency::details::BoostedObject,class Concurrency::details::CollectionTypes::NoCount>::AddHead(
                    arg1 + 0x130, j_2 + 0xd4)
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 0x2c))

Concurrency::details::_ReaderWriterLock::_ReleaseWrite(arg1 + 0x134)
return j_2
