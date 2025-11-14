// 函数: __locterm
// 地址: 0x6a7a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x748120
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x748120 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_6a7a0c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_74adfc != 0x74ae00)
    __lock(0xc)
    int32_t var_8_1 = 0
    data_74adfc = __updatetlocinfoEx_nolock(&data_74adfc, 0x74ae00)
    int32_t var_8_2 = 0xfffffffe
    result = $LN11()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a7a48
return result
