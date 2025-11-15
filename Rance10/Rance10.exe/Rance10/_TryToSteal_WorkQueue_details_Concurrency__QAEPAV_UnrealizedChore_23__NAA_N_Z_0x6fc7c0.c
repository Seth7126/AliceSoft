// 函数: ?TryToSteal@WorkQueue@details@Concurrency@@QAEPAV_UnrealizedChore@23@_NAA_N@Z
// 地址: 0x6fc7c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7de0b0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de0b0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_1 = &data_6fc7cc
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24 = arg1
void* result = nullptr
int32_t var_20 = 0

if (Concurrency::details::_HyperNonReentrantLock::_TryAcquire(&arg1[0x1c]) == 0)
    *arg3 = 0
else
    int32_t var_8_1 = 0
    result = sub_6fc932(arg1, arg2)
    void* result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN9(arg1)
    *arg3 = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc823
return result
