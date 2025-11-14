// 函数: sub_4f8a60
// 地址: 0x4f8a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_4 = 0
int32_t arg_4
sub_4158d0(&var_38, &arg_4)
int32_t arg_8
sub_4158d0(&var_38, &arg_8)
int32_t arg_c
sub_4158d0(&var_38, &arg_c)
int32_t arg_10
sub_4158d0(&var_38, &arg_10)
int32_t arg_14
sub_4158d0(&var_38, &arg_14)
int32_t arg_18
sub_4158d0(&var_38, &arg_18)
int32_t arg_1c
sub_4158d0(&var_38, &arg_1c)
int32_t arg_20
sub_4158d0(&var_38, &arg_20)
int32_t arg_24
sub_4158d0(&var_38, &arg_24)
int32_t arg_28
sub_4158d0(&var_38, &arg_28)
int32_t arg_2c
sub_4158d0(&var_38, &arg_2c)
int32_t arg_30
sub_4158d0(&var_38, &arg_30)
void* result = sub_4a8b80(data_75d4fc + 0x174, arg3)
int32_t esi_1 = var_38
void* ebx

if (result != 0)
    char var_2c
    sub_401f60(&var_2c, (**arg2)(eax_4))
    var_4.b = 1
    
    if (((var_34 - esi_1) & 0xfffffffc) == 0x30)
        sub_50d240(sub_510440(*(result + 0x34), arg4), &var_2c, &var_38)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
else
    ebx.b = 0

if (esi_1 != 0)
    j__free(esi_1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
