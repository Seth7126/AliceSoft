// 函数: sub_4a1db0
// 地址: 0x4a1db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* eax_3

if (*arg2 != 0)
    char* eax_4 = arg2
    
    do
        arg1.b = *eax_4
        eax_4 = &eax_4[1]
    while (arg1.b != 0)
    
    eax_3 = eax_4 - &eax_4[1]
else
    eax_3 = nullptr

sub_403490(&var_2c, arg2, eax_3)
int32_t var_8_1 = 0
int32_t ebx
ebx.b = sub_4a0bd0(edi - 4, &var_2c, 0, arg3, arg4, arg5, arg6)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
