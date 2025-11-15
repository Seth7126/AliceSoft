// 函数: sub_4dcdd0
// 地址: 0x4dcdd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3

if (arg3[5] u< 0x10)
    eax_3 = arg3
else
    eax_3 = *arg3

int32_t* eax_4 = sub_44bec0(data_7fcb48, eax_3)
int32_t* eax_5 = sub_4dd5b0(arg1, arg2)

if (eax_5 != 0)
    (*(*eax_5 + 4))(eax_2)

char* eax_6 = sub_6e810c(0x1c)
*(eax_6 + 0x14) = 0xf
*(eax_6 + 0x10) = 0
char* eax_7

if (*(eax_6 + 0x14) u< 0x10)
    eax_7 = eax_6
else
    eax_7 = *eax_6

*eax_7 = 0
int32_t* var_54

if (eax_6 != arg3)
    var_54 = arg3
    sub_403590(eax_6, var_54, 0, 0xffffffff)

int32_t var_4c_2 = arg2
*(eax_6 + 0x18) = eax_4
int32_t var_8_1 = 0
void** var_38
void* var_2c
sub_4de760(arg1 + 8, &var_38, sub_4ce600(&var_2c, var_54))
var_38[0xa] = eax_6
int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
