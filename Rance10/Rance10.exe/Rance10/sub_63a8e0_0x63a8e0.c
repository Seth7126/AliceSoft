// 函数: sub_63a8e0
// 地址: 0x63a8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_3 = arg1
int32_t var_80 = 0
int32_t* result
void var_5c
void var_44
void var_2c
char eax_9
char eax_24
char* eax_30

if (arg2 u> 0x17)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            *arg3
            sub_603290(&var_44)
            int32_t var_8_1 = 0
            *arg3
            sub_603290(&var_5c)
            sub_603470(*arg3 + 0x20)
            *arg1 = 0x2f
            arg1[1] = 0
            sub_403320(&var_5c)
            sub_403320(&var_44)
            result = arg1
        case 1
            *arg3
            sub_603290(&var_5c)
            int32_t var_8_2 = 1
            *arg3
            sub_603290(&var_44)
            sub_403320(&var_44)
            sub_403320(&var_5c)
            *arg1 = 0
            result = arg1
        case 2
            sub_618250()
            *arg1 = 0
            result = arg1
        case 3
            *arg3
            sub_602ff0()
            void* esi_1 = data_7fcbb8
            int32_t* ecx_14 = *(esi_1 + 0x18)
            
            if (ecx_14 != 0)
                (**ecx_14)(eax_2)
            
            bool cond:1_1 = *(esi_1 + 0x1ec) != 0
            *(esi_1 + 0x1e8) = 0
            
            if (not(cond:1_1))
                *(esi_1 + 0x1ec) = 1
            
            *arg1 = 0
            result = arg1
        case 4
            sub_63af40(eax_2)
            *arg1 = 0
            result = arg1
        case 5
            char eax_5 = sub_63af90(eax_2)
            *arg1 = 0x2f
            int32_t ecx_15
            ecx_15.b = eax_5 != 0
            arg1[1] = ecx_15
            result = arg1
        case 6
            *arg3
            char* eax_6 = sub_603290(&var_5c)
            int32_t var_8_3 = 2
            *arg3
            var_8_3.b = 3
            eax_9 = sub_618310(sub_603290(&var_44), eax_6, sub_603530(*arg3 + 0x20))
        label_63aa6e:
            *arg1 = 0x2f
            int32_t ecx_22
            ecx_22.b = eax_9 != 0
            arg1[1] = ecx_22
            sub_403320(&var_44)
            sub_403320(&var_5c)
            result = arg1
        case 7
            *arg3
            char* eax_10 = sub_603290(&var_5c)
            int32_t var_8_4 = 4
            *arg3
            var_8_4.b = 5
            eax_9 = sub_6184b0(sub_603290(&var_44), eax_10, sub_603530(*arg3 + 0x20))
            goto label_63aa6e
        case 8
            *arg3
            char* eax_13 = sub_603290(&var_2c)
            int32_t var_8_5 = 6
            *arg3
            char* eax_14 = sub_603290(&var_5c)
            var_8_5.b = 7
            *arg3
            var_8_5.b = 8
            char eax_17 = sub_6186c0(sub_603290(&var_44), eax_14, eax_13, sub_603470(*arg3 + 0x30))
            int32_t* result_1 = result_3
            int32_t ecx_39
            ecx_39.b = eax_17 != 0
            result_1[1] = ecx_39
            *result_1 = 0x2f
            sub_403320(&var_44)
            sub_403320(&var_5c)
            sub_403320(&var_2c)
            result = result_1
        case 9
            *arg3
            char* eax_18 = sub_603290(&var_5c)
            int32_t var_8_6 = 9
            *arg3
            char* eax_19 = sub_603290(&var_44)
            var_8_6.b = 0xa
            *arg3
            char* eax_20 = sub_603290(&var_2c)
            var_8_6.b = 0xb
            int32_t* eax_21 = sub_603470(*arg3 + 0x30)
            char eax_22 = sub_63afb0(eax_21, eax_19, eax_20, eax_18, eax_21)
            int32_t* result_2 = result_3
            int32_t ecx_52
            ecx_52.b = eax_22 != 0
            result_2[1] = ecx_52
            *result_2 = 0x2f
            sub_403320(&var_2c)
            sub_403320(&var_44)
            sub_403320(&var_5c)
            result = result_2
        case 0xa
            *arg3
            char* eax_23 = sub_603290(&var_2c)
            int32_t var_8_7 = 0xc
            eax_24 = sub_6247b0(data_7fcbb8 + 0x1a8, eax_23)
        label_63ac03:
            *arg1 = 0x2f
            int32_t ecx_59
            ecx_59.b = eax_24 != 0
            arg1[1] = ecx_59
            sub_403320(&var_2c)
            result = arg1
        case 0xb
            *arg3
            char* eax_25 = sub_603290(&var_2c)
            int32_t var_8_8 = 0xd
            eax_24 = sub_624810(data_7fcbb8 + 0x1a8, eax_25)
            goto label_63ac03
        case 0xc
            *arg3
            char* eax_26 = sub_603290(&var_44)
            int32_t var_8_9 = 0xe
            *arg3
            char* eax_27 = sub_603290(&var_2c)
            var_8_9.b = 0xf
            char eax_28 = sub_624890(data_7fcbb8 + 0x1a8, eax_27, eax_26)
            *arg1 = 0x2f
            int32_t ecx_70
            ecx_70.b = eax_28 != 0
            arg1[1] = ecx_70
            sub_403320(&var_2c)
            sub_403320(&var_44)
            result = arg1
        case 0xd
            *arg3
            uint32_t dwMilliseconds = sub_602ff0()
            
            if (dwMilliseconds s< 0)
                *arg1 = 0
                result = arg1
            else
                Sleep(dwMilliseconds)
                *arg1 = 0
                result = arg1
        case 0xe
            *arg3
            int32_t var_8_10 = 0x10
            eax_30 = sub_63b030(&var_2c, sub_603290(&var_44))
            var_8_10.b = 0x11
        label_63ace9:
            sub_601850(arg1, eax_30)
            sub_403320(&var_2c)
            sub_403320(&var_44)
            result = arg1
        case 0xf
            *arg3
            int32_t var_8_11 = 0x12
            eax_30 = sub_63b090(&var_2c, sub_603290(&var_44))
            var_8_11.b = 0x13
            goto label_63ace9
        case 0x10
            *arg3
            int32_t var_8_12 = 0x14
            int32_t eax_34 = sub_6c54a0(sub_603290(&var_2c)) - 1
            *arg1 = 0xa
            int32_t eax_35 = neg.d(eax_34)
            arg1[1] = sbb.d(eax_35, eax_35, eax_34 != 0) + 1
            sub_403320(&var_2c)
            result = arg1
        case 0x11
            *arg3
            int32_t var_8_13 = 0x15
            eax_30 = sub_63b0e0(&var_2c, sub_603290(&var_44))
            var_8_13.b = 0x16
            goto label_63ace9
        case 0x12
            *arg3
            char* esi_7 = sub_603290(&var_2c)
            int32_t var_8_14 = 0x17
            int32_t* ecx_87 = data_7fcb88
            
            if (ecx_87 != 0)
                int32_t* eax_40 = (**ecx_87)(0x76da00)
                
                if (eax_40 != 0)
                    if (*(esi_7 + 0x14) u>= 0x10)
                        esi_7 = *esi_7
                    
                    (**eax_40)(esi_7)
            
            sub_403320(&var_2c)
            *arg1 = 0
            result = arg1
        case 0x13
            int32_t var_8_15 = 0x18
            sub_601850(arg1, sub_63b130(&var_2c))
            sub_403320(&var_2c)
            result = arg1
        case 0x14
            int32_t var_8_16 = 0x19
            sub_601850(arg1, sub_63b150(&var_2c))
            sub_403320(&var_2c)
            result = arg1
        case 0x15
            int32_t* ecx_96 = data_7fcb88
            int32_t* eax_45
            
            if (ecx_96 != 0)
                eax_45 = (**ecx_96)(0x76da10)
            
            if (ecx_96 == 0 || eax_45 == 0)
                *arg1 = 0xa
                arg1[1] = 0
            else
                int32_t eax_47 = (**eax_45)(eax_2)
                *arg1 = 0xa
                arg1[1] = eax_47
            
            result = arg1
        case 0x16
            *arg3
            int32_t var_8_17 = 0x1a
            sub_601850(arg1, sub_63b170(&var_2c, sub_602ff0()))
            sub_403320(&var_2c)
            result = arg1
        case 0x17
            *arg3
            void var_74
            char* eax_50 = sub_603290(&var_74)
            void* ecx_103 = data_7fcbb8
            int32_t esi_8 = *(ecx_103 + 0xdc)
            sub_60c2a0(ecx_103 + 0xd8, &result_3, eax_50)
            *arg1 = 0x2f
            int32_t eax_51
            eax_51.b = result_3 != esi_8
            arg1[1] = eax_51
            sub_403320(&var_74)
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
