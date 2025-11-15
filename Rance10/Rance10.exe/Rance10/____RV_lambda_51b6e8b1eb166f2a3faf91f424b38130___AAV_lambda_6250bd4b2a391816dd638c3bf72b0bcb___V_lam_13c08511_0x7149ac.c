// 函数: ??$?RV<lambda_51b6e8b1eb166f2a3faf91f424b38130>@@AAV<lambda_6250bd4b2a391816dd638c3bf72b0bcb>@@V<lambda_0b5a4a3e68152e1d9b943535f5f47bed>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_51b6e8b1eb166f2a3faf91f424b38130>@@AAV<lambda_6250bd4b2a391816dd638c3bf72b0bcb>@@$$QAV<lambda_0b5a4a3e68152e1d9b943535f5f47bed>@@@Z
// 地址: 0x7149ac
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de660
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de660 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_2 = &data_7149b8
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
___acrt_lock(*arg1)
int32_t var_8_1 = 0
int32_t* ecx = *(**arg2 + 0x48)

if (ecx != 0)
    bool cond:0_1 = *ecx != 1
    *ecx
    *ecx -= 1
    
    if (not(cond:0_1) && ecx != 0x7e1b10)
        __free_base(ecx)

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN19(&__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7149fe
return result
