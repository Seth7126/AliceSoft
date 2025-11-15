// 函数: sub_5fa210
// 地址: 0x5fa210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742170
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_84 = esi
int32_t edi
int32_t var_88 = edi
int32_t var_8c = eax_2
int32_t* esp = &var_8c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = arg2
float result_1 = arg3
void* var_98
void var_74
void var_2c
char* eax_5
float result

switch (arg5)
    case 0
        if (arg2 u> 0x1a)
            sub_403360(&var_2c, "CCallDLL::DynaCall() Couldn't receive number of args [%d]")
            int32_t var_8_1 = 0
            eax_5 = sub_409350(&var_7c, &var_2c, &var_74, &var_7c)
            esp = &var_8c
            var_8_1.b = 1
        label_5fa7a4:
            sub_6c52e0(eax_5)
            sub_403320(&var_74)
            sub_403320(&var_2c)
            result = 0f
        else
            switch (arg2)
                case 0
                    arg3()
                    result = 0f
                case 1
                    arg3(*arg4)
                    esp = &var_8c
                    result = 0f
                case 2
                    arg3(*arg4, arg4[1])
                    esp = &var_8c
                    result = 0f
                case 3
                    int32_t var_90_3 = arg4[2]
                    int32_t var_94_2 = arg4[1]
                    var_98 = *arg4
                    arg3(var_98, var_94_2, var_90_3)
                    esp = &(&var_8c)[3]
                    result = 0f
                case 4
                    int32_t var_90_4 = arg4[3]
                    int32_t var_94_3 = arg4[2]
                    var_98 = arg4[1]
                    arg3(*arg4, var_98, var_94_3, var_90_4)
                    esp = &var_8c
                    result = 0f
                case 5
                    int32_t var_90_5 = arg4[4]
                    int32_t var_94_4 = arg4[3]
                    var_98 = arg4[2]
                    arg3(*arg4, arg4[1], var_98, var_94_4, var_90_5)
                    esp = &var_8c
                    result = 0f
                case 6
                    int32_t var_90_6 = arg4[5]
                    int32_t var_94_5 = arg4[4]
                    var_98 = arg4[3]
                    arg3(*arg4, arg4[1], arg4[2], var_98, var_94_5, var_90_6)
                    esp = &var_8c
                    result = 0f
                case 7
                    int32_t var_90_7 = arg4[6]
                    int32_t var_94_6 = arg4[5]
                    var_98 = arg4[4]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], var_98, var_94_6, var_90_7)
                    esp = &var_8c
                    result = 0f
                case 8
                    int32_t var_90_8 = arg4[7]
                    int32_t var_94_7 = arg4[6]
                    var_98 = arg4[5]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], var_98, var_94_7, var_90_8)
                    esp = &var_8c
                    result = 0f
                case 9
                    int32_t var_90_9 = arg4[8]
                    int32_t var_94_8 = arg4[7]
                    var_98 = arg4[6]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], var_98, var_94_8, 
                        var_90_9)
                    esp = &var_8c
                    result = 0f
                case 0xa
                    int32_t var_90_10 = arg4[9]
                    int32_t var_94_9 = arg4[8]
                    var_98 = arg4[7]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], var_98, 
                        var_94_9, var_90_10)
                    esp = &var_8c
                    result = 0f
                case 0xb
                    int32_t var_90_11 = arg4[0xa]
                    int32_t var_94_10 = arg4[9]
                    var_98 = arg4[8]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        var_98, var_94_10, var_90_11)
                    esp = &var_8c
                    result = 0f
                case 0xc
                    int32_t var_90_12 = arg4[0xb]
                    int32_t var_94_11 = arg4[0xa]
                    var_98 = arg4[9]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], var_98, var_94_11, var_90_12)
                    esp = &var_8c
                    result = 0f
                case 0xd
                    int32_t var_90_13 = arg4[0xc]
                    int32_t var_94_12 = arg4[0xb]
                    var_98 = arg4[0xa]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], var_98, var_94_12, var_90_13)
                    esp = &var_8c
                    result = 0f
                case 0xe
                    int32_t var_90_14 = arg4[0xd]
                    int32_t var_94_13 = arg4[0xc]
                    var_98 = arg4[0xb]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], var_98, var_94_13, var_90_14)
                    esp = &var_8c
                    result = 0f
                case 0xf
                    int32_t var_90_15 = arg4[0xe]
                    int32_t var_94_14 = arg4[0xd]
                    var_98 = arg4[0xc]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], var_98, var_94_14, var_90_15)
                    esp = &var_8c
                    result = 0f
                case 0x10
                    int32_t var_90_16 = arg4[0xf]
                    int32_t var_94_15 = arg4[0xe]
                    var_98 = arg4[0xd]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], var_98, var_94_15, 
                        var_90_16)
                    esp = &var_8c
                    result = 0f
                case 0x11
                    int32_t var_90_17 = arg4[0x10]
                    int32_t var_94_16 = arg4[0xf]
                    var_98 = arg4[0xe]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], var_98, 
                        var_94_16, var_90_17)
                    esp = &var_8c
                    result = 0f
                case 0x12
                    int32_t var_90_18 = arg4[0x11]
                    int32_t var_94_17 = arg4[0x10]
                    var_98 = arg4[0xf]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        var_98, var_94_17, var_90_18)
                    esp = &var_8c
                    result = 0f
                case 0x13
                    int32_t var_90_19 = arg4[0x12]
                    int32_t var_94_18 = arg4[0x11]
                    var_98 = arg4[0x10]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], var_98, var_94_18, var_90_19)
                    esp = &var_8c
                    result = 0f
                case 0x14
                    int32_t var_90_20 = arg4[0x13]
                    int32_t var_94_19 = arg4[0x12]
                    var_98 = arg4[0x11]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], var_98, var_94_19, var_90_20)
                    esp = &var_8c
                    result = 0f
                case 0x15
                    int32_t var_90_21 = arg4[0x14]
                    int32_t var_94_20 = arg4[0x13]
                    var_98 = arg4[0x12]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], arg4[0x11], var_98, var_94_20, var_90_21)
                    esp = &var_8c
                    result = 0f
                case 0x16
                    int32_t var_90_22 = arg4[0x15]
                    int32_t var_94_21 = arg4[0x14]
                    var_98 = arg4[0x13]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], var_98, var_94_21, var_90_22)
                    esp = &var_8c
                    result = 0f
                case 0x17
                    int32_t var_90_23 = arg4[0x16]
                    int32_t var_94_22 = arg4[0x15]
                    var_98 = arg4[0x14]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], var_98, 
                        var_94_22, var_90_23)
                    esp = &var_8c
                    result = 0f
                case 0x18
                    int32_t var_90_24 = arg4[0x17]
                    int32_t var_94_23 = arg4[0x16]
                    var_98 = arg4[0x15]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                        var_98, var_94_23, var_90_24)
                    esp = &var_8c
                    result = 0f
                case 0x19
                    int32_t var_90_25 = arg4[0x18]
                    int32_t var_94_24 = arg4[0x17]
                    var_98 = arg4[0x16]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                        arg4[0x15], var_98, var_94_24, var_90_25)
                    esp = &var_8c
                    result = 0f
                case 0x1a
                    int32_t var_90_26 = arg4[0x19]
                    int32_t var_94_25 = arg4[0x18]
                    var_98 = arg4[0x17]
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                        arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                        arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                        arg4[0x15], arg4[0x16], var_98, var_94_25, var_90_26)
                    esp = &var_8c
                    result = 0f
    case 0xa, 0xc, 0x2f
        if (arg2 u> 0x1a)
            sub_403360(&var_2c, "CCallDLL::DynaCall() Couldn't receive number of args [%d]")
            int32_t var_8_2 = 2
            eax_5 = sub_409350(&var_7c, &var_2c, &var_74, &var_7c)
            esp = &var_8c
            var_8_2.b = 3
            goto label_5fa7a4
        
        switch (arg2)
            case 0
                result = arg3()
            case 1
                result = arg3(*arg4)
                esp = &var_8c
            case 2
                result = arg3(*arg4, arg4[1])
                esp = &var_8c
            case 3
                int32_t var_90_31 = arg4[2]
                int32_t var_94_27 = arg4[1]
                var_98 = *arg4
                result = arg3(var_98, var_94_27, var_90_31)
                esp = &var_8c
            case 4
                int32_t var_90_32 = arg4[3]
                int32_t var_94_28 = arg4[2]
                var_98 = arg4[1]
                result = arg3(*arg4, var_98, var_94_28, var_90_32)
                esp = &var_8c
            case 5
                int32_t var_90_33 = arg4[4]
                int32_t var_94_29 = arg4[3]
                var_98 = arg4[2]
                result = arg3(*arg4, arg4[1], var_98, var_94_29, var_90_33)
                esp = &var_8c
            case 6
                int32_t var_90_34 = arg4[5]
                int32_t var_94_30 = arg4[4]
                var_98 = arg4[3]
                result = arg3(*arg4, arg4[1], arg4[2], var_98, var_94_30, var_90_34)
                esp = &var_8c
            case 7
                int32_t var_90_35 = arg4[6]
                int32_t var_94_31 = arg4[5]
                var_98 = arg4[4]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], var_98, var_94_31, var_90_35)
                esp = &var_8c
            case 8
                int32_t var_90_36 = arg4[7]
                int32_t var_94_32 = arg4[6]
                var_98 = arg4[5]
                result =
                    arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], var_98, var_94_32, var_90_36)
                esp = &var_8c
            case 9
                int32_t var_90_37 = arg4[8]
                int32_t var_94_33 = arg4[7]
                var_98 = arg4[6]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], var_98, 
                    var_94_33, var_90_37)
                esp = &var_8c
            case 0xa
                int32_t var_90_38 = arg4[9]
                int32_t var_94_34 = arg4[8]
                var_98 = arg4[7]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], var_98, 
                    var_94_34, var_90_38)
                esp = &var_8c
            case 0xb
                int32_t var_90_39 = arg4[0xa]
                int32_t var_94_35 = arg4[9]
                var_98 = arg4[8]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    var_98, var_94_35, var_90_39)
                esp = &var_8c
            case 0xc
                int32_t var_90_40 = arg4[0xb]
                int32_t var_94_36 = arg4[0xa]
                var_98 = arg4[9]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], var_98, var_94_36, var_90_40)
                esp = &var_8c
            case 0xd
                int32_t var_90_41 = arg4[0xc]
                int32_t var_94_37 = arg4[0xb]
                var_98 = arg4[0xa]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], var_98, var_94_37, var_90_41)
                esp = &var_8c
            case 0xe
                int32_t var_90_42 = arg4[0xd]
                int32_t var_94_38 = arg4[0xc]
                var_98 = arg4[0xb]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], var_98, var_94_38, var_90_42)
                esp = &var_8c
            case 0xf
                int32_t var_90_43 = arg4[0xe]
                int32_t var_94_39 = arg4[0xd]
                var_98 = arg4[0xc]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], var_98, var_94_39, var_90_43)
                esp = &var_8c
            case 0x10
                int32_t var_90_44 = arg4[0xf]
                int32_t var_94_40 = arg4[0xe]
                var_98 = arg4[0xd]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], var_98, var_94_40, var_90_44)
                esp = &var_8c
            case 0x11
                int32_t var_90_45 = arg4[0x10]
                int32_t var_94_41 = arg4[0xf]
                var_98 = arg4[0xe]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], var_98, 
                    var_94_41, var_90_45)
                esp = &var_8c
            case 0x12
                int32_t var_90_46 = arg4[0x11]
                int32_t var_94_42 = arg4[0x10]
                var_98 = arg4[0xf]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    var_98, var_94_42, var_90_46)
                esp = &var_8c
            case 0x13
                int32_t var_90_47 = arg4[0x12]
                int32_t var_94_43 = arg4[0x11]
                var_98 = arg4[0x10]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], var_98, var_94_43, var_90_47)
                esp = &var_8c
            case 0x14
                int32_t var_90_48 = arg4[0x13]
                int32_t var_94_44 = arg4[0x12]
                var_98 = arg4[0x11]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], var_98, var_94_44, var_90_48)
                esp = &var_8c
            case 0x15
                int32_t var_90_49 = arg4[0x14]
                int32_t var_94_45 = arg4[0x13]
                var_98 = arg4[0x12]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], var_98, var_94_45, var_90_49)
                esp = &var_8c
            case 0x16
                int32_t var_90_50 = arg4[0x15]
                int32_t var_94_46 = arg4[0x14]
                var_98 = arg4[0x13]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], var_98, var_94_46, var_90_50)
                esp = &var_8c
            case 0x17
                int32_t var_90_51 = arg4[0x16]
                int32_t var_94_47 = arg4[0x15]
                var_98 = arg4[0x14]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], var_98, var_94_47, 
                    var_90_51)
                esp = &var_8c
            case 0x18
                int32_t var_90_52 = arg4[0x17]
                int32_t var_94_48 = arg4[0x16]
                var_98 = arg4[0x15]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], var_98, 
                    var_94_48, var_90_52)
                esp = &var_8c
            case 0x19
                int32_t var_90_53 = arg4[0x18]
                int32_t var_94_49 = arg4[0x17]
                var_98 = arg4[0x16]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                    arg4[0x15], var_98, var_94_49, var_90_53)
                esp = &var_8c
            case 0x1a
                int32_t var_90_54 = arg4[0x19]
                int32_t var_94_50 = arg4[0x18]
                var_98 = arg4[0x17]
                result = arg3(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                    arg4[0x15], arg4[0x16], var_98, var_94_50, var_90_54)
                esp = &var_8c
    case 0xb
        if (arg2 u> 0x1a)
            sub_403360(&var_2c, "CCallDLL::DynaCall() Couldn't receive number of args [%d]")
            int32_t var_8_3 = 4
            eax_5 = sub_409350(&var_7c, &var_2c, &var_74, &var_7c)
            esp = &var_8c
            var_8_3.b = 5
            goto label_5fa7a4
        
        long double x87_r0
        
        switch (arg2)
            case 0
                result_1()
                result_1 = fconvert.s(x87_r0)
                result = result_1
            case 1
                result_1(*arg4)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 2
                result_1(*arg4, arg4[1])
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 3
                int32_t var_90_59 = arg4[2]
                int32_t var_94_52 = arg4[1]
                var_98 = *arg4
                result_1(var_98, var_94_52, var_90_59)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 4
                int32_t var_90_60 = arg4[3]
                int32_t var_94_53 = arg4[2]
                var_98 = arg4[1]
                result_1(*arg4, var_98, var_94_53, var_90_60)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 5
                int32_t var_90_61 = arg4[4]
                int32_t var_94_54 = arg4[3]
                var_98 = arg4[2]
                result_1(*arg4, arg4[1], var_98, var_94_54, var_90_61)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 6
                int32_t var_90_62 = arg4[5]
                int32_t var_94_55 = arg4[4]
                var_98 = arg4[3]
                result_1(*arg4, arg4[1], arg4[2], var_98, var_94_55, var_90_62)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 7
                int32_t var_90_63 = arg4[6]
                int32_t var_94_56 = arg4[5]
                var_98 = arg4[4]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], var_98, var_94_56, var_90_63)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 8
                int32_t var_90_64 = arg4[7]
                int32_t var_94_57 = arg4[6]
                var_98 = arg4[5]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], var_98, var_94_57, var_90_64)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 9
                int32_t var_90_65 = arg4[8]
                int32_t var_94_58 = arg4[7]
                var_98 = arg4[6]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], var_98, var_94_58, 
                    var_90_65)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0xa
                int32_t var_90_66 = arg4[9]
                int32_t var_94_59 = arg4[8]
                var_98 = arg4[7]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], var_98, 
                    var_94_59, var_90_66)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0xb
                int32_t var_90_67 = arg4[0xa]
                int32_t var_94_60 = arg4[9]
                var_98 = arg4[8]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    var_98, var_94_60, var_90_67)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0xc
                int32_t var_90_68 = arg4[0xb]
                int32_t var_94_61 = arg4[0xa]
                var_98 = arg4[9]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], var_98, var_94_61, var_90_68)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0xd
                int32_t var_90_69 = arg4[0xc]
                int32_t var_94_62 = arg4[0xb]
                var_98 = arg4[0xa]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], var_98, var_94_62, var_90_69)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0xe
                int32_t var_90_70 = arg4[0xd]
                int32_t var_94_63 = arg4[0xc]
                var_98 = arg4[0xb]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], var_98, var_94_63, var_90_70)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0xf
                int32_t var_90_71 = arg4[0xe]
                int32_t var_94_64 = arg4[0xd]
                var_98 = arg4[0xc]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], var_98, var_94_64, var_90_71)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x10
                int32_t var_90_72 = arg4[0xf]
                int32_t var_94_65 = arg4[0xe]
                var_98 = arg4[0xd]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], var_98, var_94_65, var_90_72)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x11
                int32_t var_90_73 = arg4[0x10]
                int32_t var_94_66 = arg4[0xf]
                var_98 = arg4[0xe]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], var_98, 
                    var_94_66, var_90_73)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x12
                int32_t var_90_74 = arg4[0x11]
                int32_t var_94_67 = arg4[0x10]
                var_98 = arg4[0xf]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    var_98, var_94_67, var_90_74)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x13
                int32_t var_90_75 = arg4[0x12]
                int32_t var_94_68 = arg4[0x11]
                var_98 = arg4[0x10]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], var_98, var_94_68, var_90_75)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x14
                int32_t var_90_76 = arg4[0x13]
                int32_t var_94_69 = arg4[0x12]
                var_98 = arg4[0x11]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], var_98, var_94_69, var_90_76)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x15
                int32_t var_90_77 = arg4[0x14]
                int32_t var_94_70 = arg4[0x13]
                var_98 = arg4[0x12]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], var_98, var_94_70, var_90_77)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x16
                int32_t var_90_78 = arg4[0x15]
                int32_t var_94_71 = arg4[0x14]
                var_98 = arg4[0x13]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], var_98, var_94_71, var_90_78)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x17
                int32_t var_90_79 = arg4[0x16]
                int32_t var_94_72 = arg4[0x15]
                var_98 = arg4[0x14]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], var_98, var_94_72, 
                    var_90_79)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x18
                int32_t var_90_80 = arg4[0x17]
                int32_t var_94_73 = arg4[0x16]
                var_98 = arg4[0x15]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], var_98, 
                    var_94_73, var_90_80)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x19
                int32_t var_90_81 = arg4[0x18]
                int32_t var_94_74 = arg4[0x17]
                var_98 = arg4[0x16]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                    arg4[0x15], var_98, var_94_74, var_90_81)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
            case 0x1a
                int32_t var_90_82 = arg4[0x19]
                int32_t var_94_75 = arg4[0x18]
                var_98 = arg4[0x17]
                result_1(*arg4, arg4[1], arg4[2], arg4[3], arg4[4], arg4[5], arg4[6], arg4[7], 
                    arg4[8], arg4[9], arg4[0xa], arg4[0xb], arg4[0xc], arg4[0xd], arg4[0xe], 
                    arg4[0xf], arg4[0x10], arg4[0x11], arg4[0x12], arg4[0x13], arg4[0x14], 
                    arg4[0x15], arg4[0x16], var_98, var_94_75, var_90_82)
                result_1 = fconvert.s(x87_r0)
                result = result_1
                esp = &var_8c
    default
        void* var_90_85 = 0x3d
        char const* const var_94_76 =
            "CCallDLL::DynaCall() Couldn't receive result object type [%d]"
        result_1 = arg5
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        sub_403490(&var_44, var_94_76, var_90_85)
        int32_t var_8_4 = 6
        esp = &var_8c
        var_8_4.b = 7
        char var_5c
        sub_6c52e0(sub_409350(&result_1, &var_44, &var_5c, &result_1))
        int32_t var_48
        
        if (var_48 u>= 0x10)
            int32_t var_90_87 = 1
            var_98 = var_5c.d
            sub_403160(var_98, var_48 + 1, var_90_87)
            esp = &var_8c
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c = 0
        
        if (var_30_1 u< 0x10)
            result = 0f
        else
            int32_t var_90_88 = 1
            var_98 = var_44.d
            sub_403160(var_98, var_30_1 + 1, var_90_88)
            esp = &(&var_98)[3]
            result = 0f

fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
