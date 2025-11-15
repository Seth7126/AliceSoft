// 函数: ??0ThreadVirtualProcessor@details@Concurrency@@QAE@PAVSchedulingNode@12@PAUIVirtualProcessorRoot@2@@Z
// 地址: 0x6fec3a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74b15b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fec46
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::VirtualProcessor::VTable** var_14 = arg1
Concurrency::details::VirtualProcessor::VirtualProcessor(arg1)
int32_t var_8 = 0
*arg1 = &Concurrency::details::ThreadVirtualProcessor::`vftable'{for `Concurrency::details::VirtualProcessor'}
sub_6f7b70(arg1, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fec6e
return arg1
