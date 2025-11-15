// 函数: ?__ArrayUnwind@@YGXPAXIIP6EX0@Z@Z
// 地址: 0x6e8457
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x18
int32_t var_8 = 0x7dce38
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7dce38 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40 = &data_6e8463
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int32_t var_8_1 = 0
int32_t edi = arg1

while (true)
    int32_t var_20_1 = esi
    
    if (esi == arg3)
        break
    
    edi -= arg2
    arg1 = edi
    j_sub_4033e0()
    result = arg4()
    esi += 1

int32_t var_8_2 = 0xfffffffe
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6e84c1
return result
