// 函数: __isindst
// 地址: 0x6a3380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x747f00
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747f00 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_6a338c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t eax
int32_t edx
eax, edx = __lock(6)
int32_t var_8_1 = 0
int32_t result = __isindst_nolock(eax, edx, 6, arg1)
int32_t result_1 = result
int32_t var_8_2 = 0xfffffffe
$LN7()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a33bd
return result
