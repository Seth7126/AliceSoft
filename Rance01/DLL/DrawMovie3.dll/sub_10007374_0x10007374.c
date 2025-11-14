// 函数: sub_10007374
// 地址: 0x10007374
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x1001e618
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e618 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_10007380
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 1

if (data_100221d4 == 0)
    HANDLE eax
    uint32_t ecx_1
    int32_t edx
    eax, ecx_1, edx = __FF_MSGBANNER()
    sub_10002e04(eax, edx, ecx_1, 0x1e)
    __endthreadex(0xff)
    noreturn

int32_t result

if (*((arg1 << 3) + &data_10020330) == 0)
    void* eax_1 = sub_10004125(0x18)
    
    if (eax_1 != 0)
        sub_10007437(0xa)
        int32_t var_8_1 = 0
        
        if (*((arg1 << 3) + &data_10020330) != 0)
            sub_10003602(eax_1)
        else if (sub_1000930b(eax_1, 0xfa0) != 0)
            *((arg1 << 3) + &data_10020330) = eax_1
        else
            sub_10003602(eax_1)
            *__errno() = 0xc
            result_1 = 0
        
        int32_t var_8_2 = 0xfffffffe
        sub_1000742e()
        result = result_1
    else
        *__errno() = 0xc
        result = 0
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000742d
return result
