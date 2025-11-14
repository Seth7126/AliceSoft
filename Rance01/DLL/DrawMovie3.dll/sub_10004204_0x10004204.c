// 函数: sub_10004204
// 地址: 0x10004204
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x1001e418
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e418 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_10004210
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax
eax.b = arg1 != 0
uint32_t result

if (eax != 0)
    void* eax_2
    uint32_t result_1
    
    if (data_10023520 == 3)
        sub_10007437(4)
        int32_t var_8_1 = 0
        eax_2 = sub_10007f11(arg1)
        uint32_t result_2
        
        if (eax_2 == 0)
            result_1 = result_2
        else
            result_1 = *(arg1 - 4) - 9
            uint32_t result_3 = result_1
        int32_t var_8_2 = 0xfffffffe
        sub_1000429e()
    
    if (data_10023520 != 3 || eax_2 == 0)
        result_1 = HeapSize(data_100221d4, HEAP_NONE, arg1)
    
    result = result_1
else
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_10004295
return result
