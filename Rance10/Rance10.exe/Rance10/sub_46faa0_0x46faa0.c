// 函数: sub_46faa0
// 地址: 0x46faa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bd88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_46e7f0(arg1 + 0xc)
int32_t var_34 = 0.d
void* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
sub_405b10(&var_20, arg2, arg3 + arg2)
int32_t var_8_1 = 0
char eax_5 = sub_463cf0(arg1 + 0x18, arg1 + 0xc, &var_20, arg4)
void* edx = var_20
int32_t ebx
ebx.b = eax_5

if (edx != 0)
    sub_403160(edx, var_18 - edx, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
