// 函数: ?CheckForDeletion@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@AAEXXZ
// 地址: 0x6f0479
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(*(arg1 + 0x24) + 0x194) & 0xa0000000

if (result != 0xa0000000)
    Concurrency::details::ListArray<class Concurrency::details::ExternalStatistics>::DeleteElements(
        *(arg1 + 0x10))
    *(arg1 + 0x10) = 0
    result = arg1 + 0x48
    *result
    *result = 0

return result
