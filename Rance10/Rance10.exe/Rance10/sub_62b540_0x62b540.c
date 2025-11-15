// 函数: sub_62b540
// 地址: 0x62b540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744f13
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
void var_5c
void var_44
void var_2c
int32_t eax_26
char eax_42
int32_t* eax_93

if (arg2 u> 0x23)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            int32_t eax_5 = sub_62db30(sub_603500(*arg3))
            *arg1 = 0xa
            arg1[1] = eax_5
        case 1
            int32_t xmm0_1 = sub_62dc20(sub_603500(*arg3))
            *arg1 = 0xb
            arg1[1] = xmm0_1
        case 2
            char* eax_9 = sub_62dd10(sub_603500(*arg3))
            *arg1 = 0xa
            arg1[1] = eax_9
        case 3
            char* eax_11 = sub_62dd50(sub_603500(*arg3))
            *arg1 = 0xa
            arg1[1] = eax_11
        case 4
            int32_t eax_13 = (**sub_603500(*arg3))(eax_2)
            
            if (eax_13 != 0)
                bool cond:2_1 = *eax_13 == 0
                *arg1 = 0x2f
                int32_t eax_14
                eax_14.b = cond:2_1
                arg1[1] = eax_14
            else
                *arg1 = 0x2f
                arg1[1] = 1
        case 5
            void* edi_1 = *arg3
            int32_t eax_15 = sub_602ff0()
            sub_62dd70(sub_603500(edi_1), eax_15)
            *arg1 = 0
        case 6
            sub_62de70(sub_603500(*arg3))
            *arg1 = 0
        case 7
            void* edi_2 = *arg3
            int32_t eax_18 = sub_602ff0()
            int32_t eax_19 = sub_602ff0()
            int32_t* eax_20 = sub_603500(edi_2)
            sub_62df90(eax_20, eax_19, eax_20, eax_18)
            *arg1 = 0
        case 8
            *arg3
            char* eax_21 = sub_603290(&var_44)
            int32_t var_8_1 = 0
            void* edi_3 = *arg3
            int32_t eax_22 = sub_602ff0()
            int32_t* eax_23 = sub_603500(edi_3)
            sub_62e0f0(eax_23, eax_22, eax_23, eax_21)
            sub_403320(&var_44)
            *arg1 = 0
        case 9
            *arg3
            char* eax_24 = sub_603290(&var_44)
            int32_t var_8_2 = 1
            eax_26 = sub_62e220(sub_603500(*arg3), eax_24)
        label_62b726:
            *arg1 = 0xa
            arg1[1] = eax_26
            sub_403320(&var_44)
        case 0xa
            *arg3
            char* eax_27 = sub_603290(&var_44)
            int32_t var_8_3 = 2
            eax_26 = sub_62e2a0(sub_603500(*arg3), eax_27)
            goto label_62b726
        case 0xb
            *arg3
            char* eax_29 = sub_603290(&var_44)
            int32_t var_8_4 = 3
            bool cond:0_1 = sub_62e220(sub_603500(*arg3), eax_29) != 0xffffffff
            *arg1 = 0x2f
            int32_t eax_31
            eax_31.b = cond:0_1
            arg1[1] = zx.d(eax_31.b)
            sub_403320(&var_44)
        case 0xc
            *arg3
            char* esi_7 = sub_603290(&var_44)
            int32_t var_8_5 = 4
            int32_t* eax_34 = sub_603500(*arg3)
            int32_t eax_35 = *(esi_7 + 0x10)
            
            if (*(esi_7 + 0x14) u>= 0x10)
                esi_7 = *esi_7
            
            int32_t eax_38 = _strncmp((**eax_34)(esi_7, eax_35, eax_2))
            *arg1 = 0x2f
            eax_38.b = eax_38 == 0
            arg1[1] = zx.d(eax_38.b)
            sub_403320(&var_44)
        case 0xd
            *arg3
            char* eax_40 = sub_603290(&var_44)
            int32_t var_8_6 = 5
            eax_42 = sub_62e320(sub_603500(*arg3), eax_40)
        label_62b829:
            *arg1 = 0x2f
            int32_t ecx_49
            ecx_49.b = eax_42 != 0
            arg1[1] = ecx_49
            sub_403320(&var_44)
        case 0xe
            *arg3
            char* eax_43 = sub_603290(&var_44)
            int32_t var_8_7 = 6
            eax_42 = sub_62e370(sub_603500(*arg3), eax_43)
            goto label_62b829
        case 0xf
            *arg3
            char* eax_45 = sub_603290(&var_44)
            int32_t var_8_8 = 7
            void* edi_4 = *arg3
            int32_t* eax_46 = sub_603530(edi_4 + 0x10)
            int32_t* eax_47 = sub_603500(edi_4)
            eax_42 = sub_62e590(eax_47, eax_46, eax_47, eax_45)
            goto label_62b829
        case 0x10
            *arg3
            char* eax_48 = sub_603290(&var_44)
            int32_t var_8_9 = 8
            void* edi_5 = *arg3
            int32_t* eax_49 = sub_603530(edi_5 + 0x10)
            int32_t* eax_50 = sub_603500(edi_5)
            eax_42 = sub_62e960(eax_50, eax_49, eax_50, eax_48)
            goto label_62b829
        case 0x11
            *arg3
            char* eax_51 = sub_603290(&var_44)
            int32_t var_8_10 = 9
            eax_42 = sub_62ed30(sub_603500(*arg3), eax_51)
            goto label_62b829
        case 0x12
            *arg3
            char* eax_53 = sub_603290(&var_44)
            int32_t var_8_11 = 0xa
            void* edi_6 = *arg3
            int32_t* eax_54 = sub_603530(edi_6 + 0x10)
            int32_t* eax_55 = sub_603500(edi_6)
            eax_42 = sub_62ef60(eax_55, eax_54, eax_55, eax_53)
            goto label_62b829
        case 0x13
            *arg3
            char* eax_56 = sub_603290(&var_2c)
            int32_t var_8_12 = 0xb
            *arg3
            char* eax_57 = sub_603290(&var_5c)
            var_8_12.b = 0xc
            int32_t* eax_58 = sub_603500(*arg3)
            var_8_12.b = 0xd
            sub_601850(arg1, sub_62f2d0(eax_58, eax_58, &var_44, eax_57, eax_56))
            sub_403320(&var_44)
            sub_403320(&var_5c)
            sub_403320(&var_2c)
        case 0x14
            *arg3
            char* eax_60 = sub_603290(&var_44)
            int32_t var_8_13 = 0xe
            *arg3
            char* eax_61 = sub_603290(&var_5c)
            var_8_13.b = 0xf
            int32_t* eax_62 = sub_603500(*arg3)
            var_8_13.b = 0x10
            sub_601850(arg1, sub_62f450(eax_62, eax_62, &var_2c, eax_61, eax_60))
            sub_403320(&var_2c)
            sub_403320(&var_5c)
            sub_403320(&var_44)
        case 0x15
            void* esi_16 = *arg3
            int32_t eax_64 = sub_602ff0()
            int32_t* eax_65 = sub_603500(esi_16)
            int32_t var_8_14 = 0x11
            sub_601850(arg1, sub_62f740(eax_65, eax_65, &var_2c, eax_64))
            sub_403320(&var_2c)
        case 0x16
            void* edi_7 = *arg3
            int32_t eax_67 = sub_602ff0()
            int32_t eax_68 = sub_602ff0()
            int32_t* eax_69 = sub_603500(edi_7)
            int32_t var_8_15 = 0x12
            sub_601850(arg1, sub_62f770(eax_69, eax_69, &var_2c, eax_68, eax_67))
            sub_403320(&var_2c)
        case 0x17
            void* esi_17 = *arg3
            int32_t eax_71 = sub_602ff0()
            int32_t* eax_72 = sub_603500(esi_17)
            int32_t var_8_16 = 0x13
            sub_601850(arg1, sub_62f830(eax_72, eax_72, &var_2c, eax_71))
            sub_403320(&var_2c)
        case 0x18
            void* edi_8 = *arg3
            int32_t eax_74 = sub_602ff0()
            int32_t eax_75 = sub_602ff0()
            int32_t* eax_76 = sub_603500(edi_8)
            int32_t var_8_17 = 0x14
            sub_601850(arg1, sub_62f860(eax_76, eax_76, &var_2c, eax_75, eax_74))
            sub_403320(&var_2c)
        case 0x19
            void* esi_18 = *arg3
            int32_t eax_78 = sub_602ff0()
            int32_t* eax_79 = sub_603500(esi_18)
            int32_t var_8_18 = 0x15
            sub_601850(arg1, sub_62fa80(eax_79, eax_79, &var_2c, eax_78))
            sub_403320(&var_2c)
        case 0x1a
            void* edi_9 = *arg3
            int32_t eax_81 = sub_602ff0()
            int32_t eax_82 = sub_602ff0()
            int32_t* eax_83 = sub_603500(edi_9)
            int32_t var_8_19 = 0x16
            sub_601850(arg1, sub_62fab0(eax_83, eax_83, &var_2c, eax_82, eax_81))
            sub_403320(&var_2c)
        case 0x1b
            int32_t var_8_20 = 0x17
            sub_601850(arg1, sub_62fcd0(&var_2c, sub_603500(*arg3)))
            sub_403320(&var_2c)
        case 0x1c
            int32_t var_8_21 = 0x18
            sub_601850(arg1, sub_62ff40(&var_2c, sub_603500(*arg3)))
            sub_403320(&var_2c)
        case 0x1d
            int32_t var_8_22 = 0x19
            sub_601850(arg1, sub_6301b0(&var_2c, sub_603500(*arg3)))
            sub_403320(&var_2c)
        case 0x1e
            *arg3
            void** eax_91 = sub_603290(&var_5c)
            int32_t var_8_23 = 0x1a
            int32_t* eax_92 = sub_603500(*arg3)
            eax_93 = sub_630260(eax_92, eax_92, &var_2c, eax_91)
            var_8_23.b = 0x1b
        label_62bc49:
            sub_601850(arg1, eax_93)
            sub_403320(&var_2c)
            sub_403320(&var_5c)
        case 0x1f
            int32_t var_8_24 = 0x1c
            sub_601850(arg1, sub_630370(&var_2c, sub_603500(*arg3)))
            sub_403320(&var_2c)
        case 0x20
            *arg3
            void** eax_96 = sub_603290(&var_5c)
            int32_t var_8_25 = 0x1d
            int32_t* eax_97 = sub_603500(*arg3)
            eax_93 = sub_630420(eax_97, eax_97, &var_2c, eax_96)
            var_8_25.b = 0x1e
            goto label_62bc49
        case 0x21
            int32_t var_8_26 = 0x1f
            sub_601850(arg1, sub_630500(&var_2c, sub_603500(*arg3)))
            sub_403320(&var_2c)
        case 0x22
            *arg3
            char* eax_100 = sub_603290(&var_5c)
            int32_t var_8_27 = 0x20
            int32_t* eax_101 = sub_603500(*arg3)
            eax_93 = sub_6305b0(eax_101, eax_101, &var_2c, eax_100)
            var_8_27.b = 0x21
            goto label_62bc49
        case 0x23
            *arg3
            void var_74
            char* eax_102 = sub_603290(&var_74)
            int32_t var_8_28 = 0x22
            void* esi_20 = *arg3
            char eax_103 = sub_602ea0()
            int32_t* eax_104 = sub_603500(esi_20)
            var_8_28.b = 0x23
            void var_88
            sub_601890(arg1, sub_630680(eax_104, eax_104, &var_88, eax_102, eax_103))
            sub_417070(&var_88)
            sub_403320(&var_74)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
