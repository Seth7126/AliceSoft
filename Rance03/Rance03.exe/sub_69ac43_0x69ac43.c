// 函数: sub_69ac43
// 地址: 0x69ac43
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x747c30
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x747c30 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_69ac4f
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
__lockexit()
int32_t var_8_1 = 0
int32_t result = __onexit_nolock(arg1)
int32_t result_1 = result
int32_t var_8_2 = 0xfffffffe
sub_69ac81()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_69ac7d
return result
