// 函数: ??$?RV<lambda_9227be29367c048ad7fd93a717dcb1a1>@@AAV<lambda_a463b7b0560cfcaf9b17f27c6ef46564>@@V<lambda_ccea11b5727ccf69be64f5f5d9a08d9f>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_9227be29367c048ad7fd93a717dcb1a1>@@AAV<lambda_a463b7b0560cfcaf9b17f27c6ef46564>@@$$QAV<lambda_ccea11b5727ccf69be64f5f5d9a08d9f>@@@Z
// 地址: 0x715165
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7de6c0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de6c0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_715171
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
___acrt_lock(*arg1)
int32_t var_8_1 = 0
data_7fc9f0 = __crt_fast_encode_pointer<void (__stdcall*)(struct _RTL_CONDITION_VARIABLE*)>(**arg2)
BOOL result = EnumSystemLocalesW(sub_71511f, 1)
int32_t var_34_2 = 0x20
data_7fc9f0 = __security_cookie
BOOL result_1 = result
int32_t var_8_2 = 0xfffffffe
$LN7(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7151d7
return result
