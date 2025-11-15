// 函数: sub_5d8bd0
// 地址: 0x5d8bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74144b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0xbf800000
arg1[4] = 0
arg1[5] = 0x3be56042
arg1[6] = 2
int32_t* var_2c = arg1
var_28 = nullptr
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
sub_422540(&arg1[7], 4, &var_28)
int32_t var_8_1 = 0
var_28.b = 0
int32_t* var_38_1 = var_28
int128_t var_24 = data_79a9f0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
sub_452440(&arg1[0xa], &var_24, &var_14)
arg1[0xd] = 0x3f000000
arg1[0xe] = 0x3dcccccd
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return arg1
