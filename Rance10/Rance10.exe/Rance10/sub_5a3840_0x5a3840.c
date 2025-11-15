// 函数: sub_5a3840
// 地址: 0x5a3840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73eb18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x769ccc, 0xc)
int32_t var_8_1 = 0
int32_t eax_3 = *(arg2 + 0xe8)
int32_t ebx
void* var_44

if (eax_3 == 0)
    sub_403360(&var_44, 0x769cc4)
    var_8_1.b = 1
label_5a38d8:
    sub_5a2e70(&var_44, &var_2c, arg1, &var_44)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    ebx.b = 1
else
    if (eax_3 == 1)
        sub_403360(&var_44, 0x769d0c)
        var_8_1.b = 2
        goto label_5a38d8
    
    ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
