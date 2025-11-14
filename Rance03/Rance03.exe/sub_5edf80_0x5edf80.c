// 函数: sub_5edf80
// 地址: 0x5edf80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbbb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_esi
int32_t var_30 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = sub_5ed6b0(&var_28)
int32_t var_4 = 0

if (*(ecx + 0x14) u>= 0x10)
    ecx = *ecx

int32_t result = (*(*arg1 + 4))(ecx)
int32_t var_14

if (var_14 u>= 0x10)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
