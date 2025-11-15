// 函数: sub_6f4889
// 地址: 0x6f4889
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xc) == 0)
    *(arg1 + 0xc) = Concurrency::details::SchedulerBase::CurrentContext()

char result = Concurrency::details::_TaskCollectionBase::_MarkCancellation(arg1)

if (result == 0)
    return result

int32_t eax_2 = *(arg1 + 4)
void* ecx_1 = *(arg1 + 0xc)
int32_t var_8_2

if ((eax_2 & 0x8000000) != 0)
    *(ecx_1 + 0x78) += 1
    var_8_2 = 2
else
    Concurrency::details::ContextBase::CancelCollection(ecx_1, eax_2 << 4 s>> 4)
    var_8_2 = 3

Concurrency::details::_TaskCollectionBase::_FinishCancelState(arg1, var_8_2)
return Concurrency::details::ContextBase::CancelStealers(*(arg1 + 0xc), arg1)
