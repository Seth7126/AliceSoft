// 函数: sub_6f7b70
// 地址: 0x6f7b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0xc8) = 0
*(arg1 + 0xcc) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x50) = arg2
*(arg1 + 0xe0) = 1
*(arg1 + 0xd4) = 1
*(arg1 + 0x54) = *(arg2 + 4)
int32_t* eax_2 = *(arg1 + 0x50)
*(arg1 + 0xac) = 0
*(arg1 + 0x58) = arg3
*(arg1 + 8) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x6c) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xc0) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x62) = 1
void* eax_3 = *eax_2
int32_t esi = *(*arg3 + 0x10)
j_sub_4033e0()
*(arg1 + 0x88) = esi()
int32_t esi_1 = *(*arg3 + 4)
j_sub_4033e0()
int32_t eax_7 = esi_1()
int32_t var_28 = eax_7
*(arg1 + 0x8c) = eax_7
*(arg1 + 0x90) = sub_6f7b50(eax_3)
Concurrency::details::QuickBitSet::Grow(arg1 + 0xa4, 
    j_Concurrency::details::ResourceManager::GetCoreCount())
Concurrency::details::QuickBitSet::Wipe(arg1 + 0xa4)
int32_t esi_2 = *(arg1 + 0x90)
int32_t ecx_7 = *(arg1 + 0xa8)
uint32_t edx_1 = esi_2 u>> 5
*(ecx_7 + (edx_1 << 2)) |= 1 << ((esi_2 & 0x1f) u% 0x20)
int32_t var_28_2

if (*(eax_3 + 0xc) != 0)
    var_28_2 = 2
else
    var_28_2 = 1

Concurrency::details::WorkSearchContext::Reset(arg1 + 0x28, arg1, var_28_2)
int32_t esi_4 = *(***(arg1 + 0x50) + 4)
j_sub_4033e0()
int32_t eax_15 = esi_4(arg1)
void var_18
Concurrency::location::_Assign(arg1 + 0x94, 
    Concurrency::location::location(&var_18, 3, *(arg1 + 0x8c), eax_15))
int32_t esi_5 = *(arg1 + 0x90)
Concurrency::details::ReferenceCountedQuickBitSet::InterlockedSet(eax_3 + 0x48, esi_5)
Concurrency::details::SchedulerBase::ClearQuickCacheSlot(eax_3, esi_5)
int32_t var_28_7 = *(arg1 + 0x88)
int32_t esi_6 = *(***(arg1 + 0x50) + 4)
j_sub_4033e0()
return Concurrency::details::VirtualProcessor::TraceVirtualProcessorEvent(1, 4, esi_6(var_28_7))
