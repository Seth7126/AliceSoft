// 函数: sub_60ef90
// 地址: 0x60ef90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7432d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_18 = arg1
int32_t* arg_4
int32_t* edi = arg_4
arg1[6] = edi[6]
arg1[7] = edi[7]
sub_60e780(&arg1[1])
int32_t var_8_1 = 0
*arg1 = *edi
int32_t edx_1 = edi[4] - edi[3]
arg_4 = arg1[1]
arg1[4] = arg1[3]
void* var_1c
sub_490e90(&arg1[3], &var_1c, arg1[3], edx_1 s>> 2, &arg_4)
int32_t** eax_8 = edi[1]
int32_t* result = sub_60f0d0(arg1, *eax_8, eax_8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
