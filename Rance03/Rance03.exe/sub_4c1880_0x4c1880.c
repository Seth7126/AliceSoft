// 函数: sub_4c1880
// 地址: 0x4c1880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be1d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = *(arg2 - 0x5c)
int32_t var_68 = *(arg2 - 0x58)
void var_64
sub_4bf370(&var_64, arg2 - 0x54)
int32_t var_4 = 0
*(arg2 - 0x5c) = *arg3
*(arg2 - 0x58) = arg3[1]
sub_4bf900(arg2 - 0x54, &arg3[2])
int32_t* eax_14 = (arg2 - arg3 - 0x5c) s/ 0x5c
sub_4c14b0(eax_14, nullptr, arg3, eax_14, &var_6c, arg4)
int32_t result = sub_4b7cf0(&var_64)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
