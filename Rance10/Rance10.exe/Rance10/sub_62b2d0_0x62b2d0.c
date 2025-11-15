// 函数: sub_62b2d0
// 地址: 0x62b2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744dbc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_58 = arg3
int32_t var_54 = 0
int32_t* var_5c = arg3
int32_t var_50 = 0xa
int32_t var_4c = arg2
int32_t var_8_1 = 1
int32_t var_3c = 0xa
int32_t var_38 = arg4
var_8_1.b = 2
void* ecx = data_7fcbb0
int32_t var_28 = 0xc
int32_t var_20 = 0xffffffff
int32_t eax_4

if (ecx != 0)
    int32_t var_70_1 = arg5
    eax_4 = sub_621930(ecx)
    int32_t var_20_1 = eax_4

if (ecx == 0 || eax_4 s< 0)
    int32_t var_28_1 = 0xffffffff

int32_t var_8_2 = 3
sub_6146e0(arg3, 0, &var_50, &var_14)
int32_t var_54_1 = 1
var_8_2.b = 0
`eh vector vbase constructor iterator'(&var_50, 0x14, 3, sub_601b50)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(var_14 ^ &__saved_ebp)
return arg3
