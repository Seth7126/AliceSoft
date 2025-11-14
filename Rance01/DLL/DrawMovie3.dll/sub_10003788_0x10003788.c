// 函数: sub_10003788
// 地址: 0x10003788
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x1001e3f8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e3f8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_10003794
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = nullptr

if (arg1 u<= data_10023510)
    sub_10007437(4)
    int32_t var_8_1 = 0
    result = sub_100086f0(arg1)
    int32_t var_8_2 = 0xfffffffe
    sub_100037ce()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_100037cd
return result
