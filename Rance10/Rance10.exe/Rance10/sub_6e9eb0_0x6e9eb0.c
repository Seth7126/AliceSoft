// 函数: sub_6e9eb0
// 地址: 0x6e9eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 0x18) == 0)
    result.b = 0
else
    int32_t eax
    int32_t edx_1
    eax, edx_1 = j_Concurrency::details::ResourceManager::Version()
    
    if (eax s< 3)
        int32_t eax_4 = Concurrency::details::platform::__CreateTimerQueueTimer(arg1 + 0x14, 
            Concurrency::details::GetSharedTimerQueue(), sub_6e98a3, arg1, arg2, 0, 
            WT_EXECUTEINTIMERTHREAD) - 1
        int32_t eax_5 = neg.d(eax_4)
        return sbb.d(eax_5, eax_5, eax_4 != 0) + 1
    
    result = Concurrency::details::RegisterAsyncTimerAndLoadLibrary(eax, edx_1, &data_6ef6b9, arg2, 
        sub_6e981a, arg1, 0)
    *(arg1 + 0x14) = result
    result.b = result != 0

return result
