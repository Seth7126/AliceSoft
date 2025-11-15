// 函数: ?ReleaseCoresOnExistingSchedulers@ResourceManager@details@Concurrency@@AAEIPAVSchedulerProxy@23@II@Z
// 地址: 0x6ee9f5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t i = 1
int32_t result = 0

if (*(arg1 + 8) u> 1)
    do
        if (Concurrency::details::ResourceManager::ReleaseSchedulerResources(arg1, arg2, 
                *(*(*(arg1 + 0x54) + (i << 2)) + 0x10), arg4) != 0)
            result.b = 1
        
        i += 1
    while (i u< *(arg1 + 8))
    
    bool cond:0_1 = result.b == 0
    result = 0
    
    if (not(cond:0_1))
        return sub_6eed3c(arg1, arg2, arg3, 0)

return result
