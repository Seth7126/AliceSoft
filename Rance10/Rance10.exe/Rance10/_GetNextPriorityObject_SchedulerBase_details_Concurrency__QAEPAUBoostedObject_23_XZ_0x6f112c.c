// 函数: ?GetNextPriorityObject@SchedulerBase@details@Concurrency@@QAEPAUBoostedObject@23@XZ
// 地址: 0x6f112c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

Concurrency::details::_ReaderWriterLock::_AcquireWrite(arg1 + 0x134)
void* result = Concurrency::details::List<struct Concurrency::details::BoostedObject,class Concurrency::details::CollectionTypes::NoCount>::RemoveHead(
    arg1 + 0x130)

if (result != 0)
    *(result + 0xc) = 1

Concurrency::details::_ReaderWriterLock::_ReleaseWrite(arg1 + 0x134)
return result
