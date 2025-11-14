// 函数: sub_456a00
// 地址: 0x456a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5

if (arg2[5] u< 0x10)
    eax_5 = arg2
else
    eax_5 = *arg2

int32_t var_4 = 0
int32_t* result =
    sub_403110(arg1 + 4, sub_410930(sub_455910(eax_5), arg2, &var_2c, \n"), nullptr, 0xffffffff)
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
