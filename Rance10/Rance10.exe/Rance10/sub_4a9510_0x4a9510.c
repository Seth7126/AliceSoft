// 函数: sub_4a9510
// 地址: 0x4a9510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72abf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void var_2c
int32_t eax_5

if (arg2 u> 5)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            int32_t var_8_1 = 0
            eax_5 = sub_4a96b0(sub_603290(&var_2c))
        label_4a9577:
            *arg1 = 0xa
            arg1[1] = eax_5
            sub_403320(&var_2c)
        case 1
            *arg3
            char* eax_6 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            *arg3
            sub_4a9700(sub_602ff0(), eax_6)
            sub_403320(&var_2c)
            *arg1 = 0
        case 2
            *arg3
            sub_4a9750(sub_602ff0())
            *arg1 = 0
        case 3
            *arg3
            char* eax_9 = sub_603290(&var_2c)
            int32_t var_8_3 = 2
            *arg3
            eax_5 = sub_4a9790(sub_602ff0(), eax_9)
            goto label_4a9577
        case 4
            *arg3
            void var_44
            char* eax_11 = sub_603290(&var_44)
            int32_t var_8_4 = 3
            *arg3
            char eax_13 = sub_4a97f0(sub_602ff0(), eax_11)
            *arg1 = 0x2f
            int32_t ecx_18
            ecx_18.b = eax_13 != 0
            arg1[1] = ecx_18
            sub_403320(&var_44)
        case 5
            *arg3
            char eax_15 = sub_4a9850(sub_602ff0())
            *arg1 = 0x2f
            int32_t ecx_22
            ecx_22.b = eax_15 != 0
            arg1[1] = ecx_22
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
