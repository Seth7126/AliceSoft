// 函数: ?SearchFair_Realized@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVSchedulingRing@23@_N@Z
// 地址: 0x6fe87c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8
int32_t esi =
    Concurrency::details::SchedulingRing::GetPseudoRRNonAffineScheduleGroupSegment(arg2, &var_8)
int32_t var_c = var_8
int32_t result

while (true)
    if (esi == 0)
        result.b = 0
        break
    
    int32_t var_18_1
    
    if (arg3 == 0)
        if (Concurrency::details::ContextBase::IsBlocked(esi) != 0)
            var_18_1 = 8
        else
            esi = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, var_c, 
                arg2 + 0x60)
            continue
    else
        int32_t eax_1 = Concurrency::details::ScheduleGroupSegmentBase::GetRealizedChore(esi)
        
        if (eax_1 == 0)
            esi = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, var_c, 
                arg2 + 0x60)
            continue
        else
            var_18_1 = 2
            int32_t var_10_1 = eax_1
    
    int32_t ecx_2 = *(arg2 + 0xa0)
    int32_t eax_3 = var_8 + 1
    int32_t var_14 = esi
    result.b = 1
    *(arg2 + 0xb4) = mods.dp.d(sx.q(eax_3), ecx_2)
    *arg1 = var_18_1
    void* edi_2 = &arg1[1]
    void** esi_1 = &var_14
    *edi_2 = *esi_1
    *(edi_2 + 4) = esi_1[1]
    break

return result
