// 函数: sub_476be0
// 地址: 0x476be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e1b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_80 = 0
void var_44
void var_2c
char eax_8
char eax_29
char eax_38

if (arg2 u> 0x14)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            int32_t eax_4 = sub_4773b0()
            *arg1 = 0xa
            arg1[1] = eax_4
        case 1
            *arg3
            sub_477590(sub_602ff0())
            *arg1 = 0
        case 2
            *arg3
            char* eax_6 = sub_603290(&var_44)
            int32_t var_8_1 = 0
            *arg3
            eax_8 = sub_4775e0(sub_602ff0(), eax_6)
        label_476c86:
            *arg1 = 0x2f
            int32_t ecx_8
            ecx_8.b = eax_8 != 0
            arg1[1] = ecx_8
            sub_403320(&var_44)
        case 3
            *arg3
            char* eax_9 = sub_603290(&var_44)
            int32_t var_8_2 = 1
            *arg3
            int32_t eax_10
            int32_t ecx_13
            eax_10, ecx_13 = sub_602ff0()
            
            if (eax_10 s< 0)
                ecx_13.b = 0
            else
                int32_t edx_2 = data_7fcc74
                
                if (eax_10 u>= (data_7fcc78 - edx_2) s>> 2)
                    ecx_13.b = 0
                else
                    ecx_13 = *(edx_2 + (eax_10 << 2))
                    
                    if (ecx_13 == 0)
                        ecx_13.b = 0
                    else
                        char eax_11
                        eax_11, ecx_13 = sub_465450(ecx_13 + 8, eax_9)
                        ecx_13.b = eax_11
            
            *arg1 = 0x2f
            int32_t eax_12
            eax_12.b = ecx_13.b != 0
            arg1[1] = eax_12
            sub_403320(&var_44)
        case 4
            *arg3
            char* eax_13 = sub_603290(&var_44)
            int32_t var_8_3 = 2
            *arg3
            eax_8 = sub_477650(sub_602ff0(), eax_13)
            goto label_476c86
        case 5
            int32_t* eax_15 = sub_603500(*arg3 + 0x10)
            int32_t eax_16 = sub_602ff0()
            
            if (eax_16 s< 0)
                *arg1 = 0x2f
                arg1[1] = 0
            else
                int32_t edx_5 = data_7fcc74
                
                if (eax_16 u>= (data_7fcc78 - edx_5) s>> 2)
                    *arg1 = 0x2f
                    arg1[1] = 0
                else
                    void* ecx_28 = *(edx_5 + (eax_16 << 2))
                    
                    if (ecx_28 == 0)
                        *arg1 = 0x2f
                        arg1[1] = 0
                    else
                        sub_46a930(ecx_28, eax_15)
                        *arg1 = 0x2f
                        arg1[1] = 1
        case 6
            *arg3
            char* eax_17 = sub_603290(&var_44)
            int32_t var_8_4 = 3
            *arg3
            int32_t eax_18 = sub_602ff0()
            int32_t edx_6
            
            if (eax_18 s>= 0)
                edx_6 = data_7fcc74
            
            if (eax_18 s< 0 || eax_18 u>= (data_7fcc78 - edx_6) s>> 2
                    || *(edx_6 + (eax_18 << 2)) == 0)
                *arg1 = 0x2f
                arg1[1] = 0
                sub_403320(&var_44)
            else
                char eax_19 = sub_46ac90(*(edx_6 + (eax_18 << 2)), eax_17)
                *arg1 = 0x2f
                int32_t eax_20
                eax_20.b = eax_19 != 0
                arg1[1] = eax_20
                sub_403320(&var_44)
        case 7
            *arg3
            char* eax_21 = sub_603290(&var_2c)
            int32_t var_8_5 = 4
            *arg3
            char* eax_22 = sub_603290(&var_44)
            var_8_5.b = 5
            *arg3
            int32_t eax_23
            int32_t ecx_44
            eax_23, ecx_44 = sub_602ff0()
            int32_t edx_7
            
            if (eax_23 s>= 0)
                edx_7 = data_7fcc74
            
            if (eax_23 s< 0 || eax_23 u>= (data_7fcc78 - edx_7) s>> 2
                    || *(edx_7 + (eax_23 << 2)) == 0)
                ecx_44.b = 0
            else
                char eax_24
                eax_24, ecx_44 = sub_46ae20(*(edx_7 + (eax_23 << 2)), eax_22, eax_21)
                ecx_44.b = eax_24
            
            *arg1 = 0x2f
            int32_t eax_25
            eax_25.b = ecx_44.b != 0
            arg1[1] = eax_25
            sub_403320(&var_44)
            sub_403320(&var_2c)
        case 8
            *arg3
            char* eax_26 = sub_603290(&var_2c)
            int32_t var_8_6 = 6
            *arg3
            char eax_27 = sub_602ea0()
            int32_t eax_28 = sub_602ff0()
            eax_29 = sub_4776c0(eax_28, eax_26, eax_28, eax_27)
        label_476ede:
            *arg1 = 0x2f
            int32_t ecx_55
            ecx_55.b = eax_29 != 0
            arg1[1] = ecx_55
            sub_403320(&var_2c)
        case 9
            *arg3
            char* eax_30 = sub_603290(&var_2c)
            int32_t var_8_7 = 7
            *arg3
            int32_t eax_31 = sub_602ff0()
            int32_t eax_32 = sub_602ff0()
            eax_29 = sub_477720(eax_32, eax_30, eax_32, eax_31)
            goto label_476ede
        case 0xa
            *arg3
            char* eax_33 = sub_603290(&var_2c)
            int32_t var_8_8 = 8
            *arg3
            int32_t xmm0_1 = sub_603140()
            eax_29 = sub_477770(sub_602ff0(), eax_33, xmm0_1)
            goto label_476ede
        case 0xb
            *arg3
            char* eax_35 = sub_603290(&var_44)
            int32_t var_8_9 = 9
            *arg3
            char* eax_36 = sub_603290(&var_2c)
            var_8_9.b = 0xa
            *arg3
            int32_t eax_37 = sub_602ff0()
            eax_38 = sub_4777d0(eax_37, eax_36, eax_37, eax_35)
        label_476fb3:
            int32_t ecx_74
            ecx_74.b = eax_38 != 0
            arg1[1] = ecx_74
        label_476fbc:
            *arg1 = 0x2f
            sub_403320(&var_2c)
            sub_403320(&var_44)
        case 0xc
            *arg3
            char* eax_39 = sub_603290(&var_2c)
            int32_t var_8_10 = 0xb
            *arg3
            int32_t eax_40 = sub_602ff0()
            int32_t eax_41 = sub_602ff0()
            eax_29 = sub_477820(eax_41, eax_39, eax_41, eax_40)
            goto label_476ede
        case 0xd
            *arg3
            char* eax_42 = sub_603290(&var_2c)
            int32_t var_8_11 = 0xc
            *arg3
            int32_t xmm0_2 = sub_603140()
            eax_29 = sub_477880(sub_602ff0(), eax_42, xmm0_2)
            goto label_476ede
        case 0xe
            *arg3
            char* eax_44 = sub_603290(&var_44)
            int32_t var_8_12 = 0xd
            *arg3
            char* eax_45 = sub_603290(&var_2c)
            var_8_12.b = 0xe
            *arg3
            int32_t eax_46 = sub_602ff0()
            eax_38 = sub_4778f0(eax_46, eax_45, eax_46, eax_44)
            goto label_476fb3
        case 0xf
            *arg3
            char* eax_47 = sub_603290(&var_44)
            int32_t var_8_13 = 0xf
            *arg3
            char* eax_48 = sub_603290(&var_2c)
            var_8_13.b = 0x10
            *arg3
            int32_t* var_78
            var_78.b = sub_602ea0()
            int32_t eax_50 = sub_602ff0()
            
            if (eax_50 s< 0)
                arg1[1] = 0
                goto label_476fbc
            
            int32_t edx_16 = data_7fcc74
            
            if (eax_50 u>= (data_7fcc78 - edx_16) s>> 2 || *(edx_16 + (eax_50 << 2)) == 0)
                arg1[1] = 0
                goto label_476fbc
            
            int32_t eax_52
            eax_52.b = sub_46af20(eax_48, eax_47, var_78.b) != 0
            arg1[1] = eax_52
            goto label_476fbc
        case 0x10
            *arg3
            char* eax_53 = sub_603290(&var_44)
            int32_t var_8_14 = 0x11
            *arg3
            char* eax_54 = sub_603290(&var_2c)
            var_8_14.b = 0x12
            *arg3
            int32_t eax_55 = sub_602ff0()
            eax_38 = sub_477950(eax_55, eax_54, eax_55, eax_53)
            goto label_476fb3
        case 0x11
            *arg3
            char* eax_56 = sub_603290(&var_44)
            int32_t var_8_15 = 0x13
            *arg3
            char* eax_57 = sub_603290(&var_2c)
            var_8_15.b = 0x14
            *arg3
            char eax_58 = sub_602ea0()
            int32_t eax_59 = sub_602ff0()
            
            if (eax_59 s< 0)
                arg1[1] = 0
                goto label_476fbc
            
            int32_t edx_18 = data_7fcc74
            
            if (eax_59 u>= (data_7fcc78 - edx_18) s>> 2 || *(edx_18 + (eax_59 << 2)) == 0)
                arg1[1] = 0
                goto label_476fbc
            
            int32_t eax_61
            eax_61.b = sub_46af90(eax_57, eax_56, eax_58) != 0
            arg1[1] = eax_61
            goto label_476fbc
        case 0x12
            *arg3
            char* eax_62 = sub_603290(&var_2c)
            int32_t var_8_16 = 0x15
            *arg3
            int32_t eax_63 = sub_602ff0()
            int32_t eax_64 = sub_602ff0()
            eax_29 = sub_4779b0(eax_64, eax_62, eax_64, eax_63)
            goto label_476ede
        case 0x13
            *arg3
            char* eax_65 = sub_603290(&var_2c)
            int32_t var_8_17 = 0x16
            *arg3
            int32_t var_7c_2 = sub_603140()
            eax_29 = sub_4779f0(sub_602ff0(), eax_65)
            goto label_476ede
        case 0x14
            *arg3
            void var_74
            char* eax_67 = sub_603290(&var_74)
            int32_t var_8_18 = 0x17
            *arg3
            void var_5c
            char* eax_68 = sub_603290(&var_5c)
            var_8_18.b = 0x18
            *arg3
            int32_t eax_69
            int32_t ecx_135
            eax_69, ecx_135 = sub_602ff0()
            int32_t edx_21
            
            if (eax_69 s>= 0)
                edx_21 = data_7fcc74
            
            if (eax_69 s< 0 || eax_69 u>= (data_7fcc78 - edx_21) s>> 2
                    || *(edx_21 + (eax_69 << 2)) == 0)
                ecx_135.b = 0
            else
                char eax_70
                eax_70, ecx_135 = sub_46b1c0(eax_68, eax_67)
                ecx_135.b = eax_70
            
            *arg1 = 0x2f
            int32_t eax_71
            eax_71.b = ecx_135.b != 0
            arg1[1] = eax_71
            sub_403320(&var_5c)
            sub_403320(&var_74)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
