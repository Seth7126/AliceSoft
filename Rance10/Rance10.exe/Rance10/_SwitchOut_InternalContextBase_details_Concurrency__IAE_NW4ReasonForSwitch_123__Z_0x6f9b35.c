// 函数: ?SwitchOut@InternalContextBase@details@Concurrency@@IAE_NW4ReasonForSwitch@123@@Z
// 地址: 0x6f9b35
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_c = 0
int32_t* edi = arg1[0x27]
int32_t var_2c
void* result

if (arg1[0x28] != 0)
    sub_6f98cb(arg1)
    int32_t var_10 = *(arg1[0x28] + 0xc0)
    int32_t esi_1 = *(*arg1[0x28] + 0xc)
    j_sub_4033e0()
    esi_1()
    arg1[0x28] = 0
    
    if (arg2 == 0)
        int32_t var_20_1 = arg1[3]
        int32_t esi_2 = *(*arg1[8] + 4)
        j_sub_4033e0()
        int32_t eax_5 = esi_2(var_20_1)
        char var_28_1 = 4
        var_2c = 6
        Concurrency::details::ContextBase::TraceContextEvent(var_2c.b, var_28_1, eax_5)
        Concurrency::details::ScheduleGroupSegmentBase::ReleaseInternalContext(arg1[7], arg1)
    else
        arg1[0xb]
        arg1[0xb] = 1
    
    Concurrency::details::SchedulerBase::TriggerCommitSafePoints(arg1[8], &var_10)
    sub_6f2ef2(arg1[8], 0)
    result.b = arg1[0x2c].b
    var_c = result.b
    
    if (arg2 == 0)
        arg1[0xb]
        arg1[0xb] = 1

if (arg2 == 2 || arg2 == 3)
    Concurrency::location::_Assign(&var_2c, arg1[7] + 0xc)
    sub_6face2(arg1[7], arg1)

if (arg2 != 0)
    int32_t var_20_5 = 1
    int32_t esi_3 = *(*edi + 8)
    j_sub_4033e0()
    esi_3(var_20_5)

result.b = var_c
return result
