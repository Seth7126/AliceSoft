// 函数: sub_6084b0
// 地址: 0x6084b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_40 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t ebx

if (sub_468d00(arg1, &var_2c) == 0)
    ebx.b = 0
else
    uint32_t var_30
    
    if (sub_40c250(&var_2c, 0x6ebbf4) == 0)
        ebx.b = 0
    else if (sub_468b20(arg1, &var_30) == 0 || var_30 != 2)
        ebx.b = 0
    else
        ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return ebx.b
