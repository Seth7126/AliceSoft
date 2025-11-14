// 函数: sub_4c1400
// 地址: 0x4c1400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdb28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = *arg1
int32_t eax_6 = arg1[1]
void var_64
sub_4bf370(&var_64, &arg1[2])
int32_t var_4 = 0
*arg1 = *arg2
arg1[1] = arg2[1]
sub_4bf900(&arg1[2], &arg2[2])
*arg2 = var_6c
arg2[1] = eax_6
sub_4bf900(&arg2[2], &var_64)
int32_t result = sub_4b7cf0(&var_64)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
