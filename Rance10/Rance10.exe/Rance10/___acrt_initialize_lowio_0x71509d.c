// 函数: ___acrt_initialize_lowio
// 地址: 0x71509d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x7de6a0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de6a0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_7150a9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
___acrt_lock(7)
char ebx = 0
char var_1d = 0
int32_t var_8_1 = 0

if (___acrt_lowio_ensure_fh_exists(0) == 0)
    initialize_inherited_file_handles_nolock()
    initialize_stdio_handles_nolock()
    ebx = 1
    char var_1d_1 = 1

int32_t var_8_2 = 0xfffffffe
$LN8()
int32_t result
result.b = ebx
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7150e6
return result
