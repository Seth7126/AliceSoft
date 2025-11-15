// 函数: sub_6f9c54
// 地址: 0x6f9c54
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 1
int32_t var_34

if (arg3 == 0)
    int32_t var_28_1 = arg1[3]
    int32_t esi_1 = *(*arg1[8] + 4)
    j_sub_4033e0()
    int32_t eax_8 = esi_1(var_28_1)
    char var_30_1 = 4
    var_34 = 6
    Concurrency::details::ContextBase::TraceContextEvent(var_34.b, var_30_1, eax_8)
    Concurrency::details::ScheduleGroupSegmentBase::ReleaseInternalContext(arg1[7], arg1)
    edi = 0
else if (arg3 != 1)
    if (arg3 == 2)
        Concurrency::location::_Assign(&var_34, arg1[7] + 0xc)
        sub_6face2(arg1[7], arg1)
    else if (arg3 == 3)
        edi = 2
void* var_18 = &arg1[1]
int32_t* ecx_7 = arg1[0x28]
void* eax_10 = arg1[8]
arg1[0x28] = 0
int32_t* eax_11 = arg1[0x27]
int32_t eax_12 = arg2
int32_t var_c = eax_12

if (eax_12 == 0)
    int32_t esi_2 = *(*ecx_7 + 4)
    j_sub_4033e0()
    var_c = esi_2()
    eax_12 = arg2

arg1[0xb]
arg1[0xb] = 1
int32_t esi_3 = *(*ecx_7 + 0x10)
j_sub_4033e0()
esi_3(eax_12)
int32_t result

if (var_c != 0)
    int32_t esi_5 = *(*eax_11 + 4)
    j_sub_4033e0()
    result = esi_5(var_c, edi)
else
    Concurrency::details::VirtualProcessor::MakeAvailable(ecx_7, 4, 1)
    Concurrency::details::SchedulerBase::DeferredGetInternalContext(eax_10)
    int32_t esi_4 = *(*eax_11 + 8)
    j_sub_4033e0()
    result = esi_4(edi)

if (arg3 == 0)
    return result

return sub_40d500()
