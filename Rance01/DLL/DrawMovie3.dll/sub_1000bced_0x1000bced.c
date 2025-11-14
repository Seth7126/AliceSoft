// 函数: sub_1000bced
// 地址: 0x1000bced
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x1001e820
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e820 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_1000bcf9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 != 0xfffffffe)
    int32_t esi_3
    
    if (arg1 s>= 0 && arg1 u< data_10023524)
        esi_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_10023524
            || (sx.d(*((&data_10023540)[arg1 s>> 5] + esi_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        sub_100020e4(0, 0, 0, 0, 0)
        result = 0xffffffff
    else
        sub_1000b170(arg1)
        int32_t var_8_1 = 0
        int32_t result_1
        
        if ((*((&data_10023540)[arg1 s>> 5] + esi_3 + 4) & 1) == 0)
            *__errno() = 9
            result_1 = 0xffffffff
        else
            result_1 = sub_1000bc51(arg1)
        
        int32_t var_8_2 = 0xfffffffe
        sub_1000bdb0(&__saved_ebp)
        result = result_1
else
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000bdaf
return result
