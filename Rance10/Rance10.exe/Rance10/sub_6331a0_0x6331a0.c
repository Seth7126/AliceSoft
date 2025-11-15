// 函数: sub_6331a0
// 地址: 0x6331a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74589b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_9c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *arg2

if (eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void var_90
sub_632960(&var_90, arg4, arg5, &arg2[1], eax_3, *(eax_3 + 0x1c), *(eax_3 + 0x14), 0)
int32_t var_8_1 = 0
int32_t ebx
ebx.b = sub_6335d0(&var_90, arg3, true)
void* var_50

if (var_50 != 0)
    int32_t var_48
    sub_403160(var_50, (var_48 - var_50) s>> 3, 8)
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0

void var_70
sub_6328f0(&var_70)
sub_6328f0(&var_90)
int32_t eax_6
eax_6.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
