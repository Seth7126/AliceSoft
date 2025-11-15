// 函数: ?_ResolvePolicyValues@SchedulerPolicy@Concurrency@@AAEXXZ
// 地址: 0x6f5162
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

**arg1 = 0
int32_t eax_1 = j_Concurrency::details::ResourceManager::GetCoreCount()
void* result = *arg1
int32_t esi = *(result + 8)

if (esi == 0xffffffff)
    int32_t ecx = *(result + 4)
    
    if (ecx != esi)
        if (ecx u>= eax_1)
            ecx = eax_1
        
        *(result + 8) = ecx
    else
        *(result + 4) = eax_1
        result = *arg1
        *(result + 8) = eax_1
else if (*(result + 4) == 0xffffffff)
    if (esi u<= eax_1)
        esi = eax_1
    
    *(result + 4) = esi

return result
