// 函数: sub_632960
// 地址: 0x632960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7457fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
sub_632ac0(arg1)
int32_t var_8_1 = 0
sub_632ac0(&arg1[8])
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
var_8_1.b = 2
arg1[0x13] = 0
arg1[0x14] = arg3
arg1[0x15] = arg2
arg1[0x17] = arg7
arg1[0x16] = arg5
arg1[0x18] = arg8
arg1[0x19].b = 0
arg1[0x1a] = arg6
char eax_7

if ((*(arg5 + 8) & 8) == 0 || (arg8.b & 0x10) != 0)
    eax_7 = 0
else
    eax_7 = 1

arg1[0x1b].b = eax_7
arg1[0x1c] = arg4
sub_632b30(&arg1[0x10], *(arg5 + 0x18))
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
