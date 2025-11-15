// 函数: sub_639cb0
// 地址: 0x639cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_745c40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_f8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_98 = 0
int32_t* result
char eax_5

if (arg2 u> 6)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            eax_5 = sub_639ec0(sub_603530(*arg3))
        label_639d1f:
            *arg1 = 0x2f
            int32_t ecx_3
            ecx_3.b = eax_5 != 0
            arg1[1] = ecx_3
            result = arg1
        case 1
            eax_5 = sub_63a060()
            goto label_639d1f
        case 2
            eax_5 = sub_63a0c0()
            goto label_639d1f
        case 3
            *arg3
            void var_50
            char* eax_6 = sub_603290(&var_50)
            int32_t var_84_1 = 0
            *arg3
            void var_38
            char* eax_7 = sub_603290(&var_38)
            var_84_1.b = 1
            *arg3
            void var_20
            char* eax_8 = sub_603290(&var_20)
            var_84_1.b = 3
            struct sys43vm::CGlobalSaver::VTable* var_e8
            int32_t* ebx
            ebx.b = sub_607570(sub_6070b0(&var_e8, data_7fcbb8 + 0x28), eax_8, eax_7, eax_6)
            sub_607160(&var_e8)
            int32_t ecx_15
            ecx_15.b = ebx.b != 0
            arg1[1] = ecx_15
            *arg1 = 0x2f
            sub_403320(&var_20)
            sub_403320(&var_38)
            sub_403320(&var_50)
            result = arg1
        case 4
            *arg3
            char* eax_11 = sub_603290(&var_80)
            int32_t var_84_2 = 4
            *arg3
            void var_68
            char* eax_12 = sub_603290(&var_68)
            var_84_2.b = 5
            int32_t* eax_13 = sub_603500(*arg3 + 0x20)
            char eax_14 = sub_63a120(eax_13, eax_11, eax_12, eax_13)
            *arg1 = 0x2f
            int32_t ecx_26
            ecx_26.b = eax_14 != 0
            arg1[1] = ecx_26
            sub_403320(&var_68)
            sub_403320(&var_80)
            result = arg1
        case 5
            int32_t eax_15 = sub_622070(data_7fcbb8 + 0x148)
            *arg1 = 0xa
            arg1[1] = eax_15
            result = arg1
        case 6
            int32_t eax_16 = sub_6220e0(data_7fcbb8 + 0x148)
            *arg1 = 0xa
            arg1[1] = eax_16
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return result
