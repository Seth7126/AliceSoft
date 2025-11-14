// 函数: sub_10006d2a
// 地址: 0x10006d2a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4 = 8
int32_t var_8 = 0x1001e5d8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e5d8 ^ __security_cookie_1
int32_t var_2c = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_10006d36
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax = sub_10003063(data_100221d8)

if (eax != 0)
    int32_t var_8_1 = 0
    eax()
    int32_t var_8_2 = 0xfffffffe

terminate()
noreturn
