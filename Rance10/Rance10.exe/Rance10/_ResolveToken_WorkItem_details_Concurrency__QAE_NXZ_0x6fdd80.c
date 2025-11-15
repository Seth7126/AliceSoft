// 函数: ?ResolveToken@WorkItem@details@Concurrency@@QAE_NXZ
// 地址: 0x6fdd80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
void* eax_2

if (*arg1 == 8)
    eax_2 = Concurrency::details::ScheduleGroupSegmentBase::GetRealizedChore(arg1[1])
    
    if (eax_2 != 0)
        *arg1 = 2
        arg1[2] = eax_2
else if (*arg1 == 0x10)
    int32_t* ecx = arg1[2]
    
    if (ecx != 1)
        eax_2 = Concurrency::details::WorkQueue::Steal(ecx, 0)
        
        if (eax_2 != 0)
            *arg1 = 4
            arg1[2] = eax_2
    else
        uint32_t edi_1 = zx.d(
            Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Dequeue(
            arg1[1] + 0x34, &var_8))
        int32_t edi_2 = neg.d(edi_1)
        void* edi_4 = sbb.d(edi_2, edi_2, edi_1 != 0) & var_8
        
        if (edi_4 != 0)
            Concurrency::details::_UnrealizedChore::_SetDetached(edi_4, 1)
            arg1[2] = edi_4
            *arg1 = 4
int32_t result
result.b = (*arg1 & 0x18) == 0
return result
