// 函数: sub_60e8f0
// 地址: 0x60e8f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7431d4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
*arg1 = *arg2
int32_t* var_1c = &arg1[1]
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_60f150(nullptr, nullptr)
int32_t var_8_1 = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t* var_30 = arg2
var_8_1.b = 1
sub_60ef90(arg1)
int32_t var_8_2 = 2
void* var_1c_1 = &arg1[8]
arg1[8] = arg2[8]
void* var_18_1 = &arg1[9]
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_44b8b0(nullptr, nullptr)
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
void* var_30_1 = &arg2[8]
var_8_2.b = 4
sub_60eed0(&arg1[8])
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
