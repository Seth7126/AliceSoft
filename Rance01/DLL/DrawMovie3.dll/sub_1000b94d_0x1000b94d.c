// 函数: sub_1000b94d
// 地址: 0x1000b94d
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x1001e7e0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e7e0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_1000b959
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xffffffff
int32_t eax
eax.b = arg1 != 0
int32_t result

if (eax != 0)
    if ((arg1[3].b & 0x40) == 0)
        sub_10009e9c(arg1)
        int32_t var_8_1 = 0
        result_1 = sub_1000b8d6(arg1)
        int32_t var_8_2 = 0xfffffffe
        sub_1000b9c1(arg1)
    else
        arg1[3] = 0
    
    result = result_1
else
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000b99b
return result
