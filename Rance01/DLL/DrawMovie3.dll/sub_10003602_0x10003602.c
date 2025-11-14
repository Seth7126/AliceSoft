// 函数: sub_10003602
// 地址: 0x10003602
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x1001e3b8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e3b8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_1000360e
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    void* lpMem
    
    if (data_10023520 != 3)
        lpMem = arg1
    label_1000366a:
        result = HeapFree(data_100221d4, HEAP_NONE, lpMem)
        
        if (result == 0)
            struct _EXCEPTION_REGISTRATION_RECORD*** eax_1 = __errno()
            result = sub_10003c45(GetLastError())
            *eax_1 = result
    else
        sub_10007437(4)
        int32_t var_8_1 = 0
        void* eax = sub_10007f11(arg1)
        
        if (eax != 0)
            sub_10007f41(eax, arg1)
        
        int32_t var_8_2 = 0xfffffffe
        result = sub_10003658()
        
        if (eax == 0)
            lpMem = arg1
            goto label_1000366a

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_1000368f
return result
