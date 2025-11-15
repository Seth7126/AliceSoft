// 函数: sub_47f050
// 地址: 0x47f050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
char eax_9

if (arg2 u> 0xa)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            void var_2c
            char* eax_4 = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            *arg3
            int32_t eax_5 = sub_602ff0()
            int32_t eax_6 = sub_602ff0()
            sub_47f230(eax_6, eax_4, eax_6, eax_5)
            sub_403320(&var_2c)
            *arg1 = 0
        case 1
            *arg3
            int32_t eax_7 = sub_602ff0()
            sub_47f280(sub_602ff0(), eax_7)
            *arg1 = 0
        case 2
            sub_47f2c0(eax_2)
            *arg1 = 0
        case 3
            sub_47f300(eax_2)
            *arg1 = 0
        case 4
            sub_47f340()
            *arg1 = 0
        case 5
            sub_47f3f0(eax_2)
            *arg1 = 0
        case 6
            eax_9 = sub_47f430(eax_2)
        label_47f148:
            *arg1 = 0x2f
            int32_t ecx_10
            ecx_10.b = eax_9 != 0
            arg1[1] = ecx_10
        case 7
            int32_t var_8_2 = 1
            void var_44
            sub_601850(arg1, sub_47f470(&var_44))
            sub_403320(&var_44)
        case 8
            sub_47f490(eax_2)
            *arg1 = 0
        case 9
            eax_9 = sub_47f4d0(eax_2)
            goto label_47f148
        case 0xa
            eax_9 = sub_47f510(eax_2)
            goto label_47f148
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
