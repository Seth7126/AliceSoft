// 函数: ?ScheduleTask@SchedulerBase@details@Concurrency@@UAEXP6AXPAX@Z0AAVlocation@3@@Z
// 地址: 0x6f27f4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_6f09b1()
int32_t eax_1

if (eax != 0)
    eax_1 = sub_4866a0(eax)

int32_t* eax_2

if (eax == 0 || eax_1 != arg1)
    eax_2 = *(arg1 + 0xb0)
else
    eax_2 = Concurrency::details::ContextBase::GetScheduleGroup(eax)

return sub_6fb6c9(eax_2) __tailcall
