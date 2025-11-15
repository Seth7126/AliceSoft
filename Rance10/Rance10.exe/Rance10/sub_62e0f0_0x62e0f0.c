// 函数: sub_62e0f0
// 地址: 0x62e0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745160
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
var_8_1.b = 1
void* var_74
void* var_5c
char var_2c
int32_t* eax_6 = sub_4079d0(
    sub_62f740(sub_62f770(&ExceptionList, arg3, &var_5c, 0, arg2), arg3, &var_2c, arg2), &var_5c, 
    &var_74, arg4)
var_8_1.b = 2
char var_44
char* ecx_4 = sub_417750(eax_6, eax_6, &var_44, &var_2c)
var_8_1.b = 3

if (*(ecx_4 + 0x14) u>= 0x10)
    ecx_4 = *ecx_4

(*(*arg3 + 4))(ecx_4)
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_60

if (var_60 u>= 0x10)
    sub_403160(var_74, var_60 + 1, 1)

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result_1
int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (result u>= 0x10)
    result = sub_403160(var_5c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
