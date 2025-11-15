// 函数: ??$?RV<lambda_995298e7d72eb4c2aab26c0585b3abe5>@@AAV<lambda_275893d493268fdec8709772e3fcec0e>@@V<lambda_293819299cbf9a7022e18b56a874bb5c>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_995298e7d72eb4c2aab26c0585b3abe5>@@AAV<lambda_275893d493268fdec8709772e3fcec0e>@@$$QAV<lambda_293819299cbf9a7022e18b56a874bb5c>@@@Z
// 地址: 0x710e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7de540
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de540 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_710e5c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
___acrt_lock(*arg1)
int32_t var_8_1 = 0
int32_t result = <lambda_275893d493268fdec8709772e3fcec0e>::operator()(arg2)
int32_t result_1 = result
int32_t var_8_2 = 0xfffffffe
$LN7(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_710e8f
return result
