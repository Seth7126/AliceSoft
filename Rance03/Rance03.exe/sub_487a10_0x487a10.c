// 函数: sub_487a10
// 地址: 0x487a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
var_2c = 0
sub_401ff0(&var_2c, arg2, 0, 0xffffffff)
int32_t var_4 = 0
void* eax_5 = sub_487890(arg1, arg2)

if (eax_5 != 0 && &var_2c != eax_5 + 8)
    sub_401ff0(&var_2c, eax_5 + 8, 0, 0xffffffff)

int32_t* result = sub_487610(arg1, &var_2c)

if (result != 0)
    *arg3 = (*(*result + 0x10))(eax_4)
    result = (*(*result + 0x14))()
    *arg4 = result

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
