// 函数: sub_423260
// 地址: 0x423260
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vevaluation_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_84 = 0
int32_t* result
void var_44
void var_2c
char eax_11
int32_t* eax_14
char eax_30

if (arg2 u> 0x15)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            *arg3
            int32_t var_8_1 = 0
            sub_423810(sub_603290(&var_44), sub_603530(*arg3 + 0x10))
            sub_403320(&var_44)
            *arg1 = 0
            result = arg1
        case 1
            *arg3
            char* eax_6 = sub_603290(&var_44)
            int32_t var_8_2 = 1
            void* esi_2 = data_7fcb3c
            sub_427910(esi_2 + 0x14)
            sub_403490(esi_2 + 0x64, 0x75cd33, nullptr)
            char eax_7 = sub_424130(eax_6)
            *arg1 = 0x2f
            int32_t ecx_8
            ecx_8.b = eax_7 != 0
            arg1[1] = ecx_8
            sub_403320(&var_44)
            result = arg1
        case 2
            *arg3
            char* eax_8 = sub_603290(&var_2c)
            int32_t var_8_3 = 2
            *arg3
            char* eax_9 = sub_603290(&var_44)
            var_8_3.b = 3
            void* esi_3 = data_7fcb3c
            sub_427910(esi_3 + 0x14)
            sub_403490(esi_3 + 0x64, 0x75cd33, nullptr)
            int32_t ecx_15
            ecx_15.b = sub_424430(eax_9, eax_8) != 0
            arg1[1] = ecx_15
            *arg1 = 0x2f
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result = arg1
        case 3
            void* esi_5 = data_7fcb3c
            sub_427910(esi_5 + 0x14)
            sub_403490(esi_5 + 0x64, 0x75cd33, nullptr)
            *arg1 = 0
            result = arg1
        case 4
            eax_11 = sub_4283d0(data_7fcb3c + 0x14)
        label_4233ea:
            *arg1 = 0x2f
            int32_t ecx_22
            ecx_22.b = eax_11 != 0
            arg1[1] = ecx_22
            result = arg1
        case 5
            void* eax_12 = data_7fcb3c
            int32_t ecx_25 = (*(eax_12 + 0x4c) - *(eax_12 + 0x48)) s>> 2
            *arg1 = 0xa
            arg1[1] = ecx_25
            result = arg1
        case 6
            *arg3
            eax_14 = sub_4238b0(&var_2c, sub_602ff0())
            int32_t var_8_4 = 4
        label_423434:
            sub_601850(arg1, eax_14)
            sub_403320(&var_2c)
            result = arg1
        case 7
            *arg3
            int32_t eax_15 = sub_602ff0()
            void* eax_16 = data_7fcb3c
            void* eax_17 = sub_4284c0(eax_16 + 0x14, eax_15)
            void* var_98_10 = sub_428510(eax_16 + 0x14, eax_15)
            sub_424950(eax_16 + 0x18, eax_17)
            result = arg1
            *arg1 = 0
        case 8
            *arg3
            int32_t eax_22 = sub_4238d0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_22
            result = arg1
        case 9
            *arg3
            eax_14 = sub_423920(&var_2c, sub_602ff0())
            int32_t var_8_5 = 5
            goto label_423434
        case 0xa
            *arg3
            sub_602ff0()
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0xb
            *arg3
            eax_14 = sub_423940(&var_2c, sub_602ff0())
            int32_t var_8_6 = 6
            goto label_423434
        case 0xc
            *arg3
            int32_t eax_26 = sub_424b70(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_26
            result = arg1
        case 0xd
            int32_t* ebx_3 = *arg3
            int32_t eax_27 = sub_602ff0()
            int32_t eax_28 = sub_602ff0()
            int32_t* eax_29 = sub_603470(ebx_3)
            eax_30 = sub_424fb0(data_7fcb3c, eax_29, eax_28, eax_27)
        label_423546:
            result = arg1
            int32_t ecx_45
            ecx_45.b = eax_30 != 0
            arg1[1] = ecx_45
            *arg1 = 0x2f
        case 0xe
            int32_t* ebx_4 = *arg3
            int32_t eax_31 = sub_602ff0()
            int32_t eax_32 = sub_602ff0()
            void** eax_33 = sub_6034c0(ebx_4)
            eax_30 = sub_4250a0(data_7fcb3c, eax_33, eax_32, eax_31)
            goto label_423546
        case 0xf
            int32_t* ebx_5 = *arg3
            int32_t eax_34 = sub_602ff0()
            int32_t eax_35 = sub_602ff0()
            int32_t* eax_36 = sub_603470(ebx_5)
            void* ecx_53 = data_7fcb3c
            char var_75 = 0
            
            if (sub_425190(ecx_53, &var_75, eax_35, eax_34) != 0)
                int32_t eax_38
                eax_38.b = var_75 != 0
                *eax_36 = eax_38
                arg1[1] = 1
                result = arg1
                *arg1 = 0x2f
            else
                arg1[1] = 0
                result = arg1
                *arg1 = 0x2f
        case 0x10
            void* edi_7 = *arg3
            int32_t eax_39 = sub_602ff0()
            int32_t eax_40 = sub_602ff0()
            int32_t* eax_41 = sub_603500(edi_7)
            eax_11 = sub_423970(eax_41, eax_40, eax_41, eax_39)
            goto label_4233ea
        case 0x11
            *arg3
            eax_14 = sub_423a20(&var_2c, sub_602ff0())
            int32_t var_8_7 = 7
            goto label_423434
        case 0x12
            *arg3
            eax_14 = sub_423a40(&var_2c, sub_602ff0())
            int32_t var_8_8 = 8
            goto label_423434
        case 0x13
            *arg3
            int32_t eax_44 = sub_602ff0()
            int32_t eax_45 = sub_428760(data_7fcb3c + 0x14, eax_44)
            *arg1 = 0xa
            arg1[1] = eax_45
            result = arg1
        case 0x14
            *arg3
            int32_t eax_46 = sub_602ff0()
            eax_11 = sub_4287c0(data_7fcb3c + 0x14, eax_46)
            goto label_4233ea
        case 0x15
            *arg3
            int32_t var_8_9 = 9
            var_8_9.b = 0xa
            void var_74
            void var_5c
            sub_601850(arg1, sub_423a60(&var_5c, sub_603290(&var_74)))
            sub_403320(&var_5c)
            sub_403320(&var_74)
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
