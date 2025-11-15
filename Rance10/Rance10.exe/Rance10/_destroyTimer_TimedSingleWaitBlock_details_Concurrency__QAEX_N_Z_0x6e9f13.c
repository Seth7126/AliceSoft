// 函数: ?destroyTimer@TimedSingleWaitBlock@details@Concurrency@@QAEX_N@Z
// 地址: 0x6e9f13
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x18) == 0)
    return 

if (j_Concurrency::details::ResourceManager::Version() s< 3)
    int32_t eax_1
    eax_1.b = arg2 == 0
    Concurrency::details::platform::__DeleteTimerQueueTimer(
        Concurrency::details::GetSharedTimerQueue(), *(arg1 + 0x14), eax_1 - 1)
else if (arg2 != 0 && *(arg1 + 0x14) != 0)
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(*(arg1 + 0x14))
