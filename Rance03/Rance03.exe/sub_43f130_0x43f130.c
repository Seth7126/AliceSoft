// 函数: sub_43f130
// 地址: 0x43f130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
int32_t ebx

if (sub_468d00(arg1, &var_34) == 0)
    ebx.b = 0
else if (sub_40c250(&var_34, 0x6db3e4) == 0)
    ebx.b = 0
else
    var_38 = 0
    
    if (sub_468b20(arg1, &var_38) == 0 || var_38 != 1)
        ebx.b = 0
    else
        ebx.b = 1

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return ebx.b
