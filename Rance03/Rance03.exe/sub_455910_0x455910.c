// 函数: sub_455910
// 地址: 0x455910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b7ac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t var_3c = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
void arg_8
var_38 = &arg_8
sub_469220(&var_38)
int32_t var_c_1 = 0
int32_t* var_34
int32_t* eax_5 = &var_34
int32_t var_20

if (var_20 u>= 0x10)
    eax_5 = var_34

sub_455870(eax_5)
int32_t* result = sub_455870(0x6db8d0)

if (var_20 u>= 0x10)
    result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
