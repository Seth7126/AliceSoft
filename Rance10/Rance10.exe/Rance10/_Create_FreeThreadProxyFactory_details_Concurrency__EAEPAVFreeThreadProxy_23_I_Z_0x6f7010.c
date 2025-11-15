// 函数: ?Create@FreeThreadProxyFactory@details@Concurrency@@EAEPAVFreeThreadProxy@23@I@Z
// 地址: 0x6f7010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74ad71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f701c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::IThreadProxy::Concurrency::details::ThreadProxy::VTable** eax = sub_6e810c(0x44)
struct Concurrency::IThreadProxy::Concurrency::details::ThreadProxy::VTable** var_14 = eax
struct Concurrency::details::ThreadProxy::Concurrency::details::FreeThreadProxy::VTable** result =
    nullptr
int32_t var_8 = 0

if (eax != 0)
    result = Concurrency::details::FreeThreadProxy::FreeThreadProxy(eax, arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f7042
return result
