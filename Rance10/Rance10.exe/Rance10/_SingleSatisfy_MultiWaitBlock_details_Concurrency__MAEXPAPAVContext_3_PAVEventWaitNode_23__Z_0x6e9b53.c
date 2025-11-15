// 函数: ?SingleSatisfy@MultiWaitBlock@details@Concurrency@@MAEXPAPAVContext@3@PAVEventWaitNode@23@@Z
// 地址: 0x6e9b53
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = *(arg1 + 4)
int32_t* result

if (*(arg1 + 0x28) != 0)
    void* eax_1 = *(arg1 + 0x14)
    *(arg1 + 0x14) += 1
    result = eax_1 + 1

if (*(arg1 + 0x28) == 0 || result == 1)
    bool cond:1_1 = *(arg1 + 0x10) == 0
    *(arg1 + 0xc) = arg3
    
    if (not(cond:1_1))
        if (j_Concurrency::details::ResourceManager::Version() s< 3)
            Concurrency::details::platform::__DeleteTimerQueueTimer(
                Concurrency::details::GetSharedTimerQueue(), *(arg1 + 0x10), 0xffffffff)
        else
            Concurrency::details::DeleteAsyncTimerAndUnloadLibrary(*(arg1 + 0x10))
        
        if (*(arg1 + 0x14) == 1)
            Concurrency::details::MultiWaitBlock::NotifyCompletedNode(arg1)
    
    if (*(*(arg3 + 4) + 8) == 2)
    label_6e9be0:
        result = arg2
        
        if (result == 0)
            int32_t esi_2 = *(*ebx + 0xc)
            j_sub_4033e0()
            return esi_2()
        
        *result = ebx
    else
        int32_t eax_6 = 0
        int32_t* ecx_3 = *(arg3 + 4) + 8
        
        if (0 == *ecx_3)
            *ecx_3 = 1
        else
            eax_6 = *ecx_3
        
        if (eax_6 == 2)
            goto label_6e9be0
        
        result = arg2
        
        if (result != 0)
            *result = 0

return result
