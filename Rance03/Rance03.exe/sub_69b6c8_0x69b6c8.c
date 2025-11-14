// 函数: sub_69b6c8
// 地址: 0x69b6c8
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x747cf0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747cf0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_1 = &data_69b6d4
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int32_t var_20 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0

while (esi s< arg4)
    arg5(arg2)
    arg1 += arg3
    arg2 += arg3
    esi += 1
    int32_t var_20_1 = esi

int32_t var_24_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = sub_69b71c(1, &__saved_ebp, esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_69b713
return result
