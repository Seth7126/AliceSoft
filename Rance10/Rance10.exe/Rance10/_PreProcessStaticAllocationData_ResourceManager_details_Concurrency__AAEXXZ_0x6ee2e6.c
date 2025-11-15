// 函数: ?PreProcessStaticAllocationData@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6ee2e6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (*(arg1 + 8) u<= 0)
    return 

do
    int32_t* eax = *(*(arg1 + 0x54) + (i << 2))
    void* ecx = eax[4]
    
    if (*(ecx + 0xa8) u> 0)
        Concurrency::details::ResourceManager::HandleBorrowedCores(arg1, ecx, eax)
    
    i += 1
while (i u< *(arg1 + 8))
