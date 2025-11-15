// 函数: ___tzset
// 地址: 0x71634e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x7de700
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de700 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_71635a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = data_7fcac4

if (result == 0)
    ___acrt_lock(6)
    int32_t var_8_1 = 0
    
    if (data_7fcac4 == 0)
        tzset_nolock()
        data_7fcac4 += 1
    
    int32_t var_8_2 = 0xfffffffe
    result = sub_716396()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_716395
return result
