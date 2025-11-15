// 函数: sub_6c67c0
// 地址: 0x6c67c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_2c
int32_t ebx
ebx.b = sub_67edf0(sub_5f20c0(&var_2c, arg2), arg1).b
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

BOOL result

if (ebx.b != 0)
    result = *arg1
    
    if (result != arg1[1])
        arg1[3] = result
        arg1[4] = arg1[1]
    else
        arg1[3] = 0
        arg1[4] = 0
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
