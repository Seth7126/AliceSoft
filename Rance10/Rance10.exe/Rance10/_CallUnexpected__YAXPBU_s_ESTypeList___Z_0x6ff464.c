// 函数: ?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z
// 地址: 0x6ff464
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 4
int32_t (* var_c)(void* arg1) = sub_74b176
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
int32_t var_24 = __security_cookie ^ &var_4
int32_t* var_14 = &var_24
void* const var_28 = &data_6ff470
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(sub_702f40() + 0x1c) != 0)
    _terminate()
    noreturn

int32_t var_8 = 0
sub_702f08()
noreturn
