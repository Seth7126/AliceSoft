// 函数: sub_432a00
// 地址: 0x432a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a5c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_9

if (arg2 u> 0xe)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            int32_t* esi_1 = data_7fcb44
            int32_t var_90_1 = sub_432f30(esi_1)
            sub_433aa0(esi_1)
            esi_1[3].b = 1
            *arg1 = 0
        case 1
            *arg3
            void var_44
            char* eax_4 = sub_603290(&var_44)
            int32_t var_8_1 = 0
            *arg3
            var_8_1.b = 1
            void var_2c
            sub_433390(sub_603290(&var_2c), eax_4)
            sub_403320(&var_2c)
            sub_403320(&var_44)
            *arg1 = 0
        case 2
            sub_433410()
            *arg1 = 0
        case 3
            sub_4334a0(data_7fcb44)
            *arg1 = 0
        case 4
            *arg3
            void var_74
            char* eax_6 = sub_603290(&var_74)
            int32_t var_8_2 = 2
            *arg3
            void var_5c
            char* eax_7 = sub_603290(&var_5c)
            var_8_2.b = 3
            int32_t* ecx_13 = data_7fcb44
            
            if (ecx_13[3].b != 0)
                void* esi_3 = *(*ecx_13 + 4)
                sub_424db0(esi_3 + 0x14, eax_7)
                sub_424db0(esi_3 + 0x20, eax_6)
            
            sub_403320(&var_5c)
            sub_403320(&var_74)
            *arg1 = 0
        case 5
            *arg3
            *(data_7fcb44 + 0xc) = sub_602ea0()
            *arg1 = 0
        case 6
            eax_9.b = data_7fcb44[3].b
        label_432b69:
            *arg1 = 0x2f
            int32_t ecx_21
            ecx_21.b = eax_9.b != 0
            arg1[1] = ecx_21
        case 7
            int32_t eax_10 = sub_432de0()
            *arg1 = 0xa
            arg1[1] = eax_10
        case 8
            *arg3
            int32_t eax_12 = sub_433330(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_12
        case 9
            *arg3
            int32_t eax_13 = sub_602ff0()
            sub_601850(arg1, sub_432e20(sub_602ff0(), eax_13))
        case 0xa
            *arg3
            int32_t eax_17 = sub_432e60(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_17
        case 0xb
            *arg3
            int32_t eax_18 = sub_602ff0()
            sub_601850(arg1, sub_432ea0(sub_602ff0(), eax_18))
        case 0xc
            *arg3
            int32_t eax_21 = sub_602ff0()
            sub_601850(arg1, sub_432ee0(sub_602ff0(), eax_21))
        case 0xd
            eax_9 = sub_433600(sub_603530(*arg3))
            goto label_432b69
        case 0xe
            int32_t var_90_14 = sub_603530(*arg3)
            eax_9 = TPI1::QueryTiForCVRecord()
            goto label_432b69
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
