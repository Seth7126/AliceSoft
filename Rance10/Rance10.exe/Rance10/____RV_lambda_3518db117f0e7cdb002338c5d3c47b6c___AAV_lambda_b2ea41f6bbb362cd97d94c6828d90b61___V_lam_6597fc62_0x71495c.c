// 函数: ??$?RV<lambda_3518db117f0e7cdb002338c5d3c47b6c>@@AAV<lambda_b2ea41f6bbb362cd97d94c6828d90b61>@@V<lambda_abdedf541bb04549bc734292b4a045d4>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_3518db117f0e7cdb002338c5d3c47b6c>@@AAV<lambda_b2ea41f6bbb362cd97d94c6828d90b61>@@$$QAV<lambda_abdedf541bb04549bc734292b4a045d4>@@@Z
// 地址: 0x71495c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de640
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de640 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_2 = &data_714968
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
___acrt_lock(*arg1)
int32_t var_8_1 = 0
replace_current_thread_locale_nolock(**arg2, **arg2[1])
int32_t var_8_2 = 0xfffffffe
int32_t result = $LN16(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_71499d
return result
