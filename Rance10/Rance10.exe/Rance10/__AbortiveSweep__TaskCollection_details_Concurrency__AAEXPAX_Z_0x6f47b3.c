// 函数: ?_AbortiveSweep@_TaskCollection@details@Concurrency@@AAEXPAX@Z
// 地址: 0x6f47b3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
int32_t var_c = arg1
int32_t result_1 = 0
int32_t (* var_10)(int32_t* arg1, void* arg2) =
    Concurrency::details::_TaskCollection::_SweepAbortedChore
int32_t* var_14 = &var_c
var_c = arg1
int32_t* (* var_18)(void* arg1, int32_t* arg2) =
    Concurrency::details::_TaskCollection::_CollectionMatchPredicate
int32_t result = Concurrency::details::ContextBase::SweepUnstructured(arg2)

if (result_1 u> 0)
    void* eax = sub_6f09b1()
    void* ecx_1 = *(eax + 0x9c)
    result = result_1
    
    if (*(eax + 0x4c) == 0)
        *(ecx_1 + 0x6c) += result
    else
        *(ecx_1 + 0xc) += result

return result
