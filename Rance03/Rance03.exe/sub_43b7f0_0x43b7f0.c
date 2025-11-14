// 函数: sub_43b7f0
// 地址: 0x43b7f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t var_30 = __security_cookie ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_6 = sub_410930(&ExceptionList, arg1, &var_2c, U"\n")
int32_t var_4 = 0

if (eax_6[5] u>= 0x10)
    eax_6 = *eax_6

int32_t* result = sub_455870(eax_6)
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
