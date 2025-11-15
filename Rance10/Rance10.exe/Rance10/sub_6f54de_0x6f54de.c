// 函数: sub_6f54de
// 地址: 0x6f54de
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_1c
void var_10

if (arg2 == 0)
    std::length_error::length_error(&var_10, "pScheduler")
    var_1c = &data_7db524
else
    if (Concurrency::details::SchedulerProxy::GetCurrentThreadExecutionResource(arg1[5]) == arg1)
        void* ecx_2 = arg1[5]
        
        if (*(ecx_2 + 8) == arg2)
            return Concurrency::details::ResourceManager::RemoveExecutionResource(*(ecx_2 + 0xc), 
                arg1)
    
    Concurrency::improper_scheduler_attach::improper_scheduler_attach(&var_10)
    var_1c = &data_7dea00

sub_70021b(&var_10, var_1c)
noreturn
