// 函数: ?InternalCreateScheduleGroup@SchedulerBase@details@Concurrency@@AAEPAVScheduleGroup@3@PAVlocation@3@@Z
// 地址: 0x6f1944
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x14
int32_t (* var_c)(void* arg1) = sub_74a9e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
void* const var_38_6 = &data_6f1950
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
SLIST_ENTRY* eax = InterlockedPopEntrySList(arg1 + 0x60)
void* __offset(_SINGLE_LIST_ENTRY, -0x34) result = nullptr

if (eax != 0)
    result = &eax[-0xd]

int32_t var_8_2

if (*(arg1 + 0xc) != 0)
    int32_t var_24 = 0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    
    if (result != 0)
        int32_t* var_38_4 = &var_24
        Concurrency::details::ScheduleGroupBase::Initialize(result)
    else
        result = sub_6e810c(0x3c)
        void* __offset(_SINGLE_LIST_ENTRY, -0x34) result_2 = result
        int32_t var_8_1 = 1
        
        if (result == 0)
            result = nullptr
            var_8_2 = 0xffffffff
        else
            Concurrency::details::ScheduleGroupBase::ScheduleGroupBase(result, arg1, &var_24)
            result + 0x34 = 0
            result + 0x34 = &Concurrency::details::FairScheduleGroup::`vftable'{for `Concurrency::details::ScheduleGroupBase'}
            (result - -0x34)->:-4.b = 2
            var_8_2 = 0xffffffff
else if (result != 0)
    int32_t var_38_2 = arg2
    Concurrency::details::ScheduleGroupBase::Initialize(result)
else
    result = sub_6e810c(0x38)
    void* __offset(_SINGLE_LIST_ENTRY, -0x34) result_1 = result
    int32_t var_8 = 0
    
    if (result == 0)
        result = nullptr
        var_8_2 = 0xffffffff
    else
        Concurrency::details::ScheduleGroupBase::ScheduleGroupBase(result, arg1, arg2)
        result + 0x34 = &Concurrency::details::CacheLocalScheduleGroup::`vftable'{for `Concurrency::details::ScheduleGroupBase'}
        (result - -0x34)->:-4.b = 1
        var_8_2 = 0xffffffff
sub_6eff96(arg1 + 0x60, result)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f1a07
return result
