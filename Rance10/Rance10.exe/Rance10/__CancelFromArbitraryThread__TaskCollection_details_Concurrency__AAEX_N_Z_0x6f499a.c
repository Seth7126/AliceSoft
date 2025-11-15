// 函数: ?_CancelFromArbitraryThread@_TaskCollection@details@Concurrency@@AAEX_N@Z
// 地址: 0x6f499a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1 = *(arg1 + 0x38)
char ebx = 0
int32_t result_3 = 0

while (true)
    int32_t* result = result_1
    
    if (result_1 == 0)
        result_3 = 3
    label_6f49cc:
        
        if (result_3 == 0)
            return result
    else
        void* eax_2 = result - 1
        
        if (result == 1)
            result_3 = 9
        else
            result = eax_2 - 4
            
            if (eax_2 != 4)
                goto label_6f49cc
            
            result_3 = 9
    
    int32_t result_2 = result_1
    
    if (result_2 == *(arg1 + 0x38))
        *(arg1 + 0x38) = result_3
    else
        result_2 = *(arg1 + 0x38)
    
    int32_t ecx_1 = arg1
    result_3 = result_2
    
    if (result_3 == result_1)
        char var_c_1 = 0
        
        if (result_1 == 1 || result_1 == 5)
            ebx = 1
            void* edx = *(ecx_1 + 0xc)
            var_c_1 = 1
            Concurrency::details::ContextBase::CancelCollection(edx, *(ecx_1 + 4) << 4 s>> 4)
            ecx_1 = arg1
            
            if (result_1 == 5)
                Concurrency::details::_TaskCollection::_AbortiveSweep(ecx_1, edx)
                ecx_1 = arg1
        
        int32_t var_24_3 = var_c_1.d
        result = Concurrency::details::_TaskCollection::_CancelStolenContexts(ecx_1, arg2)
        
        if (ebx != 0)
            result = arg1 + 0x38
            *result
            *result = 4
        
        return result
    
    result_1 = result_3
