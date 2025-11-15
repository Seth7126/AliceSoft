// 函数: ___scrt_is_nonwritable_in_current_image
// 地址: 0x6e82be
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t var_8 = 0x7dcdf8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_4 = 0x7dcdf8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_6e82ca
int32_t var_8_5 = 0xfffffffe
int32_t var_c = var_8_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* result = find_pe_section(&__dos_header, arg1 - &__dos_header)

if (result == 0 || *(result + 0x24) s< 0)
    int32_t var_8_3 = 0xfffffffe
    result.b = 0
else
    int32_t var_8_2 = 0xfffffffe
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e8347
return result
