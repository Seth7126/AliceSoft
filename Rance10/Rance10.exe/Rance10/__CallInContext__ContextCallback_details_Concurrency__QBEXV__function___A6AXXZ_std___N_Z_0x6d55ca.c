// 函数: ?_CallInContext@_ContextCallback@details@Concurrency@@QBEXV?$function@$$A6AXXZ@std@@_N@Z
// 地址: 0x6d55ca
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0
int32_t (* var_c)(void* arg1) = sub_74953b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
void* const var_24 = &data_6d55d6
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
void arg_4
sub_69a7f0(&arg_4)
int32_t result = ___std_close_threadpool_work@4(&arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d55ef
return result
