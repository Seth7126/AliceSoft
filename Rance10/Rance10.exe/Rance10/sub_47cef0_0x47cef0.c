// 函数: sub_47cef0
// 地址: 0x47cef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e5e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
char eax_9

if (arg2 u> 9)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            void var_2c
            char* eax_4 = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            
            if (*(eax_4 + 0x14) u>= 0x10)
                eax_4 = *eax_4
            
            char eax_5 = sub_47bf90(eax_4)
            *arg1 = 0x2f
            int32_t ecx_2
            ecx_2.b = eax_5 != 0
            arg1[1] = ecx_2
            sub_403320(&var_2c)
        case 1
            *arg3
            void var_5c
            char* eax_6 = sub_603290(&var_5c)
            int32_t var_8_2 = 1
            *arg3
            void var_44
            char* eax_7 = sub_603290(&var_44)
            var_8_2.b = 2
            
            if (*(eax_7 + 0x14) u>= 0x10)
                eax_7 = *eax_7
            
            char eax_8 = sub_47c040(eax_7, eax_6)
            *arg1 = 0x2f
            int32_t ecx_7
            ecx_7.b = eax_8 != 0
            arg1[1] = ecx_7
            sub_403320(&var_44)
            sub_403320(&var_5c)
        case 2
            eax_9 = sub_47d110()
        label_47cfd9:
            *arg1 = 0x2f
            int32_t ecx_10
            ecx_10.b = eax_9 != 0
            arg1[1] = ecx_10
        case 3
            sub_47c0f0(data_7fcb60)
            *arg1 = 0
        case 4
            void* eax_10 = data_7fcb60
            int32_t ecx_13 = *(eax_10 + 0x48) - *(eax_10 + 0x44)
            *arg1 = 0xa
            arg1[1] = ecx_13
        case 5
            eax_9 = sub_47c8c0(sub_603500(*arg3))
            goto label_47cfd9
        case 6
            eax_9 = sub_47d140(sub_603500(*arg3))
            goto label_47cfd9
        case 7
            eax_9 = sub_47d240(sub_603500(*arg3))
            goto label_47cfd9
        case 8
            eax_9 = sub_47d340(sub_603500(*arg3))
            goto label_47cfd9
        case 9
            eax_9 = sub_47d430(sub_603500(*arg3))
            goto label_47cfd9
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
