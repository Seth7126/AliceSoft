// 函数: sub_41f9a0
// 地址: 0x41f9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728da8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = (*(**(arg1 + 8) + 0x10))(arg2) + 1
int32_t* result
void var_2c

if (eax_5 u> 6)
    result = sub_403490(arg3, "???", 3)
else
    switch (eax_5)
        case 0
            result = sub_403450("(empty)")
        case 1
            result = sub_403450(0x75d294)
        case 2
            sub_409670(arg3, sub_41f7d0(arg1, &var_2c, arg2))
            result = sub_403320(&var_2c)
        case 3
            sub_409670(arg3, sub_41f890(arg1, &var_2c, arg2))
            result = sub_403320(&var_2c)
        case 4
            sub_409670(arg3, sub_41fce0(arg1, &var_2c, arg2, 0))
            result = sub_403320(&var_2c)
        case 5
            void var_44
            sub_403360(&var_44, 0x75d28c)
            int32_t var_8_1 = 0
            void var_5c
            sub_409670(arg3, sub_420170(arg1, &var_5c, (*(**(arg1 + 8) + 0x18))(arg2), &var_44))
            sub_403320(&var_5c)
            result = sub_403320(&var_44)
        case 6
            result = sub_403450("delegate")
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
