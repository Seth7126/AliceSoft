// 函数: ?GetFreeThreadProxyFactory@ThreadProxyFactoryManager@details@Concurrency@@QAEPAVFreeThreadProxyFactory@23@XZ
// 地址: 0x6f706f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74ad9a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f707b
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 == 0)
    void* var_14_1 = &arg1[3]
    sub_6eaa5e(&arg1[3])
    int32_t var_8 = 0
    
    if (*arg1 == 0)
        *arg1 = Concurrency::details::FreeThreadProxyFactory::CreateFactory(arg1)
    
    int32_t var_8_1 = 1
    sub_6eabaa(&arg1[3])

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f70b6
return *arg1
