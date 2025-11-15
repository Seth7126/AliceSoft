// 函数: sub_6f01c6
// 地址: 0x6f01c6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg2
struct std::exception::VTable** eax

if (ecx == 0)
    struct std::exception::VTable* var_18
    std::length_error::length_error(&var_18, "ppVirtualProcessorRoots")
    void* const __saved_esi_1 = &data_7db524
    eax = &var_18
else
    if (arg3 u>= 1)
        int32_t result = 0
        int32_t result_1 = 0
        
        if (arg3 != 0)
            do
                int32_t* eax_1 = *(ecx + (result << 2))
                int32_t esi_1 = **eax_1
                j_sub_4033e0()
                int32_t eax_3 = esi_1()
                
                if (*(*(*(arg1 + 0x24) + (eax_3 << 2)) + 0xbc) == 0)
                    Concurrency::details::SchedulingRing::Activate(*(*(arg1 + 0x24) + (eax_3 << 2)))
                
                Concurrency::details::SchedulingNode::AddVirtualProcessor(
                    *(*(arg1 + 0x20) + (eax_3 << 2)), eax_1, 0)
                *(arg1 + 0x14) += 1
                ecx = arg2
                result = result_1 + 1
                result_1 = result
            while (result u< arg3)
        
        return result
    
    struct std::exception::VTable* var_24
    std::length_error::length_error(&var_24, "count")
    void* const __saved_esi = &data_7db524
    eax = &var_24

sub_70021b(eax, &data_7db524)
noreturn
