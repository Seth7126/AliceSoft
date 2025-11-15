// 函数: sub_4981e0
// 地址: 0x4981e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0
void* var_48
sub_498330(&var_48)
int32_t var_8_1 = 0
int32_t var_38
int32_t var_34

if (var_38 == 0)
    int32_t eax_4 = (*(*(arg1 + 0x1e8) + 4))(eax_2)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    int32_t var_4c = eax_4 s/ 0x64
    sub_403490(&var_30, "%d.%02d", 7)
    var_8_1.b = 1
    sub_417810(&var_4c, &var_30, arg2, &var_4c, eax_4 s% 0x64)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30.d, var_1c_1 + 1, 1)
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
    
    if (var_34 u>= 0x10)
        int32_t var_64_3 = 1
        sub_403160(var_48, var_34 + 1, 1)
else
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_403590(arg2, &var_48, 0, 0xffffffff)
    
    if (var_34 u>= 0x10)
        int32_t var_64_1 = 1
        sub_403160(var_48, var_34 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
