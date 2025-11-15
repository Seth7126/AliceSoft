// 函数: sub_575b80
// 地址: 0x575b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_42e780()
int32_t var_8_1 = 0
__builtin_memset(&arg1[2], 0, 0x20)
int32_t var_14 = 0
void* var_20
sub_42ebc0(arg1, &var_20, &var_14)
*(var_20 + 0x14) = 0
var_14 = 1
sub_42ebc0(arg1, &var_20, &var_14)
*(var_20 + 0x14) = 1
var_14 = 2
sub_42ebc0(arg1, &var_20, &var_14)
*(var_20 + 0x14) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
