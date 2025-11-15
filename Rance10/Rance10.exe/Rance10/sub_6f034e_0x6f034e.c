// 函数: sub_6f034e
// 地址: 0x6f034e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()

if (eax != 0)
    if (*(eax + 0x1c) == arg1)
        void var_10
        Concurrency::unsupported_os::unsupported_os(&var_10)
        sub_70021b(&var_10, 0x7dd680)
        noreturn
    
    if (*(eax + 0x4c) == 0)
        Concurrency::details::InternalContextBase::LeaveScheduler(eax - 4)
    
    Concurrency::details::ContextBase::ClearContextTls()

sub_6f206d(arg1)
void* result = Concurrency::details::SchedulerBase::GetExternalContext(arg1, arg2)
Concurrency::details::ContextBase::PushContextToTls(result, eax)
return result
