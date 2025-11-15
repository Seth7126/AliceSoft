// 函数: ?AddVirtualProcessor@SchedulingNode@details@Concurrency@@QAEPAVVirtualProcessor@23@PAUIVirtualProcessorRoot@3@_N@Z
// 地址: 0x6f8667
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
void* eax = sub_6f09b1()
SLIST_ENTRY* eax_2 = InterlockedPopEntrySList(&arg1[0xe])
void* __offset(_SINGLE_LIST_ENTRY, -0xbc) result

if (eax_2 != 0)
    result = &eax_2[-0x2f]

if (eax_2 == 0 || result == 0)
    int32_t esi_1 = *(**arg1 + 0x5c)
    j_sub_4033e0()
    result = esi_1(arg1, arg2)
else
    int32_t esi = *(result + 0xd4)
    j_sub_4033e0()
    esi(arg1, arg2)

if (arg3 != 0)
    (result - -0xbc)->:-0x10.b = 1
    result + 0xbc = eax - 4
    *(eax + 0xa0) = result

arg1[9] += 1
Concurrency::details::ReferenceCountedQuickBitSet::InterlockedSet(*arg1 + 0x30, result + 0xbc)

if (*(*arg1 + 0x1b4) != *(*arg1 + 0x1b8) || *(*arg1 + 0x14) s<= 0)
    sub_6f8504(&arg1[0xe], result)
    Concurrency::details::VirtualProcessor::MakeAvailable(result, 1, 0)
else
    sub_6f8504(&arg1[0xe], result)
    
    if (sub_6f2ef2(*arg1, 1) != 0)
        int32_t ecx_10
        
        if (eax == 0)
            ecx_10 = *(arg1[1] + 8)
        else
            ecx_10 = sub_425af0(eax)
        
        int32_t esi_3 = *(result + 0xd8)
        j_sub_4033e0()
        esi_3(ecx_10, 0)

return result
