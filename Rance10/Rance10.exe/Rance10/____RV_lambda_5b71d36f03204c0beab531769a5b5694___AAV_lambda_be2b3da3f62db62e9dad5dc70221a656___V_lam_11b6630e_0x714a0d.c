// 函数: ??$?RV<lambda_5b71d36f03204c0beab531769a5b5694>@@AAV<lambda_be2b3da3f62db62e9dad5dc70221a656>@@V<lambda_8f9ce462984622f9bf76b59e2aaaf805>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_5b71d36f03204c0beab531769a5b5694>@@AAV<lambda_be2b3da3f62db62e9dad5dc70221a656>@@$$QAV<lambda_8f9ce462984622f9bf76b59e2aaaf805>@@@Z
// 地址: 0x714a0d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de680
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de680 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_714a19
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
___acrt_lock(*arg1)
int32_t var_8_1 = 0
replace_current_thread_locale_nolock(**arg2, nullptr)
int32_t var_8_2 = 0xfffffffe
int32_t result = $LN16(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_714a49
return result
