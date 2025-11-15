// 函数: sub_6f9e4c
// 地址: 0x6f9e4c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[0x2b] += 1

if (arg1[0x2b] == 1)
    void* edi_1 = arg1[8]
    int32_t esi_1 = *(arg1[0x28] + 0x90)
    Concurrency::details::ReferenceCountedQuickBitSet::InterlockedSet(edi_1 + 0x3c, esi_1)
    Concurrency::details::SchedulerBase::ClearQuickCacheSlot(edi_1, esi_1)

int32_t eax_2 = arg1[0x2b]

if (eax_2 u>= 0x100)
    if (eax_2 == 0x100)
        void* ecx_2 = arg1[0x28]
        *(arg1 + 0xb2) = 1
        Concurrency::details::VirtualProcessor::MakeAvailable(ecx_2, 2, 1)
        return sub_6f7a5c(arg1[0x28], arg1)
    
    if ((*(arg1 + 0xb3) & 2) == 0)
        sub_6f2fa1(arg1[8], 1)
        
        while (sub_6f79ff(arg1[0x28], arg1) == 0)
            int32_t esi_3 = *(*arg1 + 0x20)
            j_sub_4033e0()
            esi_3()
        
        int32_t result = sub_6f2fa1(arg1[8], 0)
        bool cond:1_1 = arg1[0x2b] u<= 0
        *(arg1 + 0xb2) = 0
        
        if (not(cond:1_1))
            result = Concurrency::details::ReferenceCountedQuickBitSet::InterlockedClear(
                arg1[8] + 0x3c, *(arg1[0x28] + 0x90))
        
        arg1[0x2b] = 0
        return result
    
    arg1[0x2b] = eax_2 - 1

int32_t esi_2 = *(*arg1[0x27] + 0xc)
j_sub_4033e0()
return esi_2()
