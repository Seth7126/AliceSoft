// 函数: ??$?RV<lambda_c9469061b39d205f0f236529d4a41659>@@AAV<lambda_b7fb1a997d3ebc0cc0186c5835178808>@@V<lambda_14b92c79d699846b5cc916cd4cf280e4>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_c9469061b39d205f0f236529d4a41659>@@AAV<lambda_b7fb1a997d3ebc0cc0186c5835178808>@@$$QAV<lambda_14b92c79d699846b5cc916cd4cf280e4>@@@Z
// 地址: 0x714a58
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de620
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de620 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_714a64
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
___acrt_lock(*arg1)
int32_t var_8_1 = 0
int32_t* eax_4 = *(**arg2 + 0x48)
*eax_4 += 1
int32_t var_8_2 = 0xfffffffe
int32_t result = sub_714a94(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_714a91
return result
