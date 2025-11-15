// 函数: sub_474d50
// 地址: 0x474d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72de48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_4c
sub_4691b0(&var_4c, arg1)
int32_t var_8_1 = 0

if (arg1 != arg2)
    sub_403590(arg1, arg2, 0, 0xffffffff)

if (&arg1[6] != &arg2[6])
    sub_403590(&arg1[6], &arg2[6], 0, 0xffffffff)

arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]

if (arg2 != &var_4c)
    sub_403590(arg2, &var_4c, 0, 0xffffffff)

void* var_34

if (&arg2[6] != &var_34)
    sub_403590(&arg2[6], &var_34, 0, 0xffffffff)

int32_t var_1c
arg2[0xc] = var_1c
int32_t var_18
arg2[0xd] = var_18
char* result = sub_408940(&var_4c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
