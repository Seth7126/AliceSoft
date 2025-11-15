// 函数: ?_Schedule_chore@details@Concurrency@@YAHPAU_Threadpool_chore@12@@Z
// 地址: 0x6d5640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7fbed8 == __security_cookie)
    *arg1 = arg1
    BOOL eax_4 = QueueUserWorkItem(
        Concurrency::details::x952ce80a::task_scheduler_callback_xp::operator[]::task_scheduler_callback_xp, 
        arg1, WT_EXECUTEDEFAULT)
    
    if (eax_4 == 0)
        *arg1 &= eax_4
        return GetLastError() __tailcall
else
    int32_t eax_2 = ___crtCreateThreadpoolWork(
        Concurrency::details::x952ce80a::task_scheduler_callback::operator[]::task_scheduler_callback, 
        arg1, 0)
    *arg1 = eax_2
    
    if (eax_2 == 0)
        return GetLastError() __tailcall
    
    Concurrency::details::_Reschedule_chore(arg1)

return 0
