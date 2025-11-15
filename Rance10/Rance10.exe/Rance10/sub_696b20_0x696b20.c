// 函数: sub_696b20
// 地址: 0x696b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = __security_cookie ^ &var_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void arg_4
__ExceptionPtrRethrow(&arg_4)
noreturn
