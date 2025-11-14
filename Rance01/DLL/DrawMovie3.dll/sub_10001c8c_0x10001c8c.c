// 函数: sub_10001c8c
// 地址: 0x10001c8c
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_4 = 0x44
int32_t (* var_c)(void* arg1) = sub_10018fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_64 = __security_cookie ^ &var_4
void* const var_68_1 = &data_10001c98
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_2c
sub_100018a0(&var_2c, "string too long")
int32_t var_8 = 0
struct std::exception::VTable* var_54
sub_100011e0(&var_54, &var_2c)
sub_1000272b(&var_54, 0x1001eea0)
noreturn
