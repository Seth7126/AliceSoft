// 函数: ?Cleanup@SchedulerBase@details@Concurrency@@AAEXXZ
// 地址: 0x6f056f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (*(arg1 + 0x2c) s> 0)
    do
        void* ebx_1 = *(*(arg1 + 0x20) + (i << 2))
        
        if (ebx_1 != 0)
            Concurrency::details::SchedulingNode::~SchedulingNode(ebx_1)
            operator new(ebx_1)
        
        i += 1
    while (i s< *(arg1 + 0x2c))

int32_t i_1 = 0

if (*(arg1 + 0x2c) s> 0)
    do
        void* ebx_2 = *(*(arg1 + 0x24) + (i_1 << 2))
        
        if (ebx_2 != 0)
            Concurrency::details::SchedulingRing::~SchedulingRing(ebx_2)
            operator new(ebx_2)
        
        i_1 += 1
    while (i_1 s< *(arg1 + 0x2c))

_free(*(arg1 + 0x5c))
_free(*(arg1 + 0x20))
_free(*(arg1 + 0x24))
int32_t* ecx_4 = *(arg1 + 0x1c)

if (ecx_4 != 0)
    sub_6efd95(ecx_4, 3)

Concurrency::details::platform::__TlsFree(*(arg1 + 0x18))
*(arg1 + 0x18) = 0
int32_t esi = *(**(arg1 + 0x1a8) + 4)
j_sub_4033e0()
esi()
return Concurrency::details::SchedulerBase::StaticDestruction() __tailcall
