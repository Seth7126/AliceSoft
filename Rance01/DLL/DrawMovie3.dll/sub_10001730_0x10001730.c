// 函数: sub_10001730
// 地址: 0x10001730
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_100196a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t var_64 = __security_cookie ^ &var_60
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
void var_5c
sub_10001ae0(&var_5c, "vector<T> too long", 0x12)
int32_t var_c_1 = 0
struct std::exception::VTable* var_40
sub_10001110(&var_40, &var_5c)
var_40 = &std::length_error::`vftable'{for `std::logic_error'}
sub_1000272b(&var_40, 0x1001eea0)
noreturn
