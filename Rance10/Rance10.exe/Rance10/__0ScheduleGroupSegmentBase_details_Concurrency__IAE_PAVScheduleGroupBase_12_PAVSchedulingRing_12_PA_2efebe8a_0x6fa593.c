// 函数: ??0ScheduleGroupSegmentBase@details@Concurrency@@IAE@PAVScheduleGroupBase@12@PAVSchedulingRing@12@PAVlocation@2@@Z
// 地址: 0x6fa593
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74af68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_4 = &data_6fa59f
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::ScheduleGroupSegmentBase::VTable** var_14 = arg1
*arg1 = &Concurrency::details::ScheduleGroupSegmentBase::`vftable'
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[0xa] = 0
arg1[0xb] = &arg1[0xa]
arg1[0xc] = 0
int32_t var_8 = 0
void var_1c
char eax_1 = Concurrency::details::SchedulerBase::GetBitSet(*(arg2 + 4), &var_1c, &arg1[3])
int32_t var_30_1 = 0x40
var_8.b = 1
Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Mailbox<class Concurrency::details::_UnrealizedChore>(
    &arg1[0xd], *(arg2 + 4), eax_1, 0)
var_8.b = 3
int32_t var_18
_free(var_18)
sub_6fa128(&arg1[0x16], *(arg2 + 4), 0x100, 0x40)
var_8.b = 4
sub_6fa128(&arg1[0x2a], *(arg2 + 4), 0x100, 0x7fffffff)
arg1[0x42] = 0
arg1[0x43] = 0
var_8.b = 5
Concurrency::details::ScheduleGroupSegmentBase::Initialize(arg1, arg2, arg3, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fa650
return arg1
