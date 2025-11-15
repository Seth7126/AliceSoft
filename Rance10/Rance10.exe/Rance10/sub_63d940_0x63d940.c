// 函数: sub_63d940
// 地址: 0x63d940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745fe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void var_2c

if (arg2 u> 3)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            *arg3
            int32_t var_8_1 = 0
            bool eax_5 = sub_63dab0(sub_603290(&var_2c))
            *arg1 = 0x2f
            int32_t ecx_2
            ecx_2.b = eax_5 != 0
            arg1[1] = ecx_2
            sub_403320(&var_2c)
        case 1
            char eax_6 = sub_63db30()
            *arg1 = 0x2f
            int32_t ecx_4
            ecx_4.b = eax_6 != 0
            arg1[1] = ecx_4
        case 2
            *arg3
            char* eax_7 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            int32_t ecx_6
            
            if (data_7fcbc0 != 0)
                char* var_5c_3 = eax_7
                ecx_6.b = sub_63d770() != 0
            else
                ecx_6 = 0
            
            arg1[1] = ecx_6
            *arg1 = 0x2f
            sub_403320(&var_2c)
        case 3
            *arg3
            void var_44
            char* eax_9 = sub_603290(&var_44)
            int32_t var_8_3 = 2
            void* ecx_9 = data_7fcbb4
            int32_t* edx_1
            
            if (ecx_9 != 0)
                int32_t eax_11 = sub_6227b0(ecx_9, *(*arg3 + 0x18))
                int32_t edx_3 = neg.d(eax_11)
                edx_1 = sbb.d(edx_3, edx_3, eax_11 != 0) & (eax_11 + 0x20)
            else
                edx_1 = nullptr
            
            char eax_13 = sub_63db80(eax_9, edx_1)
            *arg1 = 0x2f
            int32_t ecx_11
            ecx_11.b = eax_13 != 0
            arg1[1] = ecx_11
            sub_403320(&var_44)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
