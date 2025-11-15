// 函数: ___acrt_uninitialize_locale
// 地址: 0x71175c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de560
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de560 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_711768
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_7fcacc != &data_7e1740)
    ___acrt_lock(4)
    int32_t var_8_1 = 0
    data_7fcacc = __updatetlocinfoEx_nolock(&data_7fcacc, &data_7e1740)
    int32_t var_8_2 = 0xfffffffe
    result = sub_7117a5()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_7117a4
return result
