// 函数: ?GetSharedTimerQueue@details@Concurrency@@YAPAXXZ
// 地址: 0x6e98c4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (j_Concurrency::details::ResourceManager::Version() s< 3 && data_7fc27c == 0)
    int32_t eax_1 = 0
    
    if (0 == data_7fc278)
        data_7fc278 = 1
    else
        eax_1 = data_7fc278
    
    bool cond:0_1
    
    if (eax_1 != 0)
        int32_t var_18_1 = 0
        int32_t (* var_14_1)() = sub_6eb74c
        
        while (data_7fc27c == 0)
            if (data_7fc278 != 1)
                break
            
            void var_20
            Concurrency::details::_SpinWait<1>::_SpinOnce(&var_20)
        
        cond:0_1 = data_7fc27c == 0
    else
        data_7fc27c = CreateTimerQueue()
        int32_t temp1_1 = data_7fc27c
        cond:0_1 = temp1_1 == 0
        
        if (temp1_1 == 0)
            data_7fc278
            data_7fc278 = 0
            cond:0_1 = data_7fc27c == 0
    
    if (cond:0_1)
        void var_10
        std::bad_alloc::bad_alloc(&var_10)
        sub_70021b(&var_10, &data_7db4ec)
        noreturn

return data_7fc27c
