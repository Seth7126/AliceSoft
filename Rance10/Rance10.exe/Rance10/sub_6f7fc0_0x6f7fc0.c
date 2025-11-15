// 函数: sub_6f7fc0
// 地址: 0x6f7fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_8 = arg1
uint32_t var_c = arg1
uint32_t ebx = arg1
uint32_t var_8_1 = ebx
Concurrency::details::SchedulerBase::RemovePrioritizedObject(**(ebx + 0x50), ebx + 0xd4)
Concurrency::details::ReferenceCountedQuickBitSet::InterlockedClear(**(ebx + 0x50) + 0x30, 
    *(ebx + 0x90))
int32_t* eax_3 = *(ebx + 0x50) + 0x24
*eax_3 -= 1

if (*(ebx + 0xac) == 0)
    int32_t* eax_6 = **(ebx + 0x50) + 0x14
    *eax_6 -= 1

Concurrency::details::SchedulerBase::SaveRetiredVirtualProcessorStatistics(**(ebx + 0x50), ebx)

if (*(ebx + 0x60) == 0)
    Concurrency::details::ReferenceCountedQuickBitSet::InterlockedClear(**(ebx + 0x50) + 0x48, 
        *(ebx + 0x90))

*(ebx + 0x7c) = 0
int32_t* i

if (*(ebx + 0x14) - *(ebx + 0x10) s<= 0)
    i = nullptr
else
    i = Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::InternalContextBase,class Concurrency::details::_HyperNonReentrantLock>::Pop(
        ebx + 0x10)

int32_t var_28

if (i != 0)
    do
        int32_t* eax_11 = sub_425af0(&i[1])
        Concurrency::location::_Assign(&var_28, &eax_11[3])
        sub_6face2(eax_11, i)
        
        if (*(ebx + 0x14) - *(ebx + 0x10) s<= 0)
            i = nullptr
        else
            i = Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::InternalContextBase,class Concurrency::details::_HyperNonReentrantLock>::Pop(
                ebx + 0x10)
    while (i != 0)
    
    ebx = var_8_1

void* ebx_2 = **(ebx + 0x58)
int32_t esi_2 = *(***(ebx + 0x50) + 0x34)
j_sub_4033e0()
int32_t eax_17 = esi_2()
*(ebx_2 + 8)
j_sub_4033e0()
*(var_8_1 + 0x58)
(*(ebx_2 + 8))(eax_17)
int32_t* eax_18 = *(var_8_1 + 0x50)
*(var_8_1 + 0x58) = 0
int32_t var_1c_5 = *(var_8_1 + 0x88)
int32_t esi_3 = *(**eax_18 + 4)
j_sub_4033e0()
int32_t eax_20 = esi_3(var_1c_5)
char var_24 = 4
var_28 = 2
Concurrency::details::VirtualProcessor::TraceVirtualProcessorEvent(var_28.b, var_24, eax_20)

if (*(var_8_1 + 0x5c) != 0)
    sub_6f272b(*(var_8_1 + 0x5c))
    *(var_8_1 + 0x5c) = 0

return sub_6f7ebe(*(var_8_1 + 0x50) + 0x38, var_8_1, *(var_8_1 + 0x64), 1)
