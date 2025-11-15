// 函数: sub_42dc70
// 地址: 0x42dc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729ed8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void var_2c
char eax_5
char* ebx_2

if (arg2 u> 8)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            char* eax_4 = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            
            if (*(eax_4 + 0x14) u>= 0x10)
                eax_4 = *eax_4
            
            eax_5 = (*(*data_7fcb40 + 8))(eax_4)
        label_42dce5:
            *arg1 = 0x2f
            int32_t ecx_2
            ecx_2.b = eax_5 != 0
            arg1[1] = ecx_2
            sub_403320(&var_2c)
        case 1
            *arg3
            char* ebx_1 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            *arg3
            int32_t eax_7 = sub_602ff0()
            
            if (*(ebx_1 + 0x14) u>= 0x10)
                ebx_1 = *ebx_1
            
            eax_5 = (*(*data_7fcb40 + 0xc))(eax_7, ebx_1)
            goto label_42dce5
        case 2
            *arg3
            int32_t eax_12 = (*(*(*(*data_7fcb40 + 0x10))(sub_602ff0()) + 0x14))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_12
        case 3
            *arg3
            int32_t eax_13 = sub_602ff0()
            int32_t eax_14 = sub_602ff0()
            int32_t var_8_3 = 2
            sub_601850(arg1, sub_42df90(eax_14, eax_14, &var_2c, eax_13))
            sub_403320(&var_2c)
        case 4
            *arg3
            ebx_2 = sub_603290(&var_2c)
            int32_t var_8_4 = 3
        label_42ddb3:
            *arg3
            int32_t* eax_18 = (*(*data_7fcb40 + 0x10))(sub_602ff0())
            
            if (*(ebx_2 + 0x14) u>= 0x10)
                ebx_2 = *ebx_2
            
            int32_t eax_20 = (*(*eax_18 + 0x1c))(ebx_2)
            *arg1 = 0xa
            arg1[1] = eax_20
            sub_403320(&var_2c)
        case 5
            *arg3
            ebx_2 = sub_603290(&var_2c)
            int32_t var_8_5 = 4
            goto label_42ddb3
        case 6
            *arg3
            ebx_2 = sub_603290(&var_2c)
            int32_t var_8_6 = 5
            goto label_42ddb3
        case 7
            *arg3
            int32_t eax_25 = (*(*(*(*data_7fcb40 + 0x10))(sub_602ff0()) + 0x28))(eax_2)
            *arg1 = 0xa
            arg1[1] = eax_25
        case 8
            *arg3
            int32_t eax_26 = sub_602ff0()
            int32_t eax_27 = sub_602ff0()
            int32_t var_8_7 = 6
            void var_44
            sub_601850(arg1, sub_42e080(eax_27, eax_27, &var_44, eax_26))
            sub_403320(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
