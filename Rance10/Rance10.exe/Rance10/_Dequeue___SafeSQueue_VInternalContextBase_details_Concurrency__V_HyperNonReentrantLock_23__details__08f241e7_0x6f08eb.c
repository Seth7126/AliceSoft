// 函数: ?Dequeue@?$SafeSQueue@VInternalContextBase@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEPAVInternalContextBase@23@XZ
// 地址: 0x6f08eb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0
int32_t (* var_c)(void* arg1) = sub_74afd7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
void* const var_24 = &data_6f08f7
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(&arg1[2])
void* result =
    Concurrency::details::SQueue<class Concurrency::details::InternalContextBase>::Dequeue(arg1)
int32_t var_8 = 0
sub_6eb703(&arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f091e
return result
