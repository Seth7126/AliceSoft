// 函数: ?CreateVirtualProcessor@ThreadScheduler@details@Concurrency@@UAEPAVVirtualProcessor@23@PAVSchedulingNode@23@PAUIVirtualProcessorRoot@3@@Z
// 地址: 0x6fc276
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74b0a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fc282
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::VirtualProcessor::VTable** eax = sub_6e810c(0xe8)
struct Concurrency::details::VirtualProcessor::VTable** var_14 = eax
struct Concurrency::details::VirtualProcessor::VTable** result = nullptr
int32_t var_8 = 0

if (eax != 0)
    result = Concurrency::details::ThreadVirtualProcessor::ThreadVirtualProcessor(eax, arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc2ab
return result
