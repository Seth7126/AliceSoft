// 函数: ?try_lock_for@critical_section@Concurrency@@QAE_NI@Z
// 地址: 0x6eace3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a587
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_2 = &data_6eacef
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax = sub_6e810c(0x18)
int32_t* var_14 = eax
char ebx = 0
int32_t var_8 = 0
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    esi = Concurrency::details::LockQueueNode::LockQueueNode(eax, arg2)

int32_t var_8_1 = 0xffffffff

if (sub_6eaac4(arg1, esi, 0) != 0)
    Concurrency::critical_section::_Switch_to_active(arg1, esi)
    ebx = 1

Concurrency::details::LockQueueNode::DerefTimerNode(esi)
int32_t result
result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ead3e
return result
