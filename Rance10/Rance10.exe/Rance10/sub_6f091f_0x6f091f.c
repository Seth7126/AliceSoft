// 函数: sub_6f091f
// 地址: 0x6f091f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

UnregisterWaitEx(arg1[0x77], 0xffffffff)

if (j_Concurrency::details::ResourceManager::Version() s< 3)
    Concurrency::details::platform::__DeleteTimerQueueTimer(nullptr, arg1[0x78], 0xffffffff)
else
    Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(arg1[0x78])

CloseHandle(arg1[0x76])
return sub_6f083c(arg1) __tailcall
