// 函数: sub_59e2a0
// 地址: 0x59e2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72acd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, &(*U"==,=]=,=,")[3], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, &var_1c[1], 1)

char* result
void var_4c

if (ebx.b == 0)
    if (PDB1::ResetGUID(&var_4c).b == 0)
        result.b = 0
    else
        char var_48
        sub_403360(&var_48, &(*U"==,=]=,=,")[2])
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_59f280(arg1, &var_48) == 0
        char* var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48.d, &var_34[1], 1)
        
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (ebx.b != 0)
            result.b = 0
        else
            result.b = PDB1::ResetGUID(&var_4c).b != 0
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
