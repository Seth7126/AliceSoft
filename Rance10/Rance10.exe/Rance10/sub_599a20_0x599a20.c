// 函数: sub_599a20
// 地址: 0x599a20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e251
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t var_8_1 = 0
arg1[4] = 0xffffffff
arg1[5] = 0xffffffff
arg1[6] = 0
arg1[7] = 0
var_8_1.b = 1
arg1[0xd] = 0xf
arg1[0xc] = 0
void* eax_3

if (arg1[0xd] u< 0x10)
    eax_3 = &arg1[8]
else
    eax_3 = arg1[8]

*eax_3 = 0
sub_403590(&arg1[8], arg2, 0, 0xffffffff)
var_8_1.b = 2
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
sub_403590(&arg1[0xe], arg3, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
