// 函数: sub_59e640
// 地址: 0x59e640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, &(*U"==,=]=,=,")[5], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, &var_18[1], 1)

char* result
int32_t var_48

if (ebx.b == 0)
    if (PDB1::ResetGUID(&var_48).b == 0)
        result.b = 0
    else
        char var_44
        sub_403360(&var_44, &(*U"=,,,,,{,==},},======,")[0x14])
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_59f280(arg1, &var_44) == 0
        char* var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, &var_30[1], 1)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_4c
        
        if (ebx.b != 0)
            result.b = 0
        else if (PDB1::ResetGUID(&var_4c).b == 0)
            result.b = 0
        else
            result.b = 1
            *(arg2 + 0x1a8) = var_48
            *(arg2 + 0x1b4) = var_4c
else
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
