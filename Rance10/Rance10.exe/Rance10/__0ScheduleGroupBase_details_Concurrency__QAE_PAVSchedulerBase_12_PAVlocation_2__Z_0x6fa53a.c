// 函数: ??0ScheduleGroupBase@details@Concurrency@@QAE@PAVSchedulerBase@12@PAVlocation@2@@Z
// 地址: 0x6fa53a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74af16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fa546
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::ScheduleGroup::Concurrency::details::ScheduleGroupBase::VTable** var_14 = arg1
int32_t var_28 = arg3
*arg1 = &Concurrency::details::ScheduleGroupBase::`vftable'{for `Concurrency::ScheduleGroup'}
arg1[1] = arg2
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t var_8 = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
Concurrency::details::ScheduleGroupBase::Initialize(arg1)
arg1[7] = Concurrency::details::SchedulerBase::GetNewScheduleGroupId(arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fa590
return arg1
