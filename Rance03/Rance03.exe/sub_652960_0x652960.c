// 函数: sub_652960
// 地址: 0x652960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_38 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_4 = 0
int32_t result
int32_t ebx

if (sub_652630(&var_2c).b == 0)
    ebx.b = 0
else
    char* eax_5 = &var_2c
    int32_t var_3c_1 = arg1
    
    if (var_18 u>= 0x10)
        eax_5 = var_2c.d
    
    result = sub_69b31c(eax_5, 0x6dcf3c)
    
    if (result != 1)
        ebx.b = 0
    else
        ebx.b = result.b

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
