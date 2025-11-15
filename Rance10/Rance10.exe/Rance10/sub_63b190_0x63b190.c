// 函数: sub_63b190
// 地址: 0x63b190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745eb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80 = 0
int32_t* result
void var_7c
int32_t var_6c_2
int32_t var_6c_3
int32_t var_68
int32_t var_5c
void var_44
void var_2c
int32_t* eax_3
char* eax_6
int32_t eax_8
char* eax_90
int32_t* ecx_57
int32_t* ecx_61
int32_t edi_7
int32_t edi_8

if (arg2 u> 0x42)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case nullptr
            void* esi_1 = data_7fcbbc
            
            if (sub_63c080(esi_1) != 0)
                int32_t eax_5 = (*(**(esi_1 + 0xc) + 4))(eax_2)
                *arg1 = 0xa
                arg1[1] = eax_5
                result = arg1
            else
            label_63b1f1:
                *arg1 = 0xa
                arg1[1] = 0
                result = arg1
        case 1
            eax_6 = sub_63cf00(&var_44)
            int32_t var_8_1 = 0
        label_63b227:
            sub_601850(arg1, eax_6)
            sub_403320(&var_44)
            result = arg1
        case 2
            void* esi_2 = data_7fcbbc
            
            if (sub_63c080(esi_2).b == 0)
            label_63b24a:
                eax_3.b = 0
                goto label_63b25a
            
            eax_8 = *(**(esi_2 + 0x2c) + 0x74)
        label_63b256:
            eax_3 = eax_8(eax_2)
            goto label_63b25a
        case 3
            void* esi_3 = data_7fcbbc
            
            if (sub_63c080(esi_3).b == 0)
                goto label_63b24a
            
            eax_8 = *(**(esi_3 + 0x2c) + 0x7c)
            goto label_63b256
        case 4
            void* esi_4 = data_7fcbbc
            
            if (sub_63c080(esi_4).b == 0)
                goto label_63b24a
            
            eax_8 = *(**(esi_4 + 0x2c) + 0x78)
            goto label_63b256
        case 5
            void* esi_5 = data_7fcbbc
            
            if (sub_63c080(esi_5).b == 0)
                goto label_63b24a
            
            eax_8 = *(**(esi_5 + 0x2c) + 0x3c)
            goto label_63b256
        case 6
            void* esi_6 = data_7fcbbc
            
            if (sub_63c080(esi_6).b == 0)
                goto label_63b24a
            
            eax_8 = *(**(esi_6 + 0x2c) + 0x44)
            goto label_63b256
        case 7
            int32_t eax_13 = sub_63cc60(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_13
            result = arg1
        case 8
            int32_t eax_14 = sub_63cc90(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_14
            result = arg1
        case 9
            int32_t eax_15 = sub_63ccc0(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_15
            result = arg1
        case 0xa
            int32_t eax_16 = sub_63ccf0(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_16
            result = arg1
        case 0xb
            *arg3
            int32_t xmm0_1 = sub_603140()
            void* esi_7 = data_7fcbbc
            
            if (esi_7 != 0 && sub_63c080(esi_7) != 0)
                int32_t* ecx_19 = *(esi_7 + 0x2c)
                int32_t* var_94_2 = ecx_19
                (*(*ecx_19 + 0x5c))(xmm0_1)
            
            *arg1 = 0
            result = arg1
        case 0xc
            long double x87_r0
            int32_t xmm0_3 = sub_63cd20(x87_r0)
            *arg1 = 0xb
            arg1[1] = xmm0_3
            result = arg1
        case 0xd
            *arg3
            int32_t eax_20 = sub_602ff0()
            int32_t eax_21 = sub_602ff0()
            void* esi_9 = data_7fcbbc
            
            if (esi_9 == 0)
                *arg1 = 0
                result = arg1
            else if (sub_63c080(esi_9) == 0)
                *arg1 = 0
                result = arg1
            else
                (*(**(esi_9 + 0x2c) + 0x58))(eax_21, eax_20)
                *arg1 = 0
                result = arg1
        case 0xe
            *arg3
            int32_t eax_24 = sub_602ff0()
            int32_t eax_25 = sub_602ff0()
            void* esi_11 = data_7fcbbc
            
            if (esi_11 == 0)
                *arg1 = 0
                result = arg1
            else if (sub_63c080(esi_11) == 0)
                *arg1 = 0
                result = arg1
            else
                (*(**(esi_11 + 0x2c) + 0x64))(eax_25, eax_24)
                *arg1 = 0
                result = arg1
        case 0xf
            void* esi_12 = data_7fcbbc
            
            if (esi_12 == 0)
                goto label_63b1f1
            
            if (sub_63c080(esi_12) == 0)
                goto label_63b1f1
            
            int32_t eax_30 = (*(**(esi_12 + 0x2c) + 0x68))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_30
            result = arg1
        case 0x10
            void* esi_13 = data_7fcbbc
            
            if (esi_13 == 0)
                goto label_63b1f1
            
            if (sub_63c080(esi_13) == 0)
                goto label_63b1f1
            
            int32_t eax_33 = (*(**(esi_13 + 0x2c) + 0x6c))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_33
            result = arg1
        case 0x11
            eax_3 = sub_603530(*arg3)
            
            if (data_7fcbbc == 0)
                goto label_63b24a
            
            eax_3 = sub_63c270(eax_3, 1)
            goto label_63b25a
        case 0x12
            void* esi_14 = *arg3
            int32_t eax_34 = sub_602ff0()
            eax_3 = sub_603530(esi_14)
            
            if (data_7fcbbc == 0)
                goto label_63b24a
            
            eax_3 = sub_63c270(eax_3, eax_34)
            goto label_63b25a
        case 0x13
            *arg3
            char eax_35 = sub_602ea0()
            void* esi_15 = data_7fcbbc
            int32_t* var_70
            var_70.b = eax_35
            
            if (esi_15 == 0)
                *arg1 = 0
                result = arg1
            else if (sub_63c080(esi_15) == 0)
                *arg1 = 0
                result = arg1
            else
                (*(**(esi_15 + 0x2c) + 0x80))(var_70)
                *arg1 = 0
                result = arg1
        case 0x14
            void* esi_16 = data_7fcbbc
            
            if (esi_16 == 0)
                goto label_63b24a
            
            if (sub_63c080(esi_16).b == 0)
                goto label_63b24a
            
            eax_8 = *(**(esi_16 + 0x2c) + 0x84)
            goto label_63b256
        case 0x15
            *arg3
            char* eax_39 = sub_603290(&var_44)
            int32_t var_8_2 = 1
            *arg3
            int32_t eax_40 = sub_602ff0()
            int32_t eax_41 = sub_602ff0()
            int32_t eax_42 = sub_602ff0()
            int32_t eax_43 = sub_602ff0()
            int32_t ecx_46
            ecx_46.b = sub_63ceb0(eax_43.b, eax_43, eax_39, eax_42, eax_41, eax_40) != 0
            arg1[1] = ecx_46
            *arg1 = 0x2f
            sub_403320(&var_44)
            result = arg1
        case 0x16
            *arg3
            int32_t eax_45 = sub_602ff0()
            void* esi_19 = data_7fcbbc
            
            if (sub_63c080(esi_19).b == 0)
                goto label_63b24a
            
            int32_t* ecx_50 = *(esi_19 + 0x14)
            
            if (ecx_50 == 0)
                goto label_63b24a
            
            eax_3 = (**ecx_50)(0, eax_45)
            goto label_63b25a
        case 0x17
            sub_63cf20()
            *arg1 = 0xa
            arg1[1] = 0
            result = arg1
        case 0x18
            *arg3
            int32_t eax_48 = sub_602ff0()
            void* esi_20 = data_7fcbbc
            
            if (sub_63c080(esi_20).b == 0)
                goto label_63b24a
            
            int32_t* ecx_53 = *(esi_20 + 0x14)
            
            if (ecx_53 == 0)
                goto label_63b24a
            
            eax_3 = (**ecx_53)(1, eax_48)
            goto label_63b25a
        case 0x19
            sub_63cf70()
            *arg1 = 0xa
            arg1[1] = 0
            result = arg1
        case 0x1a
            *arg3
            edi_7 = sub_602ff0()
            int32_t eax_52 = sub_602ff0()
            void* esi_22 = data_7fcbbc
            var_6c_2 = eax_52
            
            if (sub_63c080(esi_22).b == 0)
            label_63b65c:
                eax_3.b = 1
                goto label_63b25a
            
            ecx_57 = *(esi_22 + 0x20)
            
            if (ecx_57 == 0)
                goto label_63b24a
            
        label_63b676:
            eax_3 = (**ecx_57)(var_6c_2, edi_7)
            goto label_63b25a
        case 0x1b
            edi_8 = sub_603470(*arg3 + 0x10)
            int32_t eax_56 = sub_602ff0()
            void* esi_24 = data_7fcbbc
            var_6c_3 = eax_56
            
            if (sub_63c080(esi_24).b == 0)
                goto label_63b65c
            
            ecx_61 = *(esi_24 + 0x20)
            
            if (ecx_61 == 0)
                goto label_63b24a
            
        label_63b6b8:
            eax_3 = (*(*ecx_61 + 4))(var_6c_3, edi_8)
            goto label_63b25a
        case 0x1c
            *arg3
            edi_7 = sub_602ff0()
            int32_t eax_60 = sub_602ff0()
            void* esi_26 = data_7fcbbc
            var_6c_2 = eax_60
            
            if (sub_63c080(esi_26).b == 0)
                goto label_63b65c
            
            ecx_57 = *(esi_26 + 0x24)
            
            if (ecx_57 != 0)
                goto label_63b676
            
            eax_3.b = 0
            goto label_63b25a
        case 0x1d
            edi_8 = sub_603470(*arg3 + 0x10)
            int32_t eax_62 = sub_602ff0()
            void* esi_28 = data_7fcbbc
            var_6c_3 = eax_62
            
            if (sub_63c080(esi_28).b == 0)
                goto label_63b65c
            
            ecx_61 = *(esi_28 + 0x24)
            
            if (ecx_61 != 0)
                goto label_63b6b8
            
            eax_3.b = 0
            goto label_63b25a
        case 0x1e
            eax_6 = sub_63cfc0(&var_44)
            int32_t var_8_3 = 2
            goto label_63b227
        case 0x1f
            int32_t* esi_29 = *arg3
            int32_t* eax_63 = sub_603470(&esi_29[0xc])
            int32_t* eax_64 = sub_603470(&esi_29[8])
            int32_t* eax_65 = sub_603470(&esi_29[4])
            int32_t* eax_66 = sub_603470(esi_29)
            __time64(&var_7c)
            void* var_98_8 = &var_7c
            int32_t* var_9c_2 = &var_68
            sub_703d21()
            int32_t var_54
            *eax_66 = var_54 + 0x76c
            int32_t var_58
            *eax_65 = var_58 + 1
            *eax_64 = var_5c
            int32_t var_50
            *eax_63 = var_50
            result = arg1
            *arg1 = 0
        case 0x20
            int32_t* esi_32 = *arg3
            int32_t* eax_73 = sub_603470(&esi_32[8])
            int32_t* eax_74 = sub_603470(&esi_32[4])
            int32_t* eax_75 = sub_603470(esi_32)
            __time64(&var_7c)
            void* var_98_9 = &var_7c
            int32_t* var_9c_3 = &var_68
            sub_703d21()
            int32_t var_60
            *eax_75 = var_60
            int32_t var_64
            *eax_74 = var_64
            *eax_73 = var_68
            result = arg1
            *arg1 = 0
        case 0x21
            void* esi_35 = data_7fcbbc
            
            if (sub_63c080(esi_35).b == 0)
                goto label_63b65c
            
            eax_8 = *(**(esi_35 + 8) + 0x18)
            goto label_63b256
        case 0x22
            eax_6 = sub_63d230(&var_44)
            int32_t var_8_4 = 3
            goto label_63b227
        case 0x23
            *arg3
            char* esi_36 = sub_603290(&var_44)
            int32_t var_8_5 = 4
            
            if (*(esi_36 + 0x14) u>= 0x10)
                esi_36 = *esi_36
            
            void* edi_11 = data_7fcbbc
            char eax_81 = sub_63c080(edi_11)
            
            if (eax_81 != 0)
                eax_81 = (***(edi_11 + 0x34))(esi_36)
            
            *arg1 = 0x2f
            int32_t ecx_83
            ecx_83.b = eax_81 != 0
            arg1[1] = ecx_83
            sub_403320(&var_44)
            result = arg1
        case 0x24
            *arg3
            char* edi_12 = sub_603290(&var_2c)
            int32_t var_8_6 = 5
            *arg3
            char* esi_37 = sub_603290(&var_44)
            var_8_6.b = 6
            
            if (*(edi_12 + 0x14) u>= 0x10)
                edi_12 = *edi_12
            
            if (*(esi_37 + 0x14) u>= 0x10)
                esi_37 = *esi_37
            
            void* eax_86 = data_7fcbbc
            
            if (sub_63c080(eax_86) != 0)
                (*(**(eax_86 + 0x34) + 4))(esi_37, edi_12)
            
            sub_403320(&var_44)
            sub_403320(&var_2c)
            *arg1 = 0
            result = arg1
        case 0x25
            *arg3
            int32_t var_8_7 = 7
            eax_90 = sub_63d270(&var_2c, sub_603290(&var_44))
            var_8_7.b = 8
        label_63b930:
            sub_601850(arg1, eax_90)
            sub_403320(&var_2c)
            sub_403320(&var_44)
            result = arg1
        case 0x26
            void* esi_38 = data_7fcbbc
            
            if (sub_63c080(esi_38) == 0)
                goto label_63b1f1
            
            int32_t eax_93 = (*(**(esi_38 + 0x34) + 0xc))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_93
            result = arg1
        case 0x27
            *arg3
            int32_t var_8_8 = 9
            sub_601850(arg1, sub_63d300(&var_2c, sub_602ff0()))
            sub_403320(&var_2c)
            result = arg1
        case 0x28
            *arg3
            char* esi_39 = sub_603290(&var_2c)
            int32_t var_8_9 = 0xa
            
            if (*(esi_39 + 0x14) u>= 0x10)
                esi_39 = *esi_39
            
            void* edi_13 = data_7fcbbc
            
            if (sub_63c080(edi_13) != 0)
                (*(**(edi_13 + 0x34) + 0x14))(esi_39)
            
            sub_403320(&var_2c)
            *arg1 = 0
            result = arg1
        case 0x29
            *arg3
            char* esi_40 = sub_603290(&var_2c)
            int32_t var_8_10 = 0xb
            
            if (*(esi_40 + 0x14) u>= 0x10)
                esi_40 = *esi_40
            
            void* edi_14 = data_7fcbbc
            char eax_100 = sub_63c080(edi_14)
            
            if (eax_100 != 0)
                eax_100 = (*(**(edi_14 + 0x34) + 0x18))(esi_40)
            
            *arg1 = 0x2f
            int32_t ecx_111
            ecx_111.b = eax_100 != 0
            arg1[1] = ecx_111
            sub_403320(&var_2c)
            result = arg1
        case 0x2a
            *arg3
            char* edi_15 = sub_603290(&var_44)
            int32_t var_8_11 = 0xc
            *arg3
            char* esi_41 = sub_603290(&var_2c)
            var_8_11.b = 0xd
            
            if (*(edi_15 + 0x14) u>= 0x10)
                edi_15 = *edi_15
            
            if (*(esi_41 + 0x14) u>= 0x10)
                esi_41 = *esi_41
            
            void* eax_105 = data_7fcbbc
            
            if (sub_63c080(eax_105) != 0)
                (*(**(eax_105 + 0x34) + 0x1c))(esi_41, edi_15)
            
            sub_403320(&var_2c)
            sub_403320(&var_44)
            *arg1 = 0
            result = arg1
        case 0x2b
            *arg3
            int32_t var_8_12 = 0xe
            eax_90 = sub_63d390(&var_2c, sub_603290(&var_44))
            var_8_12.b = 0xf
            goto label_63b930
        case 0x2c
            void* esi_42 = data_7fcbbc
            
            if (sub_63c080(esi_42) == 0)
                goto label_63b1f1
            
            int32_t eax_111 = (*(**(esi_42 + 0x34) + 0x24))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_111
            result = arg1
        case 0x2d
            *arg3
            int32_t var_8_13 = 0x10
            sub_601850(arg1, sub_63d420(&var_2c, sub_602ff0()))
            sub_403320(&var_2c)
            result = arg1
        case 0x2e
            *arg3
            char* esi_43 = sub_603290(&var_2c)
            int32_t var_8_14 = 0x11
            
            if (*(esi_43 + 0x14) u>= 0x10)
                esi_43 = *esi_43
            
            void* edi_16 = data_7fcbbc
            
            if (sub_63c080(edi_16) != 0)
                (*(**(edi_16 + 0x34) + 0x2c))(esi_43)
            
            sub_403320(&var_2c)
            *arg1 = 0
            result = arg1
        case 0x2f
            *arg1 = 0xa
            arg1[1] = 0
            result = arg1
        case 0x30
            *arg3
            sub_602ff0()
            *arg1 = 0
            result = arg1
        case 0x31, 0x32
            *arg3
            sub_602ea0()
            *arg1 = 0
            result = arg1
        case 0x33
            sub_63c540()
            *arg1 = 0
            result = arg1
        case 0x34
            data_7fcbbc
            eax_3 = sub_63c5e0()
        label_63b25a:
            *arg1 = 0x2f
            int32_t ecx_8
            ecx_8.b = eax_3.b != 0
            arg1[1] = ecx_8
            result = arg1
        case 0x35
            void* esi_44 = data_7fcbbc
            char eax_117
            
            if (esi_44 != 0)
                eax_117 = sub_63c080(esi_44)
            
            if (esi_44 != 0 && eax_117 != 0)
                bool cond:0_1 = *(esi_44 + 0x3c) != 0
                *arg1 = 0x2f
                int32_t eax_118
                eax_118.b = cond:0_1
                arg1[1] = eax_118
            else
                *arg1 = 0x2f
                arg1[1] = 0
            
            result = arg1
        case 0x36
            eax_3 = sub_63cff0(sub_603470(*arg3))
            goto label_63b25a
        case 0x37
            eax_3 = sub_63d040(sub_603500(*arg3))
            goto label_63b25a
        case 0x38
            *arg3
            char eax_121 = sub_602ea0()
            void* esi_45 = data_7fcbbc
            
            if (esi_45 != 0 && sub_63c080(esi_45) != 0)
                *(esi_45 + 0x40) = eax_121
            
            *arg1 = 0
            result = arg1
        case 0x39
            eax_3 = sub_63d0f0()
            goto label_63b25a
        case 0x3a
            void* edi_17 = *arg3
            int32_t* eax_123 = sub_603500(edi_17 + 0x30)
            uint32_t* eax_124 = sub_603470(edi_17 + 0x20)
            int32_t* eax_125 = sub_603470(edi_17 + 0x10)
            int32_t* eax_126 = sub_603500(edi_17)
            sub_63d110(eax_126, eax_125, eax_126, eax_124, eax_123)
            *arg1 = 0
            result = arg1
        case 0x3b
            int32_t* esi_47 = *arg3
            int32_t* eax_127 = sub_603470(&esi_47[4])
            int32_t* eax_128 = sub_603470(esi_47)
            
            if (eax_128 == 0 || eax_127 == 0)
                *arg1 = 0
                result = arg1
            else
                sub_6cfdf0(eax_128, eax_127)
                *arg1 = 0
                result = arg1
        case 0x3c
            int32_t var_8_15 = 0x12
            sub_601850(arg1, sub_63d1f0(&var_2c))
            sub_403320(&var_2c)
            result = arg1
        case 0x3d
            int32_t var_8_16 = 0x13
            sub_601850(arg1, sub_63d210(&var_5c))
            sub_403320(&var_5c)
            result = arg1
        case 0x3e
            void* esi_48 = data_7fcbbc
            
            if (sub_63c080(esi_48) == 0)
                *arg1 = 0
                result = arg1
            else
                (***(esi_48 + 0x28))(1)
                *arg1 = 0
                result = arg1
        case 0x3f
            uint32_t eax_133 = sub_405e50()
            *arg1 = 0xa
            arg1[1] = eax_133
            result = arg1
        case 0x40
            int32_t* eax_134 = sub_63d4b0()
            *arg1 = 0xa
            arg1[1] = eax_134
            result = arg1
        case 0x41
            *arg3
            char eax_135
            int32_t ecx_160
            eax_135, ecx_160 = sub_602ea0()
            ecx_160.b = eax_135
            sub_63d4f0(ecx_160)
            *arg1 = 0
            result = arg1
        case 0x42
            eax_3 = sub_63d530()
            goto label_63b25a
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
