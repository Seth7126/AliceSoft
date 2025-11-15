// 函数: ?RemovePrioritizedObject@SchedulerBase@details@Concurrency@@QAEXPAUBoostedObject@23@@Z
// 地址: 0x6f2586
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = Concurrency::details::_ReaderWriterLock::_AcquireWrite(arg1 + 0x134)

if (*(arg2 + 0xc) == 2)
    result = Concurrency::details::List<struct Concurrency::details::BoostedObject,class Concurrency::details::CollectionTypes::NoCount>::Remove(
        arg1 + 0x130, arg2)

*(arg2 + 0xc) = 0
Concurrency::details::_ReaderWriterLock::_ReleaseWrite(arg1 + 0x134)
return result
