// 函数: sub_69b730
// 地址: 0x69b730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 8
int32_t (* var_c)(void* arg1) = sub_6d1b5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_28 = __security_cookie ^ &var_4
int32_t* var_14 = &var_28
void* const var_2c_1 = &data_69b73c
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
sub_69adc6(arg3)
int32_t entry_ebx
return sub_69b758(&var_4, arg2, arg1, entry_ebx) __tailcall
