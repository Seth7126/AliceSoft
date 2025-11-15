// 函数: ?_Rethrow_future_exception@std@@YAXVexception_ptr@1@@Z
// 地址: 0x6d5b64
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 4
int32_t (* var_c)(void* arg1) = sub_74955e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_24 = __security_cookie ^ &var_4
void* const var_28_1 = &data_6d5b70
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
int32_t var_28 = arg1
int32_t var_2c = arg1
void arg_4
sub_696a30(&var_2c, &arg_4)
sub_696b20()
noreturn
