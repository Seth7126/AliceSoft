// 函数: sub_6181e0
// 地址: 0x6181e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdbf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_20 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t var_14 = 0
var_18 = sub_42f580()
int32_t var_4 = 0
sub_617d00(&var_18)
void** arg_4
void** eax_4 = sub_417ed0(&var_18, arg_4)
int32_t* ecx_1 = var_18

if (eax_4 == ecx_1)
    arg_4 = ecx_1
else
    char eax_6 = sub_40c3a0(arg_4, &eax_4[4])
    ecx_1 = var_18
    arg_4 = eax_4
    
    if (eax_6 != 0)
        arg_4 = ecx_1

void** eax_7 = arg_4
int32_t result

if (eax_7 != ecx_1)
    result = eax_7[0xa] << 4 | 5
else
    result = 0

sub_417e10(&var_18, &arg_4, *ecx_1, ecx_1)
j__free(var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
