// 函数: ?SearchFair_Runnables@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVSchedulingRing@23@@Z
// 地址: 0x6fe912
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8
int32_t* edi =
    Concurrency::details::SchedulingRing::GetPseudoRRNonAffineScheduleGroupSegment(arg2, &var_8)
int32_t* var_c = var_8
int32_t* result

while (true)
    if (edi == 0)
        result.b = 0
        break
    
    int32_t esi_1 = *(*edi + 0xc)
    j_sub_4033e0()
    void* eax_1 = esi_1()
    
    if (eax_1 != 0)
        *(arg2 + 0xb4) = mods.dp.d(sx.q(var_8 + 1), *(arg2 + 0xa0))
        void var_18
        int32_t* esi_3 = Concurrency::details::WorkItem::WorkItem(&var_18, eax_1)
        result.b = 1
        *arg1 = *esi_3
        void* edi_2 = &arg1[1]
        void* esi_4 = &esi_3[1]
        *edi_2 = *esi_4
        *(edi_2 + 4) = *(esi_4 + 4)
        break
    
    edi = Concurrency::details::SchedulingRing::GetNextScheduleGroupSegment(&var_8, var_c, 
        arg2 + 0x60)

return result
