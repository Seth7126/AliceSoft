// 函数: ___tzset
// 地址: 0x6a3330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x747f20
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747f20 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_6a333c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_75c984 == 0)
    __lock(6)
    int32_t var_8_1 = 0
    
    if (data_75c984 == 0)
        sub_6a35ae()
        data_75c984 += 1
    
    int32_t var_8_2 = 0xfffffffe
    result = $LN12()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a3376
return result
