// 函数: sub_452670
// 地址: 0x452670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b3b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0
void var_44
void var_2c
void** eax_5
int32_t* eax_10
char eax_11

if (arg2 u> 8)
    sub_602420(arg1)
else
    switch (arg2)
        case nullptr
            void* eax_3
            
            if (data_7fcb54 != 0)
                eax_3 = sub_452ae0()
            else
                eax_3.b = 0
            
            *arg1 = 0x2f
            int32_t ecx
            ecx.b = eax_3.b != 0
            arg1[1] = ecx
        case 1
            *arg3
            int32_t* eax_4 = sub_603290(&var_44)
            int32_t var_8_1 = 0
            *arg3
            eax_5 = sub_602ff0()
            
            if (data_7fcb54 == 0)
                eax_5.b = 0
                goto label_452716
            
            eax_5 = sub_453300(eax_4, eax_5)
        label_452716:
            *arg1 = 0x2f
            int32_t ecx_4
            ecx_4.b = eax_5.b != 0
            arg1[1] = ecx_4
            sub_403320(&var_44)
        case 2
            *arg3
            char* eax_6 = sub_603290(&var_44)
            int32_t var_8_2 = 1
            *arg3
            int32_t xmm0_1
            eax_5, xmm0_1 = sub_603140()
            
            if (data_7fcb54 == 0)
                eax_5.b = 0
                goto label_452716
            
            eax_5 = sub_453380(xmm0_1, eax_6)
            goto label_452716
        case 3
            *arg3
            char* eax_7 = sub_603290(&var_2c)
            int32_t var_8_3 = 2
            *arg3
            int32_t* eax_8 = sub_603290(&var_44)
            var_8_3.b = 3
            
            if (data_7fcb54 != 0)
                eax_8 = sub_453400(eax_8, eax_7)
            else
                eax_8.b = 0
            
            *arg1 = 0x2f
            int32_t ecx_12
            ecx_12.b = eax_8.b != 0
            arg1[1] = ecx_12
            sub_403320(&var_44)
            sub_403320(&var_2c)
        case 4
            *arg3
            char* eax_9 = sub_603290(&var_2c)
            int32_t var_8_4 = 4
            *arg3
            eax_10 = sub_602ea0()
            
            if (data_7fcb54 != 0)
                eax_11 = sub_453480(eax_9, eax_10.b)
                goto label_452816
            
        label_4527ee:
            *arg1 = 0x2f
            arg1[1] = 0
            sub_403320(&var_2c)
        case 5
            *arg3
            int32_t* eax_12 = sub_603290(&var_2c)
            eax_10 = sub_603470(*arg3 + 0x10)
            
            if (data_7fcb54 == 0)
                goto label_4527ee
            
            eax_11 = sub_453500(eax_12, eax_10)
            goto label_452816
        case 6
            *arg3
            char* eax_13 = sub_603290(&var_2c)
            eax_10 = sub_6034c0(*arg3 + 0x10)
            
            if (data_7fcb54 == 0)
                goto label_4527ee
            
            eax_11 = sub_453560(eax_13, eax_10)
            goto label_452816
        case 7
            *arg3
            int32_t var_8_5 = 5
            eax_11 = sub_454470(sub_603290(&var_2c), sub_603500(*arg3 + 0x10))
        label_452816:
            *arg1 = 0x2f
            int32_t ecx_19
            ecx_19.b = eax_11 != 0
            arg1[1] = ecx_19
            sub_403320(&var_2c)
        case 8
            *arg3
            void var_5c
            char* eax_16 = sub_603290(&var_5c)
            char* eax_17 = sub_603430(*arg3 + 0x10)
            
            if (data_7fcb54 != 0)
                char eax_18 = sub_453620(eax_16, eax_17)
                *arg1 = 0x2f
                int32_t ecx_35
                ecx_35.b = eax_18 != 0
                arg1[1] = ecx_35
                sub_403320(&var_5c)
            else
                *arg1 = 0x2f
                arg1[1] = 0
                sub_403320(&var_5c)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
