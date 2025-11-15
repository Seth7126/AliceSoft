// 函数: ?FindMatchingVirtualProcessor@SchedulingNode@details@Concurrency@@QAEPAVVirtualProcessor@23@PAUIVirtualProcessorRoot@3@@Z
// 地址: 0x6f876e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t edi = *(arg1 + 0x78)
int32_t esi = 0

if (edi s> 0)
    void* eax_1 = arg1 + 0x38
    void* var_8_1 = eax_1
    
    while (true)
        void* const result = sub_6efd4d(eax_1, esi)
        
        if (result != 0 && *(result + 0x58) == arg2)
            return result
        
        esi += 1
        
        if (esi s>= edi)
            break
        
        eax_1 = var_8_1

return nullptr
