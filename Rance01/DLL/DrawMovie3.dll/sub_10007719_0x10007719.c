// 函数: sub_10007719
// 地址: 0x10007719
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x1001e638
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x1001e638 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_10007725
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = __getptd()

if ((*(result + 0x70) & data_10020d10) == 0 || *(result + 0x6c) == 0)
    sub_10007437(0xc)
    int32_t var_8_1 = 0
    void* var_20_1 = sub_100076db(result + 0x6c, data_10020538)
    int32_t var_8_2 = 0xfffffffe
    sub_10007783(&__saved_ebp)
else
    result = *(__getptd() + 0x6c)

if (result == 0)
    sub_100042d7(0x20)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10007757
return result
