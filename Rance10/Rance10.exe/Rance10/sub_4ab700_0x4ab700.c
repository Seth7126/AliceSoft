// 函数: sub_4ab700
// 地址: 0x4ab700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731893
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_4ab080(*arg1, arg2)

if (result == 0)
    void var_1c
    sub_4af750(&var_1c, arg2)
    int32_t var_8_1 = 0
    int32_t var_38_2 = 0
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    sub_4b1110(&var_2c, &var_1c, &ExceptionList)
    var_8_1.b = 2
    `eh vector vbase constructor iterator'(&var_1c, 0xc, 1, sub_4043e0)
    int32_t var_20_1 = 0
    int32_t var_8_2 = 3
    sub_4ac2b0(*arg1 + 4, &var_2c)
    result = sub_4ab200(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
