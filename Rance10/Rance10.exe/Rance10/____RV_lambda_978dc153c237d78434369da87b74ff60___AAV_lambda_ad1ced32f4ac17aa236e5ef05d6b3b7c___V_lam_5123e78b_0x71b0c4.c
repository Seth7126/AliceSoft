// 函数: ??$?RV<lambda_978dc153c237d78434369da87b74ff60>@@AAV<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>@@V<lambda_4a8533e2866a575feecb8298ce776b0d>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_978dc153c237d78434369da87b74ff60>@@AAV<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>@@$$QAV<lambda_4a8533e2866a575feecb8298ce776b0d>@@@Z
// 地址: 0x71b0c4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de800
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de800 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_71b0d0
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
___acrt_lock(*arg1)
int32_t var_8_1 = 0
<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>::operator()(arg2)
int32_t var_8_2 = 0xfffffffe
int32_t result = $LN14(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_71b0f8
return result
