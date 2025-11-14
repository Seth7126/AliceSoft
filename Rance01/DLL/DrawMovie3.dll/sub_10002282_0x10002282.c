// 函数: sub_10002282
// 地址: 0x10002282
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x1001e328
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e328 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_1000228e
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_10004343()
int32_t var_8_1 = 0
int32_t result = sub_10002197(arg1)
int32_t var_8_2 = 0xfffffffe
sub_100022b8()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_100022b7
return result
