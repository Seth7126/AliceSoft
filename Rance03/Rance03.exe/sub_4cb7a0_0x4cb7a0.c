// 函数: sub_4cb7a0
// 地址: 0x4cb7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b60d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi
int32_t var_38 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t* eax_6 = sub_410930(&ExceptionList, arg2, &var_2c, "\r\n")
int32_t var_4 = 0
int32_t* result = sub_403110(*arg1, eax_6, nullptr, 0xffffffff)
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
