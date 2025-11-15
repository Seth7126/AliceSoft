// 函数: ?FreeLibraryAndDestroyThread@details@Concurrency@@YAXK@Z
// 地址: 0x6eb467
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = data_7fc2a8 != 1
HMODULE hLibModule = data_7fc2a8
data_7fc2a8 -= 1

if (not(cond:0))
    Concurrency::details::SchedulerBase::CheckOneShotStaticDestruction()
    hLibModule = data_7fc2ac
    
    if (hLibModule != 0)
        FreeLibraryAndExitThread(hLibModule, arg1)
        noreturn

return hLibModule
