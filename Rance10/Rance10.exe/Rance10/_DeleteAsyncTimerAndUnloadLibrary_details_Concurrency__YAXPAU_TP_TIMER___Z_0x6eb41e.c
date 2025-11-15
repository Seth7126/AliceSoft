// 函数: ?DeleteAsyncTimerAndUnloadLibrary@details@Concurrency@@YAXPAU_TP_TIMER@@@Z
// 地址: 0x6eb41e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

___crtSetThreadpoolTimer(arg1, 0, 0, 0)
sub_6e7c38(arg1, 1)
sub_6e78a7(arg1)
Concurrency::details::SchedulerBase::CheckOneShotStaticDestruction()
BOOL hLibModule = data_7fc2ac

if (hLibModule == 0)
    return hLibModule

return FreeLibrary(hLibModule)
