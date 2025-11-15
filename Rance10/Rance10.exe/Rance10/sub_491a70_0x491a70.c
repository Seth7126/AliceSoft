// 函数: sub_491a70
// 地址: 0x491a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f998
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_84 = 0
int32_t* result
void var_5c
void var_44
void var_2c
char eax_4
int32_t* eax_6
char eax_9
char eax_29
char eax_101

if (arg2 u> 0x20)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            eax_4 = (*(*data_7fcb70 + 8))(eax_2)
        label_491ad0:
            *arg1 = 0x2f
            int32_t ecx_1
            ecx_1.b = eax_4 != 0
            arg1[1] = ecx_1
            result = arg1
        case 1
            *arg3
            int32_t var_8_1 = 0
            eax_6 = sub_492ae0(sub_603290(&var_2c))
        label_491aff:
            *arg1 = 0xa
            arg1[1] = eax_6
            sub_403320(&var_2c)
            result = arg1
        case 2
            *arg3
            sub_492c40(sub_602ff0())
            *arg1 = 0
            result = arg1
        case 3
            *arg3
            int32_t var_8_2 = 1
            eax_9 = sub_492d10(sub_603290(&var_2c))
        label_491b46:
            *arg1 = 0x2f
            int32_t ecx_9
            ecx_9.b = eax_9 != 0
            arg1[1] = ecx_9
            sub_403320(&var_2c)
            result = arg1
        case 4
            *arg3
            int32_t var_8_3 = 2
            eax_9 = sub_492e20(sub_603290(&var_2c))
            goto label_491b46
        case 5
            eax_4 = sub_492e60(sub_603530(*arg3))
            goto label_491ad0
        case 6
            eax_4 = sub_4930e0(sub_603530(*arg3))
            goto label_491ad0
        case 7
            *arg3
            char* eax_13 = sub_603290(&var_2c)
            int32_t var_8_4 = 3
            *arg3
            eax_6 = sub_493540(eax_13, sub_602ff0(), eax_2)
            goto label_491aff
        case 8
            *arg3
            char* eax_15 = sub_603290(&var_2c)
            int32_t var_8_5 = 4
            *arg3
            eax_6 = sub_4935a0(eax_15, sub_602ff0(), eax_2)
            goto label_491aff
        case 9
            *arg3
            char* eax_17 = sub_603290(&var_2c)
            int32_t var_8_6 = 5
            *arg3
            eax_6 = sub_493620(eax_17, sub_602ff0())
            goto label_491aff
        case 0xa
            *arg3
            char* eax_19 = sub_603290(&var_2c)
            int32_t var_8_7 = 6
            *arg3
            int32_t var_98_8 = sub_602ff0()
            eax_6 = sub_493670(eax_19, sub_602ff0())
            goto label_491aff
        case 0xb
            *arg3
            char* eax_22 = sub_603290(&var_2c)
            int32_t var_8_8 = 7
            *arg3
            int32_t var_98_10 = sub_602ff0()
            int32_t eax_24 = sub_602ff0()
            int32_t eax_25 = sub_602ff0()
            int32_t eax_26 = sub_4936d0(eax_25, eax_25, eax_22, eax_24)
            *arg1 = 0xa
            arg1[1] = eax_26
            sub_403320(&var_2c)
            result = arg1
        case 0xc
            *arg3
            char* eax_27 = sub_603290(&var_2c)
            int32_t var_8_9 = 8
            *arg3
            eax_29 = sub_493730(eax_27, sub_602ff0())
        label_491cf0:
            *arg1 = 0x2f
            int32_t ecx_47
            ecx_47.b = eax_29 != 0
            arg1[1] = ecx_47
            sub_403320(&var_2c)
            result = arg1
        case 0xd
            *arg3
            char* eax_30 = sub_603290(&var_2c)
            int32_t var_8_10 = 9
            *arg3
            int32_t var_98_13 = sub_602ff0()
            eax_29 = sub_493780(eax_30, sub_602ff0())
            goto label_491cf0
        case 0xe
            *arg3
            char* eax_33 = sub_603290(&var_2c)
            int32_t var_8_11 = 0xa
            *arg3
            int32_t var_98_15 = sub_602ff0()
            int32_t eax_35 = sub_602ff0()
            int32_t eax_36 = sub_602ff0()
            int32_t ecx_58
            ecx_58.b = sub_4937e0(eax_36, eax_36, eax_33, eax_35) != 0
            arg1[1] = ecx_58
            *arg1 = 0x2f
            sub_403320(&var_2c)
            result = arg1
        case 0xf
            *arg3
            char* eax_38 = sub_603290(&var_2c)
            int32_t var_8_12 = 0xb
            *arg3
            int32_t var_98_17 = sub_602ff0()
            eax_6 = sub_493850(eax_38, sub_602ff0())
            goto label_491aff
        case 0x10
            *arg3
            char* eax_41 = sub_603290(&var_2c)
            int32_t var_8_13 = 0xc
            *arg3
            int32_t eax_42 = sub_602ff0()
            sub_603140()
            int32_t xmm0_2 = sub_4938a0(eax_41, eax_42)
            *arg1 = 0xb
            arg1[1] = xmm0_2
            sub_403320(&var_2c)
            result = arg1
        case 0x11
            *arg3
            char* eax_44 = sub_603290(&var_44)
            int32_t var_8_14 = 0xd
            *arg3
            char* eax_45 = sub_603290(&var_5c)
            var_8_14.b = 0xe
            *arg3
            int32_t eax_46 = sub_602ff0()
            var_8_14.b = 0xf
            sub_601850(arg1, sub_493900(eax_46, eax_45, &var_2c, eax_44, eax_46))
            sub_403320(&var_2c)
            sub_403320(&var_5c)
            sub_403320(&var_44)
            result = arg1
        case 0x12
            *arg3
            char* eax_48 = sub_603290(&var_44)
            int32_t var_8_15 = 0x10
            *arg3
            int32_t var_98_24 = sub_602ff0()
            int32_t eax_50 = sub_602ff0()
            int32_t eax_51 = sub_602ff0()
            int32_t eax_52 = sub_493a10(eax_51, eax_51, eax_48, eax_50)
            *arg1 = 0xa
            arg1[1] = eax_52
            sub_403320(&var_44)
            result = arg1
        case 0x13
            *arg3
            char* eax_53 = sub_603290(&var_44)
            int32_t var_8_16 = 0x11
            *arg3
            float eax_54 = sub_602ff0()
            int32_t var_78_2 = sub_603140()
            int32_t eax_55 = sub_602ff0()
            int32_t xmm0_4 = sub_493a80(eax_55, eax_55, eax_53, eax_54)
            *arg1 = 0xb
            arg1[1] = xmm0_4
            sub_403320(&var_44)
            result = arg1
        case 0x14
            *arg3
            char* eax_57 = sub_603290(&var_2c)
            int32_t var_8_17 = 0x12
            *arg3
            char* eax_58 = sub_603290(&var_5c)
            var_8_17.b = 0x13
            *arg3
            int32_t eax_59 = sub_602ff0()
            int32_t eax_60 = sub_602ff0()
            var_8_17.b = 0x14
            sub_601850(arg1, sub_493b00(eax_60, eax_58, &var_44, eax_60, eax_57, eax_59))
            sub_403320(&var_44)
            sub_403320(&var_5c)
            sub_403320(&var_2c)
            result = arg1
        case 0x15
            *arg3
            char* eax_62 = sub_603290(&var_44)
            int32_t var_8_18 = 0x15
            *arg3
            int32_t var_98_32 = sub_602ff0()
            int32_t eax_64 = sub_602ff0()
            int32_t eax_65 = sub_602ff0()
            int32_t eax_66 = sub_602ff0()
            int32_t eax_67 = sub_493d50(eax_66, eax_66, eax_62, eax_65, eax_64)
            *arg1 = 0xa
            arg1[1] = eax_67
            sub_403320(&var_44)
            result = arg1
        case 0x16
            *arg3
            char* eax_68 = sub_603290(&var_44)
            int32_t var_8_19 = 0x16
            *arg3
            float eax_69 = sub_602ff0()
            int32_t var_78_5 = sub_603140()
            int32_t eax_70 = sub_602ff0()
            int32_t eax_71 = sub_602ff0()
            int32_t xmm0_6 = sub_493dc0(eax_71, eax_71, eax_68, eax_70, eax_69)
            *arg1 = 0xb
            arg1[1] = xmm0_6
            sub_403320(&var_44)
            result = arg1
        case 0x17
            *arg3
            char* eax_73 = sub_603290(&var_2c)
            int32_t var_8_20 = 0x17
            *arg3
            char* eax_74 = sub_603290(&var_5c)
            var_8_20.b = 0x18
            *arg3
            int32_t eax_75 = sub_602ff0()
            int32_t eax_76 = sub_602ff0()
            int32_t eax_77 = sub_602ff0()
            var_8_20.b = 0x19
            sub_601850(arg1, sub_493e40(eax_77, eax_74, &var_44, eax_77, eax_76, eax_73, eax_75))
            sub_403320(&var_44)
            sub_403320(&var_5c)
            sub_403320(&var_2c)
            result = arg1
        case 0x18
            *arg3
            char* eax_79 = sub_603290(&var_44)
            int32_t var_8_21 = 0x1a
            *arg3
            int32_t var_98_40 = sub_602ff0()
            int32_t eax_82 = sub_493c10(eax_79, sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_82
            sub_403320(&var_44)
            result = arg1
        case 0x19
            *arg3
            char* eax_83 = sub_603290(&var_5c)
            int32_t var_8_22 = 0x1b
            *arg3
            char* eax_84 = sub_603290(&var_44)
            var_8_22.b = 0x1c
            *arg3
            int32_t var_98_43 = sub_602ff0()
            int32_t eax_86 = sub_493c70(eax_84, eax_83)
            *arg1 = 0xa
            arg1[1] = eax_86
            sub_403320(&var_44)
            sub_403320(&var_5c)
            result = arg1
        case 0x1a
            *arg3
            char* eax_87 = sub_603290(&var_5c)
            int32_t var_8_23 = 0x1d
            *arg3
            char* eax_88 = sub_603290(&var_44)
            var_8_23.b = 0x1e
            *arg3
            int32_t var_98_46 = sub_602ff0()
            int32_t eax_90 = sub_493ce0(eax_88, eax_87)
            *arg1 = 0xa
            arg1[1] = eax_90
            sub_403320(&var_44)
            sub_403320(&var_5c)
            result = arg1
        case 0x1b
            *arg3
            char* eax_91 = sub_603290(&var_44)
            int32_t var_8_24 = 0x1f
            *arg3
            int32_t eax_93 = sub_493f50(eax_91, sub_602ff0(), eax_2)
            *arg1 = 0xa
            arg1[1] = eax_93
            sub_403320(&var_44)
            result = arg1
        case 0x1c
            *arg3
            char* eax_94 = sub_603290(&var_44)
            int32_t var_8_25 = 0x20
            *arg3
            int32_t eax_96 = sub_493fb0(eax_94, sub_602ff0(), eax_2)
            *arg1 = 0xa
            arg1[1] = eax_96
            sub_403320(&var_44)
            result = arg1
        case 0x1d
            *arg3
            char* eax_97 = sub_603290(&var_44)
            int32_t var_8_26 = 0x21
            void* edx_38 = *arg3
            int32_t var_98_50 = sub_602ff0()
            int32_t eax_99 = sub_603500(edx_38 + 0x20)
            int32_t eax_100 = sub_602ff0()
            eax_101 = sub_494010(eax_100, eax_100, eax_97, eax_99)
        label_49231e:
            int32_t ecx_167
            ecx_167.b = eax_101 != 0
            arg1[1] = ecx_167
            *arg1 = 0x2f
            sub_403320(&var_44)
            result = arg1
        case 0x1e
            *arg3
            char* eax_102 = sub_603290(&var_44)
            int32_t var_8_27 = 0x22
            void* edx_40 = *arg3
            int32_t var_98_52 = sub_602ff0()
            int32_t eax_104 = sub_603500(edx_40 + 0x20)
            int32_t eax_105 = sub_602ff0()
            eax_101 = sub_494080(eax_105, eax_105, eax_102, eax_104)
            goto label_49231e
        case 0x1f
            *arg3
            char* eax_106 = sub_603290(&var_44)
            int32_t var_8_28 = 0x23
            void* esi_33 = *arg3 + 0x10
            int32_t var_98_54 = sub_602ff0()
            char eax_109 = sub_4940f0(eax_106, sub_603530(esi_33))
            *arg1 = 0x2f
            int32_t ecx_178
            ecx_178.b = eax_109 != 0
            arg1[1] = ecx_178
            sub_403320(&var_44)
            result = arg1
        case 0x20
            *arg3
            void var_74
            char* eax_110 = sub_603290(&var_74)
            int32_t var_8_29 = 0x24
            void* esi_34 = *arg3 + 0x10
            int32_t var_98_56 = sub_602ff0()
            char eax_113 = sub_494140(eax_110, sub_603530(esi_34))
            *arg1 = 0x2f
            int32_t ecx_184
            ecx_184.b = eax_113 != 0
            arg1[1] = ecx_184
            sub_403320(&var_74)
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
