// 函数: sub_4d95b0
// 地址: 0x4d95b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t var_30 = 0
char var_40 = 0
var_4.b = 1
uint32_t var_48 = 0
uint32_t var_44 = 0
int32_t ebx

if (sub_468d00(arg3, &var_28) == 0)
    ebx.b = 0
else if (sub_468d00(arg3, &var_40) == 0)
    ebx.b = 0
else if (sub_50b440(arg1, arg2, arg3) == 0)
    ebx.b = 0
else if (sub_468b20(arg3, &var_48) == 0)
    ebx.b = 0
else if (sub_468b20(arg3, &var_44) == 0)
    ebx.b = 0
else
    sub_50b7b0(&arg1[0xc], &var_28, var_48, var_44, &var_40)
    ebx.b = 1

if (0xf u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return ebx.b
