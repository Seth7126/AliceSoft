// 函数: sub_5625a0
// 地址: 0x5625a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72abf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void var_2c
struct passregister::CPassRegister::VTable** eax_9
struct _EXCEPTION_REGISTRATION_RECORD** eax_12

if (arg2 u> 7)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            char* eax_4 = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            *arg3
            int32_t var_5c_2 = sub_602ff0()
            struct passregister::CPassRegister::VTable** eax_6 = sub_562930(data_7fcba8)
            
            if (eax_6 != 0)
                if (&eax_6[2] != eax_4)
                    sub_403590(&eax_6[2], eax_4, 0, 0xffffffff)
                
                eax_6 = 1
            
            *arg1 = 0x2f
            arg1[1] = eax_6
            sub_403320(&var_2c)
        case 1
            *arg3
            int32_t eax_7 = sub_602ff0()
            int32_t var_5c_3 = sub_602ff0()
            eax_9 = sub_562930(data_7fcba8)
            
            if (eax_9 == 0)
                eax_9.b = 0
                goto label_562676
            
            int32_t var_5c_4 = eax_7
            eax_9 = sub_562cb0(eax_9)
            goto label_562676
        case 2
            *arg3
            int32_t* eax_10 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            *arg3
            int32_t var_5c_6 = sub_602ff0()
            eax_12 = sub_562930(data_7fcba8)
            
            if (eax_12 == 0)
                eax_12.b = 0
                goto label_5626c5
            
            eax_12 = sub_562d20(eax_12, eax_10)
        label_5626c5:
            *arg1 = 0x2f
            int32_t ecx_16
            ecx_16.b = eax_12.b != 0
            arg1[1] = ecx_16
            sub_403320(&var_2c)
        case 3
            *arg3
            int32_t eax_13 = sub_602ff0()
            int32_t var_5c_8 = sub_602ff0()
            eax_9 = sub_562930(data_7fcba8)
            
            if (eax_9 == 0)
                eax_9.b = 0
                goto label_562676
            
            int32_t var_5c_9 = eax_13
            eax_9 = sub_562da0(eax_9)
            goto label_562676
        case 4
            *arg3
            char* eax_15 = sub_603290(&var_2c)
            int32_t var_8_3 = 2
            *arg3
            int32_t var_5c_11 = sub_602ff0()
            eax_12 = sub_562930(data_7fcba8)
            
            if (eax_12 == 0)
                eax_12.b = 0
                goto label_5626c5
            
            eax_12 = sub_562e00(eax_12, eax_15)
            goto label_5626c5
        case 5
            *arg3
            int32_t var_5c_13 = sub_602ff0()
            eax_9 = sub_562930(data_7fcba8)
            
            if (eax_9 == 0)
                eax_9.b = 0
                goto label_562676
            
            eax_9 = sub_562e70(eax_9)
            goto label_562676
        case 6
            *arg3
            int32_t eax_18 = sub_602ff0()
            eax_9 = sub_563a20(sub_602ff0(), eax_18)
        label_562676:
            *arg1 = 0x2f
            int32_t ecx_10
            ecx_10.b = eax_9.b != 0
            arg1[1] = ecx_10
        case 7
            *arg3
            void var_44
            char* eax_20 = sub_603290(&var_44)
            int32_t var_8_4 = 3
            *arg3
            char eax_22 = sub_562a00(sub_602ff0(), eax_20)
            *arg1 = 0x2f
            int32_t ecx_36
            ecx_36.b = eax_22 != 0
            arg1[1] = ecx_36
            sub_403320(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
