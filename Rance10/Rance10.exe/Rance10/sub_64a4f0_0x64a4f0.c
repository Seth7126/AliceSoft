// 函数: sub_64a4f0
// 地址: 0x64a4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7363e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void var_2c
char eax_5
char eax_7

if (arg2 u> 0xa)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            int32_t var_8_1 = 0
            eax_5 = sub_64a1f0(sub_603290(&var_2c))
        label_64a553:
            *arg1 = 0x2f
            int32_t ecx_2
            ecx_2.b = eax_5 != 0
            arg1[1] = ecx_2
            sub_403320(&var_2c)
        case 1
            *arg3
            int32_t var_8_2 = 1
            eax_5 = sub_64a300(sub_603290(&var_2c))
            goto label_64a553
        case 2
            eax_7 = sub_64a430(data_7fcbcc)
        label_64a595:
            *arg1 = 0x2f
            int32_t ecx_6
            ecx_6.b = eax_7 != 0
            arg1[1] = ecx_6
        case 3
            *arg3
            eax_7 = sub_64a730(sub_602ff0())
            goto label_64a595
        case 4
            *arg3
            eax_7 = sub_64a780(sub_602ff0())
            goto label_64a595
        case 5
            *arg3
            eax_7 = sub_64a7c0(sub_603140())
            goto label_64a595
        case 6
            *arg3
            int32_t var_8_3 = 2
            void var_44
            char eax_11 = sub_64a820(sub_603290(&var_44))
            *arg1 = 0x2f
            int32_t ecx_14
            ecx_14.b = eax_11 != 0
            arg1[1] = ecx_14
            sub_403320(&var_44)
        case 7
            eax_7 = sub_64a490(sub_603470(*arg3))
            goto label_64a595
        case 8
            eax_7 = sub_64a860(sub_603470(*arg3))
            goto label_64a595
        case 9
            eax_7 = sub_64a8a0(sub_6034c0(*arg3))
            goto label_64a595
        case 0xa
            eax_7 = sub_64a8e0(sub_603500(*arg3))
            goto label_64a595
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
