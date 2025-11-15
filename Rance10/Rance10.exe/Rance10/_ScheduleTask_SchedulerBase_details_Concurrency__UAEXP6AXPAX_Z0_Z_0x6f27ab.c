// 函数: ?ScheduleTask@SchedulerBase@details@Concurrency@@UAEXP6AXPAX@Z0@Z
// 地址: 0x6f27ab
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()
int32_t eax_1

if (eax != 0)
    eax_1 = sub_4866a0(eax)

int32_t* edi_1

if (eax == 0 || eax_1 != arg1)
    edi_1 = *(arg1 + 0xb0)
else
    edi_1 = Concurrency::details::ContextBase::GetScheduleGroup(eax)

int32_t esi_1 = **edi_1
j_sub_4033e0()
return esi_1(arg2, arg3)
