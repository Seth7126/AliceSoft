// 函数: sub_59d450
// 地址: 0x59d450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, &(*U"=,,,,,{,==},},======,")[0xe], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_30) == 0

if (var_1c u>= 0x10)
    sub_403160(var_30.d, &var_1c[1], 1)

char* result

if (ebx.b == 0)
    int32_t var_38
    result = sub_5de8c0(&var_38)
    
    if (result.b == 0)
        result.b = 0
    else
        char* var_34 = nullptr
        char eax_5 = sub_5de720(arg1, &(*U"=,,,,,{,==},},======,")[0xd])
        
        if (eax_5 != 0)
            result = sub_5de8c0(&var_34)
        
        if (eax_5 != 0 && result.b == 0)
            result.b = 0
        else
            *(arg2 + 0x40) = var_38
            *(arg2 + 0x44) = var_34
            result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
