// 函数: ?AllocateSegment@CacheLocalScheduleGroup@details@Concurrency@@MAEPAVScheduleGroupSegmentBase@23@PAVSchedulingRing@23@PAVlocation@3@@Z
// 地址: 0x6f027f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a844
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f028b
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::ScheduleGroupSegmentBase::VTable** eax = sub_6e810c(0x138)
struct Concurrency::details::ScheduleGroupSegmentBase::VTable** var_14 = eax
struct Concurrency::details::ScheduleGroupSegmentBase::Concurrency::details::CacheLocalScheduleGroupSegment::VTable
    ** result = nullptr
int32_t var_8 = 0

if (eax != 0)
    result = sub_6ef722(eax, arg1, arg2, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f02b7
return result
