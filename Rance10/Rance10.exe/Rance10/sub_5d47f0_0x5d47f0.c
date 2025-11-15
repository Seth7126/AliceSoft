// 函数: sub_5d47f0
// 地址: 0x5d47f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_2c
int32_t* eax_4
void* ecx_2
eax_4, ecx_2 = sub_5d5d20(sub_4051e0(&var_2c, arg2), arg3)
int32_t* var_48_1 = eax_4
void* var_4c_1 = &eax_4[4]
void** var_34
sub_5d2aa0(arg1, &var_34, ecx_2)
int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
