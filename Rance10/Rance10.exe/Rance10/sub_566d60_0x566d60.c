// 函数: sub_566d60
// 地址: 0x566d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bf90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
void* eax_4 = sub_566780(arg1, arg3, arg4)

if (eax_4 == 0 || arg5 s< 0)
    *arg2 = 0
    arg2[1] = 0
else
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x4da637d, *(eax_4 + 8) - *(eax_4 + 4))
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg5 s>= (edx_2 u>> 0x1f) + edx_2)
        *arg2 = 0
        arg2[1] = 0
    else
        int32_t eax_9 = arg5 * 0x34c
        void* eax_10 = eax_9 + *(eax_4 + 4)
        
        if (eax_9 == neg.d(*(eax_4 + 4)) || *(eax_10 + 0x23c) == 0)
            *arg2 = 0
            arg2[1] = 0
        else
            void var_44
            char* eax_11 = sub_404f20(&var_44, eax_4 + 0x20)
            int32_t var_8_1 = 0
            void var_2c
            sub_417750(eax_11, eax_11, &var_2c, eax_10 + 0x22c)
            var_8_1.b = 2
            sub_403320(&var_44)
            int32_t var_68_2 = 1
            int32_t var_54
            int32_t* eax_12 = sub_5cc120(*(arg1 + 0x18), &var_54, &var_2c)
            *arg2 = 0
            arg2[1] = 0
            sub_5688b0(arg2, eax_12)
            sub_568430(&var_54)
            sub_403320(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
