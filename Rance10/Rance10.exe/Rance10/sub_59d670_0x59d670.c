// 函数: sub_59d670
// 地址: 0x59d670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e4e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, &(*U"{,,,},},==,==,,,=,=,")[9], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, &var_1c[1], 1)

char* result

if (ebx.b == 0)
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48[0x10]
    var_48[0] = 0
    int32_t var_8_3 = 1
    int32_t var_4c = 0
    
    if (sub_5de3d0(&var_48, &var_4c).b == 0 || var_4c != 5)
        ebx.b = 0
    else
        arg3(&var_48)
        ebx.b = 1
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48[0].d, var_34_1 + 1, 1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
