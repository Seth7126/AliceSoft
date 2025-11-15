// 函数: ?AllocateSegment@FairScheduleGroup@details@Concurrency@@MAEPAVScheduleGroupSegmentBase@23@PAVSchedulingRing@23@PAVlocation@3@@Z
// 地址: 0x6f02ba
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x14
int32_t (* var_c)(void* arg1) = sub_74a86f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
void* const var_38_1 = &data_6f02c6
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::ScheduleGroupSegmentBase::Concurrency::details::FairScheduleGroupSegment::VTable
    ** result = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18 = 0
struct Concurrency::details::ScheduleGroupSegmentBase::VTable** eax = sub_6e810c(0x138)
struct Concurrency::details::ScheduleGroupSegmentBase::VTable** var_14 = eax
int32_t var_8 = 0

if (eax != 0)
    result = sub_6ef75c(eax, arg1, arg2, &var_24)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f0303
return result
