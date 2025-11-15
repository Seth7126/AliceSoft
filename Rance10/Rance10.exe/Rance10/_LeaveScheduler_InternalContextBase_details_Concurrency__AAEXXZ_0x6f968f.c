// 函数: ?LeaveScheduler@InternalContextBase@details@Concurrency@@AAEXXZ
// 地址: 0x6f968f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool var_5 = false
bool var_6 = false
void* esi = sub_6f92ce(arg1, &var_5, &var_6)

if (var_5 != 0)
    sub_6f981a(esi, *(arg1 + 0x1c), 0, 0)

int32_t* ecx_4 = *(arg1 + 0xa0)
void* eax_1 = *(arg1 + 0x20)
*(arg1 + 0xa0) = 0
int32_t* eax_2 = *(arg1 + 0x9c)
void* var_10 = esi

if (esi == 0)
    int32_t esi_1 = *(*ecx_4 + 4)
    j_sub_4033e0()
    var_10 = esi_1()

*(arg1 + 0x2c)
*(arg1 + 0x2c) = 1
int32_t esi_2 = *(*ecx_4 + 0x10)
j_sub_4033e0()
esi_2(esi)

if (var_10 != 0)
    int32_t esi_4 = *(*eax_2 + 4)
    j_sub_4033e0()
    esi_4(var_10, 2)
else
    Concurrency::details::VirtualProcessor::MakeAvailable(ecx_4, 4, 1)
    Concurrency::details::SchedulerBase::DeferredGetInternalContext(eax_1)
    int32_t esi_3 = *(*eax_2 + 8)
    j_sub_4033e0()
    esi_3(2)

return 0
