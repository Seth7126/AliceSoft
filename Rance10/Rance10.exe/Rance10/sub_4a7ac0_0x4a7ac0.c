// 函数: sub_4a7ac0
// 地址: 0x4a7ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
int32_t* result

if (arg2 u> 3)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            *arg3
            sub_4a9480(sub_602ff0())
            *arg1 = 0
            result = arg1
        case 1
            *arg3
            int32_t eax_6 = sub_4a7ef0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_6
            result = arg1
        case 2
            *arg3
            void var_2c
            char* eax_7 = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            *arg3
            int32_t var_60_3 = sub_602ff0()
            sub_4a7f50(eax_7, sub_602ff0())
            sub_403320(&var_2c)
            result = arg1
            *arg1 = 0
        case 3
            *arg3
            void var_44
            char* eax_10 = sub_603290(&var_44)
            int32_t var_8_2 = 1
            *arg3
            int32_t eax_11 = sub_602ff0()
            int32_t eax_13 = sub_4a8060(eax_10, sub_602ff0(), eax_11)
            *arg1 = 0xa
            arg1[1] = eax_13
            sub_403320(&var_44)
            result = arg1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
