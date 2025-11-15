// 函数: sub_4afc30
// 地址: 0x4afc30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731d69
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_14 = 0
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
int32_t var_8_2 = 1
void* var_24
sub_4b0ce0(arg3, sub_4af750(&var_24, arg2))
var_8_2.b = 0
void* ecx_2 = var_24
int32_t var_1c

if (ecx_2 != 0)
    sub_403160(ecx_2, (var_1c - ecx_2) s>> 2, 4)

int32_t var_8_3 = 2
sub_4b0ce0(arg3, sub_4af750(&var_24, arg4))
void* ecx_5 = var_24

if (ecx_5 != 0)
    sub_403160(ecx_5, (var_1c - ecx_5) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
