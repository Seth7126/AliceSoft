// 函数: ??0LockQueueNode@details@Concurrency@@QAE@I@Z
// 地址: 0x6ea682
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] = 0
arg1[2] = 1
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
*arg1 = Concurrency::details::SchedulerBase::CurrentContext()

if (arg2 != 0xffffffff)
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = j_Concurrency::details::ResourceManager::Version()
    
    if (eax_1 s< 3)
        if (Concurrency::details::platform::__CreateTimerQueueTimer(&arg1[3], 
                Concurrency::details::GetSharedTimerQueue(), 
                Concurrency::details::LockQueueNode::DispatchNodeTimeoutTimerXP, arg1, arg2, 0, 
                WT_EXECUTEINTIMERTHREAD) == 0)
            struct std::exception::std::bad_alloc::VTable* var_1c
            std::bad_alloc::bad_alloc(&var_1c)
            void* const var_2c = &data_7db4ec
            sub_70021b(&var_1c, &data_7db4ec)
            noreturn
    else
        int32_t eax_2 = Concurrency::details::RegisterAsyncTimerAndLoadLibrary(eax_1, edx_1, 
            &data_6ef6b9, arg2, sub_6ea8e0, arg1, 0)
        arg1[3] = eax_2
        
        if (eax_2 == 0)
            struct std::exception::std::bad_alloc::VTable* var_10
            std::bad_alloc::bad_alloc(&var_10)
            void* const var_2c_1 = &data_7db4ec
            sub_70021b(&var_10, &data_7db4ec)
            noreturn

return arg1
