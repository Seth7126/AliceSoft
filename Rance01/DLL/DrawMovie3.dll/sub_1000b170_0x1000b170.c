// 函数: sub_1000b170
// 地址: 0x1000b170
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x1001e778
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e778 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_1000b17c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_10023540)[arg1 s>> 5]
int32_t result = 1

if (*(esi_3 + 8) == 0)
    sub_10007437(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        if (sub_1000930b(esi_3 + 0xc, 0xfa0) == 0)
            result = 0
        
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_1000b207()

if (result != 0)
    EnterCriticalSection((&data_10023540)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000b201
return result
