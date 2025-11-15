// 函数: ??$?RV<lambda_800076c951b434888f4765a74a194fcc>@@AAV<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@V<lambda_6dbb1268764f43b569ce7b67e331d33a>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_800076c951b434888f4765a74a194fcc>@@AAV<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@$$QAV<lambda_6dbb1268764f43b569ce7b67e331d33a>@@@Z
// 地址: 0x710dff
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7de520
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de520 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_710e0b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
___acrt_lock(*arg1)
int32_t var_8_1 = 0
int32_t result = <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(arg2)
int32_t result_1 = result
int32_t var_8_2 = 0xfffffffe
$LN7(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_710e3e
return result
