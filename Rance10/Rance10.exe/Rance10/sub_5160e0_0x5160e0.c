// 函数: sub_5160e0
// 地址: 0x5160e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738806
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_80 = 0
char var_90 = 0
sub_403590(&var_90, arg3, 0, 0xffffffff)
int32_t var_8_1 = 0
void var_78
sub_510560(&var_78, arg4)
int32_t var_8_2 = 1
int32_t* eax_4
void* ecx_3
eax_4, ecx_3 = sub_5165d0(arg2, &var_90)
int32_t* var_ac_2 = eax_4
void* var_b0_1 = &eax_4[4]
void** var_98
sub_516660(arg1, &var_98, ecx_3)
sub_5106e0(&var_78)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_90.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
