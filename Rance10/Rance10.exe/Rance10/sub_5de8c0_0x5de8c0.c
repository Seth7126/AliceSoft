// 函数: sub_5de8c0
// 地址: 0x5de8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30[0x10]
var_30[0] = 0
int32_t var_8_1 = 0
int32_t var_34
char* result
int32_t ebx

if (sub_5de3d0(&var_30, &var_34).b == 0 || var_34 != 2)
    ebx.b = 0
else
    char (* eax_3)[0x10] = &var_30
    int32_t var_44_1 = arg1
    
    if (var_1c u>= 0x10)
        eax_3 = var_30[0].d
    
    result = sub_6ca310(eax_3, 0x7942e0)
    
    if (result != 1)
        ebx.b = 0
    else
        ebx.b = result.b

if (var_1c u>= 0x10)
    sub_403160(var_30[0].d, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
