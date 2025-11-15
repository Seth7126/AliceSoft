// 函数: sub_510430
// 地址: 0x510430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737e59
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = 0
arg1[1] = 0
*arg1 = sub_4321d0()
int32_t var_8_1 = 0
void* var_18 = &arg1[2]
arg1[2] = 0
arg1[3] = 0
arg1[2] = sub_429890()
var_8_1.b = 1
void* var_18_1 = &arg1[4]
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_429890()
var_8_1.b = 2
void* var_18_2 = &arg1[6]
arg1[6] = 0
arg1[7] = 0
arg1[6] = sub_429890()
var_8_1.b = 3
void* var_18_3 = &arg1[8]
arg1[8] = 0
arg1[9] = 0
arg1[8] = sub_4f2cd0()
arg1[0xa] = 0xffffffff
arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
