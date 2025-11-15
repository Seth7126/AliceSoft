// 函数: ?SearchFair_Unrealized@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVSchedulingRing@23@_N@Z
// 地址: 0x6fe994
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
    void* ebx_1
    
    if (arg3 == 0)
        ebx_1 = Concurrency::details::ScheduleGroupSegmentBase::LocateUnrealizedChores(esi)
        
        if (ebx_1 != 0)
            var_18_1 = 0x10
        else
            esi = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, var_c, 
                arg2 + 0x60)
            continue
    else
        ebx_1 = Concurrency::details::ScheduleGroupSegmentBase::StealUnrealizedChore(esi, 0)
        
        if (ebx_1 == 0)
            esi = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, var_c, 
                arg2 + 0x60)
            continue
        else
            var_18_1 = 4
    
    int32_t ecx_2 = *(arg2 + 0xa0)
    int32_t eax_3 = var_8 + 1
    int32_t var_14 = esi
    void* var_10_1 = ebx_1
    result.b = 1
    *(arg2 + 0xb4) = mods.dp.d(sx.q(eax_3), ecx_2)
    *arg1 = var_18_1
    void* edi_2 = &arg1[1]
    int32_t* esi_1 = &var_14
    *edi_2 = *esi_1
    *(edi_2 + 4) = esi_1[1]
    break

return result
