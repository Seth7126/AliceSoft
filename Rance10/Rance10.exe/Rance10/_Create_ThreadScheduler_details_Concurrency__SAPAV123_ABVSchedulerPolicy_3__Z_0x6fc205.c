// 函数: ?Create@ThreadScheduler@details@Concurrency@@SAPAV123@ABVSchedulerPolicy@3@@Z
// 地址: 0x6fc205
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74b04d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fc211
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::IScheduler::VTable** eax = sub_6e810c(0x210)
struct Concurrency::IScheduler::VTable** var_14 = eax
struct Concurrency::IScheduler::VTable** result = nullptr
int32_t var_8 = 0

if (eax != 0)
    result = Concurrency::details::ThreadScheduler::ThreadScheduler(eax, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc237
return result
