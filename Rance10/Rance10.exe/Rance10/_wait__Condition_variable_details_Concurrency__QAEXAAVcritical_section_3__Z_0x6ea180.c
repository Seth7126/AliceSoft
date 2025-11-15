// 函数: ?wait@_Condition_variable@details@Concurrency@@QAEXAAVcritical_section@3@@Z
// 地址: 0x6ea180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x44
int32_t (* var_c)(void* arg1) = sub_74a4b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
void* const var_68_1 = &data_6ea18c
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::WaitBlock::VTable* var_54
Concurrency::details::TimedSingleWaitBlock::TimedSingleWaitBlock(&var_54, 0)
void var_2c
sub_6ea792(&var_2c, &arg1[1])
int32_t var_8 = 0
int32_t* var_48 = Concurrency::details::Sweep(*arg1, 1)
*arg1 = &var_48
Concurrency::critical_section::unlock(arg2)
int32_t var_8_1 = 0xffffffff
Concurrency::reader_writer_lock::scoped_lock::~scoped_lock(&var_2c)
sub_6eb772()
int32_t* result = sub_6eac66(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ea1e1
return result
