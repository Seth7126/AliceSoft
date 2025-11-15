// 函数: sub_498330
// 地址: 0x498330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730110
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, "Version.txt", 0xb)
var_8_1.b = 1
int32_t ebx
ebx.b = sub_5f2210(&var_48, &var_30) == 0

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (ebx.b == 0)
    sub_4056a0(arg1, &var_30)
    
    if (var_1c u>= 0x10)
        int32_t var_5c_3 = 1
        sub_403160(var_30.d, var_1c + 1, 1)
else if (var_1c u>= 0x10)
    int32_t var_5c_1 = 1
    sub_403160(var_30.d, var_1c + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
